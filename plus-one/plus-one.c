

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    bool carry = false;
    digits[digitsSize-1]++;
    if(digits[digitsSize-1]==10){
        digits[digitsSize-1]=0;
        carry = true;
    }
    for(int i=digitsSize-2;i>=0;i--){
        if(carry==false)
            break;
        digits[i]++;
        if(digits[i]==10){
            digits[i]=0;
            carry = true;
        }
        else
            carry = false;
    }
    *returnSize = digitsSize;
    if(carry==true){
        int *arr= malloc(sizeof(int)*(++(*returnSize)));
        arr[0]=1;
        for(int i =1; i<*returnSize; i++)
            arr[i]= 0;     
        return arr;
    }
    return digits;
}