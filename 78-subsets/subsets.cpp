class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans(1<<nums.size());
        for(int i=0;i<(1<<nums.size());i++){
            int count=0;
            while(i>=(1<<count)){
                if(i & (1<<count)){
                    ans[i].push_back(nums[count]);
                }
                count++;
            }
        }
        return ans;
    }
};