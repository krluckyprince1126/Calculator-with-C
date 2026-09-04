# 🧮 Calculator in C

A simple **menu-driven calculator program in C language** that performs basic mathematical operations using functions.

## 📌 Features

The calculator can perform:

* ➕ Addition
* ➖ Subtraction
* ✖️ Multiplication
* ➗ Division
* `%` Modulus
* 🚪 Exit

## 🛠️ Technologies Used

* **Language:** C
* **Compiler:** GCC
* **IDE:** Visual Studio Code

## 📂 Project Structure

```text
Clanguage/
│
├── calculator.c
├── calculator.exe
└── README.md
```

## ▶️ How to Run

### 1. Compile the program

Open the terminal in the project folder and run:

```bash
gcc calculator.c -o calculator
```

### 2. Run the program

On Windows:

```bash
./calculator
```

or:

```bash
.\calculator
```

## 💻 How It Works

When the program starts, it displays a menu:

```text
_________ CALCULATOR _________

1. Add
2. Subtract
3. Multiply
4. Divide
5. Module
6. Exit

Enter your choice:
```

The user selects an operation and enters two numbers.

### Example

```text
Enter your choice: 1
Enter your first number: 10
Enter your second number: 20

Result = 30
```

## 🧩 Functions Used

The project uses separate functions for each mathematical operation:

```c
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void module(int a, int b);
```

Each function performs its operation and directly prints the result using `printf()`.

## 🔄 Program Flow

```text
Start
  ↓
Display Calculator Menu
  ↓
Enter Choice
  ↓
Enter Two Numbers
  ↓
Perform Operation
  ↓
Display Result
  ↓
Show Menu Again
  ↓
Choice = 6?
  ├── No → Continue
  └── Yes → Exit
```

## ⚠️ Error Handling

The program checks for **division by zero** before performing division.

```text
Cannot divide by Zero.
```

## 🎯 Learning Objectives

This project helps in understanding:

* Functions in C
* Function declaration
* Function definition
* Function calling
* `void` functions
* `switch-case`
* `do-while` loop
* `if-else`
* User input using `scanf()`
* Output using `printf()`
* Basic arithmetic operators

## 👨‍💻 Author

**Lucky Prince**

A beginner C programming project created for learning and practicing functions, loops, and conditional statements.
