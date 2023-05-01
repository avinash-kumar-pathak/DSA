#include<iostream>
using namespace std;
/*int main(){ /*Iterative method
    int num,fact=1;
    cout<<"Enter any no";
    cin>>num;
    if(num == 0){
        cout<<"Factorial is 1";
    }
    while(num>1){
        fact=fact*num;
        num--;
    }
    cout<<"Factoria of the no is:- "<<fact;
}*/
int main(){ 
    cout<<fact(5); /*Recursive method*/
}
int fact(int num){
    if(num==0)
    return 1;
    else
    return num*fact(num-1);

}