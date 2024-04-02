class Solution {
public:
    bool isIsomorphic(string s, string t) {
    //     int n=size(s);
    //     int m=size(t);

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(s[i]<s[i+1] && t[j]<t[j+1]){
    //                  if(n==m){
    //                     return true;
    //                  }
    //             }
    //         }
    //     }
    //     return false;

    unordered_map<char,char> mapS2T;
    unordered_map<char,char> mapT2S;

    for(int i=0;i<s.size();++i){
        // element for s and t taken
        char charS = s[i];
        char charT=t[i];

        if(mapS2T.find(charS)!=mapS2T.end()){ //not the end of mapS2T
            if(mapS2T[charS] !=charT){
                return false;
            }
        } else{
            if(mapT2S.find(charT)!=mapT2S.end()){
                return false;
            }

            mapS2T[charS]=charT;
            mapT2S[charT] = charS;
        }
    }
    return true;
     }
};
