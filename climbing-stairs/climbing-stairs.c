

int climbStairs(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    
    int sum=0, pre=1, next=1;
    for(int i=1;i<n;i++){
        sum=pre+next;
        pre=next;
        next=sum;
    }
    return sum;
}