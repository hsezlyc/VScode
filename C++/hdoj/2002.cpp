#include<iostream>

using namespace std;

int main()
{
    double r;
    while(cin>>r)
    {
        printf("%.3lf\n",3.1415927*r*r*r*4/3);
    }
    return 0;
}