#include<iostream>

using namespace std;

long long gcd(long long a,long long b)
{
    return b==0?a:gcd(b,a%b);
}

int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        if(n==-1&&m==-1)
            break;
        if(gcd(m,n)==1)
            cout<<"YES"<<endl;
        else
            cout<<"POOR Haha"<<endl;
    }
    return 0;
}