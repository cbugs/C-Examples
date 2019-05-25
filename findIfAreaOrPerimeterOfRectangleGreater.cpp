#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=(2*length)+(2*breadth);
    if(area>perimeter)
    {
                      printf("Area>Perimeter");
                      }
    else
    {
        printf("Perimeter>Area");
        }
    getchar();
    getchar();
    getchar();
    return 0;
}
    
