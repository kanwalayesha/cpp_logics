//Find Largest number 
#include <iostream>>
using namespace std;
int main()
{
    int arr[] = {10, 25, 3, 47, 5};
    int largest = arr[0];
    for(int i=1; i<5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout<<"The largest number in the array is: "<<largest;
    return 0;
}