int numIdenticalPairs(int* nums, int numsSize) {
  int freq[101] = {0};
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        count += freq[nums[i]];
        freq[nums[i]]++;
    }
    return count;
}
