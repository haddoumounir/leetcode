class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int map[256] = {0};
        if (s.size() != t.size())
            return (false);
        for (int i = 0; i < s.size(); ++i) 
        {
            ++map[(unsigned char)s[i]];
            --map[(unsigned char)t[i]];
        }
        for (int i = 0; i < 256; ++i)
            if (map[i])
                return (false);
        return (true);
    }
};