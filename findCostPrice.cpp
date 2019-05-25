#include<stdio.h>

int main()
{
    float selling_price,total_profit,cost_price;
    int number_of_items=15;
    printf("Enter total profit earned\n");
    scanf("%f",&total_profit);
    printf("\nEnter total sales\n");
    scanf("%f",&selling_price);
    cost_price=(selling_price-total_profit)/15;
    printf("\nTherefore the cost price per item=%f as a whole number",cost_price);
    getchar();
    getchar();
    getchar();
    return 0;
}
    
