class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0;
        int cows = 0;
        
        for(int i = 0; i < secret.size(); i++) {
            if(secret[i] == guess[i]) {
                bull ++;
                secret[i] = ' ';
                guess[i] = ' ';
            }
        }
        
        for(int i = 0; i < guess.size(); i++) {           
            if(guess[i] != ' ' && secret.find(guess[i]) != string::npos) {
                cows ++;
                secret[secret.find(guess[i])] = ' ';
                guess[i] = ' ';
            }
        }
        
        return to_string(bull) + "A" + to_string(cows) + "B";
    }
};
