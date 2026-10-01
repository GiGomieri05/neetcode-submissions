class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); i++) {
            int c = target - nums[i];
            if (umap.contains(c))
                return {umap[c], i};
            umap[nums[i]] = i;
        }

        return {};
    }
};
