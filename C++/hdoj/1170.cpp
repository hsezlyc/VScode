#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b,n;
    cin>>n;
    char c;
    while(n--)
    {
        cin>>c>>a>>b;
        switch(c)
        {
            case '+':
                cout<<a+b<<endl;
                break;
            case '-':
                cout<<a-b<<endl;
                break;
            case '*':
                cout<<a*b<<endl;
                break;
            case '/':
                if(a%b == 0)
                    cout<<a/b<<endl;
                else
                    printf("%.2f\n", (double)a/b);
                break;
        }
    }
    return 0;
}