class Solution {
public:
    int findGCD(vector<int>& A) {
        return gcd(*min_element(begin(A), end(A)), *max_element(begin(A), end(A)));
    }
};