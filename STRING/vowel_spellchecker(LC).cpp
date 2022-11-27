class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries)
    {
        // actual string of words
        unordered_set<string> actual;
 
        // small --> actual
        unordered_map<string,string> small;
 
        // vowel error --> actual
        unordered_map<string,string> vowel;
 
        for(auto s:wordlist)
        {
            actual.insert(s);
 
            string small_case = get_low(s);
 
            small.insert({small_case,s});
 
            string vowel_string = get_vowel(s);
 
            vowel.insert({vowel_string,s});
        }
 
        for(int i=0;i<queries.size();i++)
        {
            string s = queries[i];
            if(actual.count(queries[i]))
                continue;
 
            if(small.count(get_low(s)))
                queries[i] = small[get_low(s)];
            else if(vowel.count(get_vowel(s)))
                queries[i] = vowel[get_vowel(s)];
            else
                queries[i] = "";
        }
 
        return queries;
 
    }
 
 
    // converts the string into lowercase
 
    string get_low(string s)
    {
        string str = "";
 
        for(auto ch:s)
        {
            str+=tolower(ch);
        }
        return str;
    }
 
    // modifiy string for vowelspellchecker
 
    string get_vowel(string s)
    {
        string str = "";
 
        for(auto ch:s)
        {
            char c = tolower(ch);
 
            if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
                c = '*';
 
            str+=c;
        }
        return str;
    }
};
