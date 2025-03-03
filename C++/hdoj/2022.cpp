#include<bits/stdc++.h>

using namespace std;

struct point{
    int x,y;
    int s;
};

int main()
{
    int m,n;
    
    while(cin>>m>>n&&(m||n))
    {
        int a[m][n];
        point p[m*n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        int max=0;
        int count=1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(abs(a[i][j])>max)
                {
                    max=abs(a[i][j]);
                    p[0].x=i;
                    p[0].y=j;
                    p[0].s=a[i][j];
                }
                else if(abs(a[i][j])==max)
                {
                    p[count].x=i;
                    p[count].y=j;
                    p[count].s=a[i][j];
                    count++;
                }
            }
        cout<<p[0].x+1<<" "<<p[0].y+1<<" "<<p[0].s<<endl;
    }
    return 0;
}