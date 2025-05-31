# Day-15

# 🧵 Process Creation in C using `fork()`

Welcome to this repository showcasing how to work with **multiple processes in C** using the Unix/Linux system call `fork()`. These examples demonstrate **how process duplication works**, how to **distinguish parent and child processes**, and how to **perform tasks concurrently**.

---

## 🔧 Setup & Compilation

```bash
gcc filename.c -o outputname
./outputname
📘 Summary of Examples
✅ Example 01: Triple Fork - Multiple Processes Created
c
Copy
Edit
#include<stdio.h>
#include<unistd.h>

int main() {
    fork();
    fork();
    fork();
    printf("Hello World!\n");
    return 0;
}
💡 Concept:
Each fork() call doubles the number of processes.
With 3 forks, it creates 2³ = 8 processes, so "Hello World!" prints 8 times.

📤 Sample Output:

nginx
Copy
Edit
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!
Hello World!
