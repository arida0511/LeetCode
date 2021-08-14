

int lengthOfLastWord(char * s){
    //char ch=s[0];
    int num=0;
    int save=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' ')
            num=0;
        else
            num++;
        if(num!=0)
            save = num;
    }
    return save;
}