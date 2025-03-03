#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define RADIX 1000000000   // 更改为1e9以防止溢出
#define N 1000             

void mul(LL *a, int b, int &lenA) {
    LL carry = 0;
    for (int i = 0; i < lenA; ++i) {
        LL temp = a[i] * b + carry;
        a[i] = temp % RADIX;
        carry = temp / RADIX;
    }
    while (carry > 0) {
        a[lenA++] = carry % RADIX;
        carry /= RADIX;
    }
}

void div(LL *a, int b, int &lenA) {
    LL remainder = 0;
    for (int i = lenA - 1; i >= 0; --i) {
        LL temp = a[i] + remainder * RADIX;
        a[i] = temp / b;
        remainder = temp % b;
    }
    while (lenA > 1 && a[lenA - 1] == 0) --lenA;
}

void Catalan(LL c[], int &lenC, int n) {
    c[0] = 1;
    lenC = 1;
    for (int i = 1; i <= n; ++i) {
        mul(c, 4 * i - 2, lenC);
        div(c, i + 1, lenC);
    }
}

void Factorial(LL f[], int &lenF, int n) {
    f[0] = 1;
    lenF = 1;
    for (int i = 2; i <= n; ++i) {
        mul(f, i, lenF);
    }
}

void CatalanFactorial(LL result[], int &lenResult, int n) {
    LL c[N] = {0}; 
    int lenC = 0;
    Catalan(c, lenC, n);

    LL f[N] = {0}; 
    int lenF = 0;
    Factorial(f, lenF, n); 

    memset(result, 0, sizeof(LL) * N);
    lenResult = 0;
    for (int i = 0; i < lenC; ++i) {
        for (int j = 0; j < lenF; ++j) {
            LL temp = c[i] * f[j];
            int pos = i + j;
            // 处理进位
            while (temp > 0) {
                temp += result[pos];
                result[pos] = temp % RADIX;
                temp /= RADIX;
                if (pos >= lenResult) {
                    lenResult = pos + 1;
                }
                pos++;
            }
        }
    }
}

void output(LL *a, int lenA) {
    printf("%lld", a[lenA - 1]);
    for (int i = lenA - 2; i >= 0; --i) {
        printf("%09lld", a[i]); // 格式改为%09以匹配RADIX 1e9
    }
    printf("\n");
}

int main() {
    int n;
    while (cin >> n && n) {
        LL result[N] = {0};
        int lenResult = 0;
        CatalanFactorial(result, lenResult, n);
        output(result, lenResult);
    }
    return 0;
}