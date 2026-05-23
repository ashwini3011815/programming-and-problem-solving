# Type Content here...
set_a = set(map(int, input("Set A: ").split()))
set_b = set(map(int, input("Set B: ").split()))
union_result = set_a.union(set_b)
intersection_result = set_a.intersection(set_b)
difference_result = set_a.difference(set_b)
print("Union:", union_result)
print("Intersection:", intersection_result)
print("Difference:",difference_result)
