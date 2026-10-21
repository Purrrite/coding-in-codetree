n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.
DIRS = [
    (0, 1),
    (1, 0),
    (-1, 0),
    (0, -1)
]

def can_go(y, x, block_id):
    if not (0 <= y < n and 0 <= x < n):
        return False
    
    if grid[y][x] != block_id:
        return False
    
    return True

def dfs(y, x):
    current_block = grid[y][x]
    blocks = 0
    
    def dfs_inner(cy, cx):
        nonlocal current_block, blocks
        blocks += 1
        grid[cy][cx] = 0

        for dy, dx in DIRS:
            ny = cy + dy
            nx = cx + dx
            
            if can_go(ny, nx, current_block):
                dfs_inner(ny, nx)
    
    dfs_inner(y, x)
    
    return blocks

max_blocks = 0
blast_count = 0

for y in range(n):
    for x in range(n):
        if grid[y][x] != 0:
            current_blocks = dfs(y, x)
            if current_blocks >= 4:
                blast_count += 1
            max_blocks = max(max_blocks, current_blocks)
            
print(blast_count, max_blocks)


