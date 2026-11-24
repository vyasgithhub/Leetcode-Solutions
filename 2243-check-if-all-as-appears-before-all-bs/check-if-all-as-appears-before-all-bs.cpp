class Solution {
public:
    bool checkString(string s) {
        bool b=false;
        for(auto i:s){
            if(i=='a'){
                if(b==true) return false;
            }
            else b=true;
        }
        return true;
    }
};