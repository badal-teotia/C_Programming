// Compound interest calculator 

#include <stdio.h>
#include <math.h>

int main() {
    printf("COMPOUND INTEREST CALCULATOR\n");
    printf("----------------------------------\n");

    double amount;
    int years;
    double rate;
    int times = 0;
    double total;

    printf("Enter the principal amount deposited: ");
    scanf("%lf", &amount);

    printf("Enter the time for which the deposit is made (in years): ");
    scanf("%d", &years);
     
    printf("Enter the interest rate: ");
    scanf("%lf", &rate);
    rate/=100;
     
    printf("Enter the times it is supposed to repeat: ");
    scanf("%d", &times);

    total = amount * pow(1 + rate/times, times * years);
    printf("The final outcome or the return of the deposit is %.2lf.\n",total);
    printf("The compound interest was %.2lf.", total - amount);

    return 0;
}
