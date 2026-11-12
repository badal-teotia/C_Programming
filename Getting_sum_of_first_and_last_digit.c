// Program to get sum of first and last digits of multidigit number.

#include <stdio.h>

int main(){
    int num;
    printf("Enter a integer : ");
    scanf("%d",&num);

    int last = num%10;
    int first;

    while(num>=10){
        num/=10;
    }

    first = num;

    printf("Sum of first and last digit of the number is : %d.", first+last);

    return 0;
}