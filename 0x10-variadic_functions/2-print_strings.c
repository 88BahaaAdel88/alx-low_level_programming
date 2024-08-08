#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: separator between strings
 * @n: nums of arguments
 * @...: strings to print
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...) {
  unsigned int i = n;
  va_list ap;
    char* str;

    va_start(ap, n);

    
    for(i = 0; i < n; i++){
        str = va_arg(ap, char*);
        printf("%s", str ? str : "(nil)");
        
        if (separator && i < n - 1){
            printf("%s", separator);
        }
    }
    printf("\n");
  va_end(ap);
}
