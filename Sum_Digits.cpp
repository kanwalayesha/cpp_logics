//Sum of Digits

#include <iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter number you want to count : ";
cin>>number;
int count=0;
while(number>0)
{
int digit=number%10;
count=count+digit;
number=number/10;
}
cout<<count;


return 0;

}