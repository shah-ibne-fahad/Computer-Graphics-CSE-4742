from graphics import *
def main():
win = GraphWin("My Circle", 500, 500)
message = Text(Point(100,100), "Hello!")
message.setFill(color_rgb(135,0,135))
message.setSize(18)
message.draw(win);
win.getMouse()
win.close()
main()
