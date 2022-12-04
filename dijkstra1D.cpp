#include "dijkstra.cpp"

using namespace std;

int main(){
    vector<vector<int> > adjacencyMatrix
        = { { 0, 1, 0, 0, 0, 0, 0, 0, 34 },
            { 1, 0, 1, 0, 0, 0, 0, 0, 0 },
            { 0, 1, 0, 2, 0, 0, 0, 0, 0 },
            { 0, 0, 2, 0, 3, 0, 0, 0, 0 },
            { 0, 0, 0, 3, 0, 5, 0, 0, 0 },
            { 0, 0, 0, 0, 5, 0, 8, 0, 0 },
            { 0, 0, 0, 0, 0, 8, 0, 11, 0 },
            { 0, 0, 0, 0, 0, 0, 11, 0, 21 },
            { 34, 0, 0, 0, 0, 0, 0, 21, 0 }, };
    dijkstra(adjacencyMatrix, 4);
    return 0;
}