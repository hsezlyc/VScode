#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        
        int a[n];

        for(int i=0;i<n;++i)
            cin>>a[i];

        int *min=&a[0];

        for(int i=1;i<n;++i)
            if(a[i]<*min)
                min=&a[i];
        
        swap(min,&a[0]);

        for(int i=0;i<n-1;++i)
            cout<<a[i]<<" ";
        cout<<a[n-1]<<endl;
    }
    return 0;
}