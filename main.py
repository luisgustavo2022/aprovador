import pgzrun

WIDTH = 300
HEIGHT = 300

sprite = Actor("troll")
sprite.topright = 0, 10

def draw ():
    screen.clear()
    screen.fill((128, 0, 0))
    sprite.draw()

def update():
    sprite.left += 2

    if sprite.left >WIDTH:
        sprite.right = 0

pgzrun.go()
