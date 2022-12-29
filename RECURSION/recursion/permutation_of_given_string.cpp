class Solution
{
	public:
	    set<string> st;
	    void permute(string& s, int i){
	        // Base case
            if (i == s.length()-1){
            st.insert(s);
            return;
            }
            
            // Permutations made
            for (int j = i; j < s.length(); j++) {
                
                // Swapping done
                swap(s[i], s[j]);
                
                // Recursion called
                permute(s, i + 1);
                
                // backtrack
                swap(s[i], s[j]);
            } 
        }
	    
		vector<string>find_permutation(string S){
		    vector<string> v;
		    permute(S,0);
		    for(auto x : st)
		    v.push_back(x);
		    return v;
		}
};
