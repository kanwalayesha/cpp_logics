#include <iostream>
using namespace std;
int main() 
{
   int marks;
    cout<<"Enter the marks : ";
    cin>>marks;
   if(marks>=90 && marks<=100 )
   {
    cout <<"A+";
   }
   else if(80<=marks && marks < 90 )
   {
    cout<<"B";
   }
   else if(marks>=70 && marks <80)
   {
    cout<<"C";
   }
    else if(marks>=60 && marks <70)
    {
     cout<<"D";
    }
    else if(marks>=50 && marks <60)
    {
     cout<<"E";
    }
    else if(marks<50)
    {
     cout<<"F";
    }
    else
    {
        cout<<"Invalid marks";
    }
   return 0;
}