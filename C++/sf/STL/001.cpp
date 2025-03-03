#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> arr1(100);
int arr2[100];

vector<int>::iterator p1;
int *p2;

vector<int> list;

int main()
{
    for(p1=arr1.begin();p1!=arr1.end();p1++)
        cout<<*p1<<endl;
    int i;
    for(p2=arr2,i=0;i<100;++i,p2++)
        cout<<*p2<<endl;

    
}