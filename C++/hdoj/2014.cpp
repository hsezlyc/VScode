#include<iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    while(cin>>n)
    {
        int min = 100;
        int max = 0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            max=temp>max?temp:max;
            min=temp<min?temp:min;
            sum+=temp;
        }
        printf("%.2f\n", (sum-min-max)*1.0/(n-2));
        sum=0;
    }
    return 0;
}