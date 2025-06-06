import numpy as np

# Matrix multiplication
A = np.array([[3, 1, 4]])
B = np.array([[4], [2], [6]])

print(np.matmul(A, B))

A = np.array([[3, 2, 5, 1, 0.4, 2.3], [1.3, 1.4, 2.5, 8.7, 4.1, 12]])
B = np.array([[4, 2.4, 3.4, 5.4, 6.4], [2, 3.9, 4.9, 5.9, 6.9], [6.1, 7.8, 3.5, 5.7, 3.3], [5.1, 1.4, 2.5, 8.7, 4.1], [7.7,  2.4, 3.4, 5.4, 6.4], [10.8,  2.4, 3.4, 5.4, 6.4]])

print(np.matmul(A, B))