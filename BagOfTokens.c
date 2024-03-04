int bagOfTokensScore(int* tokens, int tokensSize, int power) {
    if(tokens == NULL || tokensSize == 0) return 0; 
    quicksort(tokens, 0, tokensSize - 1);
    int left = 0, score = 0, maxScore = 0, right = tokensSize - 1;
    while(left <= right){
        if(power >= tokens[left]){
            power -= tokens[left++];
            score++;
        } else if (score > 0){
            power += tokens[right--];
            score--;
        } else break;
        maxScore = score > maxScore? score : maxScore;
    }
    return maxScore;
}

void quicksort(int* arr, int left, int right) 
{
    if (left < right) 
    {
        int pivotIndex = partition(arr, left, right);
        quicksort(arr, left, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, right);
    }
}

int partition(int* arr, int left, int right) 
{
    int pivotValue = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) 
    {
        if (arr[j] < pivotValue) 
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;
    return i + 1;
}
