#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d/%d/%d",&a,&b,&c)!=EOF)
    {
        if(a%4==0&&a%100!=0||a%400==0)
            month[2]=29;
        else
            month[2]=28;
        int sum=0;
        for(int i=1;i<b;i++)
            sum+=month[i];
        sum+=c;
        cout<<sum<<endl;
    }
    return 0;
}