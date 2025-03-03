#include<iostream>

using namespace std;

int dp[31][100]={0};

int count =0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dp[1][0]=dp[1][10]=1;
    for(int i=2;i<=30;++i)
        for(int j=0;j<100;j+=10)
            if(j==0)
                for(int k=0;k<100;k+=10)
                    dp[i][j]+=dp[i-1][k];
            else
            {
                dp[i][j]=dp[i-1][j-10];
                if(j==70)
                    count+=dp[i][j];
            }
    cout<<count<<endl;
    return 0;
}