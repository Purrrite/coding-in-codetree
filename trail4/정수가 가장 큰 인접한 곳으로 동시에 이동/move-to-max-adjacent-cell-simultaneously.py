n, m, t = map(int, input().split())

# Create n x n grid
a = [list(map(int, input().split())) for _ in range(n)]
marble_map = [[0] * n for _ in range(n)]

# Get m marble positions
marbles = [tuple(map(int, input().split())) for _ in range(m)]
r = [pos[0] - 1 for pos in marbles]
c = [pos[1] - 1 for pos in marbles]

# Please write your code here.
DIRS = [ #상하좌우 순서
    (-1, 0),
    (1, 0),
    (0, -1),
    (0, 1)
]

def in_range(r, c):
    return 0 <= r < n and 0 <= c < n

def remove_collide():
    for row in range(n):
        for col in range(n):
            if marble_map[row][col] >= 2:
                marble_map[row][col] = 0

for cr, cc in zip(r, c):
    marble_map[cr][cc] += 1
    
# for row in marble_map:
#     print(*row)
# print("==========")

def simulate():
    temp_marble_map = [[0] * n for _ in range(n)]
    for row in range(n):
        for col in range(n):
            temp_marble_map[row][col] = marble_map[row][col]
    
    for row in range(n):
        for col in range(n):
            if marble_map[row][col] == 0:
                continue
            
            cr = row
            cc = col
            
            next_dir_idx = 0
            next_max_elem = 0
            
            for j in range(4):
                temp_r = cr + DIRS[j][0]
                temp_c = cc + DIRS[j][1]
                
                if not in_range(temp_r, temp_c):
                    continue
                
                next_elem = a[temp_r][temp_c]
                
                if next_max_elem < next_elem:
                    next_dir_idx = j
                    next_max_elem = next_elem
            
            nr = cr + DIRS[next_dir_idx][0]
            nc = cc + DIRS[next_dir_idx][1]
            
            temp_marble_map[nr][nc] += 1
            temp_marble_map[cr][cc] -= 1
    
    for row in range(n):
        for col in range(n):
            marble_map[row][col] = temp_marble_map[row][col]
        
    # for row in marble_map:
    #     print(*row)
    # print("==========")
    
    remove_collide()
        
for time in range(t):
    simulate()
    
answer = 0
for row in range(n):
    for col in range(n):
        if marble_map[row][col] == 1:
           answer += 1
           
print(answer)