class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length() ; 
        stack<char> stack ; 
        char cur ; 

        for(int i = 0 ; i<n ; i++ ) { 
               cur = s[i] ; 
                if(stack.empty()) { 
                    stack.push(cur) ; 
                } 
                else if(stack.top() == '(' && cur == ')') { 
                     stack.pop() ; 
                }
                else { 
                    stack.push(cur) ; 
                }
        }
        return stack.size() ; 
    }


};
