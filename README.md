# Incorrect use of free() in C
This repository demonstrates a common error in C programming: incorrectly using the `free()` function.  The `free()` function is used to deallocate memory that was dynamically allocated using functions like `malloc()`, `calloc()`, or `realloc()`. Attempting to use `free()` on memory that wasn't dynamically allocated (e.g., stack variables) leads to undefined behavior, often causing program crashes or unpredictable results.

The `bug.c` file contains the erroneous code, while `bugSolution.c` provides a corrected version.

**Key takeaway**: Always ensure you are freeing only dynamically allocated memory using `free()`.  Stack variables are automatically managed by the compiler and do not require explicit deallocation.