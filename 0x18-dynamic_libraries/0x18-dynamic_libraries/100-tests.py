import random
import ctypes

# Load the shared library
ops = ctypes.CDLL('./liboperations.so')

# Generate random numbers
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call C functions from Python
print(f"{a} + {b} = {ops.add(a, b)}")
print(f"{a} - {b} = {ops.sub(a, b)}")
print(f"{a} x {b} = {ops.mul(a, b)}")
print(f"{a} / {b} = {ops.div(a, b)}")
print(f"{a} % {b} = {ops.mod(a, b)}")
