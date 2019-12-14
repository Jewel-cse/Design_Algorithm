#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Dec 12 21:21:48 2019

@author: jewel
"""
#MEET IN THE THE MIDDLE 

# find all possible subset sum of array 
def Calc_sub_array(a,x,n,c):
    for i in range(1<<n):
        s = 0
        for j in range(n):
            if (i & (1<<j)):
                s += a[j+c]
        x.append(s)
        
def subset_sum(a,n,S):

    Calc_sub_array(a,x,n//2,0)
    Calc_sub_array(a,y,n-n//2,n//2)
    
   # sorted(x)
    sorted(y)
    s = 0
    size_x = 1<<(n//2)
    size_y = 1<<(n-n//2)
    for i in range(size_x):
        for j in range(size_y):
            if x[i]+y[j]<=S:
                 if(x[i]+y[j]>s):
                     s = x[i]+y[j]
    return s        

# driver code
x = []
y = []
a = []
n = int(input("Enter the number of element : "))
print('take value :')
for i in range(n):
    a.append(int(input()))

S = int(input("Enter sum : "))
print("VALUE : ",subset_sum(a,n,S))
