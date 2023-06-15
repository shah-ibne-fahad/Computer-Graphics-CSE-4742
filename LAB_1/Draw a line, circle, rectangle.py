from graphics import *
def main():
win = GraphWin("My Circle", 500, 500)
aLine = Line(Point(100,100), Point(300,100))
aLine.draw(win)
c = Circle(Point(250,250), 100)
c.draw(win)
rec = Rectangle(Point(100,360),Point(300,420));
rec.draw(win)
win.getMouse() # pause for click in window
win.close()
main()

