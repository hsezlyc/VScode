#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr1[]={2, 3, 1, 5 ,4 ,6};

vector<int> arr2 {1,1,4,5,1,4,1,9,1,9,8,1,0};

int cmp(int a, int b)
{
    return a>b;
}

int main()
{
    // sort(arr2.begin(), arr2.end(),cmp);
    nth_element(arr2.begin(), arr2.begin()+4, arr2.end(), cmp);
    for(vector<int>::iterator p=arr2.begin();p!=arr2.end();p++)
        cout<<*p<<" ";
    
    return 0;
}