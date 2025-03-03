#include<iostream>

using namespace std;

int main()
{
    double n;
    double sum=0;
    for(int i=0;i<12;i++)
    {
        cin>>n;
        sum+=n;
    }
    printf("$%.2f\n",sum/12);
    return 0;
}