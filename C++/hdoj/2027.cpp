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
        int a[5]={0,0,0,0,0};
        for(size_t i=0;i<s.length();++i)
        {
            switch(s[i]){
                case 'a':a[0]++;break;
                case 'e':a[1]++;break;
                case 'i':a[2]++;break;
                case 'o':a[3]++;break;
                case 'u':a[4]++;break;
                default :continue;
            }
        }
        cout<<"a:"<<a[0]<<endl;
        cout<<"e:"<<a[1]<<endl;
        cout<<"i:"<<a[2]<<endl;
        cout<<"o:"<<a[3]<<endl;
        cout<<"u:"<<a[4]<<endl;

        memset(a,0,sizeof(a));

        if(n!=0)
            cout<<endl;
    }
    return 0;
}