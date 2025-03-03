#include<iostream>

using namespace std;

int main()
{

    long long n;
    while(cin>>n)
    {
        long long sum=0;
        sum=n*(n+1)/2;
        cout<<sum<<endl<<endl;
    }
    return 0;
}