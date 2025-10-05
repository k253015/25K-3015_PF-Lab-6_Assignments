#include<stdio.h>
#include<math.h>

int main(){
    float members,total_cost,final_cost;
    const float price_per_person=250.50;

    printf("Enter the total Number of Members of Group: ");
    scanf("%f",&members);

    if (members>0){
        total_cost = members * price_per_person;
        final_cost = ceil(total_cost);
        printf("--------> SUMMARY <--------\n");
        printf("Number of Members in your Group: %d\n",(int)members);
        printf("Price Per Each Person: %.2f\n",price_per_person);
        printf("The Total Cost for your Group: %.2f",final_cost);
    }
    else {
        printf("Enter a Positive Value for Members!");
    }

    return 0;
}