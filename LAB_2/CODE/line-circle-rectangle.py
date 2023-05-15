from graphics import *
def main():
    win = GraphWin("C193048 line-circle-rectangle", 500, 400)
    # line
    aLine = Line(Point(100,50), Point(100,200))
    aLine.draw(win)
    # circle
    c = Circle(Point(200,120), 50)
    c.draw(win)
    # rectangle
    aRectangle = Rectangle(Point(300,50), Point(450,200))
    aRectangle.draw(win)

    win.getMouse()
    win.close()
main()