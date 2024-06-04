#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

int main()
{
    string s = "z";
    string t = "abcde";

    int maxSequence = t.length();
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[j]) {
            j++;
            maxSequence--;
        }
    }

    cout << maxSequence << endl;

    return 0;
}