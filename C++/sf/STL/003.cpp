#include<bits/stdc++.h>

using namespace std;

const int INF =0x3f3f3f;

int arr[]={1,1,4};

int main()
{
    memset(arr,INF,sizeof(arr));
    for(int i=0;i<3;++i)
        cout<<arr[i]<<endl;
    return 0;
}