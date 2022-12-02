class Solution {
  public:
    string findAndReplace(string s ,int Q, int indices[], string sources[], string targets[]) {
    string temp=s;
        int nl=0;
        for(int i=0;i< Q;i++){
            auto found=temp.find(sources[i]);
            while(found!=string::npos){
               if(found==indices[i]){
                   s.replace(found+nl,sources[i].size(),targets[i]);
                   nl+=targets[i].size()-sources[i].size();
            }
            found=temp.find(sources[i],found+1);  
            }
        }
        return s;
    }
};
