/*A Fibonacci series is a sequence where:

First number = 0
Second number = 1
Next number = sum of the previous two numbers*/
#include <iostream>
using namespace std;

int main()
{
    int n,first=0,second=1,next;
    int i=0;
    cout<<"Enter the number of terms : ";
    cin>>n;
    while(i<n)
    {
         cout<<first<<"";
        next=first+second;
        first=second;
        second=next;
        i++;
    }
   
    
    return 0;
}