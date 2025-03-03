#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double n,m;
    while(cin>>n>>m)
    {
        double sum=0;
        for(int i=0;i<m;++i)
        {
            sum+=n;
            n=sqrt(n);
        }
        printf("%.2f\n",sum);
    }
    return 0;
}