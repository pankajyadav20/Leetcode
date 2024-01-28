class Solution {
public:
    int countSeniors(vector<string>& details) {
       int ans=0;
        
    for(auto i:details){
        int val=0;
        val+=((i[11]-'0')*10+0);
        val+=(i[12]-'0');
        if(val>60){
            ans++;
        }
    }
        
        
        
        
        
        
        
        return ans;
        
        
    }
};