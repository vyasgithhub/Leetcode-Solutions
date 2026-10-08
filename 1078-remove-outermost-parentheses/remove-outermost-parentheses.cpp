class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int start=0;
        int v=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') v++;
            else v--;
            if(v==0){
                for(int k=start+1;k<i;k++){
                    ans+=s[k];
                }
                start=i+1;
            }
        }
        return ans;
    }
};