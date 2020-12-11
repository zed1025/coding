-- Suppose our table has columns author_lname and author_fname
-- we want to display all distinct authors
-- However there are authors with different first names but same last name

-- method1
SELECT DISTINCT CONCAT(author_fname, ' ',author_lname) FROM books;

-- method2
SELECT DISTINCT author_fname, author_lname FROM books;