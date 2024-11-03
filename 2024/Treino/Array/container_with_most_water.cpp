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
You are given an integer array height of length n. There are n vertical lines drawn such that the two 
endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
https://leetcode.com/problems/container-with-most-water/description/
*/

int main() { _
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int left = 0, right = (height.size()-1);
    int area = INT_MIN;
    while (left < right) {

        area = max(area, min(height[left], height[right])*(right-left));

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    cout << area << endl;

	return 0;
}
