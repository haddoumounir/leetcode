class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        if (s.empty() || words.empty()) 
            return (ans);
        
        int n = s.size();
        int m = words.size();
        int w = words[0].size();
        if (n < m * w)
            return (ans);
        
        unordered_map<string, int> target;
        for (auto& word : words) 
            ++target[word];
        
        for (int i = 0; i < w; ++i) {
            unordered_map<string, int> seen;
            int left = i;
            int count = 0;
            
            for (int j = i; j <= n - w; j += w) {
                string curr = s.substr(j, w);
                if (target.count(curr)) {
                    ++seen[curr];
                    ++count;
                    
                    while (seen[curr] > target[curr]) {
                        string leftWord = s.substr(left, w);
                        --seen[leftWord];
                        --count;
                        left += w;
                    }
                    
                    if (count == m) {
                        ans.push_back(left);
                        string leftWord = s.substr(left, w);
                        --seen[leftWord];
                        --count;
                        left += w;
                    }
                } else {
                    seen.clear();
                    count = 0;
                    left = j + w;
                }
            }
        }
        
        return (ans);
    }
};