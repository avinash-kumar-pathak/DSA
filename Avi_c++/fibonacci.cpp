#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a no"<<"\n";
    int no;
    int a=0;
    int b=1;
    cin>>no;
    for(int i=0;i<no;i++){
        cout<<a<<endl;
        int c= a+b;
        a=b;
        b=c;
        
    }
}
