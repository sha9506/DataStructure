#include<iostream>
using namespace std;
 
int fibonacci(int n)
{
    int f[n+1];
    
    f[0]=0;
    f[1]=1;
    
    for(int i=2; i<=n; i++)
        f[i]= f[i-1]+f[i-2];
    
    return f[n];
}
 
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
 
    cout<<"Required fibonacci number is ";
    cout<<fibonacci(n);
 
    cout<<endl;
    return 0;
}
