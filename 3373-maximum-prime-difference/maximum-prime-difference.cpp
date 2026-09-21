const int N=(3*1e5)+1;
vector<bool>seive(N,true);
void compute(){
    if(seive[4]==false) return;
    seive[0]=seive[1]=false;
    for(int i=2;i*i<N;i++){
        if(seive[i]){
            for(int j=i*i;j<N;j+=i){
                seive[j]=false;
            }
        }
    }
}
class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        compute();
        int front_prime;
        int back_prime;
        for(int i=0;i<nums.size();i++){
            if(seive[nums[i]]){
                front_prime=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(seive[nums[i]]){
                back_prime=i;
                break;
            }
        }
        return back_prime - front_prime;
    }
};