class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int pc=0;
        for(auto i:s){
            if(i!='(' && i!=')') continue;
            if(i=='(') pc++;
            else pc--;
            if(pc>max) max=pc;
        }
        return max;
    }
};