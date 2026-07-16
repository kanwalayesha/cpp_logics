
#include <iostream>
using namespace std;
int main()
{

 int array[]={19,34,24,24,11};
int number;
 cout<<"Enter number you check its in list or not : ";
 cin>>number;
 bool find=false;
 for(int i =0;i<5;i++)
 {
   if(array[i]==number)
   {
     find=true;
   }
   else
   {
     find=false;
   }
}
if(find)
{
  cout<<"Number is in list";
}
else
{
  cout<<"Number is not in list";
}
return 0;
}
 