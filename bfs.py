from collections import deque
class Solution:
    
    #Function to return Breadth First Traversal of given graph.
    def bfsOfGraph(self, V, adj):
        # code here
        q = deque()
        vis = [False]*V
        res = []
        vis[0] = True
        q.append(0)
        
        while q:
            temp = q.popleft()
            res.append(temp)
            for i in adj[temp]:
                if vis[i]==False:
                    q.append(i)
                    vis[i]=True
        return res