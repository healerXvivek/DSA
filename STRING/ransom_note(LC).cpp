class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freqr[26]={0};
        int freqm[26]={0};
        int nr=ransomNote.length();
        int nm=magazine.length();
        for(int i=0;i<nr;i++)
        freqr[ransomNote[i]-'a']++;
        for(int i=0;i<nm;i++)
        freqm[magazine[i]-'a']++;
        for(int i=0;i<nr;i++){
            int k=ransomNote[i]-'a';
            if((freqm[k]-freqr[k]) < 0)
            return false;
        }
        return true; 
    }
};
