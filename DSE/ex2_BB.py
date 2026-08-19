import numpy as np
a = np.arange(15).reshape(3, 5)

print(a)
print(a.shape)
print(a.ndim)
print(a.dtype.name)
print(a.itemsize)
print(a.size)

arr = np.array([1, 2, 3, 4, 5, 6, 7, 8])
x = np.where(arr%2 == 1)

print(x)
print(arr[1:5])
print(arr[2] + arr[3])


fvalues =[0,12,45.21,34,99.91,32]
F = np.array(fvalues)

print("Values in Fahrenheit degrees:")
print(F)
print("Values in Centigrade degrees:")
print(np.round((5*F/9-5*32/9),2))