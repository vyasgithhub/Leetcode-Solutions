const int N=1e6+1;
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
    vector<int> closestPrimes(int left, int right) {
        compute();
        vector<int>ans(2,-1);
        int md=1e6;
        int pnum=0;
        for(int i=left;i<=right;i++){
            if(seive[i]==false) continue;
            if(pnum==0){
                pnum=i;
                continue;
            }
            if(i-pnum<md){
                ans[0]=pnum;
                ans[1]=i;
                md=i-pnum;
            }
            pnum=i;
        } 
        return ans;
    }
};