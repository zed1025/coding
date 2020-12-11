-- 1
-- Evaluate the following
SELECT 10 != 10;
SELECT 15 > 14 && 99 - 5 <= 94;
SELECT 1 IN (5, 3) || 9 BETWEEN 8 AND 10; 


-- 2
-- Select all books written before 1980(non inclusive)
SELECT title, released_year FROM books WHERE released_year < 1980;


-- 3
-- select all books written by Eggers or Chabon
SELECT * FROM books WHERE author_lname IN ('Eggers', 'Chabon');



-- 4 
-- Select all books written by lahiri, published after 2000
SELECT title, author_lname, released_year FROM books
WHERE author_lname = 'Lahiri' AND released_year > 2000;


-- 5
-- select all books with page counts between 100 and 200
SELECT title, pages FROM books
WHERE pages BETWEEN 100 AND 200;



-- 6
-- select all books where author_lname starts with a 'C' or an 'S'
SELECT title, author_lname FROM books
WHERE author_lname LIKE 'C%' || author_lname LIKE 'S%';
-- OR
SELECT title, author_lname FROM books
WHERE SUBSTR(author_lname, 1, 1) IN ('C', 'S');


-- 7
-- if title contains 'stories' -> Short Stories
-- Just a kid and A heartbreaking Work -> Memoir
-- everything else -> Novel
SELECT title, author_lname, 
CASE
	WHEN title LIKE '%stories%' THEN 'Short Stories'
	WHEN title = 'just kids' || title = 'A heartbreaking Work of staggering genius' THEN 'Memoir'
	ELSE 'Novel'
END AS 'TYPE'
FROM books;



-- 8
SELECT title, author_lname, 
CASE
	WHEN COUNT(*)  > 1 THEN CONCAT(COUNT(*), ' books')
	ELSE CONCAT(COUNT(*), ' book')
END AS 'COUNT'
FROM books GROUP BY author_lname, author_fname;





