#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        int count=3;
        while(m--)
        {
            count=(count-1)*2;
        }
        cout<<count<<endl;
    }
    return 0;
}