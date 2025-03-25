## printf

This Repo has all the code necessary for our project printf function that formats and prints data.

Description
The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

The available convertion specifiers are:

* [ %c: Prints a single character ].
* [ %s: Prints a string of characters ].
* [ %d: Prints integers ].
* [ %i: Prints integers ].
* [ %b: Prints the binary representation of an unsigned decimal ].
* [ %u: Prints unsigned integers ].
* [ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters ].
* [ %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters ].
* [ %r: Prints a reversed string ].
* [ %R: Prints the Rot13 interpretation of a string ].

##  Usage

All the files are to be compiled on Ubuntu 14.04 LTS
Compile your code with gcc -Wall -Werror -Wextra -pedantic *.c
Include the "main.h" header file on the functions using the _printf().

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all functions written
in the project.

## Tasks :page_with_curl:

### Task 0: Implement `_printf` with basic specifiers (c, s, %)

#### **Requirement**:

Create a function `_printf` that works like `printf`, but only supports the following specifiers:

*   `%c`: Prints a single character.
*   `%s`: Prints a string.
*   `%%`: Prints the percent symbol `%` itself.

#### **Steps**:

1.  **Set up the `_printf` function**:
    
    *   The `_printf` function begins by defining an array of conversion specifiers (`convert`) that link each specifier (e.g., `%c` or `%s`) to its corresponding function. For example, `%c` is linked to `print_c` (for printing a character), and `%s` is linked to `print_s` (for printing a string).
        
2.  **Read the input**:
    
    *   We use `va_list` to receive the variable arguments in `_printf`, and we start iterating through the input string character by character.
        
    *   If we encounter a `%` in the string, we look for the associated specifier (such as `%c`, `%s`, or `%%`) and print the corresponding value.

---

### Task 1: Add support for printing integers using `%d` and `%i`

#### **Requirement**:

Modify `_printf` to support printing integers using:

*   `%d`: Prints a signed integer.
*   `%i`: Prints a signed integer (same as `%d`).

#### **Steps**:

1.  **Add integer support**:
    
    *   Check for `%d` and `%i` specifiers in the format string.
        
    *   Use `va_arg` to retrieve the integer argument and handle both positive and negative numbers.
        
    *   Convert the integer to a string by dividing by 10 and printing each digit.

2.  **Handle negative numbers**:
    
    *   If the number is negative, print a minus sign `-` before the absolute value of the number.

---

### Task 2: Implement support for additional specifiers

#### **Requirement**:

Add support for the following new specifiers:

*   `%b`: Prints the binary representation of an unsigned decimal.
*   `%u`: Prints unsigned integers.
*   `%x`: Prints the hexadecimal representation of an unsigned decimal in lowercase.
*   `%X`: Prints the hexadecimal representation of an unsigned decimal in uppercase.
*   `%r`: Prints the reversed string.
*   `%R`: Prints the Rot13 interpretation of a string.

#### **Steps**:

1.  **Binary and unsigned specifiers**:
    
    *   For `%b`, use a loop to convert the integer to binary and print each bit.
    
    *   For `%u`, handle the unsigned integer using `va_arg` and print it similarly to integers.

2.  **Hexadecimal representation**:
    
    *   For `%x` and `%X`, convert the integer to hexadecimal and print it in either lowercase or uppercase.

3.  **Reversed string and Rot13**:
    
    *   For `%r`, reverse the input string and print it.
    
    *   For `%R`, apply the Rot13 cipher to the input string and print the result.

---