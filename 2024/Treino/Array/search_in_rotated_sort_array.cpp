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
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly rotated at an unknown 
pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], 
nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 
3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is 
in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.
https://leetcode.com/problems/search-in-rotated-sorted-array/description/
*/

int main() { _
    vector<int> nums = { 4,5,6,7,0,1,2 };

    int left = 0, right = nums.size()-1, mid = 0, target = 4;

    int min_index = -1;

    while (left < right) {
        mid = (left+right) /2;

        if (nums[mid] < nums[right]) {
            right = mid;
        } else {
            left = mid+1;
        }
    }

    min_index = left;
    int res = -1;
    if (min_index == 0) {
        //Binary search common
        left = 0;
        right = nums.size()-1;
    } else if (nums[0] <= target && nums[min_index-1] >= target) {
        left = 0;
        right = min_index-1;
    } else {
        left = min_index;
        right = nums.size()-1;
    }

    while (left <= right) {
        mid = (left+right)/2;

        if (nums[mid] == target) {
            res = mid;
            break;
        }

        if (nums[mid] < target) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    cout << res << endl;

	return 0;
}
