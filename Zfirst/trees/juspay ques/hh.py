def count_paths(grid):
    if not grid or not grid[0]:
        return 0

    m, n = len(grid), len(grid[0])
    dp = [[0] * n for _ in range(m)]

    for i in range(m):
        if grid[i][0] == 1:  # Inverted condition
            break
        dp[i][0] = 1

    for j in range(n):
        if grid[0][j] == 1:  # Inverted condition
            break
        dp[0][j] = 1

    for i in range(1, m):
        for j in range(1, n):
            if grid[i][j] == 0:  # Inverted condition
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1]

    return dp[-1][-1]