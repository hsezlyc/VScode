#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        vector<vector<int>> a(n+1,vector<int>(n+1,0));
        a[1][1]=1;
        for(int i=1;i<=n;++i)
            for(int j=1;j<=i;++j)
            {
                if(a[i-1][j]==0)
                    a[i][j]=1;
                else
                    a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=i;++j)
            {
                cout<<a[i][j];
                if(j==i)
                    cout<<endl;
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}