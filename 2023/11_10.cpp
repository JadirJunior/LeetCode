#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>
#include <unordered_map>

using namespace std;


int searchTime(vector<int>& vec, int t) {
    
    int start = 0;
    int end = vec.size();

    while (start < end) {

        int middle = (end + start)/2;
        
        if (t < vec[middle]) end = middle;
        else start = middle+1;

    }


    return start;


}

int main()
{

    vector<vector<int>> flowers = {
        {1, 10},
        {3, 3}
    };

    vector<int> starts, ends;


    for (vector<int> f : flowers) {

        starts.push_back(f[0]);
        ends.push_back(f[1] + 1);
        
    }

    sort(starts.begin(), starts.end());
    sort(ends.begin(), ends.end());

    vector<int> people = {3, 3, 2};

    vector<int> answer;

    for (int p : people) {

        int a1 = searchTime(starts, p);
        int a2 = searchTime(ends, p);
        answer.push_back( a1 - a2 );

    }

    for (int a : answer) {
        cout << a << " ";
    }

    return 0;
}