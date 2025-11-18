# Online Examination System

A structured C++ console-based application designed to conduct multiple-choice examinations with automatic grading, file handling, and a timer. This project demonstrates core programming concepts including classes, file I/O, randomization, and time-based operations.

---

## Overview

The system presents a set of MCQs to the user, records responses, calculates the final score, and stores the results. The questions are loaded from an external file, allowing easy modification without altering the source code.

---

## Features

- Loads questions from a text file  
- Randomized question order  
- One-minute exam timer  
- Automatic evaluation and scoring  
- Saves results to `results.txt`  
- Simple and clear terminal interface  
- Extendable structure for additional features

---

## File Structure

```
Online-Examination-System/
│
├── exam.cpp          // Core application logic
├── questions.txt     // Question bank
└── results.txt       // Automatically generated student results
```

---

## Question File Format

Each question in `questions.txt` follows the pattern below:

```
1) What is the size of int in C++?
A) 6 bytes
B) 2 bytes
C) 4 bytes
D) 8 bytes
ANSWER: C
```

Questions can be added or removed as needed.

---

## Compilation and Execution

### Windows
```
g++ exam.cpp -o exam
exam
```

### Linux / macOS
```
g++ exam.cpp -o exam
./exam
```

---

## Example Run

```
Enter Name: K. Srivardhan
Enter Roll Number: AP24122230029

1) Who developed C++?
A) Dennis Ritchie
B) James Gosling
C) Bjarne Stroustrup
D) Guido van Rossum
Your answer: C

Exam Completed
Score: 3/3
```

Entry stored in `results.txt`:
```
Suresh| AP24122230018 | Score: 3/3
```

---

## Technologies Used

- C++  
- File Handling  
- Random Number Generation  
- Chrono Library (Timer)  
- Basic OOP

---



## Author

K. Srivardhan  
Roll No: AP24122230029  
G.suresh
Roll No:AP24122230018
A.yagna
Roll No:AP24110011625
Smart Tech Club – Project 
