#include <iostream>
using namespace std;
int main(){
    cout<<"enter size of array";
    int size;
    cin>>size;
    int arr[size];
        for(int i=0;i<size;i++){
        cin>>arr[i];
        
        cout<<"\n";
    }
    for(int i=0;i<size;i++){
      
        cout<<arr[i];
        cout<<"\n";
    }
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if (arr[i]>arr[j])
            {
                int Temp=arr[i];
                arr[i]=arr[j];
                arr[j]=Temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }     
}








