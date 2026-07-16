//Find Largest of Three Numbers
#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter first number : ";
cin>>a;
cout<<"enter Second number : ";
cin>>b;
cout<<"enter Third number : ";
cin>>c;
if(a>b && a>c)
{
 cout<<"First Number greater than other numbers : "<<a;
}
else if(b>a && b>c)
{
  cout<<"Second Number greater than other numbers : "<<b;
}
else
{
 cout<<"Third Number greater than other numbers : "<<c;
}
return 0;
}