# argc & argv in C

## 📌 Description
This project demonstrates how to use command line arguments in C programming using `argc` and `argv`.

Command line arguments allow users to pass inputs to a program when running it from the terminal.

---

## 🧠 Concepts Covered
- argc (Argument Count)
- argv (Argument Vector)
- Command line argument handling
- Pointer to pointer concept (`char **argv`)

---

## 🔹 What is argc?

`argc` stands for **argument count**.

It represents the number of arguments passed to the program.

👉 Important:
- `argc` is always at least **1**
- `argc` includes the program name

Example:

```bash
./program hello world
