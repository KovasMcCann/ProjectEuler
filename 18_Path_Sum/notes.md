[Combinatorial Optimization](https://www.cs.cmu.edu/afs/cs.cmu.edu/project/learn-43/lib/photoz/.g/web/glossary/comb.html)
 - Traveling Salesman Problem
 - Values and "Search Space" Changes
 - Distance will always be 1
    - $max(|x_1 - x_2|, |y_1, - y_2|)$
 - One method of solving the Traveling Salesman Problem is **BackTracking**


# Creating a Data Structure

 - need to store postition (x,y) and value (z)
    - [x, y, z]
    - $y_2 = y_1 + 1$
    - $x = y$



# Solving A different Problem

```python
import itertools

def chebyshev_distance(p1, p2):
    return max(abs(p1[0] - p2[0]), abs(p1[1] - p2[1]))

def total_cost(path):
    return sum(chebyshev_distance(path[i], path[i + 1]) for i in range(len(path) - 1))

def find_worst_path(points):
    max_cost = -1
    worst_path = []

    for perm in itertools.permutations(points):
        cost = total_cost(perm)
        if cost > max_cost:
            max_cost = cost
            worst_path = perm

    return max_cost, worst_path

# Example points
points = [(1, 1), (4, 1), (4, 5), (1, 5)]

max_cost, worst_path = find_worst_path(points)

print("Greatest cost:", max_cost)
print("Worst path:", worst_path)
```

# Resources

[Combinatorial Optimization](https://www.mathematik.uni-muenchen.de/~kpanagio/KombOpt/book.pdf)
[Numerical Recipes in C](https://www.cec.uchile.cl/cinetica/pcordero/MC_libros/NumericalRecipesinC.pdf)

