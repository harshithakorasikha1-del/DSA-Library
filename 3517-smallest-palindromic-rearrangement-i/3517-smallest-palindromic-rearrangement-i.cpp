class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        vector<int> freq(26,0);;
        for(char c : s) {
            freq[c - 'a']++;
        }
        string ls = "";
        string ms = "";
        for(int i=0;i<26;i++) {
            if(freq[i] % 2 != 0) {
                ms+=(char)('a'+i);
            }
            int f = freq[i]/2;
            for(int j=0;j<f;j++) {
                ls+=(char) ('a'+i);
            }
        }
        string rs = ls;
        reverse(rs.begin(),rs.end());
        return (ls + ms + rs);
    }
};