#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    int n=0,primo=0,i=0,modulo=0;
    primo=1;
    cout<<"escribe un numero";
    cin>>n;
    for (i=n-1; i>=2;-1)
    {
        modulo=n%i;
    }
    system("pause");
}