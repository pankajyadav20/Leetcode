class Solution {
public:
    int addDigits(int num) {
        int count = 0;
    string tmp = to_string(num);

    for (int i = 0; i < tmp.length(); ++i){
        count += (tmp[i]-'0');
    }

    if (count < 10) return count;
    else return addDigits(count); 
        
    }
};