#include<stdio.h>

int main(){
    int number;

    printf("Enter a Number: ");
    scanf("%d",&number);

    if ((number & 1) == 0){
        printf("Number is Even.");
    }
    else {
        printf("Number is Odd.");
    }

    return 0;
}