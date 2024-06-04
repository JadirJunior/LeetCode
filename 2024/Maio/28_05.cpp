#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string s =  "Let's take LeetCode contest";

    cin >> s;

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