#include<iostream>

using namespace std;

int a[5][40]={0};
int count=0;

void num(int n)
{
    int t=0,sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
        t++;
    }
    a[t][sum]++;
}

int main()
{
    for(int i=1;i<=9999;++i)
        num(i);

    for(int i=1;i<=4;++i)
        for(int j=1;j<=i*9;++j)
            for(int k=1;k<=i;++k)
                count+=a[i][j]*a[k][j];
    cout<<count<<endl;
    return 0;
}
