//Fibonacci
#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}
int main()
{
 int number;
 cout<<"Enter number : ";
 int count=0;
 cin>>number;
 for(int i=0;i<=number;i++)
 {
    count=Fibonacci(i);
 }
 cout<<count<<" ";
}