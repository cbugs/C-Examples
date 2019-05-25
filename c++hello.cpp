#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int radius;
    float volume,area;
    cout <<"Enter the radius of the sphere";
    cin>>radius;
    volume=(4/3)*M_PI*(radius^3);
    area=4*M_PI*(radius^2);
    cout<<"volume="<<volume<<endl;
    cout<<"area="<<area<<endl;
    system("pause");
    return 0;
}
