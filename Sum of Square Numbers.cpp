//Approach 1

class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long a=0;a*a<=c;a++) { 
            double b=sqrt(c-a*a);
            if(b==(int)b) { 
                return true ; 
            }
        }

        return false;

        }
    
};

//Approach 2
class Solution {
public:
    bool judgeSquareSum(int c) {
       for(int divisor = 2;divisor*divisor<=c;divisor++){ 
        if(c%divisor == 0) { 
            int exponentCount = 0 ; 
            while(c%divisor == 0) { 
                exponentCount++;
                c/=divisor;
            }
            if(divisor%4==3 && exponentCount%2!=0) { 
                return false;
            }
        }
       }
       return c%4 != 3;

        }
    
};
