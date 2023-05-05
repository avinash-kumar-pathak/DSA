#include <iostream>
using namespace std;
int main(){
    cout<<"Enter how many numbers you want to check";
    int check_no;
    cin>>check_no;
    
    for(int i=1;i<=check_no;i++)
    {
        int no;
        int count=0;
        cin>>no;
        for(int j=1;j<=no;j++)
    {
        if(no %2==0)
        {
            count++;
        }

        
    }
        if(count>2)
        {
            cout<<"not prime"<<"\n";
        }
        else{
            cout<<"prime"<<"\n";
        } 

    }
    

}