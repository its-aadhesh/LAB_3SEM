import numpy as np

a = np.array([[1, 2], [3, 4]])
b = np.array([[4, 3], [2, 1]])

print ("Array sum:\n", a + b)

print ("Array multiplication:\n", a*b)

print ("Matrix multiplication:\n", a.dot(b))