#include<iostream>
using namespace std;
int main()
{
int reverse=0,number,digit;
cout<<"Enter the number : ";
cin>>number;
int original=number;
while (number>0)
{
digit=number%10;
reverse=reverse*10+digit;
number=number/10;

}

if(original==reverse)
{
 cout<<"its palindrome number ";
}
else
{
cout<<"its not palindrome number ";
}
return 0;
}
 