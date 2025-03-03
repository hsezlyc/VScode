#include<iostream>

using namespace std;

long double jiecheng(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*jiecheng(n-1);
}

int main()
{
    int k;
    long double e=1;
    scanf("%d",&k);
    if(k==0)
        goto end;
    for(int i=1;i<=k;++i)
        e+=1/(long double)jiecheng(i);   
    end:
    printf("%.10Lf",e);
    return 0;
}