const int N=31624;
vector<bool>isprime(N,true);
void compute()
{
    if(isprime[4]==false) return;
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<N;i++){
        if(isprime[i]==true){
            for(int j=i*i;j<N;j+=i){
                isprime[j]=false;
            }
        }
    }
}
class Solution {
public:
    int nonSpecialCount(int l, int r) {
        compute();
        int x=r-l+1;
        int count=0;
        for(int i=ceil(sqrt(l));i<=(sqrt(r));i++){
            if(isprime[i]) count++;
        }
        return x-count;
    }
};