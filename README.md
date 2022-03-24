# Welcome to Printf! 👌

## This is a group project of Cohort 17 during our apprenticeship in Holberton Colombia.  😎

At the end of this project we are able to use **Github** without major obstacles, apply **Variadic functions**, deploy a **workflow** to solve tasks, learn about **printf** and its different ways of using it. 🧑‍💻🧑‍💻

## Objectives 📌

The function  **printf**  (which derives its name from  **“_print formatted_”**)prints a message to the screen using a "format string" that includes instructions for mixing multiple strings into the final string to display on the screen. Languages ​​like**Java** also include functions similar to this.

`printf` is a special function because it receives a variable number of parameters. The first parameter is fixed and is the format string. It includes text to be printed. So,  `printf`  is called with as many parameters as marks in the format string plus one (the format string itself). The following example shows how the printed.

![link](https://i.imgur.com/aHGZiG9.jpg)

The symbol `"%"` denotes the beginning of the format mark. The mark `"%s"` is replaced by the value of the variable `red` and the resulting string is printed. The symbol “`\n`” represents a line break. The output, by default, is justified to the right of the total width that we have given to the field, which by default has the length of the string as its length.

# Requirements ✔️

-   You are not allowed to use global variables.
-   No more than 5 functions per file.
-   The prototypes of all your functions should be included in your header file called  `main.h`
-  All your header files should be include guarded.
-   Note that we will not provide the  `_putchar`  function for this project.
- All your files should end with a new line.
-   A  `README.md`  file, at the root of the folder of the project is mandatory.
-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`

# Warning☠️

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

## **Authorized functions and macros** 🔧
-   `write`  (`man 2 write`)
-   `malloc`  (`man 3 malloc`)
-   `free`  (`man 3 free`)
-   `va_start`  (`man 3 va_start`)
-   `va_end`  (`man 3 va_end`)
-   `va_copy`  (`man 3 va_copy`)
-   `va_arg`  (`man 3 va_arg`)

## Tasks 📝

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.

 1. Prototype:  `int _printf(const char *format, ...);`
 2. Returns: the number of characters printed (excluding the null byte used to end output to strings).
 3. Write output to stdout, the standard output stream.
 4. You need to handle the following conversion specifiers:
 - `c`
 - `s`
 - `%`

### 1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:

-   `d`
-   `i`
-   You don’t have to handle the flag characters
-   You don’t have to handle field width
-   You don’t have to handle precision
-   You don’t have to handle the length modifiers


### 2. Just because it's in print doesn't mean it's the gospel

- Create a man page for your function.

### 3. With a face like mine, I do better in print

Handle the following custom conversion specifiers:

-   `b`: the unsigned int argument is converted to binary

### 4. What one has not experienced, one will never understand in print

Handle the following conversion specifiers:

-   `u`
-   `o`
-   `x`
-   `X`
-   You don’t have to handle the flag characters.
-   You don’t have to handle field width.
-   You don’t have to handle precision.
-   You don’t have to handle the length modifiers.

### 5. Nothing in fine print is ever good news

Use a local buffer of 1024 chars in order to call  `write`  as little as possible.

### 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

Handle the following conversion specifier:  `p`.

-   You don’t have to handle the flag characters.
-   You don’t have to handle field width.
-   You don’t have to handle precision.
-   You don’t have to handle the length modifiers.

### 7. My weakness is wearing too much leopard print

Handle the following custom conversion specifier:

-   `S`  : prints the string.
-   Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way:  `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

### 8. The big print gives and the small print takes away

Handle the following flag characters for non-custom conversion specifiers:

-   `+`
-   space
-   `#`

### 9. Sarcasm is lost in print

Handle the following length modifiers for non-custom conversion specifiers:

-   `l`
-   `h`

Conversion specifiers to handle:  `d`,  `i`,  `u`,  `o`,  `x`,  `X`

### 10. Print some money and give it to us for the rain forests

Handle the field width for non-custom conversion specifiers.

### 11. The negative is the equivalent of the composer's score, and the print the performance

Handle the precision for non-custom conversion specifiers.

### 12. It's depressing when you're still around and your albums are out of print

Handle the  `0`  flag character for non-custom conversion specifiers.

### 13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection

Handle the  `-`  flag character for non-custom conversion specifiers.

### 14. Print is the sharpest and the strongest weapon of our party

Handle the following custom conversion specifier:

-   `r`  : prints the reversed string

### 15. The flood of print has turned reading into a process of gulping rather than savoring

Handle the following custom conversion specifier:

-   `R`: prints the rot13'ed string

### 16. *
All the above options work well together.

# Flowcharts

![flowchart](https://lh3.googleusercontent.com/ESAT_CvohiyX-Y4mtnbjl5cx1outYF_EGFa8mo_YvBQOecv3Alff56U_17HvjHFUuoiHISKGzvAyasC5n7iQ1z7IpCpKuGpez5_8uu2qPYcF7V5XRIavJzWbeZIyUmPoGzbdz4L6PtuTsO5SWyBLZD8ZlwBdbrfFT4ZoL5Xeayzk-wjHJuig0szXuu94PcsxLbvpZfKQq8el7Zt1MWA6EmB2TTP9Hh39R0_7JI9lvvDEr4dzNtbn45246zbtl6Z2jWXM3cLt_PxEXheO11gTA32ftBYYsPw9yuq6k8qQno-vRJPGgG664aH4QtF2y5vbNSysOPAzkg1ksZrZD-5FDPbdJYmjn-6fXZ3Ah1XTMHNe-vD6h1agfegMl73m--ZZsd6xQgWUIyXHwHdn-jsKnZi2xUVKYFGkNGOzZr8yALga3L1Twpln_69JW7t57pmtbRRD8dd3tXjAukxN-OjE_UNzZnFWv1-fvNkoOpqxmeF73Hg0McKEnZ1fWyRUN0HTU8HG0H18TL5wbtwmVmMYvnS8TrhWnPSRIzoP3CdtHMsogJ8A81GFvFwDEGMP8hHxwIgqHNQofhxWCcNgaIVE9JbWid81Q2ITB6YJ9aE52dyJn5Xo3m7jVZV5NrhOvTf62iEtbsKHkn_nN8uQci4duQ3vV3nSoiuwareQJGU-HAdy6MtDsaSS6-82c_ca19qBtwVQDy9pyllXZrtEDbAs8cVuHav5PxnLhjYOqc3Y-Jjj4RF_OYwJdO8mHrcJE5jcuyA5jEEg__xO5LIicdOI6z9dxEFhKyY11hPQ81Hk1Q2j9li7D9voDcbbm6C0Dk46K5NDn51w_1NIafUcUBEyWm5qfeY7IuJFBMSflDmNbUvNH9kiT2lN-yN_CP73raFKIaQI87QWiQ=w698-h512-no?authuser=4)

# Authors
## Yon Roa & Victor Uroza
