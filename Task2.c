#include<stdio.h>

int main(){
    int num;
    printf("---> Table Of Number Entered by user <---");
    printf("\nEnter the Number to print Table: ");
    scanf("%d",&num);
    for (int i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }

    return 0;
}