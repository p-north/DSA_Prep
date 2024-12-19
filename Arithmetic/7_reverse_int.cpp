class Solution {
public:
    int reverse(int x) {

        int num = x;
        // keep original number
        int orig = num;
        // store the number as long long to avoid overflow
        long long revNum = 0;

        
        // constraints
        int MAX = pow(2, 31)-1;
        int MIN = pow(-2, 31);

        if(x == INT_MIN){
            return 0;
        }

        // if negative add positive sign for easier handling
        if(num < 0){
            num = -(num);
        }

        // reverse the number
        while (num > 0)
        {
            // extract last digit
            int extract = num % 10;
            // add last digit to reverse number
            revNum = (revNum * 10) + extract;
            // overflow check
            if(revNum > MAX){
                return 0;
            }

            // cut down the number
            num = num / 10;
        }


        // if reversed number too big or small, return zero
        if(revNum > MAX || revNum < MIN){
            return 0;
        }

        // turn reversed num into negative if alrady before
        if(orig < 0){
            revNum = -(revNum);
        }

        return revNum;
        
    }
};