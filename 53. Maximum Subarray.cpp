class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ret = nums[0];
        int tmp = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            tmp = max(tmp + nums[i], nums[i]);
            if (tmp > ret) ret = tmp;
        }
        return ret;
    }
};
