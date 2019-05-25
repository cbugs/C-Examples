#include<stdio.h>
#include<conio.h>

int main()
{
    int km,m,cm;
    float f,inc;
    printf("Enter the distance in kilometres");
    scanf("%d",&km);
    m=km*1000;
    f=km*3280.3;
    inc=km*39370.0787;
    cm=km*100000;
    printf("%d km=%d metre\n",km,m);
    printf("%d km=%f feet\n",km,f);
    printf("%d km=%f inches\n",km,inc);
    printf("%d km=%d centimetres\n",km,cm);
    getchar();
    getchar();
    return 0;
}

    
