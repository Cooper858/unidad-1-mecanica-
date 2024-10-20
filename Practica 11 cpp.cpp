#include "iostream"
#include "math.h"
using namespace std;
int main()
{
float L1,L2,L3,S,AREA;
const float PI=3.141592;
cout<<"Escribe la medida del lado uno del triangulo"<<"\n";
cin >> L1;
cout<<"Escribe la medida del lado dos del triangulo"<<"\n";
cin >> L2;
cout<<"Escribe la medida del lado tres del triangulo"<<"\n";
cin >> L3;
S=(L1+L2+L3)/2;
AREA=sqrt(S*(S-L1)*(S-L2)*(S-L3));
cout<<" El area del triangulo es: "<<AREA<<"\n";
return 0;
}
