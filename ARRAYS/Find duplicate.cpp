class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>mp;

        int n = nums.size();
        int x = 0;
        for (int i = 0; i < n; i++) {
            if (mp[nums[i]] > 0)
                x = nums[i];
            mp[nums[i]]++;
        }
        return x;
    }
};