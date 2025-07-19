n = 1000
number = 2 ** n
digit_sum = sum(int(d) for d in str(number))

print(f"2^{n} has {len(str(number))} digits")
print(f"Sum of all digits: {digit_sum}")
