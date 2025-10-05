#include <stdio.h>

int main() {
    int number,original_number,remainder,sum = 0;

    printf("Enter a 3 digit integer to check: ");
    scanf("%d", &number);

    //Storing the original number for later comparison
    original_number = number;

    while (number > 0) {
        //To get the last digit
        remainder = number % 10;

        //Adding the cube of the digit to the sum
        sum += remainder * remainder * remainder;

        //Removing the last digit from the number
        number /= 10;
    }

    if (sum == original_number) {
        printf("%d is an Armstrong number.\n", original_number);
    } else {
        printf("%d is not an Armstrong number.\n", original_number);
    }

    return 0;
}