

int romanToInt(char * s){
    char num;
    char check;
    int sum=0;
    int size=strlen(s);
    bool lastflag=false;
    
    for(int i=0;i<size;i++){
        num = s[i];
        
        if(i==size-1){
            lastflag = true;
        } //마지막이면
        else
            check=s[i+1];
        if(num=='I'){
            if(lastflag==false){
                if(check=='V'||check=='X'){
                    sum -= 1;
                    continue;
                }
            }
            sum += 1;
        }
        else if(num=='V'){
            sum += 5;
        }
        else if(num=='X'){
            if(lastflag==false){
                if(check=='L'||check=='C'){
                    sum -= 10;
                    continue;
                }
            }
            sum += 10;
        }
        else if(num=='L'){
            sum += 50;
        }
        else if(num=='C'){
            if(lastflag==false){
                if(check=='D'||check=='M'){
                    sum -= 100;
                    continue;
                }
            }
            sum += 100;
        }
        else if(num=='D'){
            sum += 500;
        }
        else if(num=='M'){
            sum += 1000;
        }
    }
    //마지막꺼 어떻게 처리할 지 생각.
    return sum;
}