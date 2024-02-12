int majorityElement(int* nums, int numsSize) {
    int u=0;int j=0;
    
    for(int i=0;i<numsSize;i++){
        if(j==0){
            u=nums[i];
        }
        if(u==nums[i]){ //if it is same element
            j++;
        } else{
            j--;
        }
        
    }
    
    return u;
    
}
