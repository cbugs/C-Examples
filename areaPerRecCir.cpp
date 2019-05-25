#include<stdio.h>
#include<conio.h>
int main()
{
    int len,bre,rad,area_rectangle,per_rectangle;
    float pai=3.143,area_circle,per_circle;
    printf("Enter length of rectangle\n");
    scanf("%d",&len);
    printf("Enter breadth of rectangle\n");
    scanf("%d",&bre);
    printf("Enter radius of circle\n");
    scanf("%d",&rad);
    area_circle=rad*rad*pai;
    per_circle=2*pai*rad;
    area_rectangle=len*bre;
    per_rectangle=2*(len+bre);
    printf("\n\n");
    printf("Circle:-\n");
    printf("Area=%f\n",area_circle);
    printf("Perimeter=%f\n",per_circle);
    printf("\n");
    printf("Rectangle:-\n");
    printf("Area=%d\n",area_rectangle);
    printf("Perimeter=%d\n",per_rectangle);
    getchar();
    getchar();
    getchar();
    return 0;
}
    
