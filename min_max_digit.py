def min_max_digits(n):  ###DEFINE A FUNCTION
    min=9               ###ASSUME A DEFAULT MIN AND MAX VALUE
    max=0
    while n!=0:         ###USING WHILE LOOPS FOR ITERATING THROUGH THE NUMBER AND EXTRACTING EACH DIGIT TO COMPARE
        a=n%10
        n=n//10
        if min>a:
            min=a       ###UPDATING NEW MIN AND MAX VALUE IF THE CONDITIONS ARE TRUE
        if max<a:
            max=a
    return min,max      ###RETURNING THE RESULT
n=int(input())
print(min_max_digits(n))###PRINTING THE RESULT
