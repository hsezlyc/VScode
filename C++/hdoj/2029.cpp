#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.get();

    while(n--)
    {
        string s;
        getline(cin,s);

        string ss=s;
        reverse(s.begin(),s.end());
        if(ss==s)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}