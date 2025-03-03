#include<iostream>

using namespace std;

#define LL long long
#define RADIX 10000000000
#define N 10

void mul(LL *a,int b,int &lenA)
{    
    for(int i=0;i<lenA;++i)
    {
        a[i]*=b;
    }

    for(int i=0;i<lenA;++i)
    {
        if(a[i]>=RADIX)
        {
            a[i+1]+=(a[i]/RADIX);
            a[i]%=RADIX;
        }
    }

    if(a[lenA])
        lenA++;

    while(lenA>1&&a[lenA-1]==0)
        lenA--;
}

void div(LL *a,int b,int &lenA)
{
    for(int i=lenA-1;i>-1;i--)
    {
        if(i>0)
            a[i-1]+=((a[i]%b)*RADIX);

        a[i]/=b;
    }

    while(lenA>1&&a[lenA-1]==0)
        lenA--;
}

LL c[101][N];
int cLen[101];



void Catalan(LL n)
{
    c[0][0]=1;
    cLen[0]=1;
    for(LL i=0;i<=n;++i)
    {
        memcpy(c[i],c[i-1],cLen[i-1]*sizeof(LL));
        cLen[i]=cLen[i-1];
        mul(c[i],4*i-2,cLen[i]);
        div(c[i],i+1,cLen[i]);
    }
}

void output(LL *a,int &lenA)
{
    printf("%lld",a[lenA-1]);
    for(LL i=lenA-2;i>=0;--i)
    {
        printf("%010lld",a[i]);
    }
}

int main()
{
    Catalan(100);
    LL n;
    while(cin>>n)
    {
        output(c[n],cLen[n]);
        cout<<endl;
    }
    return 0;
}