

/*

You are given a string s and an integer t, representing the number of transformations to perform. In one transformation, every character in s is replaced according to the following rules:

If the character is 'z', replace it with the string "ab".
Otherwise, replace it with the next character in the alphabet. For example, 'a' is replaced with 'b', 'b' is replaced with 'c', and so on.
Return the length of the resulting string after exactly t transformations.

Since the answer may be very large, return it modulo 109 + 7.

https://leetcode.com/problems/total-characters-in-string-after-transformations-i/description/?envType=daily-question&envId=2025-05-13
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "abcsr";
    int t = 2;
    const int MOD = 1e9 + 7;
    vector<long long int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }

    while (t--) {
        vector<long long int> newFreq(26, 0);

        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] == 0) continue;
            if (i == 25) {
                newFreq[0] = (newFreq[0] + freq[i]) % MOD;
                newFreq[1] = (newFreq[1] + freq[i]) % MOD;
            } else {
                newFreq[i+1] = (newFreq[i+1] + freq[i]) % MOD;
            }
        }

        freq = newFreq;
    }

    long long total = 0;
    for (int i = 0; i < freq.size(); i++) {
        total =  (total + freq[i]) % MOD;    
    }


    cout << total << endl;
    return 0;
}