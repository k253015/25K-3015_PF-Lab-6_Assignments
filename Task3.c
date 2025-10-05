#include<stdio.h>

int main(){
    int total_amount=50000,withdrawal_amount;

    while (total_amount > 0)
    {
        printf("Enter Withdrawal Amount: ");
        scanf("%d",&withdrawal_amount);
        total_amount-=withdrawal_amount;
        printf("Remaining Amount: %d\n",total_amount);
    }

    return 0;
}