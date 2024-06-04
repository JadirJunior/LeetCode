#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <climits>

using namespace std;



int main()
{
    int k = INT_MIN;

    stack<int> percorridos;

    vector<int> nums = {3, 1, 4, 2};

    bool res = false;
    for (int i = nums.size()-1; i >= 0 ;i--) {

        
        if (nums[i] < k) {
            res = true;
            break;
        }

        while (!percorridos.empty() && nums[i] > percorridos.top()) {
            k = percorridos.top();
            percorridos.pop();
        }

        percorridos.push(nums[i]);
    }

    cout << res;

    return 0;
}