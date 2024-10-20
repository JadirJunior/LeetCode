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
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
https://leetcode.com/problems/two-sum/description/
*/

int main() { _
	vector<int> nums = {2, 7, 11, 15};
	int target = 9;

	unordered_map<int, int> mapNums;

	for (int i = 0; i < nums.size(); i++) {
		mapNums[nums[i]] = 1;
	}

	vector<int> positions;

	for (int i = 0; i < nums.size(); i++) {
		int diff = target-nums[i];

		if (mapNums[diff] == 1) {	
			bool found = false;
			for (int j = 0; j < nums.size(); j++) {
				if (nums[j] == diff && j != i) {
					found = true;
					positions.push_back(i);
					positions.push_back(j);
					break;
				}
			}
			if (found) break;

		}
	}

	for (int i = 0; i < positions.size();i++) {
		cout << positions[i] << " ";
	}

	return 0;
}
