#include<stdio.h>
#include<conio.h>
int main()
{
    int selling_price,cost_price,porl;
    printf("Enter selling price\n");
    scanf("%d",&selling_price);
    printf("Enter cost price\n");
    scanf("%d",&cost_price);
    
    if(selling_price>cost_price)
    {
    porl=selling_price-cost_price;
    printf("A profit of %d was made",porl);
    }
                                
    else if(selling_price<cost_price)
    {
    porl=cost_price-selling_price;
    printf("A loss of %d was made",porl);
    }
                                                            
    else if(selling_price==cost_price)
    {
    printf("Break-even");
    }

getchar();
getchar();
getchar();
return 0;
}
