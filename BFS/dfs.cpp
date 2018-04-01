#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>graph;
bool visited[100] = {false};
void dsf(int num)
{
    auto it;
    visited[num] = true;
    printf("%d", num);
    for(it = graph[v].begin();it != graph[v].end();it++)
    {
        if (!visited[*it])
            dfs(*it);
    }

}