# Online Examination System

A simple C++ project for conducting timed MCQ examinations using file handling and auto-grading

---

## Features
- Loads questions automatically from a text file  
- Random question order for every attempt  
- 60-second exam timer  
- Multiple-choice interface  
- Automatic grading  
- Stores student results in `results.txt`  
- Easy to add or modify questions  
- Lightweight console-based program

---

## Project Structure
```
Online-Examination-System/
│
├── exam.cpp          # Main source code
├── questions.txt     # MCQ question bank
└── results.txt       # Stores exam results
```

---

## How to Add Questions
Add questions to the file `questions.txt` using the following format:

```
1) What is the size of int in C++?
A) 6 bytes
B) 2 bytes
C) 4 bytes
D) 8 bytes
ANSWER: C
```

Add as many questions as required.

---

## Compilation and Execution

### Windows
```
g++ exam.cpp -o exam
exam
```

### Linux / Mac
```
g++ exam.cpp -o exam
./exam
```

---

## Sample Output
```
Enter Name: Rahul Kumar
Enter Roll Number: 22A91A0508

1) Who developed C++?
A) Dennis Ritchie
B) James Gosling
C) Bjarne Stroustrup
D) Guido van Rossum
Your answer: C

Exam Finished!
Score: 3/3
```

Entry added in `results.txt`:
```
Rahul Kumar | 22A91A0508 | Score: 3/3
```

---

## Technologies Used
- C++  
- File Handling  
- Randomization  
- Chrono Library (Timer)

---

## Future Enhancements
- Graphical User Interface  
- User login system  
- Multiple subjects  
- PDF scorecard  
- Database integration  
- Admin panel for managing questions

---

## Author
K. Srivardhan  
Roll No: AP24122230029  
Smart Tech Club – Project Showcase (November 2025)
