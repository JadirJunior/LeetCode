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
Given an integer array nums, find the subarray with the largest sum, and return its sum.
https://leetcode.com/problems/maximum-subarray/description/
*/

int main() { _
    vector<int> nums = { 5,4,-1,7,8 };

    int max_sum = INT_MIN;
    int curr_sum = 0;

    for (int i = 0; i < nums.size();i++) {
        curr_sum += nums[i];
        max_sum = max(curr_sum, max_sum);

        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }

    cout << max_sum << endl;

	return 0;
}
