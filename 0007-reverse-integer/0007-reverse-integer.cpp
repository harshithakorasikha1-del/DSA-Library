class Solution {
public:
    int reverse(int x) {
        if(x<0) {
            long long r = -(long long)x;
            string s = to_string(r);
            std::reverse(s.begin(),s.end());
            long long ans = stoll(s);
            ans = -ans;
            if(ans < INT_MIN) {
                return 0;
            }
            return (int)ans;
        }
        else {
            string s = to_string(x);
            std::reverse(s.begin(),s.end());
            long long ans = stoll(s);
            if(ans>INT_MAX) {
                return 0;
            }
            return (int)ans;
        }
        return -1;
    }
};