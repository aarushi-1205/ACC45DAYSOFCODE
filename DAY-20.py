from scipy.stats import binom

n = 6
p = 0.6
r_values = list(range(n + 1))
mean, var = binom.stats(n, p)
dist = [binom.pmf(r, n, p) for r in r_values ]
print("r\tp(r)")
for i in range(n + 1):
    print(str(r_values[i]) + "\t" + str(dist[i]))
print("mean = "+str(mean))
print("variance = "+str(var))
