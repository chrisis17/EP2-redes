#include <stdlib.h>
#include <time.h>
#include "dijkstra.cpp"
#include "bellman.cpp"

using namespace std;
#define MOD 100

int main(){
    srand (time(NULL));

    int V = 9;
    int E = 36;

    vector<int> rand_nums;
    for (int i=0; i< 18; i++){
        rand_nums.push_back(rand() %MOD + 1);
    }
 
    int graph[][3] 
    = { { 0, 1, rand_nums[0] }, { 0, 2, rand_nums[1] }, {0, 3, rand_nums[2]}, {0, 6, rand_nums[3]},
        { 1, 0, rand_nums[0] }, { 1, 2, rand_nums[4] }, {1, 4, rand_nums[5]}, {1, 7, rand_nums[6]},
        { 2, 0, rand_nums[1] }, { 2, 1, rand_nums[4] }, {2, 5, rand_nums[7]}, {2, 8, rand_nums[8]},
        { 3, 0, rand_nums[2] }, { 3, 4, rand_nums[9] }, {3, 5, rand_nums[10]}, {3, 6, rand_nums[11]},
        { 4, 1, rand_nums[5] }, { 4, 3, rand_nums[9] }, {4, 5, rand_nums[12]}, {4, 7, rand_nums[13]},
        { 5, 2, rand_nums[7] }, { 5, 3, rand_nums[10] }, {5, 4, rand_nums[12]}, {5, 8, rand_nums[14]},
        { 6, 0, rand_nums[3] }, { 6, 3, rand_nums[11] }, {6, 7, rand_nums[15]}, {6, 8, rand_nums[16]},
        { 7, 1, rand_nums[6] }, { 7, 4, rand_nums[13] }, {7, 6, rand_nums[15]}, {7, 8, rand_nums[17]},
        { 8, 2, rand_nums[8] }, { 8, 5, rand_nums[14] }, {8, 6, rand_nums[16]}, {8, 7, rand_nums[17]},};
    BellmanFord(graph, V, E, 0);

    cout << endl << "---------------------------------" << endl << endl;

    vector<vector<int> > adjacencyMatrix
        = { { 0, rand_nums[0], rand_nums[1], rand_nums[2], 0, 0, rand_nums[3], 0, 0 },
            { rand_nums[0], 0, rand_nums[4], 0, rand_nums[5], 0, 0, rand_nums[6], 0 },
            { rand_nums[1], rand_nums[4], 0, 0, 0, rand_nums[7], 0, 0, rand_nums[8] },
            { rand_nums[2], 0, 0, 0, rand_nums[9], rand_nums[10], rand_nums[11], 0, 0 },
            { 0, rand_nums[5], 0, rand_nums[9], 0, rand_nums[12], 0, rand_nums[13], 0 },
            { 0, 0, rand_nums[7], rand_nums[10], rand_nums[12], 0, 0, 0, rand_nums[14] },
            { rand_nums[3], 0, 0, rand_nums[11], 0, 0, 0, rand_nums[15], rand_nums[16] },
            { 0, rand_nums[6], 0, 0, rand_nums[13], 0, rand_nums[15], 0, rand_nums[17] },
            { 0, 0, rand_nums[8], 0, 0, rand_nums[14], rand_nums[16], rand_nums[17], 0 } };
    dijkstra(adjacencyMatrix, 0);


    return 0;
}
