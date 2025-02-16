#include<iostream>

using namespace std;

int main()
{
    char a;
    string s;
    a=cin.get();
    cin.ignore();
    getline(cin,s);
    cout<<(int)a<<endl;
    cout<<s<<endl;
    return 0;
}