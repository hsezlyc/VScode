#include<iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a=n/m;
        int b=n%m;

        int start=m+1;
        for(int i=0;i<a;++i)
        {
            cout<<start+2*m*i<<" ";
        }

        if(b!=0)
        {
            cout<<2*n-b+1<<endl;
        }
    }
    return 0;
}