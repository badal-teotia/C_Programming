// Switch values of variables.

#include <stdio.h>

int main(){
    float fv = 58.23;
    float x = 0;
    float sv = 343.5;

    x = fv;
    fv = sv;
    sv = x;

    printf("1st variable = %f \n2nd variable = %f",fv, sv);
}