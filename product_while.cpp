#include <iostream>
using namespace std;

int main()
{
    int n,p=1;
    cout<<"Enter a number : ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        p=p*i;
        i++;
    }
    cout<<p;
return 0;
}