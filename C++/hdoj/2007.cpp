#include<iostream>

using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        if(m>n)
        {
            int temp=m;
            m=n;
            n=temp;
        }
        int sum1=0,sum2=0;
        for(int i=m;i<=n;i++)
        {
            if(i%2==0)
                sum1+=i*i;
            else
                sum2+=i*i*i;
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}