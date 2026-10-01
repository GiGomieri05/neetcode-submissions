class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> rank;
        vector<pair<int, int>> freq;
        vector<int> topk;
        for (int n : nums) 
            rank[n]++;
        for (auto& [num, count] : rank) {
            freq.push_back({count, num});
        }
        sort(freq.rbegin(), freq.rend());
        for (int i = 0; i < k; i++) {
            topk.push_back(freq[i].second);
        }
        return topk;
    }
};
