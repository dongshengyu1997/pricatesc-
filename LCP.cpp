string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string lcp = "";
        sort(strs.begin(),strs.end(),[](string& a,string& b){return a.length() < b.length();});
        for(int i = 0;i < strs[0].length();i++)
        {
            for(int j = 1;j < strs.size();j++)
            {
                if(strs[j][i] != strs[0][i])
                    return lcp;
                
            }
            lcp += strs[0][i];
        }
         return lcp;   
    }
