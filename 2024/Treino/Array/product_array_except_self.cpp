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
Given an integer array nums, return an array answer such that answer[i] is equal to the product of 
all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.
https://leetcode.com/problems/product-of-array-except-self/description/
*/

int main() { _
    vector<int> nums = {1, 2, 3, 4};
    vector<int> answer(nums.size(), 1);
    vector<int> left(nums.size(), 1), right(nums.size(), 1);

    int product = 1;
    left[0] = 1;
    for (int i = 1; i < nums.size(); i++) {
        left[i] = product*nums[i-1];
        product = left[i];
    }

    product = 1;
    right[nums.size()-1] = 1;
    for (int i = nums.size()-2; i >= 0; i--) {
        right[i] = product*nums[i+1];
        product = right[i];
    }

    cout << "Answer: ";
    for (int i = 0; i < nums.size(); i++) {
        answer[i] = left[i]*right[i];
    }

    cout << endl;
    

	return 0;
}
