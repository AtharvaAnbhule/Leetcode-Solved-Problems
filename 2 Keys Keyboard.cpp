class Solution {
public:
    int minSteps(int n) {
        if(n==1) return 0 ; 

        int steps = 0 ; 
        int factor = 2 ; //minimum factor pssible

        while(n>1) { 
            while(n%factor == 0 ) { 
                steps += factor ; 
                n /= factor ; 
            }
            factor ++ ; 
        }
        return steps ; 
    }
};
