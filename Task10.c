#include<stdio.h>
#include<math.h>

int main(){
    //	A = the future value of the investment
    //	P = the principal amount (initial investment)
    //	r = the annual interest rate
    //	n = the number of times interest is compounded per year
    //	t = the number of years the money is invested

    float future_value=0,principal,rate,compound_per_year,year;

    printf("Enter the Principal Amount: $");
    scanf("%f",&principal);
    printf("Enter the Annual Interest Rate(must in Percentage form not in Decimal): ");
    scanf("%f",&rate);
    printf("Enter the Number of times interest is compounded per year: ");
    scanf("%f",&compound_per_year);
    printf("Enter the Number of years the money is invested: ");
    scanf("%f",&year);

    if (principal<0 || rate<0 || compound_per_year<=0 || year<0){
        printf("Values must be positive and compounding frequency must be greater than 0!");
    }
    else {
        rate = rate / 100.0;
        future_value = principal * pow(1 + (rate/compound_per_year),compound_per_year * year);
        printf("The future Value of the Investment is $%.2f",future_value);
    }

    return 0;
}