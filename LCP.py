#!/usr/bin/python
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if(len(strs) > 1):
                strs.sort(key = lambda x:len(x))
                short = strs[0]
                for i in range(len(short)):
                    for every in strs:
                        if every[i] != short[i]:
                            if(i == 0):
                                return ""
                            return str(short[:i])
                return short
        elif(len(strs) == 1):
            return strs[0]
        else:
            return ""
