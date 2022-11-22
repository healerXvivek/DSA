class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=a.size();
        int m=b.size();
        string tp=a;
        int step=1; 
        while(a.size()<b.size()){
            a+=tp;
            step++;
        }
        int found=a.find(b);
        if(found!=string::npos)
        return step;
        found=(a+tp).find(b);
        if(found!=string::npos)
        return ++step;
        return -1;
    }
};
