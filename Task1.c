#include<stdio.h>

int main(){
    int i,sum=0;
    do {
        printf("Enter a Number: ");
        scanf("%d",&i);
        sum+=i;
    }while(i!=0);
    printf("Sum is %d",sum);

    return 0;
}