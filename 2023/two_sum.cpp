#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>



using namespace std;

int main()

{


    unordered_map<int, int> numsMap;
    vector<int> nums = {2, 7, 11, 15};

    vector<int> nums2;

    int target = 9;

    for (int i = 0; i < nums.size(); i++) {

        int val = target - nums[i];

        if (numsMap.find(val) != numsMap.end()) {

            nums2.push_back(numsMap[val]);
            nums2.push_back(i);
            break;

        }

        numsMap[nums[i]] = i;
    }


    for (int a : nums2) {
        cout << a << " ";
    }



    return 0;
}