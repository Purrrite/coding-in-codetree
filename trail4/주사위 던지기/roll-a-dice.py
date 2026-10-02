n, m, r, c = map(int, input().split())
directions = list(input().split())

# Please write your code here.
grid = [[0] * (n + 1) for _ in range(n + 1)]

def roll_dice(dir, up_side, front_side, right_side):
    #return up, front, right 순서
    match dir:
        case "U":
            return front_side, 7 - up_side, right_side
        case "D":
            return 7 - front_side, up_side, right_side
        case "R":
            return 7 - right_side, front_side, up_side
        case "L":
            return right_side, front_side, 7 - up_side
        case _:
            return right_side, front_side, up_side

def in_range(r, c):
    return 0 < r <= n and 0 < c <= n

def next_position(dir, r, c):
    match dir:
        case "U":
            r -= 1
        case "D":
            r += 1
        case "R":
            c += 1
        case "L":
            c -= 1
    return r, c

grid[r][c] = 6 #시작점

cr, cc = r, c
up_side, front_side, right_side = 1, 2, 3

for direction in directions:
    nr, nc = next_position(direction, cr, cc)
    
    if not in_range(nr, nc):
        continue
    
    cr, cc = nr, nc
    up_side, front_side, right_side = roll_dice(direction, up_side, front_side, right_side)
    grid_number = 7 - up_side
    grid[cr][cc] = grid_number
    
grid_sum = 0
for row in grid:
    grid_sum += sum(row)
    # print(*row)
    
print(grid_sum)