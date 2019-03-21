def plus_or_minus (arg):
    if arg<0:
        return "minus"
    elif arg>0:
        return "plus"

result = plus_or_minus(0)
print(result)
