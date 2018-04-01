#include <iostream>
#include<vector>
#include <queue>
struct node;
void BFS(std::vector<std::vector<int>> &,std::vector<node> &);
struct node{
    enum color{WHITE,BLCAK,GRAY};
    color a;
    int num;
    int d;
    int pri;
};
void BFS(std::vector<std::vector<int>> &graph)
{
    std::vector<node> nodegraph(graph.size());
    int i = 0;
    for(auto m : nodegraph)
    {
        m.num = i;
        m.a = node::color::WHITE;
        m.d= 0xFFFF;
        m.pri = NULL;
        i++;
    }
    std::queue<node>stac;
    nodegraph[0].a = node::GRAY;
    nodegraph[0].d = 0;
    stac.push(nodegraph[0]);
    while(not stac.empty())
    {
        node p =stac.front();
        stac.pop();
        for(int number = 0;number < graph[p.num].size();number++)
        {
            if (nodegraph[graph[p.num][number]].a = node::WHITE) {
                nodegraph[graph[p.num][number]].a = node::GRAY;
                nodegraph[graph[p.num][number]].d = p.d + 1;
                nodegraph[graph[p.num][number]].pri = p.num;
                stac.push(nodegraph[graph[p.num][number]]);
            }
        }
        nodegraph[p.num].a = node::BLCAK;
    }
}