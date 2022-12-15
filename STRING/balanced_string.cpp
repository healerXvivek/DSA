class Solution {
  public:
    string BalancedString(int N) {
        string ans="";
        string temp="abcdefghijklmnopqrstuvwxyz";
        int d = N;
        while(N > 26){
            ans += temp;
            N -= 26;
        }
        int start = 0, end = 0;
        int sum = 0;
        while(d > 0){
            sum += d % 10;
            d /= 10;
        }
        if(N % 2 != 0){
            if(sum % 2 != 0){
                start = (N - 1) / 2;
                end = (N + 1) / 2;
            }
            else {
                start = (N + 1) / 2;
                end = (N - 1) / 2;
            }
        }
        else{
            start = N / 2;
            end = N / 2;
        }
        ans += temp.substr(0, (start)) + temp.substr((26 - end), end);
        return ans;
    }
};
