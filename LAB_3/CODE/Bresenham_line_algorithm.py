from graphics import *
def main():
    win = GraphWin("C193048 Draw Line using Bresenham's line algorithm", 500, 500)
    x1=100 
    y1=100
    x2=300
    y2=300
    dx = x2-x1
    dy = y2-y1
    i1 = 2*dy
    i2 = 2*(dy-dx)
    d = i1 - dx
    x = x1
    y = y1
    aPoint = Point(x, y)
    aPoint.draw(win)
    while x < x2 :
        x += 1
        if d < 0 : 
            d += i1
        else:
            y += 1
            d += i2
        bPoint = Point(x, y)
        bPoint.draw(win)

    win.getMouse()
    win.close()
main()