#include<stdio.h>
int main(){
    int num,counter=0;
    printf("Enter a Number: ");
    scanf("%d",&num);

    int original_number = num;

    while (num>0){
        num=num & (num-1);
        counter++;
    }

    printf("1s in %d are %d",original_number,counter);

    return 0;
}