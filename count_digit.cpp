//Count Digits
#include <iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter number you want to count that how much number you entered :";
cin>>number;
int count=0;
while(number>0)
{
count++;
number=number/10;
}
cout<<count;

return 0;
}