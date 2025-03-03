#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n&&n)
    {
        int cows[55]={1,2,3,4};
        for(int i=4;i<=n;i++)
            cows[i]=cows[i-1]+cows[i-3];
        cout<<cows[n-1]<<endl;
    }
    return 0;
}