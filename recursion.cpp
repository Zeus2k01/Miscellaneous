#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else if(n==0)
    {
        return 1;
        
    }
}
int main()
{
    int n;
    cin>>n;
    fact(n);
    cout<<fact(n);
    
}