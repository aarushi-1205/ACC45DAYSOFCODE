def getInfo(x1, y1, x2, y2):
   return x1*y2 - y1*x2

def solve(points):
   N = len(points)
   firstx, firsty = points[0]
   prevx, prevy = firstx, firsty
   res = 0

   for i in range(1, N):
      nextx, nexty = points[i]
      res = res + getInfo(prevx,prevy,nextx,nexty)
      prevx = nextx
      prevy = nexty
   res = res + getInfo(prevx,prevy,firstx,firsty)
   return abs(res)/2.0

points = [(0, 0), (0,5), (3, 5), (3,0)]
print(solve(points))
