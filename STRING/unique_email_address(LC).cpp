class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
         unordered_set<string> res;
         for(string &email : emails)
         {
            string valid_e="";
            for(char c : email) 
            {
                if(c == '+' || c == '@') 
                {
                   break; 
                }
                if(c == '.')
                {
                    continue; 
                } 
            valid_e += c;
        }
        valid_e += email.substr(email.find('@'));
        res.insert(valid_e);
    }
    return res.size();
    }
};
