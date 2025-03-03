#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int a;
        int sum=1;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==1)
                sum*=a;
        }
        cout<<sum<<endl;
    }
    return 0;
}