

bool isValid(char * s){
    if(s == NULL)   return true;
    if(strlen(s)%2!=0)  return false;
    
    char in[3]={'(','{','['};
    char out[3]={')','}',']'};
    
    char check = s[0];
    if(check==')'||check=='}'||check==']') return false;
    char* stack = (char*)malloc(sizeof(char)*strlen(s));
    int p = 0;
    
    for(int i=0; i<strlen(s); i++){
        check=s[i];
        if(check=='('||check=='{'||check=='['){
            if(check == '(')
                stack[p]=')';
            else if(check == '{')
                stack[p]='}';
            else if(check == '[')
                stack[p]=']';
            p++;
        }else{
            if(p==0)
                return false;
            p--;
            if(stack[p]!=check)
                return false;
        }
    }
    if(p==0)
        return true;
    else
        return false;
}