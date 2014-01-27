/**********************************
 * Given a string S, find the longest palindromic substring in S.  O(N2) time complexity.
 * A palindrome is a string which reads the same in both direction. Ex. "aba"
 ***********************************/

 string longestP(string s){
  if(s.length()==1){
    return s;
  }else if(s.length()>1){
    string max;
    
    for(int i=0;i<s.length()-1;i++){
        string result="";
        if(!s[i]==s[i+1]){
            result+=s[i];
            for(int j=1;j<min(i+1,s.length()-i);j++){
                if(s[i-j]==s[i+j]){
                   result=s[i-j]+result+s[i+j];
                }else{
                    j=s.length();
                }
            }
        }else{
            for(int j=0;j<min(i+1,s.length()-i-1);j++){
                if(s[i-j]==s[i+j+1]){
                   result=s[i-j]+result+s[i-j];
                }else{
                    j=s.length();
                }
            }
        }

        if(result.length()>max.length()){
            max=result;
        }
    }
    return max;
  }
}
