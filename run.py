#import os
import time
#from gi.repository import Notify
import commands
def beMerry():
        while True:
            state=commands.getoutput('clear')
            print state
            state=commands.getoutput('./a.out')
            print state
            time.sleep(0.2)
#beMerry()
state=commands.getoutput('g++ ch_tree.cpp')
print state
beMerry()
