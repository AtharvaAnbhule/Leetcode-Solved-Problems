class Solution {
public:
    int countSeniors(vector<string>& details) {
        //compressed in string ofv length 15 provides info.
        //first 10 chars of phone numbers
        //next is the gender
        //two chars for age
        //last two chars for seat allocated
        //age>60 wanted.
        int n= details.size();
        int cnt=0 ; 
        for(int i =0;i<n;i++) { 

           string str = details[i].substr(11,2);
           int ans  = stoi(str);
           if(ans > 60 ) { 
            cnt++;
           }

        

        }

        return cnt;
        
    }
};
