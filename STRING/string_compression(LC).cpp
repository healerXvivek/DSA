class Solution {
public:
    int compress(vector<char>& chars) {
        string temp="";
        int count=1;
        int i;
        for(i=1;i<chars.size();i++){
            if(chars[i-1]==chars[i]){
                count ++;
            }
            else{
                if(count==1){
                    temp+=chars[i-1];
                }
                else{
                string k="";
                k=to_string(count);
                temp+=chars[i-1];
                temp+=k;
                }
                count=1;
            }
        }
        if(count==1){
            temp+=chars[i-1];
                }
        else{
            string k="";
            k=to_string(count);
            temp+=chars[i-1];
            temp+=k;
        }
        int k=0;
        for(char ch : temp){
            chars[k]=ch;
            k++;
        }
        return k++;
    }
};
