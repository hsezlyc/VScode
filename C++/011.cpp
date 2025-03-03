#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    double x,sum;
    cin>>x>>n;
    for(int i=0;i<=n;i++)
        sum+=pow(x,i);
    printf("%.2f\n",sum);
    return 0;
}