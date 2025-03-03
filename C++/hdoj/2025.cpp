#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        char max='A';
        size_t a[s.length()];
        int j=0;
        for(size_t i=0;i<s.length();++i)
        {
            if(s[i]>max)
            {
                max=s[i];
                memset(a,0,sizeof(a));
                j=0;
                a[j]=i;
                j++;
            }
            else if(s[i]==max)
            {
                a[j]=i;
                j++;
            }
        }

        int k=0;

        for(size_t i=0;i<s.length();++i)
        {
            cout<<s[i];
            if(i==a[k])
            {
                cout<<"(max)";
                k++;
            }
        }
    }
    return 0;
}