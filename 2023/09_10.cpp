#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> calculatePosition(vector<int> nums, int start, int end, int target) {
    vector<int> ret;

    int middle = floor((start + end)/2);

    if (start <= end && nums.size() > 0 && middle >= 0 && middle < nums.size()) {

        if ( nums[middle] < target ) {

            return calculatePosition(nums, middle+1, end, target);

        } else if (nums[middle] > target) {
            return calculatePosition(nums, start, middle-1, target);

        } else {

            int esq = middle, dir = middle;

            while ((esq-1) >= 0 && nums[esq-1] == target) {
                esq--;
            }

            while ((dir+1) < nums.size() && nums[dir+1] == target) {
                dir++;
            }

            ret.push_back(esq);
            ret.push_back(dir);

            return ret;
        }
    } else {
        ret = {-1, -1};
        return ret;
    }

}


int main() {

    vector<int> nums = {2, 2};
    int target = 3; 

    vector<int> ret =  calculatePosition(nums, 0, nums.size(), target);

    for (int n : ret) {
        cout << n << " ";
    }

    return 0;
}
