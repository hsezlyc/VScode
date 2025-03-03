#include<iostream>

using namespace std;

int pantao(int n)
{
    if (n == 1)
        return 1;
    return pantao(n - 1) * 2 + 2;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << pantao(n) << endl;
    }
    return 0;
}