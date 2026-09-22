class Solution {
public:
    int differenceOfSums(int n, int m) {
        int ans;
        for(int i=1;i<=n;i++){
            if(i%m==0) ans-=i;
            else ans+=i;
        }
        return ans;
    }
};