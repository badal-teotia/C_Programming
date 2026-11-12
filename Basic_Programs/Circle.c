// Making a program for finding things from circle radii.

#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.14159;
    float radii;
    float surface_area;
    float circumference;
    float volume;

    printf("Enter the radii of the circle (in cm): ");
    scanf("%f", &radii);

    surface_area = 4 * PI * (pow(radii,2));
    circumference = 2 * PI * radii;
    volume = (4/3) * PI * pow(radii,3);
    printf("\n");
    printf("The circumference of the circle with radii %.2f cm is %.2f cm.\n", radii, circumference);
    printf("The surface area of the circle with radii %.2f cm is %.2f cm square.\n", radii, surface_area);
    printf("The volume of the circle with radii %.2f cm is %.2f cm cube.", radii, volume);

    return 0;
}