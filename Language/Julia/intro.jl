print("Hello World")

# δ = 0.00001
# print(δ)

print("\n")

print(1+2+3)

print("\n")

print(123 ⊻ 234)

print("\n")

print(1 == 1)

print("\n")

print(1==2)

print("\n")

# Integers are compared in the standard manner – by comparison of bits. Floating-point numbers are compared according to the IEEE 754 standard:

# Finite numbers are ordered in the usual manner.
# Positive zero is equal but not greater than negative zero.
# Inf is equal to itself and greater than everything else except NaN.
# -Inf is equal to itself and less than everything else except NaN.
# NaN is not equal to, not less than, and not greater than anything, including itself.
# The last point is potentially surprising and thus worth noting:

print(NaN == NaN)

print("\n")

print(NaN != NaN)

# and can cause headaches when working with arrays:


print("\n")

print([1 NaN] == [1 NaN])

# Julia provides additional functions to test numbers for special values, which can be useful in situations like hash key comparisons:


# isequal considers NaNs equal to each other:



print("\n")

print(isequal(NaN, NaN))

print("\n")

print(isequal([1 NaN], [1 NaN]))

print("\n")

print(isequal(NaN, NaN32))

# isequal can also be used to distinguish signed zeros:

print("\n")

print(-0.0 == 0.0)

print("\n")

print(isequal(-0.0, 0.0))

# Chaining comparisons
# Unlike most languages, with the notable exception of Python, comparisons can be arbitrarily chained:

print("\n")

print(1 < 2 <= 2 < 3 == 3 > 2 >= 1 == 1 < 3 != 5)