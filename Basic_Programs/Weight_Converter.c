// WAP to convert weight.

#include <stdio.h>
#include <math.h>

int main() {
    float w;
    int a;
    float c;

    printf("WEIGHT CONVERTER\n");
    printf("1. Kilograms to Pounds.\n2. Pounds to Kilograms.\n");
    printf("Select the mode (1 or 2) : ");
    scanf("%d", &a);

    if(a == 1){
        printf("Enter the weight in kilograms: ");
        scanf("%f", &w);
        c = w * 2.20462;
        printf("%.3f kilos is %.3f pounds",w,c);
    }
    else if(a == 2){
        printf("Enter the weight in pounds: ");
        scanf("%f", &w);
        c = w * (1/2.2046);
        printf("%.3f pounds is %.3f kilos",w,c);
    }
    else{
        printf("Invalid, Enter from 1 or 2");
        scanf("%f", &w);
    }
    return 0;
}