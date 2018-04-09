 string intToRoman(int num) {
	//整数转化为罗马数
        constexpr int xulie = 13;   //定义数组大小
        string s = "";
        int number[xulie] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};  //可能的序列组合
        string group[xulie] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i = 0;i < 13 && num > 0;i++)
        {
            if(num < number[i])
                continue;
            while(num >= number[i])      //如果大于就一直输出这个词组
            {
                s += group[i];
                num -= number[i];
            }
        }
        return s;
    }
