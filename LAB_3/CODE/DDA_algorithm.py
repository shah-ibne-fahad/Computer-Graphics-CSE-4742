from graphics import *
def main():
    win = GraphWin("C193048 Draw line using DDA algorithm", 500, 500)
    x1=100
    y1=100
    x2=200
    y2=200
    dx=abs(x2-x1)
    dy=abs(y2-y1)
    
    if dx > dy :
        step = dx
    else:
        step = dy
    x_inc = dx / step
    y_inc = dy / step
    x=x1
    y=y1
    i = 0
    while i <= step :
        aPoint = Point(x, y)
        aPoint.draw(win)
        x += x_inc
        y += y_inc
        i += 1
   
    win.getMouse()
    win.close()
main()