int searchInsert(int* nums, int numsSize, int target) {
    int i, j = 0;
    if(nums==NULL){
        return 1;
    }
    for (i = 0; i < numsSize; i++) {
        if (nums[i] < target && (i == numsSize - 1 || nums[i + 1] >= target)) {
            j = i + 1;
        }
    }
    return j;
}
