from graphics import *
def main():
 win = GraphWin("My Circle", 500, 500)
 flowerImage = Image(Point(100,100), "deaw_K.png")
 flowerImage.draw(win)
 win.getMouse()
 win.close()
main()