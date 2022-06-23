class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        if (n == 0) return 0;
        if (n == 1)return 1;
        int cnt = 1, mxcnt = 1, prev = nums[0];
        for (auto x : s) {
            //cout<<prev<<x<<endl;
            if (x - prev == 1)
            {
                cnt++;
                mxcnt = max(mxcnt, cnt);
            }
            else {
                cnt = 1;
            }
            prev = x;
        }
        return mxcnt;
    }
};