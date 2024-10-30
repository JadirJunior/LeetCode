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
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. 

For example, the array nums = [0,1,2,4,5,6,7] might become:
[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.

Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums of unique 
elements, return the minimum element of this array.
You must write an algorithm that runs in O(log n) time.
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
*/

int main() { _
    vector<int> nums = { 2,3,1 };

    int left = 0, right = nums.size()-1, mid=0;

    if (nums[left] < nums[right]) {
        return nums[left];
    }

    while (left < right) {
        //Essa maneira de calcular o meio é para evitar overflow com valores suficientemente grandes de inteiros.
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[right]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    cout << nums[left] << endl;

	return 0;
}
