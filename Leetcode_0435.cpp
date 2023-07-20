bool cmp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        sort(inter.begin(), inter.end(), cmp);
        int ans = 0;
        int k = INT_MIN;
        
        for (int i = 0; i < inter.size(); i++) {
            int x = inter[i][0];
            int y = inter[i][1];
            if (x >= k) {
                k = y;
            } 
            else {
                ans++;
            }
        }
        return ans;
    }
};