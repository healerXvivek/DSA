class Solution {
public:
    bool subset(int source[],int dest[]){
        for(int i=0;i<26;i++)
        if(dest[i]>source[i])
        return false;

        return true;
    }

    vector<string> wordSubsets(vector<string>& word1, vector<string>& word2) {
        vector<string> ans;
        int target[26]={0};

        for(string word : word2){
            int temp[26]={0};
            for(char ch : word){
                temp[ch-'a']++;
                target[ch-'a']=max(target[ch-'a'],temp[ch-'a']);
            }
        }

        for(string word : word1){
            int temp[26]={0};
            for(char ch : word){
                temp[ch-'a']++;
            }
            if(subset(temp,target)){
                ans.push_back(word);
            }
        }
        return ans;
    }    
};
