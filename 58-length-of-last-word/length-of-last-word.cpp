class Solution {
public:
    int lengthOfLastWord(string s) {
        int len;
        int index;

        index = s.size() -1;
        len = 0;
        while(index >= 0 && s[index] == ' ')
            index--;
        while(index >= 0 && s[index] != ' ')
        {
            len++;
            index--;
        }
        return(len);
    }
};