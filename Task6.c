#include<stdio.h>

int main(){
    int number,remainder,reversed=0;

    printf("Enter a Positive Number: ");
    scanf("%d",&number);

    if (number>0){
        while (number!=0){
            remainder = number % 10;
            reversed = reversed * 10 + remainder;
            number /= 10;
        }
        printf("Reversed Number is: %d",reversed);
    }
    else {
        printf("Do not Enter a Negative Value!");
    }

    return 0;
}