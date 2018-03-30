#include <iostream>
#include <map>
#include <algorithm>
#include <string.h>
using namespace std;
struct lstr{
    bool operator()(const char *a,const char *b)
    {
        return strcmp(a,b) < 0;
    }
};
int main() {
    map<const char*,int,lstr>map1;
    map1["january"] = 30;
    map1["february"] = 28;
    map1["april"] = 30;
    map1["may"] = 31;
    for(auto t1 = map1.begin();t1!=map1.end();t1++)
    {
        cout<<(*t1).first<<"  "<<(*t1).second;
    }
    return 0;
}