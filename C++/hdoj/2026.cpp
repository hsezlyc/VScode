#include<iostream>

using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        s[0]-='a'-'A';
        for(size_t i=0;i<s.length();++i)
        {
            if(s[i]==' ')
            {
                s[i+1]-='a'-'A';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}