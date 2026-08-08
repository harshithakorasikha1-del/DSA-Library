class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int current = nums[0];
        int answer = nums[0];
        for(int i = 1;i<n;i++) {
            current = max(current + nums[i], nums[i]);
            answer = max(current, answer);
        }
        return answer;
    }
};