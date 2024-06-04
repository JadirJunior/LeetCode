#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string s = "mhckeerb";
    string t = "chbrwxeg";
    int maxCost = 14;

    int cost = 0;
    int length = 0;
    int i = 0;
    for (int j = 0; j < s.length();j++) {

        int candidate = abs( int(s[j]) - int(t[j]));

        cost += candidate;

        while (cost > maxCost) {
            cost -= abs( int(s[i]) - int(t[i]));
            i++;
        }

        length = max(length, j - i + 1);
    }

    cout << length;

    return 0;
}