import numpy as np
class point():
    def __init__(self,x,y):
        self.x=x
        self.y=y
class line():
    def __init__(self,w,b):
        self.b=b
        self.w=w
def distance(point,line):
    slope=line.w
    x=(point.y-line.b+point.x/slope)/(slope+1/slope)
    y=line.b+line.w*x
    return ((x-point.x)**2+(y-point.y)**2)**0.5
class polygon():
    def __init__(self,ar):
        self.points=ar
        self.mat=[[each.x,each.y] for each in ar]
    def area(self):
        return np.linalg.det(self.mat)*0.5
    def perimeter(self):
        dist=0
        for a in range(len(self.mat)-1):
            dist+=((mat[a][0]-mat[a+1][0])**2+(mat[a][1]-mat[a+1][1])**2)**0.5
        return dist
    
