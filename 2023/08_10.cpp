#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>

using namespace std;

int main() {
    vector<int> nums1 = {2, 1, -2, 5};
    vector<int> nums2 = {3, 0, -6};

    int m = nums1.size();
    int n = nums2.size();

    vector<int> current(n+1, INT_MIN), previous(n+1, INT_MIN);

    for (int i = 1; i <= m; ++i) {

        for (int j = 1; j <= n; ++j) {
        
            int product = nums1[i - 1] * nums2[j - 1];
            current[j] = std::max({ product, previous[j] , current[j-1], product + std::max(0, previous[j-1]) });
        
        }
        swap(current, previous);

    }   

    cout << previous[n];

    return 0;
}
