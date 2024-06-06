/*
You are given two strings s and t of the same length and an integer maxCost.

You want to change s to t. Changing the ith character of s to ith character of t costs |s[i] - t[i]| 
(i.e., the absolute difference between the ASCII values of the characters).

Return the maximum length of a substring of s that can be changed to be the same as the corresponding 
substring of t with a cost less than or equal to maxCost. If there is no substring 
from s that can be changed to its corresponding substring from t, return 0.


https://leetcode.com/problems/get-equal-substrings-within-budget/?envType=daily-question&envId=2024-06-03

*/

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