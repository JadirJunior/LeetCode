#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0); //n usar printf junto com cout
//^comentar _ para degubar código
#define endl '\n'


/* macro aleatorias
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
*/

/* macro para trabalhar com pair
#define f first
#define s second
*/

/* funcao para debugging
#define dgb(x) cout << #x << " = " << x << endl;
*/

/* define long long como ll
typedef long long ll
*/

/* define constantes infinitas
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
*/

/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, 
and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
https://leetcode.com/problems/3sum/description/
*/

int main() { _
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> arrays;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size();i++) {

        if (i > 0 && nums[i] == nums[i-1]) continue;

        int left = i+1;
        int right = nums.size()-1;

        while (left < right) {

            int sum = nums[i] + nums[left]+nums[right];

            if (sum == 0) {
                arrays.push_back({ nums[i], nums[left], nums[right] });

                while (left < right && nums[left] == nums[left+1] ) left++;
                while (left < right && nums[right] == nums[right-1]) right--; 

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else if (sum > 0) {
                right--;
            }
        }

    }

    for (auto arr : arrays) {
        cout << "Novo Array: ";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

	return 0;
}
