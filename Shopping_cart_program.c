// ________MAKING A SHOPPING CART PROGRAM.

#include <stdio.h>
#include <string.h>

int main() {
    int price = 0;
    int no_of_items = 0;
    char total_items[100] = "";
    char item[20] = "0";

    printf("Press enter to start......");

    do{
        int item_price = 0;
        int quant = 0;
        char input[50] = "";

        getchar();
        printf("Your order (to exit, enter 'q'): ");
        fgets(item, sizeof(item), stdin);
        item[strlen(item)-1] = '\0';

        if(strcmp( item , "q" ) != 0 ){
            printf("Price of the order: ");
            scanf("%d", &item_price);

            printf("How many : ");
            scanf("%d", &quant);

            price += (item_price*quant);
            no_of_items += 1;
            strcat(total_items,item);
            strcat(total_items,",");
        }
        else if(strcmp( item , "q" ) == 0 ){
            printf("________________________________________\n");
            printf("Sir the number of items ordered are %d and here is your order list sir:-\n",no_of_items);
            printf("%s\n", total_items);
            printf("________________________________________\n");
            printf("Sir, the total price of the order is %d rupees.", price);
            break;
        }
    }while(true);

    return 0;
}
