#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
#include <queue>
#include <tuple>

using namespace std;

int main() {

    vector<vector<int>> heights = {
        {1, 2, 2},
        {3, 8, 2},
        {5, 3, 5}
    };

    int rows = heights.size(), cols = heights[0].size();

    vector<vector<int>> dist(rows, vector<int>(cols, INT_MAX));

    dist[0][0] = 0;

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> minHeap;

    minHeap.emplace(0, 0, 0);

    int directions[4][2] = {
        {0, 1},
        {0, -1},
        {1, 0},
        {-1, 0}
    };

    int res = -1;

    while (!minHeap.empty()) {
        int effort, x, y;
        tie(effort, x, y) = minHeap.top();
        minHeap.pop();

        if (effort > dist[x][y]) continue;

        if (x == rows - 1 && y == cols - 1) {
            res = effort;
            break; // Uma vez que você encontrou o destino, você pode sair do loop
        }

        for (auto dir : directions) {
            int nx = x + dir[0], ny = y + dir[1];

            if (nx >= 0 && nx < rows && ny >= 0 && ny < cols) {

                int newEffort = max(effort, abs(heights[x][y] - heights[nx][ny]));

                if (newEffort < dist[nx][ny]) {
                    dist[nx][ny] = newEffort;
                    minHeap.emplace(newEffort, nx, ny);
                }
                
            }
        }
    }

    cout << res << endl;
    return 0;
}
