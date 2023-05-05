#include <iostream>
#include <cstdio>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
int max;
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                max=a;
            }
            else{
                max=d;
            }
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            max=b;
        }
        else{
            max=d;
        }
    
    }
    else if(c>d)
    {
        max=c;   
    }
    else{
        max=d;
    }
    return max ;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


/*

#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int max_of_four(int a,int b,int c,int d){
    int num;
    int x = max(a, max(b, max(c, d)));  
    if (x == a)  
        num=a;  
    if (x == b)  
        num=b;  
    if (x == c)  
        num=c;  
    if (x == d)  
        num=d;
    return num;
}



*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}


