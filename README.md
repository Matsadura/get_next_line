# **Get Next Line**

## **Overview**

The **Get Next Line** project is part of the foundational curriculum at the 42 network. It focuses on developing a deeper understanding of file manipulation and memory management in C. The goal is to implement a function that reads a single line from a file descriptor, allowing repeated calls to retrieve all lines from the file.

This project emphasizes code efficiency, robustness, and adaptability to real-world constraints, building upon the skills gained in the **Libft** project.

---

## **Learning Objectives**

By completing this project, I:

- **Deepened my understanding of file descriptors:**
  - Learn how file descriptors work in Unix-based systems.
  - Understand the interaction between the kernel and user-space programs for file I/O.

- **Implement dynamic memory management:**
  - Master the use of `malloc`, `free`, and buffers to handle variable-sized data.
  - Handle memory leaks and optimize memory usage.

- **Work with static variables:**
  - Understand how static variables retain their state across function calls.
  - Use static variables to manage data across multiple invocations of the function.

- **Optimize for edge cases:**
  - Handle cases like:
    - Empty files.
    - Files with only newlines.
    - Files that don’t end with a newline.
    - Very large files.

- **Improve debugging and error handling skills:**
  - Detect and handle common I/O errors (e.g., invalid file descriptors).
  - Ensure proper return values and avoid undefined behaviors.

---

## **Project Description**

The goal is to write a function:

```c
char *get_next_line(int fd);
```

### **Function Behavior**
- **Input:** A file descriptor (`fd`) to read from.
- **Output:** Returns the next line from the file, ending with a newline (`\n`) if present.
- **Key Requirements:**
  - Must work with multiple file descriptors simultaneously.
  - Must allocate memory dynamically for the returned line.
  - Must manage internal buffers to optimize I/O operations.

### **Constraints**
- **No usage of standard library functions** (apart from those allowed in the 42 curriculum, such as `read`, `malloc`, and `free`).
- The function should demonstrate:
  - Efficiency in handling large files.
  - Robustness in edge cases.
  - Consistency across multiple calls.

---

## **Skills Developed**

1. **System-level programming:**
   - Work directly with the `read` system call.
   - Manage file descriptors and buffers.

2. **Algorithm design:**
   - Implement a logical approach to handle incomplete data reads.
   - Balance efficiency and clarity in your implementation.

3. **Code modularity:**
   - Create a clean, reusable function while managing internal states.
   - Split the function into logical sub-functions for readability.

4. **Debugging and testing:**
   - Use tools like `valgrind` to detect memory leaks.
   - Write comprehensive tests to verify the function in all edge cases.

---

## **Conclusion**

The **Get Next Line** project is a crucial step in mastering system-level programming, memory management, and debugging. It lays the foundation for more complex projects by instilling a disciplined approach to solving low-level programming challenges. Through this project, I enhanced my problem-solving skills and gain a deeper understanding of the inner workings of file I/O in C.
