import sys
from urllib.request import urlopen
import ssl

def ho(row,col):
    global arr
    product = arr[row][col]
    for i in range(1,4,1):
        if col+i > ho_len:
            return(False)
        else:
            product = product * arr[row][col+i]
    return(product)

def ver(row,col):
    global arr
    product = arr[row][col]
    for i in range(1,4,1):
        if row+i > ver_len:
            return(False)
        else:
            product = product * arr[row+i][col]
    return(product)

def down(row,col):
    global arr
    product = arr[row][col]
    for i in range(1,4,1):
        if col+i > ho_len or row+i > ver_len:
            return(False)
        else:
            product = product * arr[row+i][col+i]
    return(product)

def up(row,col):
    global arr
    product = arr[row][col]
    for i in range(1,4,1):
        if col-i < 0 or row-i < 0 :
            return(False)
        else:
            product = product * arr[row-i][col-i]
    return(product)

def cal(row,col):
    global maxi
    if ho(row,col) != False:
        if ho(row,col) > maxi:
          maxi = ho(row,col)
    if ver(row, col) != False:
        if ver(row,col) > maxi:
            maxi = ver(row,col)
    if down(row, col) != False:
        if down(row,col) > maxi:
            maxi = down(row,col)
    if up(row, col) != False:
        if up(row,col) > maxi:
            maxi = up(row,col)

def init_cal(row,col):
    if ho(row,col) != False:
        return(ho(row,col))
    if ver(row, col) != False:
        return(ver(row,col))
    if down(row, col) != False:
        return(down(row,col))
    if up(row, col) != False:
        return(up(row,col))

command_line_parameter = sys.argv[1]
context = ssl._create_unverified_context()
f = urlopen(command_line_parameter,context=context)
ver_len = 0
arr = list()
for line in f:
    s = str(line)[2:-3]
    s=s.split()
    arr.append(s)
    ver_len = ver_len + 1
f.close()
ho_len = len(arr[0]) - 1
ver_len = ver_len - 1
for col in range(0,ho_len+1,1):
    for row in range(0,ver_len+1,1):
        arr[row][col] = int(arr[row][col])
maxi = init_cal(0,0)
for col in range(0,ho_len+1,1):
    for row in range(0,ver_len+1,1):
        cal(row,col)
print(maxi)

