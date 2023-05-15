from graphics import *
def main():
    win = GraphWin("C193048 draw_Kh", 500, 400)

    c = Circle(Point(200,150), 100)
    c.draw(win)
    aLine = Line(Point(140,130), Point(170,130))
    aLine.draw(win)
    aLine = Line(Point(230,130), Point(260,130))
    aLine.draw(win)
    aLine = Line(Point(200,150), Point(200,180))
    aLine.draw(win)
    aLine = Line(Point(200,220), Point(170,210))
    aLine.draw(win)
    aLine = Line(Point(200,220), Point(230,210))
    aLine.draw(win)
    
    win.getMouse()
    win.close()
main()