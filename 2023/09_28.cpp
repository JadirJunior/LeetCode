#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{


    vector<int> nums = {0};

    vector<int> newVec(nums);
    
    int lastImpar = nums.size()-1, lastPar = 0;

    for (int num : nums) {
        
        if (num % 2 == 0) {
            newVec[lastPar] = num;
            lastPar++;
        } else {
            newVec[lastImpar] = num;
            lastImpar--;
        }
    }

    for (int n : newVec) {
        cout << n << " ";
    }

    return 0;
}