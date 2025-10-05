#include<stdio.h>

int main(){
    int number,original_number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    original_number=number;

    int twenty_fives = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;
    while (number > 0)
    {
        if ( number >= 25  )
        {
            twenty_fives+= number / 25;
            number %= 25;
        }
        else if ( number >= 10 )
        {
            tens+= number / 10;
            number %= 10;
        }
        else if ( number >= 5 )
        {
            fives+= number / 5;
            number %= 5;
        }
        else if ( number >= 1 )
        {
            ones+= number;
            number %= 1;
        }
    }
    printf("Minimum Coins required for %d are %d\n",original_number,twenty_fives + tens + fives + ones);
    if (twenty_fives > 0) printf("25cents used are %d\n",twenty_fives);
    if (tens > 0) printf("10cents used are %d\n",tens);
    if (fives > 0) printf("5cents used are %d\n",fives);
    if (ones > 0) printf("1cents used are %d\n",ones);
    return 0;
}