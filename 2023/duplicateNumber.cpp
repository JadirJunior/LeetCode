#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <math.h>

using namespace std;



int main(){

    unordered_map<int, int> m;

    sort(m.begin(), m.end(), [](const pair<int, int> &par1, const pair<int, int> par2) {
        return par1.second < par2.second;
    });

    vector<int> nums;

    int ret = -1;
    for (int n : nums) {
        
        if (m[n] > 1) {
            ret = m[n];
            break;
        } else {
            m[n]++;
        }

    }

    cout << ret;

    return 0;
}