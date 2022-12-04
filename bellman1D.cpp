#include "bellman.cpp"

using namespace std;

int main()
{
    int V = 9;
    int E = 18;
 
    int graph[][3]
     = {{ 0, 1, 1 }, { 0, 8, 34 },
        { 1, 0, 1 }, { 1, 2, 1 },
        { 2, 1, 1 }, { 2, 3, 2 },
        { 3, 2, 2 }, { 3, 4, 3 },
        { 4, 3, 3 }, { 4, 5, 5 },
        { 5, 4, 5 }, { 5, 6, 8 },
        { 6, 5, 8 }, { 6, 7, 11 },
        { 7, 6, 11 }, { 7, 8, 21 },
        { 8, 7, 21 }, { 8, 0, 34 },};
 
    BellmanFord(graph, V, E, 0);
    return 0;
}