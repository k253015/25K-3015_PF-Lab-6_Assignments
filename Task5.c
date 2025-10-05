#include<stdio.h>

int main(){
    int i,participants,factorial;
    printf("Enter the Number of Participants: ");
    scanf("%d",&participants);
    if (participants>=0){
        for (i=1;i<=participants;i++){
            factorial*=i;
        }
        printf("Arrangement for Participants: %d",factorial);
    }
    else {
        printf("Do not Enter a Negative Value.");
    }

    return 0;
}