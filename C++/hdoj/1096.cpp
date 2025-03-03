#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        int sum=0;
        for(int i=0;i<m;++i)
        {
            int t;
            cin>>t;
            sum+=t;
        }
        cout<<sum<<endl<<endl;
    }
    return 0;
}