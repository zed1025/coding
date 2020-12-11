CREATE DATABASE insta_clone;
USE insta_clone;

-- creating the various tables for instagram clone
-- the users table
CREATE TABLE users(
    id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(100) UNIQUE NOT NULL,
    created_at TIMESTAMP DEFAULT NOW()
);
-- creating the photos table
CREATE TABLE photos (
    id INT AUTO_INCREMENT PRIMARY KEY,
    image_url VARCHAR(255) NOT NULL,
    user_id INT NOT NULL, 
    created_at TIMESTAMP DEFAULT NOW(),
    FOREIGN KEY(user_id) REFERENCES users(id)
);
-- table for comments
CREATE TABLE comments (
    id INT AUTO_INCREMENT PRIMARY KEY, 
    comment_text VARCHAR(255) NOT NULL,
    user_id INT NOT NULL,
    photo_id INT NOT NULL, 
    created_at TIMESTAMP DEFAULT NOW(),
    FOREIGN KEY(user_id) REFERENCES users(id),
    FOREIGN KEY(photo_id) REFERENCES photos(id)
);
-- likes table
-- ww have to ensure that there is only one like per user for a photo.
-- to do this, we use the user_id and photo_id as the primary key 
CREATE TABLE likes (
    user_id INT NOT NULL,
    photo_id INT NOT NULL, 
    created_at TIMESTAMP DEFAULT NOW(),
    FOREIGN KEY(photo_id) REFERENCES photos(id),
    FOREIGN KEY(user_id) REFERENCES users(id),
    PRIMARY KEY(user_id, photo_id)
);
-- mapping the relationship of following somone on instagram
-- we use the follows table
CREATE TABLE follows (
    follower_id INT NOT NULL,
    followee_id INT NOT NULL,
    created_at TIMESTAMP DEFAULT NOW(),
    FOREIGN KEY(followee_id) REFERENCES users(id),
    FOREIGN KEY(follower_id) REFERENCES users(id),
    PRIMARY KEY(followee_id, follower_id)
);
-- storing hash tags, we use two tables to store hashtags
CREATE TABLE tags (
  id INTEGER AUTO_INCREMENT PRIMARY KEY,
  tag_name VARCHAR(255) UNIQUE,
  created_at TIMESTAMP DEFAULT NOW()
);
CREATE TABLE photo_tags (
    photo_id INTEGER NOT NULL,
    tag_id INTEGER NOT NULL,
    FOREIGN KEY(photo_id) REFERENCES photos(id),
    FOREIGN KEY(tag_id) REFERENCES tags(id),
    PRIMARY KEY(photo_id, tag_id)
);

-- insert data into the tables using the ig_clone_data.sql file
-- run the entire file

-- 1
-- we want to reward our users who have been around the longest
-- find the 5 oldest users
SELECT username, created_at AS 'date_joined' FROM users ORDER BY created_at LIMIT 5;


-- 2
-- What day of the week do most users register on? 
-- We need to figure out when to schedule an ad campaign
SELECT 
    DAYNAME(created_at) AS day,
    COUNT(*) AS 'no_of_registrations'
FROM users
GROUP BY day
ORDER BY no_of_registrations DESC
LIMIT 1;


-- 3
-- we want to target our inactive users with an email campaign.
-- Find the users who have never posted a photo.
SELECT username
FROM users
LEFT JOIN photos
    ON users.id = photos.user_id
WHERE photos.user_id IS NULL;
-- we could do the same using right join using
SELECT username
FROM photos
RIGHT JOIN users
    ON users.id = photos.user_id
WHERE photos.user_id IS NULL;




-- 4
-- we are running a new contest to see who can get the most likes on a single photo
-- WHO WON?
-- So essentially we have to fing the user who has the maximum likes on a single photo
SELECT 
    username, 
    photos.id, 
    photos.image_url,
    COUNT(*) AS total
FROM photos
JOIN likes
    ON likes.photo_id = photos.id
JOIN users
    ON photos.user_id = users.id
GROUP BY photos.id
ORDER BY total DESC
LIMIT 1;




-- 5
-- Our investers want to know ...
-- How many times does the average user post?
-- HINT: here we have to find the total number of photos divided by total number of users
SELECT (SELECT COUNT(*) FROM photos)/(SELECT COUNT(*) FROM users) AS 'avg_post_per_user';




-- 6
-- A brand wants to know which hashtags to use in a post
-- What are the top 5 most commonly used hashtags
SELECT 
    tags.id,
    tag_name,
    COUNT(*) AS total
FROM tags
JOIN photo_tags
    ON tags.id = photo_tags.tag_id
GROUP BY tags.id
ORDER BY total DESC
LIMIT 6;


-- 7
-- We have a small problem with bots on our site...
-- Find users who have liked every single photo on the site
SELECT
    username, 
    user_id,
    COUNT(*) AS 'num_likes'
FROM users
JOIN likes
    ON users.id = likes.user_id
GROUP BY users.id
HAVING num_likes = (SELECT COUNT(*) FROM photos);