#include<iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m&&(n||m))
    {
        int a[105];
        for(int i=0;i<n;++i)
            cin>>a[i];
        int j=0;
        while(j<n&&a[j]<m)
            ++j;
        for(int i=0;i<j;++i)
            cout<<a[i]<<" ";
        cout<<m<<" ";
        for(int i=j;i<n;++i)
            cout<<a[i]<<" ";
    }
    return 0;
}