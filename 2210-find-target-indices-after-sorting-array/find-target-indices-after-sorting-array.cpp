class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int pos=0,tcount=0;
        for(auto i:nums){
            if(i<target) pos++;
            else if(i==target) tcount++;
        }
        vector<int>ans;
        while(tcount--){
            ans.push_back(pos);
            pos++;
        }
        return ans;
    }
};