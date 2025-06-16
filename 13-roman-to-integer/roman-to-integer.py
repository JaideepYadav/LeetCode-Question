class Solution(object):
    def romanToInt(self, s):
        map={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        a=len(s);
        total=0
        for i in range(0,a-1):
            if map[s[i]]<map[s[i+1]]:
                total-=map[s[i]]
            else:
                total+=map[s[i]]
        total+=map[s[a-1]];
        return total

        