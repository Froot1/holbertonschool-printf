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

### Task 2: Create a `man` page for `_printf`

#### **Requirement**:  
Write a `man` page (`man_3_printf`) documenting `_printf`.  

#### **Steps**:  

1. **Create the file**:  
   - Name it `man_3_printf`.  

2. **Follow `man` page structure**:  
   - Include sections: NAME, SYNOPSIS, DESCRIPTION, SPECIFIERS, COMPILATION, RETURN VALUE, EXAMPLES, SEE ALSO, AUTHORS, and BUGS.  

3. **Test the `man` page**:  
   ```sh
   man man_3_printf

---

## Task 3: Handle `%b` (Binary Conversion Specifier)

### Requirement:
Add support for `%b` to print an unsigned int in binary format.

### Steps:
1. Create `print_b()` to handle binary conversion.
2. Use `va_arg()` to extract the unsigned int argument.
3. Loop through each bit using bitwise operations.
4. Print `1`s and `0`s using `_putchar()`.
5. If the number is `0`, print `0`.
6. Integrate `%b` into `_printf`.

---

### **Task 4: Handle `%u`, `%o`, `%x`, and `%X` Conversion Specifiers**

### **Requirements:**

Add support for:

- **`%u`**: Prints an unsigned integer in decimal.
- **`%o`**: Prints an unsigned integer in octal.
- **`%x`**: Prints an unsigned integer in lowercase hexadecimal.
- **`%X`**: Prints an unsigned integer in uppercase hexadecimal.

### **Steps:**
1. **Create functions**: 
   - `print_u()`, `print_o()`, `print_x()`, `print_X()` to convert integers to respective formats.
2. **Modify `_printf()`**: Detect `%u`, `%o`, `%x`, `%X` and call the corresponding function.
3. **Conversion**: 
   - Use `va_arg()` to get the integer.
   - Convert it using division (10 for decimal, 8 for octal, 16 for hexadecimal).
   - Print digits with `_putchar()`.

---

---

### **Task 7: Handle `%S` Conversion Specifier**

### **Requirement:**
Modify `_printf` to support printing strings using:
- **`%S`**: Prints a string, replacing non-printable characters (ASCII < 32 or >= 127) with `\xXX`, where `XX` is the uppercase hexadecimal representation of the ASCII value.

### **Steps:**

1. **Detect `%S`** in the format string and call `print_S`.
2. **Retrieve the string** using `va_arg`.
3. **Iterate through the string**:
   * Print **printable characters** as is.
   * For **non-printable characters**, print `\xXX` (hexadecimal format).
4. **Count the printed characters** including escape sequences.


---
