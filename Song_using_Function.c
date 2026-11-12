// Making a program for Happy birthday song.

#include <stdio.h>
#include <string.h>

void HBS(char name[25]){
    printf("Happy birthday to you %s\n", name);
    printf("A very happy birthday to you dear.\n");
    printf("May god bless you forever.");
}

int main(){
    char name[25] = "";

    printf("Name of the birthday kid : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '0';

    HBS(name);

    return 0;
}
