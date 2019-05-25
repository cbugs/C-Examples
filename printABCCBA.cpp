#include<stdio.h>
int main()
{
    int x,a=65,b=66,c=67,d=68,e=69,f=70,g=71;
    
    for(x=1;x<8;x++)
    {
                    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,c,d,e,f,g,f,e,d,c,b,a);
                    if(x==1)
                    {
                            g=255;
                            }
                    else if(x==2)
                    {
                            f=255;
                            }
                    else if (x==3)
                    {
                         e=255;
                         }
                    else if (x==4)
                    {
                         d=255;
                         }
                    else if (x==5)
                    {
                         c=255;
                         }
                    else if (x==6)
                    {
                         b=255;
                         }
                    else if (x==7)
                    {
                         a=255;
                         }
                         }
    getchar();
    getchar();
    return 0;
}
