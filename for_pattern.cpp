
#include<iostream>
using namespace std;
int main()
{
for (int i=0;i<5;i++)
 {
    for(int j=0;j<4-i;j++)
     {  
          cout<<" ";
     }
      for (int k=0;k<2*i+1;k++)
    {
          cout<<"*";
    }
         cout<<endl;
       
   } 
   for (int i1=1;i1<5;i1++)
 {
    for(int j1=0;j1<i1;j1++)
     {  
          cout<<" ";
     }
      for (int k1=0;k1<9-2*i1;k1++)
    {
          cout<<"*";
    }
         cout<<endl;
       
   } 
   
   
return 0;
}