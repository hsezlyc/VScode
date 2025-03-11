#include <iostream>

using namespace std;

int countChineseCharacters(string& text) 
{
    int count = 0;
    for (size_t i = 0; i < text.length(); ) 
    {
        unsigned char c = text[i];

        if ((c & 0xF0) == 0xE0) 
        { 
            count++;
            i += 3; 
        } else if ((c & 0xF8) == 0xF0) 
        { 
            count++;
            i += 4;
        } else {
            i++; 
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string s;
        getline(cin, s);
        cout << countChineseCharacters(s) << endl;
    }
    return 0;
}
