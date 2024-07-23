class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // vector<int> ans;
        // int cnt=0;
        // nums.sort();
        // for(int i =1;i<nums.size();i++){ 
        //       if(a[i]==a[i-1]){ 
        //         cnt++;
        //       }
        //       else if(a[i]!=a[i-1]){ 
        //            ans.push_back(cnt);
        //       }
        // }
        vector<int> count(201,0); //initialize by 0
        for(int num:nums){ 
            count[num+100]++;
        }
        sort(nums.begin(),nums.end(),[&](int a , int b ) { 
            if(count[a+100] == count[b+100]){ 
                return a>b;
            }
            return count[a+100]<count[b+100];
        });
        return nums;
    }
};
