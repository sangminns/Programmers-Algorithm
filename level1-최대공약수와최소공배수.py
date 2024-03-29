def solution(n, m):
    answer = [gcd(n,m), lcm(n,m)]
 
    return answer

def gcd(a, b):
    mod = a%b
    while mod > 0:
        a = b
        b = mod
        mod = a%b
    return b
    
def lcm(a, b):
    return a*b//gcd(a,b)