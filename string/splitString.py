class Solution(object):
    def balancedStringSplit(self, s):
        """
        :type s: str
        :rtype: int
        """
        balanced = 0
        count = 0;
        
        for i in s:
            if i == 'L':
                balanced += 1
            else:
                balanced-= 1
            
            if balanced == 0 :
                count += 1
        
        return count
        
