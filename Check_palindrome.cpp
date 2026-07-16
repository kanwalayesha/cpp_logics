// Check Palindrome Number
#include <iostream>
using namespace std;
int main()
{
int number, original,digit;
int reverse=0;
cout<<"Enter the number to check Palindrome : ";
cin>>number;
original =number;
while(number>0)
{
digit=number%10;
reverse=reverse*10 +digit;
number=number/10;
}
if(reverse==original)
{
cout<<"its Palindrome "<<endl;
}
else
{
cout<<"its not Palindrome "<<endl;
} 

return 0;

}