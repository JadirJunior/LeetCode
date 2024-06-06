

/*
You are given a string s. The score of a string is defined as the sum of the absolute difference 
between the ASCII values of adjacent characters.

Return the score of s.


https://leetcode.com/problems/score-of-a-string/?envType=daily-question&envId=2024-06-03

*/


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