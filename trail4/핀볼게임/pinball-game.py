n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]

# Please write your code here.
DIRS = [
    (0, 1),
    (1, 0),
    (0, -1),
    (-1, 0)
]

def in_range(y, x):
    return 0 <= y < n and 0 <= x < n

def get_changed_direction(dir, shape):
    if shape == 1: # /
        match dir:
            case 0: #동
                return 3 #북
            case 1: #남
                return 2 #서
            case 2: #서
                return 1 #남
            case 3: #북
                return 0 #동
    if shape == 2: # \
        match dir:
            case 0: #동
                return 1 #남
            case 1: #남
                return 0 #동
            case 2: #서
                return 3 #북
            case 3: #북
                return 2 #서    

    return dir

def shoot_pinball(start_y, start_x, start_dir_idx):
    time = 0
    current_dir_idx = start_dir_idx
    cy = start_y
    cx = start_x
    
    while True:
        time += 1
        current_shape = grid[cy][cx]
        current_dir_idx = get_changed_direction(current_dir_idx, current_shape)
        
        ny = cy + DIRS[current_dir_idx][0]
        nx = cx + DIRS[current_dir_idx][1]
        
        if not in_range(ny, nx):
            return time + 1
        
        cy = ny
        cx = nx

max_times = 0

for i in range(n):
    current_times_1 = shoot_pinball(i, 0, 0) #동
    current_times_2 = shoot_pinball(0, i, 1) #남
    current_times_3 = shoot_pinball(i, n - 1, 2) #서
    current_times_4 = shoot_pinball(n - 1, i, 3) #북
    
    max_times = max(current_times_1, current_times_2, current_times_3, current_times_4, max_times)
    
print(max_times)