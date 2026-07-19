#include <iostream>
using namespace std;

int main()
{
    int number;
    bool prime = true;
    int i = 2;
    cout << "Enter a number : ";
    cin >> number;
     if(number==1)
{
       prime=false;
}

while(i < number)
{

 if(number%i==0)
{
 prime=false;
}
 i++;
}
if(prime==true)
{
 cout<<"prime";
}
else
{
cout <<"not prime";
}
return 0;
}