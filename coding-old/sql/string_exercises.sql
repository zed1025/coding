-- 1
-- reverse and upper case the following sentence
-- "Why does my cat look at me with such hatred?"
SELECT REVERSE(UPPER("Why does my cat look at me with such hatred?"));


-- 2
-- replace space in 'title' with ->
SELECT REPLACE(title, ' ', '->') AS 'title' from books;

 
-- 3
-- print the first_name is normal order and first_name in reverse order
SELECT author_fname AS 'forward', REVERSE(author_fname) AS 'backwards' from books;



-- 4 
-- print full author's name in capital letters
SELECT CONCAT(UPPER(author_fname), ' ', UPPER(author_lname)) AS 'full name is caps' from books;


-- 5
-- print the following
-- "Movie Title" + "was released in " + data
SELECT CONCAT(title, ' was released in ', released_year) as 'blurb' from books;


-- 6
-- print books title and the length of each title
SELECT title, CHAR_LENGTH(title) as 'character count' from books;


-- 7
SELECT 
CONCAT(SUBSTRING(title, 1, 10), '...') AS 'short title', 
CONCAT(author_lname, ',',author_fname) AS 'author',
CONCAT(stock_quantity, ' in stock') AS 'quantity'
FROM books;