import turtle

t = turtle.Pen()
turtle.bgcolor("white")
turtle.speed("fastest")
color = ["red", "blue", "green", "yellow"]
for x in range(100):
	t.pencolor(color[x%4])
	t.forward(x)
	t.left(60)

x = input()