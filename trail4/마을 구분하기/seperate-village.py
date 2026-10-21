n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.
DIRS = [
    (0, 1),
    (1, 0),
    (0, -1),
    (-1, 0)
]

def can_go(y, x):
    if not (0 <= y < n and 0 <= x < n):
        return False
    
    if grid[y][x] != 1:
        return False
    
    return True

def dfs_wrapper(y, x):
    current_population = 0
    
    def dfs(cy, cx):
        nonlocal current_population
        
        grid[cy][cx] = 0
        current_population += 1
        
        for dy, dx in DIRS:
            ny = cy + dy
            nx = cx + dx
            
            if can_go(ny, nx):
                dfs(ny, nx)
                
    dfs(y, x)
    
    return current_population
        
population = []
town_count = 0

for y in range(n):
    for x in range(n):
        if grid[y][x] == 1:
            town_count += 1
            current_population = dfs_wrapper(y, x)
            population.append(current_population)
            
print(town_count)
population.sort()
print(*population, sep="\n")
        
        
