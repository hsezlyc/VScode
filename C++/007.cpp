#include<iostream>

using namespace std;

int main()
{
    int count=0,k;
    char c;
    while(1)
    {
        c=cin.get();
        if(c=='3')
            count++;
        else if(c==' ')
            break;
    }
    cin>>k;
    if(count==k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}