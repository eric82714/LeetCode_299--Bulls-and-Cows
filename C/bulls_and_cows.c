int find(char * secret, char x){
    for(int i = 0; i < strlen(secret); i++){
        if(x == secret[i]) return i;
    }
    return -1; 
}

char * getHint(char * secret, char * guess){
    int bull = 0;
    int cows = 0;
        
    for(int i = 0; i < strlen(secret); i++) {
        if(secret[i] == guess[i]) {
            bull ++;
            secret[i] = ' ';
            guess[i] = ' ';
        }
    }
        
    for(int i = 0; i < strlen(guess); i++) {
        int location = find(secret, guess[i]);
        if(guess[i] != ' ' && location != -1) {
            cows ++;
            secret[location] = ' ';
            guess[i] = ' ';
        }
    }
    
    char s1[100];
    sprintf (s1, "%d", bull);
    char s2[100];
    sprintf (s2, "%d", cows);
    strcat(s1, "A");
    strcat(s1, s2);
    strcat(s1, "B");
    printf("%s", s1);
    char* answer = s1;
    
    return answer;
}
