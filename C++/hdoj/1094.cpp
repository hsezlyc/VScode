#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sum=0;
        for(int i=0;i<n;++i)
        {
            int t;
            cin>>t;
            sum+=t;
        }
        cout<<sum<<endl;
    }
    return 0;
}