#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int, int> digits;
    /*
        (x*(x-1))/2
    */
    int res = 0;
    
    for (int n : nums) {
        digits[n]++;
    }
    
    for (pair<int, int> par : digits) {
        
        if (par.second > 1) {
            res += ( par.second*(par.second-1) ) / 2;
        }
        
    }
    
    return res;
}

int main()
{

    vector<int> nums = {1, 2, 3, 1, 1, 3};

    cout << numIdenticalPairs(nums) << endl;
    return 0;
}