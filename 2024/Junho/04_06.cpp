#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> map;
    string s = "accaca";

    int len = s.length();
    int sum = 0;

    for (char c : s) {
        map[c]++;

        if (map[c] % 2 == 1) {
            sum++;
        } else {
            sum--;
        }

    }
    int res = 0;
    if (sum >= 1) {
        res = s.length() - sum + 1;
    } else {
        res = s.length(); 
    }

    cout << res;

    return 0;
}