import matplotlib.pyplot as plt

# Read bomber plane positions
f = open("input.txt", "r")
a = []
b = []
for line in f:
    coo = line.split()
    a.append(float(coo[0]))
    b.append(float(coo[1]))
f.close()

# Read fighter plane positions
f = open("output.txt", "r")
c = []
d = []
for line in f:
    coo = line.split()
    c.append(float(coo[0]))
    d.append(float(coo[1]))
f.close()

plt.style.use('ggplot')
plt.title('Graphical Representation of a Pure Pursuit')
plt.plot(a, b, marker=6, c='red', label='Bomber path')
plt.plot(c, d, marker='+', c='blue', label='Fighter path', alpha=0.7)
plt.legend()
plt.show()