class Solution {
public:
    int minLength(string s) {
        int n = s.length() ; 
        stack<char> stack ; 
        for( int i = 0 ; i< n ; i++ ) { 
            char cur = s [i] ; 
            if( stack.empty() ) { 
                  stack.push(cur) ; 
                  continue ; 
            }
            if(cur == 'B' && stack.top() == 'A' ) { 
                stack.pop()  ; 
            }
            else if(cur == 'D' && stack.top() == 'C' ) { 
                stack.pop()  ; 
            }
            else { 
                stack.push(cur) ; 
            }
        }
        return stack.size() ; 
    }
};
