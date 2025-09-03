import numpy as np
import matplotlib.pyplot as plt

# Define the range of x (start slightly above 0 to avoid log(0))
x = np.linspace(0.1, 10, 500)

# Define the functions
y1 = x
y2 = x * np.log(x)
y3 = x ** 2

# Create the plot
plt.figure(figsize=(8, 6))
plt.plot(x, y1, label='x')
plt.plot(x, y2, label='x log x')
plt.plot(x, y3, label='x²')

# Add labels, legend and title
plt.xlabel('x')
plt.ylabel('f(x)')
plt.title('Plot of x, x log x, and x²')
plt.legend()
plt.grid(True)

# Save the figure to a PNG file
plt.savefig('functions_plot.png')

# Optionally show the plot
# plt.show()
