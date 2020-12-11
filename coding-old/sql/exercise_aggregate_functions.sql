-- 1 
-- Print the number of books in the database. 
SELECT COUNT(*) FROM books;


-- 2
-- Print how many books were released each year
SELECT released_year, COUNT(*) 
FROM books
GROUP BY released_year;



-- 3
-- Print out the total number of books in stock
SELECT SUM(stock_quantity) FROM books;


-- 4
-- Find the average released year for each author
SELECT author_fname, author_lname, AVG(released_year)
FROM books
GROUP BY author_lname, author_fname;



-- 5 
-- Find the full name of the author who wrote the longest book
SELECT CONCAT(author_fname, ' ', author_lname) FROM books 
ORDER BY pages DESC LIMIT 1;
-- OR
SELECT CONCAT(author_fname, ' ', author_lname) FROM books
WHERE pages = (SELECT MAX(pages) FROM books);


-- 6
-- Print (year, number of books released in that year, avg page count)
SELECT released_year, COUNT(*), AVG(pages) FROM books
GROUP By released_year; 