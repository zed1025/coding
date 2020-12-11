-- Exmaples of many to many relationships
-- 	Books <-> Author
-- 	Blog Poat <-> Tags
-- 	Students  <-> Classes

-- In this section we will work with 3 tables, which form a database for TV reviewing application
-- The following are the schemas
reviewers(id PK, first_name, last_name)
series(id PK, title, released_year, genre)
reviews(id PK, rating, series_id, reviewer_id)

-- creating the tables
CREATE TABLE reviewers(
	id INT AUTO_INCREMENT PRIMARY KEY, 
	first_name VARCHAR(100),
	last_name VARCHAR(100)
);
CREATE TABLE series(
	id INT AUTO_INCREMENT PRIMARY KEY,
	title VARCHAR(100),
	released_year YEAR(4),
	genre VARCHAR(100)
);
CREATE TABLE reviews(
	id INT AUTO_INCREMENT PRIMARY KEY,
	rating DECIMAL(2, 1),
	series_id INT,
	reviewer_id INT,
	FOREIGN KEY(series_id) REFERENCES series(id),
	FOREIGN KEY(reviewer_id) REFERENCES reviewers(id)
);


-- NOTE: Renaming tables in MySQL
RENAME TABLE reviewer TO reviewers;


-- starting data for the three tables
INSERT INTO series (title, released_year, genre) VALUES
    ('Archer', 2009, 'Animation'),
    ('Arrested Development', 2003, 'Comedy'),
    ("Bob's Burgers", 2011, 'Animation'),
    ('Bojack Horseman', 2014, 'Animation'),
    ("Breaking Bad", 2008, 'Drama'),
    ('Curb Your Enthusiasm', 2000, 'Comedy'),
    ("Fargo", 2014, 'Drama'),
    ('Freaks and Geeks', 1999, 'Comedy'),
    ('General Hospital', 1963, 'Drama'),
    ('Halt and Catch Fire', 2014, 'Drama'),
    ('Malcolm In The Middle', 2000, 'Comedy'),
    ('Pushing Daisies', 2007, 'Comedy'),
    ('Seinfeld', 1989, 'Comedy'),
    ('Stranger Things', 2016, 'Drama');

INSERT INTO reviewers (first_name, last_name) VALUES
    ('Thomas', 'Stoneman'),
    ('Wyatt', 'Skaggs'),
    ('Kimbra', 'Masters'),
    ('Domingo', 'Cortes'),
    ('Colt', 'Steele'),
    ('Pinkie', 'Petit'),
    ('Marlon', 'Crafford');
    
INSERT INTO reviews(series_id, reviewer_id, rating) VALUES
    (1,1,8.0),(1,2,7.5),(1,3,8.5),(1,4,7.7),(1,5,8.9),
    (2,1,8.1),(2,4,6.0),(2,3,8.0),(2,6,8.4),(2,5,9.9),
    (3,1,7.0),(3,6,7.5),(3,4,8.0),(3,3,7.1),(3,5,8.0),
    (4,1,7.5),(4,3,7.8),(4,4,8.3),(4,2,7.6),(4,5,8.5),
    (5,1,9.5),(5,3,9.0),(5,4,9.1),(5,2,9.3),(5,5,9.9),
    (6,2,6.5),(6,3,7.8),(6,4,8.8),(6,2,8.4),(6,5,9.1),
    (7,2,9.1),(7,5,9.7),
    (8,4,8.5),(8,2,7.8),(8,6,8.8),(8,5,9.3),
    (9,2,5.5),(9,3,6.8),(9,4,5.8),(9,6,4.3),(9,5,4.5),
    (10,5,9.9),
    (13,3,8.0),(13,4,7.2),
    (14,2,8.5),(14,3,8.9),(14,4,8.9);


-- 1 
-- get the title and rating for each series for each review
SELECT title, rating
FROM series
INNER JOIN reviews
	ON series.id = reviews.series_id;


-- 2 
-- get series title and average rating for each series
SELECT 
	title, 
	AVG(rating) AS 'average_rating'
FROM series
INNER JOIN reviews
	ON series.id = reviews.series_id
GROUP BY title
ORDER BY average_rating;
-- Although the query above is okay but what if there is remake of some series by the same name. So we have to group them using the series.id
SELECT 
	title, 
	AVG(rating) AS 'average_rating'
FROM series
INNER JOIN reviews
	ON series.id = reviews.series_id
GROUP BY series.id
ORDER BY average_rating;



-- 3
-- print the first_name, last_name and rating of each reviewer
SELECT first_name, last_name, rating
FROM reviewers
JOIN reviews
	ON reviewers.id = reviews.reviewer_id;



-- 4
-- print the unreviewed series from the tables
-- IDEA: we have to use LEFT JOIN here
SELECT * 
FROM series
LEFT JOIN reviews
	ON series.id = reviews.series_id;
-- refining
SELECT title, rating
FROM series
LEFT JOIN reviews
	ON series.id = reviews.series_id;
-- further refining
SELECT title AS 'unreviewed_series'
FROM series
LEFT JOIN reviews
	ON series.id = reviews.series_id
WHERE rating IS NULL;
-- NOTE we use IS instaed of = to compare NULL.




-- 5
-- print the genre and average rating for each genre
SELECT 
	genre,
	ROUND(AVG(rating), 2) AS 'avg_rating'
FROM series
INNER JOIN reviews
	ON series.id = reviews.series_id
GROUP BY genre
ORDER BY avg_rating;
-- ROUND() is used to round average_rating to 2 decimal places



-- 6
-- print the following: first_name, last_name, COUNT i.e the number of reviews, MIN i.e. the minimum review given by this person, MAX i.e the maximum review given by this person, AVG i.e the avg rating given by this person ,STATUS which is INACTIVE if AVG is 0.0
SELECT 
	first_name,
	last_name,
	COUNT(rating) AS 'COUNT',
	MIN(rating) AS 'MIN',
	MAX(rating) AS 'MAX',
	AVG(rating) AS 'AVG',
	CASE
		WHEN COUNT(rating) = 0 THEN 'INACTIVE'
		ELSE 'ACTIVE'
	END AS 'STATUS'
FROM reviewers
INNER JOIN reviews
	ON reviewers.id = reviews.reviewer_id
GROUP BY reviewers.id;
-- But this doesnt give us the rows for people who do have any rating
-- so we have to use LEFT JOIN
SELECT 
	first_name,
	last_name,
	COUNT(rating) AS 'COUNT',
	IFNULL(MIN(rating), 0) AS 'MIN',
	IFNULL(MAX(rating), 0) AS 'MAX',
	ROUND(IFNULL(AVG(rating), 0), 2) AS 'AVG',
	CASE
		WHEN COUNT(rating) = 0 THEN 'INACTIVE'
		ELSE 'ACTIVE'
	END AS 'STATUS'
FROM reviewers
LEFT JOIN reviews
	ON reviewers.id = reviews.reviewer_id
GROUP BY reviewers.id;
-- using IF instead of CASE
SELECT 
	first_name,
	last_name,
	COUNT(rating) AS 'COUNT',
	IFNULL(MIN(rating), 0) AS 'MIN',
	IFNULL(MAX(rating), 0) AS 'MAX',
	ROUND(IFNULL(AVG(rating), 0), 2) AS 'AVG',
	IF(COUNT(rating) >= 1, 'ACTIVE', 'INACTIVE') AS 'STATUS'
FROM reviewers
LEFT JOIN reviews
	ON reviewers.id = reviews.reviewer_id
GROUP BY reviewers.id;
-- use if for simple logical operations
-- we can also add a 'power user' using the following
SELECT first_name, 
       last_name, 
       Count(rating)                    AS COUNT, 
       Ifnull(Min(rating), 0)           AS MIN, 
       Ifnull(Max(rating), 0)           AS MAX, 
       Round(Ifnull(Avg(rating), 0), 2) AS AVG, 
       CASE 
         WHEN Count(rating) >= 10 THEN 'POWER USER' 
         WHEN Count(rating) > 0 THEN 'ACTIVE' 
         ELSE 'INACTIVE' 
       end                              AS STATUS 
FROM   reviewers 
       LEFT JOIN reviews 
              ON reviewers.id = reviews.reviewer_id 
GROUP  BY reviewers.id; 






-- 7
-- print the title, rating and reviewer
SELECT 
	title,
	rating,
	CONCAT(first_name, ' ', last_name) AS 'reviewer'
FROM reviewers
INNER JOIN reviews
	ON reviewers.id = reviews.reviewer_id
INNER JOIN series
	ON series.id = reviews.series_id
ORDER BY title;
-- this is an example of joining 3 tables




