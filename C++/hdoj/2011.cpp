#include<iostream>

using namespace std;

int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int n;
        cin>>n;
        double sum=0;
        for(int i=1;i<=n;++i)
        {
            if(i%2==1)
                sum+=1.0/i;
            else
                sum-=1.0/i;
        }
        printf("%.2f\n",sum);
    }
    return 0;
}