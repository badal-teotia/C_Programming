//Making a english word game.

#include <stdio.h>
#include <string.h>
 
int main(){

    char noun[30] = "";
    char adjective[30] = "";
    char verb[30] = "";
    
    printf("Enter a noun: ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1] = '\0';

    printf("Enter an adjective: ");
    fgets(adjective,sizeof(adjective),stdin);
    adjective[strlen(adjective)-1] = '\0';

    printf("Enter a verb: ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';


    printf("Today %s is %s %s.",noun, verb, adjective);

    return 0;
}
