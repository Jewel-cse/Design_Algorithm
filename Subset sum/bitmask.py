#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Dec 14 07:48:04 2019

@author: jewel
"""

# create all possible subset sum array
def sum_array(a,x,n):
    for i in range(1<<n):
        s = 0
        for j in range (n):
            if (i & (1<<j)):
                s +=a[j]
        x.append(s)         
#check given sum are consist ?
def check(S,x,n):
    for i in range(1<<n):
        if x[i]==S:
            return True
    return False
    
# Driver code 
x = [] # contain subset sum
a = [] # contain given array element 

n = int(input("Enter the number of element : "))
print('take value :')
for i in range(n):
    a.append(int(input()))
    
S = int(input("Enter sum : "))
sum_array(a,x,n)
#print(x)
print ("possible "if check(S,x,n) else "Not possible")





    