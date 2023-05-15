from graphics import *
def main():
    win = GraphWin("C193048 draw_Kh", 500, 400)
    c = Circle(Point(150,50), 7)
    c.draw(win)
    aLine = Line(Point(145,55), Point(200,80))
    aLine.draw(win)
    aLine = Line(Point(200,80), Point(150,120))
    aLine.draw(win)
    aLine = Line(Point(150,120), Point(250,150))
    aLine.draw(win)
    aLine = Line(Point(250,40), Point(250,150))
    aLine.draw(win)
    aLine = Line(Point(250,50), Point(300,50))
    aLine.draw(win)

    win.getMouse()
    win.close()
main()