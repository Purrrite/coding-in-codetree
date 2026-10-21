n, m = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.
DIRS = [
    (0, 1),
    (1, 0)
    #위, 왼쪽으로는 갈 수 없음
]

def can_go(y, x):
    if not (0 <= y < n and 0 <= x < m):
        return False
    
    if visited[y][x] == True:
        return False
    
    if grid[y][x] == 0:
        return False
    
    return True

visited = [[False] * m for _ in range(n)]

def dfs(cy, cx):
    visited[cy][cx] = True
    
    for dy, dx in DIRS:
        ny = cy + dy
        nx = cx + dx
        
        if can_go(ny, nx):
            dfs(ny, nx)
            
dfs(0, 0)
            
answer = 1 if visited[n - 1][m - 1] else 0
print(answer)