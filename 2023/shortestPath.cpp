#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
#include <math.h>
#include <numeric>
#include <unordered_map>

using namespace std;



int main(){

    vector<vector<int>> graph;


    vector<int> aux;
    vector<int> path;
    int anterior = -1;
    unordered_map<int, int> visited;

    int minPath = INT_MAX;

    for (int i = 0; i < graph.size(); i++) {

        path.push_back(i);
        anterior = i;
        visited[i] = 1;

        for (int j = 0; j < graph.size(); j++) {
            aux.push_back(graph[i][j]);
        }

        while (!aux.empty()) {
            int prox = aux.front();

            


        }

    }

    return 0;
}