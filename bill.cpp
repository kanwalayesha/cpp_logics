#include <iostream>
using namespace std;
int main()
{
 int amount;
 float update;
 cout<<"Enter shopping amount : ";
 cin>>amount;
 if(amount>=5000)
 { 
  update=(amount*20)/100;
  
  cout<<"you get 20% discount and your bill now :"<<amount-update<<endl;
}
else if(amount>=3000)
 { 
  update=(amount*10)/100;
  
  cout<<"you get 10% discount and your bill now : "<<amount-update<<endl;
}
else
 { 
  update=(amount*5)/100;
  
  cout<<"you get 5% discount and your bill now : "<<amount-update<<endl;
}
return 0;
}