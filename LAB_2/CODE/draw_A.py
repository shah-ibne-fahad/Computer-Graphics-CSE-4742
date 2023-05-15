from graphics import *
def main():
    win = GraphWin("C193048 draw_A", 500, 400)

    aLine = Line(Point(200,50), Point(140,200))
    aLine.draw(win)
    aLine = Line(Point(200,50), Point(260,200))
    aLine.draw(win)
    aLine = Line(Point(170,120), Point(230,120))
    aLine.draw(win)

    win.getMouse()
    win.close()
main()