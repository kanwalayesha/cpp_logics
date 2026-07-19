#include <iostream>
using namespace std;
int main()
{
 int number;
    cout<<"Enter a number : ";
    cin>>number;
    while(number>0)
    {
        //if(!(number%2==0))
        if(number%2==0)
        {
            cout<<number<<" is even number"<<endl;
        }
       
     number--;
    }
    return 0;
}
 