#include <iostream>
using namespace std;

void targetseek(int nums[],int target,int size)
{
    int output;
    
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<4; j++)
        { 
            output=nums[i]+nums[j];
            if(output==target)
            { 
                cout<<endl<<"Output: "<<"["<<nums[i]<<", "<<nums[j]<<"]";
                break;
            }
        }
    }
}
int main()
{
    int nums[1000],target,size;
    cout<<endl<<"Enter the size of the array: ";
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cout<<endl<<"Enter the value for element "<<i<<":";
        cin>>nums[i];
    }
    cout<<endl<<"You have enetered: [ ";
    
    for(int i=0; i<size; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<"]";

    cout<<endl<<"Enter the target: ";
    cin>>target;
    targetseek(nums,target,size);
    return 0;

}