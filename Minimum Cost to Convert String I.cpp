class Solution {
public:

    int D[26][26];
    inline void FW(vector<char>& original , vector<char>& changed , vector<int>& cost) { 
        fill(&D[0][0],&D[0][0]+26*26,INT_MAX);
        const int sz=original.size();
        for(int i=0;i<sz;i++) { 
            int row=original[i]-'a';
            int col=changed[i]-'a';
             D[row][col]=min(D[row][col], cost[i]);
        }
        for(int i=0;i<26;i++)   D[i][i] =0 ; //making all diagonal elements as 0

        for(int k=0;k<26;k++){ 
            for(int i=0;i<26;i++){ 
                for(int j =0; j<26;j++) { 
                     D[i][j]=min((long long)D[i][j], (long long)D[i][k]+D[k][j]);
                }
            }
        }
    }
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        // //where cost[i] represents the cost of changing the character original[i] to the character changed[i].
        // int n= source.size();
        // int v= target.size();
        // int ans = 0 ; 

        // if(n==v){ 
        //     for(int i =0;i<n;i++){ 
        //         for(int j =0;j<v;j++){ 
        //             if(source[i] != target[j]) { 
        //                 int t =0 ;
        //                 while(original[t]!=source[i]){ 
        //                     t++;
        //                 }
        //               if(source[i] == original[t] && target[j] == changed[t]){
        //                 return ans+=cost[t];
        //               }
                       
                       
        //             }
                   
        //         }
        //     }
        // }
        // return ans;
        

        FW(original,changed,cost);
         const int n=source.size();
        long long ans=0;
for(int i=0; i<n; i++){
            int row=source[i]-'a';
            int col=target[i]-'a';
            if (D[row][col]==INT_MAX) return -1;
            ans+=D[row][col];
        }
        return ans;


    }
};
