-- 1
-- select all title that contain the word 'stories'
SELECT title FROM books WHERE title LIKE '%stories%';


-- 2 
-- get the longes books, i.e. the book with the highest number of pages
SELECT title, pages FROM books ORDER BY pages DESC LIMIT 1;


-- 3
-- print summary
-- summary contains title-year in descending order of year
SELECT CONCAT(title, ' - ', released_year) AS 'summary' FROM books ORDER BY released_year DESC LIMIT 3;

-- 4
-- find all books where author_lname contains a ' '
SELECT title, author_lname FROM books WHERE author_lname LIKE '% %';


-- 5
-- find 3 books with lowest stock quantity
SELECT title, released_year, stock_quantity FROM books ORDER BY stock_quantity LIMIT 3;



-- 6
-- print title, author_lname sorted first by author_lname and then by title
SELECT title, author_lname FROM books ORDER BY author_lname, title;



-- 7
-- sort alphabetically by last name
SELECT UPPER(CONCAT('my favourite author is ', author_fname, ' ', author_lname, '!')) AS yell
FROM books ORDER BY author_lname;

