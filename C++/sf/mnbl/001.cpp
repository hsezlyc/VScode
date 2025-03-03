#include<iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[100], k = 0, p = 0;
    for (int i = 0; i < n; ++i)
        a[i] = i + 1;
    while (n > 1)
    {
        p = (p + m - 1) % n;
        cout << "第" << ++k << "个出列的人是" << a[p] << endl;
        for (int i = p + 1; i < n; ++i)
            a[i - 1] = a[i];
        n--;
        if (p == n)
            p = 0;
    }
    cout << "最后一个出列的人是" << a[0] << endl;
    return 0;
}