/*实现 strStr() 函数。

给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。*/
int strStr(string haystack, string needle) {
        int haylength = haystack.length();
        int needlength = needle.length();
        if(needle.length() == 0)
            return 0;
        if(needle.length() > haystack.length())
            return -1;
        int i = 0;
        int length = 0;
        while(i <= haylength - needlength)
        {
            if(haystack[i] == needle[0])
            {
                length = 0;
                for(int time = 1;time < needlength;time++)               
                {
                    if(haystack[i + time] == needle[time])
                        length++;
                    else
                    {
                        break;
                    }
                }
                if(length == needlength - 1)
                    return i;
            }
            i++;
        }
        return -1;
        
    }
