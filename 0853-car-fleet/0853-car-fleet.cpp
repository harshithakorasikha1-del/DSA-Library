class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> ans;
        stack<double> st;
        int n = position.size();
        int fleet = n;
        for(int i=0;i<n;i++) {
            ans.push_back({position[i],speed[i]});
        }
        sort(ans.rbegin(),ans.rend());
        for(int i=0;i<n;i++) {
            double t = (double) (target - ans[i].first) / ans[i].second;
            if(st.empty() || st.top() < t) {
                st.push(t);
            }
        }
        return st.size();
    }
};