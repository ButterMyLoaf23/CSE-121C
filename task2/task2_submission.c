#include <stdio.h>

/* This function returns the smaller of two integers. */
int minimum(int first, int second)
{
    if (first < second) {
        return first;
    } else {
        return second;
    }
}

int main(void)
{
    int choice = 0;

    do {
        printf("\nStore Menu\n");
        printf("1. Notebook - $4.99\n");
        printf("2. Water bottle - $9.99\n");
        printf("3. Backpack - $24.99\n");
        printf("4. Headphones - $19.99\n");
        printf("5. Calculator - $12.99\n");
        printf("0. Exit the store\n");
        printf("Choose an item: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("The notebook costs $4.99.\n");
                break;
            case 2:
                printf("The water bottle costs $9.99.\n");
                break;
            case 3:
                printf("The backpack costs $24.99.\n");
                break;
            case 4:
                printf("The headphones cost $19.99.\n");
                break;
            case 5:
                printf("The calculator costs $12.99.\n");
                break;
            case 0:
                printf("Leaving the store.\n");
                break;
            default:
                printf("That is not one of the choices.\n");
                break;
        }
    } while (choice != 0);

    /* Part 2: Print the numbers from 1 through 10. */
    printf("\nNumbers from 1 to 10:\n");
    for (int number = 1; number <= 10; number++) {
        printf("%d ", number);
    }
    printf("\n");

    /* Part 3: Print the numbers from 10 down to 1. */
    printf("\nNumbers from 10 down to 1:\n");
    for (int number = 10; number >= 1; number--) {
        printf("%d ", number);
    }
    printf("\n");

    /*
     * Part 4: Store 10 floating-point values in an array.
     * The first position in the array is position 0.
     */
    float values[10];
    float total = 0.0f;
    float smallest = 0.0f;
    float largest = 0.0f;
    float average = 0.0f;

    printf("\nEnter 10 floating-point numbers.\n");
    for (int index = 0; index < 10; index++) {
        printf("Value %d: ", index + 1);
        scanf("%f", &values[index]);
    }

    smallest = values[0];
    largest = values[0];

    printf("\nThe values you entered are:\n");
    for (int index = 0; index < 10; index++) {
        printf("%f\n", values[index]);
        total = total + values[index];

        if (values[index] < smallest) {
            smallest = values[index];
        }

        if (values[index] > largest) {
            largest = values[index];
        }
    }

    average = total / 10;
    printf("Minimum: %f\n", smallest);
    printf("Maximum: %f\n", largest);
    printf("Average: %f\n", average);

    /* Part 5: Use the minimum function with two integers. */
    int firstNumber = 0;
    int secondNumber = 0;
    int smallerNumber = 0;

    printf("\nEnter two integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    smallerNumber = minimum(firstNumber, secondNumber);
    printf("The smaller number is %d.\n", smallerNumber);

    return 0;
}
