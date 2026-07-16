//input and output
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the subject you calculate the marks : ";
    cin>>number;
    vector<int> marks;
    int sum=0;
    for(int i=0;i<=number;i++)
    {
        int number2;
        cout<<"Enter the marks of subject "<<i+1<<endl;
        cin>>number2;
        marks.push_back(number2);
        sum=sum+marks[i];
    }
    cout<<"The total marks of students are: "<<sum;

}