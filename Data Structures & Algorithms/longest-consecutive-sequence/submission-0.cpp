class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        sort(nums.begin(), nums.end());
        int cur = 1;
        int maior = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1] - 1) {
                // consecutive!
                cur++;
            } else if (nums[i + 1] == nums[i]) {
                continue;
            } else {
                maior = max(maior, cur);
                cur = 1;
            }
        }
        return max(maior, cur);
    }
};
