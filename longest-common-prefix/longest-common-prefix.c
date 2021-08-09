

char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0) return "";
    if(strsSize==1) return strs[0];
    
    int idx=0;
    int pfxsize=1;
    bool noflag = false;
    char *rslt = "";
    char *pfx, *cmp;
    
    for(pfxsize=1;pfxsize<=strlen(strs[0]);pfxsize++){
        pfx = malloc(sizeof(char)*pfxsize+1);
        cmp = malloc(sizeof(char)*pfxsize+1);
        strncpy(pfx,strs[0],pfxsize);
        pfx[pfxsize]='\0';
        for(idx=0;idx<strsSize;idx++){
            strncpy(cmp,strs[idx],pfxsize);
            cmp[pfxsize]='\0';
            if(strcmp(cmp,pfx)!=0){
                noflag=true;
                continue;
            }
        }
        if(noflag==false)
            rslt=pfx;
        else
            noflag=false;
    }
    return rslt;
}