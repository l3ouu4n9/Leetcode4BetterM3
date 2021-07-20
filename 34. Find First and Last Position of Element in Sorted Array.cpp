class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> ret{-1, -1};
        
        if (right == -1) return ret;
        
        // Look for first position
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
            
        }
        
        if (nums[left] != target) {
            return ret;
        } else {
            ret[0] = left;
        }
        
        right = nums.size() - 1;
        // Look for last position
        while (left < right) {
            int mid = (left + right) / 2 + 1;
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid;
            }
            
        }
        ret[1] = right;
        return ret;
        
        
    }
};
