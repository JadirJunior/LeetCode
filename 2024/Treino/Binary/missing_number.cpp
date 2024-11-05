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
Given an array nums containing n distinct numbers in the 
range [0, n], return the only number in the range that is missing from the array.
https://leetcode.com/problems/missing-number/description/
*/

int main() { _

    vector<int> nums = { 3, 0, 1 };
    int res;

    //Version O(nlog(n))
    // sort(nums.begin(), nums.end());

    // if (nums[0] != 0) {
    //     res = 0;
    // }

    // for (int i = 0; i < nums.size()-1; i++) {
    //     if ( (nums[i] + 1) != nums[i+1] ) {
    //         res = nums[i]+1;
    //         break;
    //     }
    // }


    //Version O(n)
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }

    int realSum = ((nums.size() + 1) * (nums.size())) / 2;

    res = realSum - sum;

    cout << res << endl;


	return 0;
}
