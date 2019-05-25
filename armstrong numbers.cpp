#include<stdio.h>
#include<math.h>
int main()
{
    int j,mod,total=0,i=10,modpo;
    
    while(i<=500)
    {
                 j=i;
                 while(j>0)
                 {
                                    mod=j%10;
                                    j=(j-mod)/10;
                                    modpo=mod*mod*mod;
                                    total=total+modpo;
                                    }
                 if(total==i)
                 {
                             printf("%d\n",total);
                             }
                 total=0;
                 i++;
}

getchar();
getchar();
getchar();
getchar();
return 0;
}
