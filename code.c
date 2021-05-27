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
    printf("");

    // printing for check if exists some bugs
    printf("%i", size);
    printf("\n");

    // in the 3 lines bellow we declare our variables that will be used in the operation
    int first = 1;
    int secnd = 1;
    int sum;

    // this iteration will create an cicle that calculates the fibonacci's sequence
    for(int i = 0; i < size; i++){
        sum = first + secnd;
        secnd = first;
        first = sum;
        printf("%i - ", sum);
    }

    // zero-returning code
    return 0;
}

