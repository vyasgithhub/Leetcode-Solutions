class Solution {
public:
    int minPartitions(string n) {
        int x=int(*max_element(n.begin(),n.end()))-48;
        return x;
    }
};