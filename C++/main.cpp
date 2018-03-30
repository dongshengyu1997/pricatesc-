#include <iostream>
#include <set>
#include <cstring>
#include <iterator>
using namespace std;
struct lstr {
    bool operator()(const char *s1, const char *s2) {
        return strcmp(s1, s2) < 0;
    }
};
int main()
{
    const int N = 6;
    const char* a[N] = {"ios","andriod","ubantu"};
    const char* b[N] = {"widows","software","linux"};
    std::set<const char*,lstr>A(a,a+N);
    std::set<const char*,lstr>B(b,b+N);
    set<const char*>C;
    copy(A.begin(),A.end(),ostream_iterator<const char*>(std::cout," "));
    cout<<"h1h1h1";
    return 0;
}