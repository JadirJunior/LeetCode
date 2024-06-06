/*
You are given two strings s and t consisting of only lowercase English letters.

Return the minimum number of characters that need to be appended to the end of s so that t becomes a subsequence of s.

A subsequence is a string that can be derived from another string by deleting some or no characters without changing the 
order of the remaining characters.


https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/?envType=daily-question&envId=2024-06-03

*/


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