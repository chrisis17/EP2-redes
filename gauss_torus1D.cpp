#include <stdlib.h>
#include <time.h>
#include "dijkstra.cpp"
#include "bellman.cpp"

using namespace std;
#define MOD 100

int main(){
    srand (time(NULL));

    vector<int> rand_nums;
    for (int i=0; i< 9; i++){
        rand_nums.push_back(rand() %MOD + 1);
    }

    int V = 9;
    int E = 18;
 
    int graph[][3]
     = {{ 0, 1, rand_nums[0] }, { 0, 8, rand_nums[1] },
        { 1, 0, rand_nums[0] }, { 1, 2, rand_nums[2] },
        { 2, 1, rand_nums[2] }, { 2, 3, rand_nums[3] },
        { 3, 2, rand_nums[3] }, { 3, 4, rand_nums[4] },
        { 4, 3, rand_nums[4] }, { 4, 5, rand_nums[5] },
        { 5, 4, rand_nums[5] }, { 5, 6, rand_nums[6] },
        { 6, 5, rand_nums[6] }, { 6, 7, rand_nums[7] },
        { 7, 6, rand_nums[7] }, { 7, 8, rand_nums[8] },
        { 8, 7, rand_nums[8] }, { 8, 0, rand_nums[1] },};

    BellmanFord(graph, V, E, 0);

    cout << endl << "---------------------------------" << endl << endl;
 
    vector<vector<int> > adjacencyMatrix
        = { { 0, rand_nums[0], 0, 0, 0, 0, 0, 0, rand_nums[1] },
            { rand_nums[0], 0, rand_nums[2], 0, 0, 0, 0, 0, 0 },
            { 0, rand_nums[2], 0, rand_nums[3], 0, 0, 0, 0, 0 },
            { 0, 0, rand_nums[3], 0, rand_nums[4], 0, 0, 0, 0 },
            { 0, 0, 0, rand_nums[4], 0, rand_nums[5], 0, 0, 0 },
            { 0, 0, 0, 0, rand_nums[5], 0, rand_nums[6], 0, 0 },
            { 0, 0, 0, 0, 0, rand_nums[6], 0, rand_nums[7], 0 },
            { 0, 0, 0, 0, 0, 0, rand_nums[7], 0, rand_nums[8] },
            { rand_nums[1], 0, 0, 0, 0, 0, 0, rand_nums[8], 0 }, };
    dijkstra(adjacencyMatrix, 0);


    return 0;
}