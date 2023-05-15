from graphics import *
def main():
    win = GraphWin("C193048 Draw Line using line equation", 500, 500)
    x1=100
    y1=100
    x2=250
    y2=250
    m = (y2-y1)/(x2-x1)
    c=y1-(m*x1)
    x = x1
    while x < x2 :
        y=(m*x)+c;
        aPoint = Point(x, y)
        aPoint.draw(win)
        x += 1

    win.getMouse()
    win.close()
main()
