class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum;
        for(int i=0;i<nums.size();i++){
            sum=0;
            while(nums[i]){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};