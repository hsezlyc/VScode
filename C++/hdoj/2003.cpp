#include<iostream>

using namespace std;

int main()
{
    double num;
    while(cin>>num)
        printf("%.2lf\n",num<0?-num:num);
    return 0;
}