class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int count1 =0 ;
         int count2 = 0, count3 = 0;
        if(word[0] >='A' && word[0] <='Z'){ count3++;}
       
        for(int i = 0 ;i < word.size(); i++){
            if(word[i] >='A' && word[i] <='Z'){ count1++;}
            else if( word[i] >='a' && word[i] <='z'){ 
                count2++; 
                count3++;
            }
            
        }
        int n = word.size();
        if(count1 == n || count2 ==n || count3 == n){
            return true;
        }
        return false;
        
    }
};
