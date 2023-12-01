class Solution {
public:
    int minimizedStringLength(string s) {
        map<char,int>st;
        for(auto i:s){
            st[i]++;
        }
        return st.size();
    }
};