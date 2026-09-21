const int N=(5*1e6)+1;
vector<bool>seive(N,true);
void compute(){
    seive[0]=false;
    seive[1]=false;
    if(seive[4]==false) return ;
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
    int countPrimes(int n) {
        compute();
        int count=0;
        for(int i=0;i<n;i++){
            if(seive[i]) count++;
        }
        return count;
    }
};