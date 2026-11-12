// Calculator program with switch case.

#include <stdio.h>
#include <math.h>

int main() {
    char operator = '\0';
    double num1;
    double num2;
    double final;

    printf("CALCULATOR\n");
    
    printf("Enter first no. : ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - / *) : ");
    scanf(" %c", &operator);

    printf("Enter second no. : ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            final = num1 + num2;
            break;
        case '-':
            final = num1 - num2;
            break;
        case '/':
            final = num1 / num2;
            break;
        case '*':
            final = num1 * num2;
            break;
        default:
            printf("Invalid, Enter from the given operators (+ - / *) \n");
            break;
    }
    printf("Output : %.2lf", final);
    return 0;
}