/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *res;
    res = (int*)malloc(numsSize*sizeof(int));
    int i,j;
    for(i=0;i<numsSize;i++){
        int count = 0;
        for(j=0;j<numsSize;j++){
            if(j!=i && nums[j] < nums[i]){
                count++;
            }  
        }
        res[i] = count; 
    }
    *returnSize = numsSize;
    return res;
}