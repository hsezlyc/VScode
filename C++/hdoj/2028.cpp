#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}

int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        for(int i=0;i<n;++i)
            cin>>a[i];


        int LCM=a[0];
        
        for(int i=1;i<n;++i)
        {
            LCM=lcm(LCM,a[i]);
        }

        cout<<LCM<<endl;
    }
    
    return 0;
}