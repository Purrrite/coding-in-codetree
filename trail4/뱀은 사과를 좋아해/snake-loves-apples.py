N, M, K = map(int, input().split())

apple_x = [0] * 10000
apple_y = [0] * 10000
d = [""] * 1000
p = [0] * 1000

snake_map = [[0] * N for _ in range(N)]
apple_map = [[0] * N for _ in range(N)]

snake_map[0][0] = 1

DIRS = [
    (0, 1),
    (1, 0),
    (0, -1),
    (-1, 0)
]

def can_go(y, x, apples):
    in_range = 0 <= y < N and 0 <= x < N

    if not in_range:
        return False

    not_snake = snake_map[y][x] == 0 or snake_map[y][x] == apples + 1
    return not_snake

def erase_snake(apples):
    for cy in range(N):
        for cx in range(N):
            if snake_map[cy][cx] >= apples + 1:
                snake_map[cy][cx] = 0

def age_snake():
    for cy in range(N):
        for cx in range(N):
            # 뱀 흔적
            if snake_map[cy][cx] >= 1:
                snake_map[cy][cx] += 1

def get_dir_idx(direction):
    dir_idx = -1
    if direction == 'U':
        dir_idx = 3
    elif direction == 'D':
        dir_idx = 1
    elif direction == 'R':
        dir_idx = 0
    elif direction == 'L':
        dir_idx = 2

    return dir_idx

for i in range(M):
    apple_x[i], apple_y[i] = map(int, input().split())

for i in range(K):
    d[i], times = input().split()
    p[i] = int(times)


for i in range(M):
    apple_map[apple_x[i] - 1][apple_y[i] - 1] = 1

cy = 0
cx = 0
apples = 0
time = 0

for i in range(K):
    for j in range(p[i]):
        current_direction = d[i]
    
        snake_dir_idx = get_dir_idx(current_direction)
        ny = cy + DIRS[snake_dir_idx][0]
        nx = cx + DIRS[snake_dir_idx][1]
        time += 1
        
        if can_go(ny, nx, apples):
            cy, cx = ny, nx
            if apple_map[cy][cx] == 1:
                apples += 1
                apple_map[cy][cx] = 0
            else:
                erase_snake(apples)
            
            age_snake()
            snake_map[cy][cx] = 1
        else:
            print(time)
            exit()

print(time)
