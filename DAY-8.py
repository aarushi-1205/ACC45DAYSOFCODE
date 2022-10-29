def Triplets(a, b, c):
	
	if (a <= 0 or b <= 0 or c <= 0):
		return False
		
	vec = [ a, b, c ]
	vec.sort()

	a = vec[0]; b = vec[1]; c = vec[2]
	if (a + b <= c):
		return False

	p1 = a; p2 = c - b
	div = __gcd(p1, p2)
	p1 //= div
	p2 //= div

	q1 = c + b
	q2 = a
	div = __gcd(q1, q2)
	q1 //= div
	q2 //= div

	return (p1 == q1 and p2 == q2)

def checkTriplet(a, b, c):
	
	if (Triplets(a, b, c)):
		return "Yes"
	else:
		return "No"

def __gcd(a, b):
	if (b == 0):
		return a
	return __gcd(b, a % b)
a = 4
b = 3
c = 5
print(checkTriplet(a, b, c))

a = 8
b = 13
c = 5
print(checkTriplet(a, b, c))

a = 1200000000000
b = 1600000000000
c = 2000000000000
print(checkTriplet(a, b, c))
