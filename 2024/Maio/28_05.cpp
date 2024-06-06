/*
Given the binary representation of an integer as a string s, return the number of steps to 
reduce it to 1 under the following rules:

If the current number is even, you have to divide it by 2.

If the current number is odd, you have to add 1 to it.

It is guaranteed that you can always reach one for all test cases.


https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/?envType=daily-question&envId=2024-06-03

*/



#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string s =  "Let's take LeetCode contest";

    int n = s.length();
    int res = n-1;

    int empresta = 0;

    for (int i = n; i > 0; i--) {
        int val = s[i] - '0';

        if ((val + empresta) == 1) {
            
            //Número ímpar
            res++;
            empresta = 1;
        }

    }

    res += empresta;

    cout << res << endl;



    return 0;
}