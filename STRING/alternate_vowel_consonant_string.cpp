class Solution{
    public:
    string rearrange (string S, int N){
        vector<int> v(26,0) , c(26,0);
        int countv=0;
        for(auto ch : S){
            if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u'){
                countv++;
                v[ch-'a']++;
            }
            else
                c[ch-'a']++;
        }
        int countc = N - countv;
        
        if(abs(countv - countc)>1)
        return "-1";
    
        if(countv > countc)
            str(v , c , S);
        
        else if(countv < countc)
            str(c , v , S);
        
        else{
            for(int i=0;i<26;i++){
                if(c[i]>0){
                    str(c , v , S);
                    break;
                }
                if(v[i]>0){
                    str(v , c , S);
                    break;
                }
            }
        }
        return S;
    }

    void str(vector<int> &a, vector<int> &b, string &s){
        int p=0,q=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                while(a[p]==0)
                    p++;
                s[i]= p+'a';
                a[p]--;
            }
            else{
                while(b[q]==0)
                    q++;
                s[i] = q+'a';
                b[q]--;
            }
        }
    }
};
