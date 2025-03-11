#include<iostream>

using namespace std;

int fun1(string a)
{
    int start;
    int begin=0;
    if(a[0]=='-')
        begin=1;
    
    for(size_t i=begin;i<a.length();++i)
    {
        if(a[i]=='0')
        {
            continue;
        }
        else
        {
            start=i;
            break;
        }
    }
    return start;
}

int fun2(string a)
{
    int end;
    for(size_t i=a.back();i>=0;--i)
    {
        if(a[i]=='0')
        {
            continue;
        }
        else
        {
            end=i;
            break;
        }
    }
    return end;
}

