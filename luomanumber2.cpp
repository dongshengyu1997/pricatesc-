 int romanToInt(string s) {
	//罗马书转化为整数
        map<char,int>luoma;
        int num = 0;
        luoma['M'] = 1000;
        luoma['D'] = 500;
        luoma['C'] = 100;
        luoma['L'] = 50;
        luoma['X'] = 10;
        luoma['V'] = 5;
        luoma['I'] = 1;
	//根据定义如果左边的字母大于右边 就 + ，小于右边就-
        for(auto it = s.begin();it != s.end();it++)
        {
            if(luoma[*it] >= luoma[*(it + 1)])
            num += luoma[*it];
            else
                num -= luoma[*it];
        }
        return num;
        
    }
