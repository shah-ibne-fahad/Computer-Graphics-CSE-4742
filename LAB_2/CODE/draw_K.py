from graphics import *
def main():
    win = GraphWin("C193048 draw_K", 500, 400)

    aLine = Line(Point(100,50), Point(300,50))
    aLine.draw(win)
    aLine = Line(Point(200,50), Point(200,200))
    aLine.draw(win)
    aLine = Line(Point(200,50), Point(110,140))
    aLine.draw(win)
    aLine = Line(Point(110,140), Point(200,200))
    aLine.draw(win)
    aLine = Line(Point(200,50), Point(250,110))
    aLine.draw(win)
    c = Circle(Point(241,110), 7)
    c.draw(win)
    
    win.getMouse()
    win.close()
main()