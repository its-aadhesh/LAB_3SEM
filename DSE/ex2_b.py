import numpy as np

float_array = np.array([[1,2,4],[5,6,7]], dtype='float')
print("Array created using passed list:\n", float_array)

tuple_array = np.array((1,3,6))
print("Array created using passed tuple:\n", tuple_array)

zero_array = np.zeros((3,4))
print("An array initialized with all zeros:\n", zero_array)

const_array = np.full((3,3), 6, dtype='complex')
print("An array initialized with a constant value:\n", const_array)

random_array = np.random.random((2,2))
print("A random array:\n", random_array)

sequence_array_a = np.arange(1, 30, 5)
print("A sequential array with step 5:\n", sequence_array_a)

sequenced_array_b = np.linspace(1, 10, 5)
print("A sequential array with 5 values between 1 and 10:\n", sequenced_array_b)

first_array = np.arange(1, 13).reshape(3,4)
reshaped_array = first_array.reshape(2,2,3)    
print("First array:\n", first_array)
print("A sequential array reshaped to 2x2x3:\n", reshaped_array)

another_array = np.arange(1, 7).reshape(2,3)
flattened_array = another_array.flatten()
print("Original array:\n", another_array)
print("Flattened array:\n", flattened_array)