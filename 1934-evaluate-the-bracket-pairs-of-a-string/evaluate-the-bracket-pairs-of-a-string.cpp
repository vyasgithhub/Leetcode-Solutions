class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string>keys;
        for(auto i:knowledge){
            keys[i[0]]=i[1];
        }
        string ans;
        int i=0;
        while(i<s.size()){
            if(s[i]!='('){
                ans+=s[i];
                i++;
                continue;
            }
            string key;
            i++;
            while(s[i]!=')'){
                key+=s[i];
                i++;
            }
            i++;
            if(keys.contains(key)) ans+=keys[key];
            else ans+='?';
        }
        return ans;
    }
};