#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int len=s.length();
        int count = 0;
        for(int i=0;i<len;++i)
            if(s[i]>='0'&&s[i]<='9')
                count++;
        cout<<count<<endl;
    }
    return 0;
}