class Solution {
public:
    long long splitArray(vector<int>& nums) {
        long long sumA=0;
        long long sumB=0;
        sumB+=nums[0];
        int x=1;
        if(nums.size()>1) sumB+=nums[1];
        for(int i=2;i*i<nums.size();i++){
            if(nums[i]!=0){
                sumA+=nums[i];
                for(int j=i*i;j<nums.size();j+=i){
                    sumB+=nums[j];
                    nums[j]=0;
                }
            }
            x=i;
        }
        for(int i=x+1;i<nums.size();i++){
            sumA+=nums[i];
        }
        cout << sumA << sumB;
        return abs(sumA-sumB);
    }
};