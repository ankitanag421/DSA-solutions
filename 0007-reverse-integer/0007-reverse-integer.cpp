class Solution {
public:
    int reverse(int x) {
      int revno=0;
      int d;
    
      while(x!=0){
        d=x%10;
        if(revno>INT_MAX/10 || revno<INT_MIN/10)
        return 0;
        revno=(revno*10)+d;

        x=x/10;
     
      } 
      return revno; 
    }
};