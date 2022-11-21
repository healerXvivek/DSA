class Solution {
  public:
    int isGoodorBad(string S) {
    int v=0;
    int i=0;
    int c=0;
    while(i<S.size())
    {
        if(S[i]=='a' || S[i]=='e' || S[i]=='i' ||S[i]=='o' || S[i]=='u'){
            i++;;
            v++;
            c=0;
            if(v>5) return 0;
        }
        else if(S[i]=='?')
           {
            i++;
            v++;
            c++;
           }
           else{
               i++;
               c++;
               v=0;
               if(c>3) return 0;
           }
      }
      if(c>3 || v>5)
      return 0;
      return 1;
    }
};
