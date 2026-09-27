class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }
        vector<int>ans;
        while(freq.size()){
            vector<int>z;
            for(auto& i:freq){
                ans.push_back(i.first);
                i.second--;
                if(i.second==0) z.push_back(i.first);
            }
            for(auto i:z){
                freq.erase(i);
            }
        }
        return ans;
    }
};