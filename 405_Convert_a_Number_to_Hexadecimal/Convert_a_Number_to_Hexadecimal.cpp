class Solution {
public:
    string toHex(int num) 
    {
        if (num == 0) 
            return "0";
        string hex = "0123456789abcdef";
        string res = "";
        unsigned int n = num;

        while (n) 
        {
            res = hex[n % 16] + res;
            n /= 16;
        }
        return res;
    }
};