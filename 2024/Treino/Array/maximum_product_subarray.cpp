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
Given an integer array nums, find a 
subarray that has the largest product, and return the product.
The test cases are generated so that the answer will fit in a 32-bit integer.
https://leetcode.com/problems/maximum-product-subarray/description/
*/

int main() { _
    vector<int> nums = { -2, 0, -1 };

    int max_product = INT_MIN;
    int curr_product = 1;

    for (int i = 0; i < nums.size(); i++) {
        curr_product *= nums[i];

        max_product = max(curr_product, max_product);

        if (curr_product == 0) {
            curr_product = 1;
        }
    }

    curr_product = 1;

    for (int i = nums.size() - 1; i >= 0; i--) {
        curr_product *= nums[i];
        max_product = max(curr_product, max_product);
        if (curr_product == 0) curr_product = 1;
    }

    cout << max_product << endl;

	return 0;
}
