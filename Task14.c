#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    for (int i=2,j=1;i<=8,j<=3;i*=2,j++){
        printf("%d x %d = %d\n",num,i,num<<j);
    }

    return 0;
}