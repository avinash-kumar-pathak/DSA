#include<iostream>
using namespace std;
int main(){
    cout<<"Enter any number";
    int No,Count=0;
    cin>>No;
    while(No>0){
        No=No/10;
        Count++;
    }
    cout<<Count;
    
    


    

}