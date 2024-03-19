class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // ans least number of times that CPU will take
        int ans=0;
        unordered_map<char,int> mp;
        priority_queue<int> q;

        //storing count of each char in mp
        for(auto i:tasks){
            mp[i]++;
        }

        //pushing all elements in the PQ
        for(auto j:mp){
            q.push(j.second);
        }

        while(!q.empty()){
            //time for executing n task
            int tt=0;

            vector<int> v;

            //executing the n+1 task
            for(int i=0;i<=n;i++){
                if(!q.empty()){
                    v.push_back(q.top()-1);
                    q.pop();
                    tt=tt+1;
                }
            }

            for(auto i:v){
                if(i>0){
                    q.push(i);
                }
            }

            if(q.empty()){
                ans+=tt;
            }
            else{
                ans+=(n+1);
            }

           

        }
         return ans;
       } 
};
