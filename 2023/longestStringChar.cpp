#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <math.h>

using namespace std;



int main(){

    vector<string> words = {"a","b","ba","bca","bda","bdca"};


    sort(words.begin(), words.end(), [](const string &a, const string &b) {
        return a.length() < b.length();
    });


    unordered_map<string, int> dp;
    int ret = 0;

    for (string w : words) {
        
        dp[w] = 1;

        for (int i = 0; i < w.length(); i++) {
            string prev_word = w.substr(0, i) + w.substr(i+1);

            if (dp.find(prev_word) != dp.end()) {
                dp[w] = max(dp[w], dp[prev_word]+1);
            }
        }

        ret = max(dp[w], ret);

    }

    cout << ret;

    return 0;
}