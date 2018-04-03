#include<string>
#include<algorithm>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        string s = std::to_string(x);
        string m  = s;
        reverse(s.begin(),s.end());
        if(s == m)
            return true;
        else
            return false;
    }
};
