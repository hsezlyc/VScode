#include<bits/stdc++.h>

using namespace std;

int main()
{
    for(long double i=1;i<=100;++i)
    {
        printf("%Lf\n",i);
        printf("%Lf\n",tgamma(i+1));
    
    }
    return 0;
}