#include<stdio.h>
#include<math.h>

int main(){
    float height , theta , tan_theta;
    printf("Enter the height (must be positive): ");
    scanf("%f",&height);
    printf("Enter the Sun's Angle of Elevation (In Radian): ");
    scanf("%f",&theta);

    tan_theta = tan(theta);

    if (tan_theta == 0)
    {
        printf("Length is Undefined!");
    }
    else
    {
        printf("Length of the Shadow is %.2f",height/tan_theta);
    }

    return 0;
}
