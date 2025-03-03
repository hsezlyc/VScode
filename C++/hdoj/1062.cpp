#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        cin.get();
        qt:
        char c;
        string s;
        while(cin.get(c))
        {
            if(c=='\n'){
                reverse(s.begin(),s.end());
                cout<<s<<endl;
                goto qt;
            }
            if(c==' ')
            {
                reverse(s.begin(),s.end());
                cout<<s<<" ";
                goto qt;
            }
            s+=c;
        }
        
    }
    return 0;
}