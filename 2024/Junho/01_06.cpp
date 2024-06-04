#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    string s = "zaz";
    int res = 0;
    for (int i = 1; i < s.length(); i++) {
        res += abs(int(s[i])  - int(s[i - 1]));
    }
    cout << res << endl;
    return 0;
}