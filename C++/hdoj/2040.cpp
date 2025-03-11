#include<iostream>

using namespace std;

int qinhesum(int n)
{
    int sum=0;
    for(int i=1;i<n;++i)
        if(n%i==0)
            sum+=i;
    return sum;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(qinhesum(a)==b&&qinhesum(b)==a)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}