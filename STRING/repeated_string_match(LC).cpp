class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int step=1;
        int s=1;
        string tp=a; 
        int p=(int)(b.length()/a.length())+1;
        while(s){
            int k=a.find(b);
            if (k!=string::npos)
            return step;
            if(step>p)
            s=0;
            else{
                a+=tp;
                step++;
            }
        }
        return -1;
    }
};
