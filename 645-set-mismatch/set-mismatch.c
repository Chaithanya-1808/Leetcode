/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int i;
    int* arr = (int*)malloc(2*sizeof(int));
    int* count = (int*)calloc(numsSize+1,sizeof(int));
    for(i=0;i<numsSize;i++){
        count[nums[i]]++;
    }
    for(i=1;i<=numsSize;i++){
        if(count[i] == 2){
            arr[0] = i;
        }if(count[i]==0){
            arr[1] = i;
        }
    }
    *returnSize = 2;
    free(count);
    return arr;
}