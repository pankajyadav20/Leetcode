class Solution {
public:
    int mostWordsFound(vector<string>& s) {
       int ans=0;
        for(auto& i:s){
            int gap= 1 + count(i.begin(), i.end(), ' ');
            ans = max(ans, gap);
        }
        return ans;
    }
};
