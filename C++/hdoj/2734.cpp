#include<iostream>

using namespace std;

int strlen(char s[])
{
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

long long qiucksum(char s[])
{
    long long sum = 0;
    for(int i = 0; i< strlen(s); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            sum += (s[i] - 'A' + 1)*(i+1);
        else if(s[i] == ' ')
            sum += 0;
    }
    return sum;
}

int main()
{
    char c[256] = {0};
    while(cin.getline(c, 256))
    {
        if(c[0] == '#')
            break;
        cout << qiucksum(c) << endl;
    }
    return 0;
}