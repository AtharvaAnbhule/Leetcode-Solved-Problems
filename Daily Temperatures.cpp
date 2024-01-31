class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
         int n=temperatures.size();
         vector<int>ans(n,0); //answer
         stack<int>st; //stack made
         for(int i=0;i<n;i++)
         {
             while(!st.empty() && temperatures[i]>temperatures[st.top()])
             {
                 int index=st.top(); //get the top in the index
                 st.pop(); //pop the top element
                 ans[index]=i-index; //in ans at index of element greater then that elements
             }
             st.push(i);
         }
         return ans;
     }
    };
