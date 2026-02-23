# 0x0A - malloc, free

## 📌 Description

This project focuses on dynamic memory allocation in C using:

- `malloc`
- `free`
- Memory management
- 2D arrays allocation

Understanding dynamic memory is essential in low-level programming because it allows programs to allocate memory at runtime.

---

## 🧠 Learning Objectives

By completing this project, you should be able to explain:

- What is dynamic memory allocation
- How to use `malloc`
- How to properly free allocated memory using `free`
- How to avoid memory leaks
- How to create and free a 2D array dynamically

---

## 🔹 What is malloc?

`malloc` stands for **memory allocation**.

It allocates memory on the heap and returns a pointer to the allocated space.

### Prototype:
```c
void *malloc(size_t size);
