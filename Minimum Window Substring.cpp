class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;

        if (s.size() < t.size()){
            return "";
        }

        for (auto value:t){
            m[value]++; //hashmap for characters of string t
        }

        unordered_map<char,int> temp = m;
        int left = 0;
        int right = 0;
        int min_len = INT_MAX;
        int curr_len;
        string res;

        while (right < s.size()){ //left and right are the pointers to traverse the s
            

            //found the element
            //if s[i] is in the temp it reduces to 1,so erase it as substring got
            //temp is copy of m
            if (temp.find(s[right]) != temp.end()){

                

                if (temp[s[right]] == 1){
                    temp.erase(s[right]);
                }
                else{
                    temp[s[right]]--;
                }
                if (temp.size() == 0){
                    
                    curr_len = right - left + 1;
                    
                    if (curr_len < min_len){
                        min_len = min(min_len,curr_len);
                        res = s.substr(left,curr_len);
                    }
                    temp = m;
                    right = left;
                    left++;
                }

                

            }

            //not found the element
            else{
                if (temp == m){
                    left++;
                }
                // left++;
                // cout<<"not found the element so keep going\n";
            }

            right++;

        }
        
        return res;
}
};
