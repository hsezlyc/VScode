#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, string> regionMap = {
        {"33", "Zhejiang"},
        {"11", "Beijing"},
        {"71", "Taiwan"},
        {"81", "Hong Kong"},
        {"82", "Macao"},
        {"54", "Tibet"},
        {"21", "Liaoning"},
        {"31", "Shanghai"}
    };

    while (n--)
    {
        string s;
        cin >> s;

        string region = s.substr(0, 2);
        if (regionMap.find(region) != regionMap.end())
            printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",regionMap[region].c_str(), s[10], s[11], s[12], s[13], s[6], s[7], s[8], s[9]);
    }
    return 0;
}
