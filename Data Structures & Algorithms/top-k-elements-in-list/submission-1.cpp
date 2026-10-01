class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<vector<int>> bucket(nums.size() + 1);
        vector<int> res;
        for (int n : nums) 
            freq[n]++;
        for (auto& [num, count] : freq) 
            bucket[count].push_back(num);
        for (int f = bucket.size() - 1; f >= 1; f--) {
            for (int num : bucket[f]) {
                res.push_back(num);
                if (res.size() == k)
                    return res;
            }
        }

        return res;
    }
};
