#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Dec 11 17:54:04 2019

@author: jewel
"""
# take three points and check orientation 
#return +ve --> for counter clock wise
def orient(o,a,b):
    return (b[1]-a[1])*(a[0]-o[0])-((b[0]-a[0])*(a[1]-o[1]))


def convex_hull(points):
    points = sorted(set(points))
    
    if len(points)<=1:
        return points
    lower = []
    for p in points:
        while len(lower)>=2 and orient(lower[-2],lower[-1],p)<=0 :
            lower.pop()
        lower.append(p)
    upper = []
    for p in reversed(points):
        while len(upper)>=2 and orient(upper[-2],upper[-1],p)<=0 :
            upper.pop()
        upper.append(p)
        
    return lower[:-1]+upper[:-1]
        
# driver code 
list_of_CH = convex_hull((i//10,i%10) for i in range(100))
print(list_of_CH)