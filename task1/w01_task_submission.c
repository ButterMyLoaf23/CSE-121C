#include <stdio.h>

int main(void)
{
    /* Task 1: Ask the user for an integer and print it. */
    int number = 0;

    printf("Enter a whole number: ");
    scanf("%d", &number);
    printf("You entered %d.\n\n", number);

    /* Task 2: Print a float in three different ways. */
    float decimalNumber = 0.0f;

    /*%f formats the number to a floating number, %e formats the number to scientific notation, and %g formats the number to the shortest decimal point.*/
    printf("Enter a floating number: ");
    scanf("%f", &decimalNumber);
    printf("Scientific: %e\n", decimalNumber);
    printf("Fixed point: %f\n", decimalNumber);
    printf("Shortest form: %g\n\n", decimalNumber);

    /* task 3: Read and print a word. */
    char word[100] = "";

    printf("Enter a word: ");
    /*%99s limits the input limit to 99 characters so you can't go to high*/
    scanf("%99s", word);
    printf("You entered %s.\n\n", word);

    /* Task 4: Find the smaller of two numbers. */
    int first = 0;
    int second = 0;
    int smaller = 0;

    printf("Enter two whole numbers: ");
    /*%d puts in the whole numbers based off what you put for the first and second numbers*/
    scanf("%d %d", &first, &second);

    if (first < second) {
        smaller = first;
    } else {
        smaller = second;
    }

    printf("The smaller number is %d.\n", smaller);

    return 0;
}
