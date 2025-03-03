#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        double x;
        int a,b,c;
        a=b=c=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0)
                c++;
            else if(x==0)
                b++;
            else
                a++;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}