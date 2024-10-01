def odd_even(n):
    if(n%2==0):
        return "even"
    else:
        return "odd"
n1=int(input('enter a number: '))
print(odd_even(n1))