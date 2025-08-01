## Code Analysis: Maximum Path Sum in a Triangle (Dynamic Programming)

The provided C++ code calculates the maximum total from top to bottom in a triangle of numbers. This is a classic dynamic programming problem.

### Function Signature:
`int tsp(const vector<vector<int>>& tri)`
- `tri`: This is the input, a constant reference to a 2D vector of integers, representing the triangle. Each inner vector `tri[row]` represents a row in the triangle.

### Initialization:
`vector<vector<int>> dp = tri;`
- A 2D vector `dp` (dynamic programming table) is initialized as a copy of the input `tri`. This `dp` table will be used to store the maximum path sums from each position to the bottom of the triangle.

### Iteration (Bottom-Up Approach):
```cpp
for (int row = dp.size() - 2; row >= 0; --row) {
    for (int col = 0; col < dp[row].size(); ++col) {
        dp[row][col] += max(dp[row + 1][col], dp[row + 1][col + 1]);
    }
}
```
- The outer loop iterates from the second-to-last row (`dp.size() - 2`) up to the top row (`row >= 0`). This is a bottom-up approach, meaning it calculates the maximum paths from the bottom rows upwards.
- The inner loop iterates through each element (`col`) in the current `row`.
- **Core Logic:** `dp[row][col] += max(dp[row + 1][col], dp[row + 1][col + 1]);`
    - For each element `dp[row][col]`, it adds the maximum of its two possible children in the row below (`dp[row + 1][col]` and `dp[row + 1][col + 1]`).
    - `dp[row + 1][col]` represents the element directly below `dp[row][col]`.
    - `dp[row + 1][col + 1]` represents the element to the right of `dp[row + 1][col]`.
    - By adding the maximum of these two children, `dp[row][col]` is updated to store the maximum path sum starting from `tri[row][col]` and going all the way to the bottom of the triangle.

### Result:
`return dp[0][0];`
- After the loops complete, `dp[0][0]` will contain the maximum total path sum starting from the very top element of the triangle (`tri[0][0]`) and reaching any element in the bottom row. This is because the calculations propagated the maximum sums upwards to the top of the `dp` table.



### Example:
Let's consider the following triangle:
```
   3
  7 4
 2 4 6
8 5 9 3
```

**Initial `dp` table (copy of `tri`):**
```
   3
  7 4
 2 4 6
8 5 9 3
```

**Iteration 1: `row = 2` (second-to-last row, `2 4 6`)**
- `dp[2][0]` (value 2): `2 + max(dp[3][0], dp[3][1]) = 2 + max(8, 5) = 2 + 8 = 10`
- `dp[2][1]` (value 4): `4 + max(dp[3][1], dp[3][2]) = 4 + max(5, 9) = 4 + 9 = 13`
- `dp[2][2]` (value 6): `6 + max(dp[3][2], dp[3][3]) = 6 + max(9, 3) = 6 + 9 = 15`

**`dp` table after Iteration 1:**
```
   3
  7 4
 10 13 15
8 5 9 3
```

**Iteration 2: `row = 1` (row `7 4`)**
- `dp[1][0]` (value 7): `7 + max(dp[2][0], dp[2][1]) = 7 + max(10, 13) = 7 + 13 = 20`
- `dp[1][1]` (value 4): `4 + max(dp[2][1], dp[2][2]) = 4 + max(13, 15) = 4 + 15 = 19`

**`dp` table after Iteration 2:**
```
   3
  20 19
 10 13 15
8 5 9 3
```

**Iteration 3: `row = 0` (top row `3`)**
- `dp[0][0]` (value 3): `3 + max(dp[1][0], dp[1][1]) = 3 + max(20, 19) = 3 + 20 = 23`

**Final `dp` table:**
```
   23
  20 19
 10 13 15
8 5 9 3
```

**Result:**
The function returns `dp[0][0]`, which is `23`. This is the maximum total path sum from the top to the bottom of the triangle.

