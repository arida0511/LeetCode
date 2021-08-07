

bool isPalindrome(int x){
    if(x<0)
        return false;
    int size=1;
    int temp=x;
    while(temp!=0){
        temp /=10;
        if(temp==0)
            break;
        size++;
    }
    
    char* intstr = malloc(sizeof(char)*size+1);
    sprintf(intstr,"%d",x);
    
    for(int i=0; i<size/2; i++){
        if(intstr[i]!=intstr[size-1-i])
            return false;
    }
    
    return true;
}