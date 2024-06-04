#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <unordered_map>

using namespace std;


int dist(int x1, int x2, int y1, int y2) {
    return abs(x1-x2) + abs(y1-y2);
}

int main(){

    priority_queue<tuple<int, int, int>, vector< tuple<int, int, int>>, greater<tuple<int, int, int> > > pq;



    vector<vector<int>> points = {
        {0, 0},
        {1, 1},
        {1, 0},
        {-1, 1}
    };

    pq.emplace(INT_MAX, points[0][0], points[0][1]);


    vector<vector<int>> visited;

    visited.push_back(points[0]);
    
    int d = INT_MAX;
    int second = INT_MIN;


    for (int i = 1; i < points.size(); i++) {    

        int d2 = dist(points[0][0], points[i][0], points[0][1], points[0][i]);

        pq.push({d2, points[i][0], points[i][1]});

        if (d2 < d) {
            d = d2;
            second = i;
        }



    }
    
    cout << d << endl;

    pq.pop();

    while (!pq.empty() ) {
        int d, x, y;
        tie(d, x, y) = pq.top();

        cout << d << " " << x << " " << y << endl;

        pq.pop();

    }


    return 0;
}