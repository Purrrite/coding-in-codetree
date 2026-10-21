n, m = map(int, input().split())
edges = [tuple(map(int, input().split())) for _ in range(m)]

# Please write your code here.
graph = [[] for _ in range(n + 1)]

for i in range(m):
    v1, v2 = edges[i]
    graph[v1].append(v2)
    graph[v2].append(v1)
    
visited = [False] * (n + 1)

def dfs(start_idx):
    visited[start_idx] = True
    
    for neighbor in graph[start_idx]:
        if not visited[neighbor]:
            dfs(neighbor)
            
dfs(1)

print(sum(visited) - 1)