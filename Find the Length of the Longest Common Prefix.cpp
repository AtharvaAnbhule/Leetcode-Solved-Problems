class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        // int n = arr1.size() ; 
        // int m = arr2.size() ;

        // int count = 0 ; 

        // // for ( int i = 0 ; i< n ; i++ ) { 
        // //     for(int j = 0 ; j<m ; j++ ) { 
        // //         if(arr1[i] == arr2[j] ) { 
        // //             count++ ; 
        // //         }
                 
        // //     }
        // // } 

        // while( arr1 != nullptr )
        // return count ; 

        unordered_map<string,int> prefixMap ; 

        for( int num:arr1) { 
            string nums = to_string(num) ; 
            string prefix = "" ; 
            for( char ch:nums) { 
                prefix+=ch ; 
                prefixMap[prefix] ++ ; 
            }
        }

        int maxLength = 0 ; 

        for( int num:arr2) { 
            string nums = to_string(num) ; 
            string prefix = "" ; 
            for( char ch:nums) { 
                prefix+=ch ; 
                if(prefixMap.find(prefix) != prefixMap.end()) { 
                    maxLength = max(maxLength,static_cast<int> (prefix.length())) ; 
                } 
            }
        }
        return maxLength ; 
    }
};
