#include<iostream>

using namespace std;

int sum_sixteen(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n%16;
        n /= 16;
    }
    return sum;
}

int sum_ten(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int sum_twelve(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n%12;
        n /= 12;
    }
    return sum;
}

int main()
{
    for(int i = 2992; i < 10000; i++)
    {
        if(sum_ten(i) == sum_twelve(i) && sum_twelve(i) == sum_sixteen(i))
            cout << i << endl;
    }
    return 0;
}