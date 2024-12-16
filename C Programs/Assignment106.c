/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY, PRICE AND AMOUNT.
IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND PRICE AS INPUT
AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT*/

#include<stdio.h>

struct ITEM 
{
    char item_name[20];
    int quantity;
    float price;
    float amount;
};

void calculate(struct ITEM *it)
{
    printf("Enter the item name: ");
    scanf(" %[^\n]s",it->item_name);
    printf("Enter the quantity of the item: ");
    scanf("%d",&it->quantity);
    printf("Enter the price: ");
    scanf("%f",&it->price);
    it->amount=it->quantity*it->price;
    
    printf("\nItem name: %s",it->item_name);
    printf("\nQuantity: %d",it->quantity);
    printf("\nPrice: %f",it->price);
    printf("\nAmount: %f",it->amount);
}

int main()
{
    struct ITEM it1;
    calculate(&it1);
    return 0;
}

