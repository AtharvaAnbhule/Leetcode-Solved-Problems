class Solution {
public:



    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n= nums2.size();

        vector<int> result;
        for(int i=0;i<m;i++){
            result.push_back(nums1[i]);
        }

         for(int i=0;i<n;i++){
            result.push_back(nums2[i]);
        }

        sort(result.begin(),result.end());

      

        int total=result.size();

        if(total % 2 ==1){
            //return the middle element
            return static_cast<double>(result[total/2]);
        }
        else{
            //get the avg when the number of elements is even
            int middle1= result[total/2-1];
            int middle2 = result[total/2];
            return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        }


   

    }
};
