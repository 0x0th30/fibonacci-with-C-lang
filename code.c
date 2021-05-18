// including libs
#include <stdio.h>

// the main function has been declared
int main()
{
    // here we ask for the user which is the size of our sequence
    printf("\nPlease insert here the size that you want to our sequence: ");

    // setting the variable that we'll store the size of our sequence and in the line bellow we scan and get this value
    int size;
    scanf("%i", &size);

    // print an null line
    printf("\n");

    // printing for check if exists some bugs
    printf("%i", size);

    // zero-returning code
    return 0;
}