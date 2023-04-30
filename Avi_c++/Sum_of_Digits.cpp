#include<iostream>
using namespace std;

int main(){
    int Num,Rem=0,Temp;
    cout<<"Enter any no"; //Take input from user.
    cin>>Num;
    while(Num>0){
        Temp=Num%10;
        Rem=Rem+Temp;
        Num=Num/10;
    }
cout<<"Sumof digits:- "<< Rem;
}