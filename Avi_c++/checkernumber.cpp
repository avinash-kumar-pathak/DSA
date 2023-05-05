#include <iostream>
#include <cstdio>
/*#include <cmath>
#include <vector>
#include <algorithm>*/
using namespace std;

int main()
{
    // Complete the code.
    int a, b;
    cin>>a>>b;
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = a; i <= b; i++){
        // cout<<arr[i];
        if (i <= 9){
            cout<<arr[i-1]<<"\n";
        }
        else{
            if(i%2==0){
                cout<<"even"<<"\n";
            }
            else{
                cout<<"odd"<<"\n";
            }
        }
        
        
    }
    return 0;
}