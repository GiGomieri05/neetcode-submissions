class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> res;
        for (string word : strs) {
            string key = word;
            sort(key.begin(), key.end());
            groups[key].push_back(word);
       }
       for (auto& group : groups) {
            res.push_back(group.second);
       }
       return res;
    }
};
