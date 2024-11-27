## Printf

![Capture d'écran 2024-11-27 113752](https://github.com/user-attachments/assets/570864dc-bd3a-4e0e-a531-412beb31dd8d)

# explanation of the printf project
Creation of the 'printf' code involves the intergration of 'putchar.c'. The 'fprint' function is useful for displaying simple text, variable values, and formatting the display of integer data, floating-point numbers, characters, strings, and hexadecimal values. it also allows combining text and variables effectively.
## Features
The main features of 'printf'is formatted display, precise format control which consists of width, precision and alignment of data. Versatility that can handle a variable number of arguments, debugging and logging useful for tracking variable states and program flow.

## use printf example
```c
printf("Hello, world!");** 
simple display of a charcter string
```
```c
int number = 42;
printf("The answer is: %d", number); Affichage d'un entier.
```
## 

![Capture d'écran 2024-11-27 143719](https://github.com/user-attachments/assets/318427ec-582e-47a4-8877-3d6cf95ca4e2)

ce code explique :

**Function declarations:**
printf_char, printf_str, printf_int, printf_percent: Functions to handle different types of formatting (%c, %s, %d/%i, %%).

**printf_int_helper:** Helper function to print integers.

**_putchar:** Function to write a single character.

**Implementations:**

**printf_char:** *Prints a character from va_list.*

**printf_str:** *Prints a character string.*

**printf_int:** *Handles printing of integers.*

**printf_percent:** *Prints the '%' character.*

**printf_write:** *Probably a custom write function.*

**Fonction principale :**

**_printf :** *Main function that parses the format string and calls the appropriate functions for each specifier.*

**Conclusion**

*This code forms a basic implementation of printf, capable of handling basic formats like %c, %s, %d, %i, and %%. It uses va_list to handle variable arguments, allowing flexibility similar to standard printf.*




