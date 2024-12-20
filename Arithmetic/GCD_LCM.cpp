class Solution {
  public:
    int min(int a, int b){
        if(a < b){
            return a;
        }
        return b;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int GCD = 0;
    
        // find the GCD
        for(int i = 1; i <= min(a, b); i++){
            if(a % i == 0 && b % i == 0 && i > GCD){
                GCD = i;
            }
        }
    
    
    
        // calculate the LCM
        int ab = a*b;
        int LCM = ab/GCD;
        
        return {LCM, GCD};
    }
};