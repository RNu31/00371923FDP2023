#include<cmath>
#include<iostream>
using namespace std;
 int main(){
    int res=0,n=0;
    cout<<"inserte un numero entero"<<endl;
    cin>>n;
    res=n % 2;
    switch (res)
    {
    case 1:
        cout << n <<"es impar\n"<<endl;
        break;
    case 0:
        cout << n <<"es par\n"<<endl;
        break;
    default:
        cout << "Datos incorrectos\n"<<endl;
    }

    system("pause");
 }