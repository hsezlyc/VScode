#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        vector<double> sum1(n, 0.0);
        vector<double> sum2(m, 0.0);
        vector<vector<int>> a(n, vector<int>(m));

        int count=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                sum1[i]+=a[i][j];
                sum2[j]+=a[i][j];
            }

        for(int i=0;i<n;++i)
        {
            printf("%.2lf",sum1[i]/m);
            if(i!=n-1)
                cout<<" ";
            else
                cout<<endl;
        }

        for(int i=0;i<m;++i)
        {
            printf("%.2lf",sum2[i]/n);
            if(i!=m-1)
                cout<<" ";
            else
                cout<<endl;
        }
        for(int i=0;i<n;++i)
        {
            bool state=true;
            for(int j=0;j<m;++j)
            {
                if(a[i][j] < sum2[j]/n)
                    state = false;
            }

            if(state)
                count++;
        }
        cout<<count<<endl<<endl;
    }
    return 0;
}