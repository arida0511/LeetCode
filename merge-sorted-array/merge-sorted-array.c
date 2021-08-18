

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int size = nums1Size+1;
    int num1=0,num2=0;
    int* rslt= malloc(sizeof(int)*size);
    if(n!=0){
       for(int i=0;i<size-1;i++){
           if(num1<m && (num2>=n || nums1[num1]<=nums2[num2]))
               rslt[i]=nums1[num1++];
           else
               rslt[i]=nums2[num2++];
       }
        for(int i=0;i<nums1Size;i++)
            nums1[i]=rslt[i]; 
    }
    
}