#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a(6,0);

    for(auto i:a)
    {
        cout<<i<<endl;
    }
    return 0;
}