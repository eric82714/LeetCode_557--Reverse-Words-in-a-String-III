class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split(' ')        
        result = []
        
        for w in s:
            result.append(w[::-1])
        
        return ' '.join(result)
