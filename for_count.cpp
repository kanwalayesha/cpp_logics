#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        count=count+i;
    }
    cout<<"The sum of numbers : "<<count<<endl;
    return 0;
}