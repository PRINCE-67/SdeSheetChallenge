class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mxs = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            mxs = max(sum, mxs);
            if (sum < 0)
                sum = 0;
        }
        return mxs;
    }
};