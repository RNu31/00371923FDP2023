#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   float n,res;

   cout<<"ingresar un numero";
   cin>>n;
if (n<0)
{
    cout<<"la raiz es imaginaria\n";
}
else
{
res=sqrt(n);
 cout<<"el resultado es " <<res<<endl;
}
     /*return 0;*/
 system("pause");
}   