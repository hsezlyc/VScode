#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n&&n)
    {
        int sum=0;
        int arr[6]={0};
        while(n--)
        {
            int a;
            cin>>a;
            arr[0]+=a/100;
            a%=100;
            arr[1]+=a/50;
            a%=50;
            arr[2]+=a/10;
            a%=10;
            arr[3]+=a/5;
            a%=5;
            arr[4]+=a/2;
            a%=2;
            arr[5]+=a;
        }
        for(int i=0;i<6;++i)
            sum+=arr[i];
        cout<<sum<<endl;
    }
    return 0;
}