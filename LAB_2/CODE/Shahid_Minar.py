from graphics import *
def main():
    win = GraphWin("C193048 shahid_Minar", 500, 400)
    aLine = Line(Point(100,300), Point(400,300))
    aLine.draw(win)
    aLine = Line(Point(200,150), Point(200,300))
    aLine.draw(win)
    aLine = Line(Point(300,150), Point(300,300))
    aLine.draw(win)
    aLine = Line(Point(200,150), Point(300,150))
    aLine.draw(win)
    aLine = Line(Point(200,150), Point(280,50))
    aLine.draw(win)
    aLine = Line(Point(300,150), Point(380,40))
    aLine.draw(win)
    aLine = Line(Point(280,50), Point(380,40))
    aLine.draw(win)
    c = Circle(Point(250,200), 30)
    c.draw(win)
    aLine = Line(Point(120,180), Point(120,300))
    aLine.draw(win)
    aLine = Line(Point(180,180), Point(180,300))
    aLine.draw(win)
    aLine = Line(Point(120,180), Point(180,180))
    aLine.draw(win)
    aLine = Line(Point(320,180), Point(320,300))
    aLine.draw(win)
    aLine = Line(Point(380,180), Point(380,300))
    aLine.draw(win)
    aLine = Line(Point(320,180), Point(380,180))
    aLine.draw(win)
    win.getMouse()
    win.close()
main()