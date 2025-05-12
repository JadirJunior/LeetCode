

/*

You are given an integer array digits, where each element is a digit. The array may contain duplicates.
You need to find all the unique integers that follow the given requirements:
The integer consists of the concatenation of three elements from digits in any arbitrary order.
The integer does not have leading zeros.
The integer is even.
For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.
Return a sorted array of the unique integers.

https://leetcode.com/problems/finding-3-digit-even-numbers/description/?envType=daily-question&envId=2025-05-12
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ret, digits = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        
    unordered_map<int, int> digitTimes;

    for (int i = 0; i < digits.size(); i++) {
        digitTimes[digits[i]] += 1;
    }

    vector<int> allNumbers;

    for (int i = 100; i < 999; i+=2) {
        unordered_map<int, int> repeatDigitsNow;
        int number = i;
        while (number > 0) {
            repeatDigitsNow[ number % 10 ] += 1;
            number /= 10;
        }

        int stop = 0;
        for (pair<int, int> n : repeatDigitsNow) {
            if (digitTimes[n.first] < n.second) {
                stop = 1;
                break;
            }
        }

        if (!stop) {
            ret.push_back(i);
        }
    }

    for (int i = 0; i < ret.size(); i++) {
        cout << ret[i] << " ";
    }
    cout << endl;

    return 0;
}