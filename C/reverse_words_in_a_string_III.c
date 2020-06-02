void reverse(char * s, int x, int y){
    for(int i = x; i < y; i++){
        char tmp = *(s+i);
        *(s+i) = *(s+y);
        *(s+y) = tmp;
        y--;
    }
}

char * reverseWords(char * s){
    int j = 0;
    int end = strlen(s);    
    
    for(int i = 0; i < end; i++) {            
        if(*(s+i) == ' ') {
            reverse(s, j, i-1);
            j = i + 1;
        }
    }
    reverse(s, j, end-1);
        
    return s;
}
