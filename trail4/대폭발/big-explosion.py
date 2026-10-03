n, m, r, c = map(int, input().split())

# Please write your code here.
grid = [[0] * n for _ in range(n)]
placed = [[0] * n for _ in range(n)]

grid[r - 1][c - 1] = 1
placed[r - 1][c - 1] = 1


DIRS = [
    (0, 1),
    (1, 0),
    (0, -1),
    (-1, 0)
]

def make_bomb(distance):
    for cr in range(n):
        for cc in range(n):
            if placed[cr][cc] == 0:
                continue
            
            for dir in DIRS:
                nr = cr + dir[0] * distance
                nc = cc + dir[1] * distance
                
                if in_range(nr, nc):
                    grid[nr][nc] = 1
                    
    for row in range(n):
        for col in range(n):
            if grid[row][col] == 1:
                placed[row][col] = 1

def in_range(r, c):
    return 0 <= r < n and 0 <= c < n

current_distance = 1

for _ in range(m):
    make_bomb(current_distance)
    current_distance *= 2
    
total_sum = 0

# for row in grid:
#     print(*row)

for row in range(n):
    for col in range(n):
        total_sum += placed[row][col]
print(total_sum)
            