#include<iostream>

using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int x,y;
    while (cin >> x >> y)
    {
        if (x == 0 && y == 0)
            break;
        bool flag = false;
        for (int i = x; i <= y; i++)
        {
            int n = i * i + i + 41;
            if (!isPrime(n))
            {
                cout << "Sorry" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "OK" << endl;
    }
    return 0;
}