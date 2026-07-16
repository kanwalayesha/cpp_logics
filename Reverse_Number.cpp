//Reverse a Number
#include <iostream>
using namespace std;
int main()
{
int number;
int reverse=0;
cout<<"Enter number you want reverse 1-9 :";
cin>>number;
while(number>0)
{int digit =number%10;//used to get last number
 reverse=reverse*10+digit; 
number =number/10;
}
cout<<"Reverse of number is :"<<reverse;
return 0;
}