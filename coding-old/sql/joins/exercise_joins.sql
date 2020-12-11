-- schema used for this exercise
-- Students(id PK, first_name)
-- Papers(title, grade, student_id FK Students.id)

-- observations
-- This is an example of 1-Many relationship.
-- A student can appear for multiple papers. However a paper can only be written by one student


-- 1
-- create tables using the schema above
CREATE TABLE students(
	id INT AUTO_INCREMENT PRIMARY KEY,
	first_name VARCHAR(100)
);

CREATE TABLE papers(
	title VARCHAR(100), 
	grade INT,
	student_id INT,
	FOREIGN KEY(student_id) REFERENCES students(id)
		ON DELETE CASCADE
);

-- inserting starting data into the tables
INSERT INTO students (first_name) VALUES 
('Caleb'), 
('Samantha'), 
('Raj'), 
('Carlos'), 
('Lisa');

INSERT INTO papers (student_id, title, grade ) VALUES
(1, 'My First Book Report', 60),
(1, 'My Second Book Report', 75),
(2, 'Russian Lit Through The Ages', 94),
(2, 'De Montaigne and The Art of The Essay', 98),
(4, 'Borges and Magical Realism', 89);



-- 2
-- print first_name, title, grade
SELECT first_name, title, grade 
FROM students
INNER JOIN papers
	ON students.id = papers.student_id
ORDER BY grade DESC;


-- 3
-- perform a LEFT JOIN on students
SELECT first_name, title, grade 
FROM students
LEFT JOIN papers
	ON students.id = papers.student_id;



-- 4
-- for the left join in the pervious example. replace null with MISSING and 0
SELECT 
	IFNULL(first_name, 'NO FIRST NAME') AS 'first_name', 
	IFNULL(title, 'MISSING') AS 'title', 
	IFNULL(grade, 0) AS 'grade'
FROM students
LEFT JOIN papers
	ON students.id = papers.student_id;



-- 5
-- find the average grade for each student
SELECT 
	IFNULL(first_name, 'NAME MISSING'), 
	IFNULL(AVG(grade), '0') AS 'average'
FROM students
LEFT JOIN papers
	ON students.id = papers.student_id
GROUP BY first_name
ORDER BY average DESC;



-- 6
-- for the above example, add a column called passing_status
-- where if avg(grade) > 75 print PASSING else FAILING
SELECT 
	IFNULL(first_name, 'NAME MISSING'), 
	IFNULL(AVG(grade), '0') AS 'average',
	CASE
		WHEN AVG(grade) IS NULL THEN 'FAILING'
		WHEN AVG(grade) >= 75 THEN 'PASSING'
		ELSE 'FAILING'
	END AS 'passing_status'
FROM students
LEFT JOIN papers
	ON students.id = papers.student_id
GROUP BY first_name
ORDER BY average DESC;