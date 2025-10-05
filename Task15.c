#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the value for integer 'a': ");
    scanf("%d", &a);
    printf("Enter the value for integer 'b': ");
    scanf("%d", &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Swapped values:  a = %d, b = %d\n", a, b);

    return 0;
}