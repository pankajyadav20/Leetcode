class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
       vector<int> ans;
        for(int i=left;i<= right;i++){
            bool selfDividing=true;
            int N = i;
            while(N){
                if(N%10==0 || i%(N%10) !=0){
                    selfDividing =false;
                    break;
                }
                N= N/10;
            }
            if(selfDividing) ans.push_back(i);
        }
        return ans;
    }
};

