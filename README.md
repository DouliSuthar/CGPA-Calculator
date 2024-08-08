-- SGPA & CGPA Calculator
A C++ console application to calculate Semester Grade Point Average (SGPA) and Cumulative Grade Point Average (CGPA) based on grades and credit hours.

-- Features
SGPA Calculation: Compute SGPA for a semester by inputting grades and credits.
CGPA Calculation: Calculate CGPA across multiple semesters.
Grade Mapping: Supports a 10-point grading scale (e.g., A++, A+, B).
Usage

-- Compilation
bash
g++ -o sgpa_cgpa_calculator main.cpp
./sgpa_cgpa_calculator

-- Run the Application
Calculate SGPA: Enter number of subjects, credits, and grades.
Calculate CGPA: Enter SGPA and total credits for each semester.

-- Grade to Point Mapping
Grade	Points
A++	        10.0
A+	        9.0
A	          8.5
B+	        8.0
B	          7.5
C+	        7.0
C	          6.5
D+	        6.0
D	          5.5
E+	        5.0
E	          4.0
F	          0.0

-- Example
SGPA Calculation: Credits = [3, 4, 2], Grades = [A++, B+, A], SGPA = 9.11
CGPA Calculation: Sem 1: SGPA = 9.11, Credits = 9; Sem 2: SGPA = 8.5, Credits = 8, CGPA = 8.82

-- License
This project is licensed under the MIT License.

-- Contributions
Contributions are welcome! Fork the repo, make changes, and submit a pull request.

