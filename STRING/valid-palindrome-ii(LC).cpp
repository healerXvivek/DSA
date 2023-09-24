class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false); 
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool ispalindrome(string s, int i, int j){
        while(i < j){
            if(s[i] != s[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i] != s[j])
            return ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1);
            i++;
            j--;   
        }
        return true; 
    }
};
