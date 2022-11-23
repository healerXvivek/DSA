class Solution {
public:
    string reverseOnlyLetters(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
                temp+=s[i];
            }
        }
        int i=0;
        int j=temp.length()-1;
        while(i<=j){
            swap(temp[i],temp[j]);
            i++;
            j--;
        }
        string ans="";
        int k=0;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
                ans+=temp[k];
                k++;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
