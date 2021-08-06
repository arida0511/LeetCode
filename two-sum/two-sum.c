

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //int base = nums[0];
    //int second= nums[1];
    int i,j=0;
    *returnSize = 2;
    int* returnArray = malloc(sizeof(int)*(*returnSize)); 
    
    for(i=0; i<numsSize; i++){
        for(j=1+i; j<numsSize; j++){
            if(nums[i]+nums[j]==target){
                returnArray[0]=i;
                returnArray[1]=j;
            }
        }
    }    
    return returnArray;
}