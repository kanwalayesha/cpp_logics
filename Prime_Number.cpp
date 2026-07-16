//Prime Number or not

#include <iostream>
using namespace std;
int main()
{
int number;
bool prime=true;

cout<<"Enter number you want to check Prime Number or not : ";
cin>>number;
if(number<=1)
{
  prime=false;
}
else
{
 for(int i=2;i<number;i++)
 {
  if(number%i==0)
   {
    prime=false;
     break;
   }
}
}
if(prime)
{
cout<<"Number is prime";
}
else
{
cout<<"Number is not prime";
}
return 0;

}