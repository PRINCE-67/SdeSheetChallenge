class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1 = -1, n2 = -1;
        int c1 = 0, c2 = 0;
        int i = 0;
        vector<int>v;
        while (i < nums.size()) {

            if (nums[i] == n1) c1++;
            else if (nums[i] == n2) c2++;
            else if (c1 == 0) { c1 = 1; n1 = nums[i]; }
            else if (c2 == 0) { c2 = 1; n2 = nums[i]; }
            else
            {
                c1--;
                c2--;
            }
            i++;
        }
        c1 = 0, c2 = 0;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == n1) c1++;
            else if (nums[i] == n2) c2++;
        }

        if (c1 > (nums.size() / 3))
            v.push_back(n1);
        if (c2 > (nums.size() / 3))
            v.push_back(n2);

        return v;
    }
};