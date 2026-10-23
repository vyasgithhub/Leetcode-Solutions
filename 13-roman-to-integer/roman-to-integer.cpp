class Solution {
public:
    int value(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        else return 1000;
    }
    int romanToInt(string s) {
        int num=0;
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1) num+=value(s[i]);
            else if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
                num+=value(s[i+1]) - value(s[i]);
                i++;
            }
            else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
                num+=value(s[i+1]) - value(s[i]);
                i++;
            }
            else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
                num+=value(s[i+1]) - value(s[i]);
                i++;
            }
            else num+=value(s[i]);
        }
        return num;
    }
};