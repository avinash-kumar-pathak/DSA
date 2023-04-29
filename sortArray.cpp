#include<iostream>
using namespace std;
int main()
{
    // inputing an array
    int n;
    cout<<"enter the length of your array less than 20";
    cin>>n;
    int arr[20];
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    //beginning the sorting process by selection sort
    for(int i = 0;i<n-1;i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }

        }
    }
    for(int a= 0; a<n; a++)
    {
        cout<<arr[a]<<" ";
    }
    return 0;
}