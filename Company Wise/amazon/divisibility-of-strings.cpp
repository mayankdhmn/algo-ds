def isDivisible(s, t):
    
    n, m = len(s), len(t)
    
    # step 1 : check if s is divisible by t
    if n % m != 0:
        return -1
    if t * (n // m) != s:
        return -1
    
    # step 2 : find smallest u such that t is divisible by u
    for l in range(1, m//2 + 1):
        if m % l != 0:
            continue
        if t[:l] * (m // l) == t:
            return l
        
    # step 3 : if there is no smaller u, t is the answer
    return m