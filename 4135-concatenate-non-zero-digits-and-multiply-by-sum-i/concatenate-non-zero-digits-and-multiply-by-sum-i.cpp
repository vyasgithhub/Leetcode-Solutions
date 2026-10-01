class Solution {
public:
    long long sumAndMultiply(int n) {
        long long revx=0;
        int sum=0;
        while(n){
            if(n%10!=0){
                revx=revx*10+n%10;
                sum+=n%10;
            }
            n/=10;
        }
        long long x=0;
        while(revx){
            x=x*10+revx%10;
            revx/=10;
        }
        return x*sum;
    }
};