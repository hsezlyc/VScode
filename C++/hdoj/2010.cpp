#include<iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int status=0;
        for(int i=n;i<=m;++i)
        {
            int a,b,c;
            c=i%10;
            b=i/10%10;
            a=i/100;
            if(i==a*a*a+b*b*b+c*c*c)
            {
                if(status==1)
                    cout<<" ";
                cout<<i;
                status=1;
            }
        }
        if(status==0)
            cout<<"no"<<endl;
    }
    return 0;
}