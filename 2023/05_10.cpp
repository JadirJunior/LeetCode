#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums = {1, 2};
    unordered_map<int, int> frequence;
    vector<int> res;

    

    int n = nums.size() / 3;

    for (int num : nums) {
        frequence[num]++;


        if (frequence[num] > n && frequence[num] != -1) {
            res.push_back(num);
            frequence[num] = -1;
        }
    }

    for (int num : res) {
        cout << num << " ";
    }


    return 0;
}