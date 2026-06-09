# 🎓 Student Grading System in C

A simple console-based Student Grading System developed using the C programming language. This project allows users to enter student details, calculate average marks, assign grades, and display the results in a structured table format.

---

## 📌 Project Overview

The Student Grading System helps manage and evaluate student academic performance efficiently. The program accepts student information along with marks in three subjects and automatically calculates the average and grade for each student.

### Subjects Included

* Art of Programming (AOP)
* Applied Mathematics (AM)
* Computer Networks (CN)

---

## ✨ Features

* Add multiple student records
* Store student details:

  * Name
  * UID
  * Date of Birth
* Input marks for three subjects
* Automatic average calculation
* Automatic grade generation
* Structured tabular result display
* Simple and user-friendly console interface

---

## 🛠️ Technologies Used

| Technology             | Version              |
| ---------------------- | -------------------- |
| C Programming Language | GCC Compiler v13.2.0 |
| Visual Studio Code     | v1.90.0              |
| Code::Blocks           | v20.03               |
| Operating System       | Windows 11           |

---

## 📂 Project Structure

```text
Student-Grading-System/
│
├── student_grading_system.c
├── README.md
└── Mini_Project_Report.pdf
```

---

## ⚙️ Grade Criteria

| Average Marks | Grade |
| ------------- | ----- |
| 90 and above  | A     |
| 75 - 89.99    | B     |
| 60 - 74.99    | C     |
| 40 - 59.99    | D     |
| Below 40      | F     |

---

## 🚀 How to Run

### Using GCC

```bash
gcc student_grading_system.c -o grading
./grading
```

### Using Code::Blocks or VS Code

1. Open the project file.
2. Compile the source code.
3. Run the program.
4. Enter student details as prompted.

---

## 📋 Sample Output

```text
-------------------- STUDENT GRADING SYSTEM --------------------

| Name            | UID        | DOB        | AM | CN | AOP | Avg   | Grade |
|-----------------|------------|------------|----|----|-----|-------|-------|
| Prem Kumar      | 2505070    | 01-03-2008 | 85 | 78 | 92  | 85.00 | B     |

THANK YOU FOR USING STUDENT GRADING SYSTEM
```

---

## 🧠 Concepts Used

* Structures
* Arrays
* Loops
* Conditional Statements
* Functions
* Formatted Input/Output

---

## 🎯 Learning Outcomes

Through this project, I learned:

* How to use structures for storing records
* Managing multiple student entries using arrays
* Implementing grading logic with conditional statements
* Designing modular programs using functions
* Displaying data in a clean tabular format

---

## 🔮 Future Improvements

* File handling for permanent data storage
* Search student by UID
* Update and delete student records
* Subject-wise performance analysis
* Graphical User Interface (GUI)
* Database integration

---

## 👨‍💻 Author

**Prem Kumar**

B.Sc. Information Technology
St. Xavier's College, Mumbai

---

## 📜 License

This project is created for educational and academic learning purposes.
