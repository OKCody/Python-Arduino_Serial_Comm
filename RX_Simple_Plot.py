import serial
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import time

ser = serial.Serial('/dev/cu.usbserial-DA01L2A9', 9600)

fig = plt.figure()
axl = fig.add_subplot(1, 1, 1)

g = 0
xar = []
yar = []

def animate(i):
    xar.append( g + 1 )
    yar.append( ser.readline() )
    axl.clear()
    axl.plot( xar, yar )
    
ani = animation.FuncAnimation( fig, animate, interval = 1000 )
plt.show()

