class Solution {
public:
    string customSortString(string order, string s) {
        string s1 ,s2;
        int arr[26] = {0};
        for(char ch : order ){  
            arr[ch-'a']++;
        }
        for(char c: s){
            if(arr[c-'a'] == 0) s2.push_back(c);  
            else arr[c-'a']++;
        }
        for(char c :order){
            while(arr[c-'a'] > 1)
            {
               s1+=c;
                arr[c-'a']--;
            }
        }
        return s1+s2;
    }
};
