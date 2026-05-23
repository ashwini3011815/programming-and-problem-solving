import math
a,b,c =  map(int, input().split())
d = b*b - 4*a*c
if d > 0:
	print(f"root1 = {(-b + math.sqrt(d))/(2*a):.2f}")
	print(f"root2 = {(-b - math.sqrt(d))/(2*a):.2f}")
elif d == 0:
	print(f"root1 = root2 = {-b/(2*a):.2f}")
else:
	r = -b/(2*a)
	i = math.sqrt(-d)/(2*a)
	print(f"root1 = {r:.2f}+{i:.2f}i")
	print(f"root2 = {r:.2f}-{i:.2f}i")

