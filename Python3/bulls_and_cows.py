class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        bull = 0
        cows = 0
        
        for i, j in zip(secret, guess):
            if i == j:
                bull += 1
                secret = secret.replace(i, "", 1)
                guess = guess.replace(j, "", 1)
        
        for i, num in enumerate(guess):
            if num in secret:
                cows += 1
                secret = secret.replace(num, "", 1)
        
        return str(bull) + "A" + str(cows) + "B"
