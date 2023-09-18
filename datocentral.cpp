#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
 float a,b,c;
 cout<<"ingresar tu primer numero"<<endl;
 cin>>a;
 cout<<"ingresa un segundo numero"<<endl;
 cin>>b;
 cout<<"ingresa un tercer numero"<<endl;
 cin>>c;
 if 
 ((a>b) && (b<c))
 cout<<b<<" es el central"<<endl;
 
 else if ((b>a) && (a<c))
 cout<<a<<"es el central"<<endl;

 else if ((a>c) && (a<b))
 cout<<a<<"es el valor central"<<endl;

else 
cout<<a<<" "<<b<<" "<<c<<" "<<"no son distintos"<<endl;

    system("pause");
}