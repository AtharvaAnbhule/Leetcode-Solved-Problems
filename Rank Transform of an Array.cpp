class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size() ; 
        unordered_map<int,int> valueToRank ; 
        vector<int> sortedUniqueNumbers = arr ; 

        sort(sortedUniqueNumbers.begin(),sortedUniqueNumbers.end()) ; 
        sortedUniqueNumbers.erase(unique(sortedUniqueNumbers.begin(),sortedUniqueNumbers.end()), sortedUniqueNumbers.end()) ; 

        for(int i = 0 ; i<sortedUniqueNumbers.size() ; i++) { 
            valueToRank[sortedUniqueNumbers[i]] = i+1 ; 
        }

        for( int i = 0 ; i< n ; i++ ) { 
            arr[i] = valueToRank[arr[i]] ; 
        }

        return arr ; 
    }
};
