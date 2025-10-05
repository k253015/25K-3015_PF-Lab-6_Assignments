#include<stdio.h>
#include<math.h>

int main(){
    double intensity,standard_reference,magnitude;

    printf("Enter the Intensity of Earthquake: ");
    scanf("%lf",&intensity);
    printf("Ente the Standard Reference Value: ");
    scanf("%lf",&standard_reference);

    if (intensity>0 && standard_reference>0){
        magnitude = log10(intensity/standard_reference);
    }
    else if (intensity<0 && standard_reference<0){
        magnitude = log10(intensity/standard_reference);
    }
    else {
        printf("Do not Enter Zero and Negative Values.");
    }

    printf("Magnitude of Earthquake is %.2f",magnitude);

    return 0;
}