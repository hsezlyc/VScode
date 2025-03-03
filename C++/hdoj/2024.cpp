#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.get();
    string str[n];

    for(int i=0;i<n;i++)
        getline(cin,str[i]);
    
    for(int i=0;i<n;++i)
    {
        bool isc=true;
        for(size_t j=0;j<str[i].length();++j)
        {
            if(isdigit(str[i][0]))
            {
                isc=false;
                cout<<"no"<<endl;
                break;
            }
            else if(!(isalpha(str[i][j])||str[i][j]=='_'||isdigit(str[i][j])))
            {
                isc=false;
                cout<<"no"<<endl;
                break;
            }
        }
        if(isc)
            cout<<"yes"<<endl;
    }

    return 0;
}