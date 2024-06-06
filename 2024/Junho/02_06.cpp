/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

https://leetcode.com/problems/reverse-string/?envType=daily-question&envId=2024-06-03
*/

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    vector<char> s = {'a', 'b', 'c', 'd'};
    
    for (int i = 0; i < s.size(); i++) {
        if (i == s.size() / 2) {
            break;
        }
        swap(s[i], s[s.size() - 1 - i]);
        
    }
    for (char c : s) {
        cout << c << endl;
    }

    


    return 0;
}