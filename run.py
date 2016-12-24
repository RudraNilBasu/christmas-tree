#import os
import time
#from gi.repository import Notify
import commands
def battery():
        while True:
            state=commands.getoutput('clear')
            print state
            state=commands.getoutput('./a.out')
            print state
            time.sleep(0.2)
        '''
	state=commands.getoutput('upower -i /org/freedesktop/UPower/devices/battery_BAT0| grep -E "state"')
	print state

	# Run till battery is fully charged
	full=0
	while(full==0):
		state=commands.getoutput('upower -i /org/freedesktop/UPower/devices/battery_BAT0| grep -E "state"')
		print commands.getoutput('clear')
		print state
		if(state=='    state:               fully-charged'):
			full=1
	print "FULLY CHARGED"

	# Reminding every minute when battery is fully charged
	while state=='    state:               fully-charged':
		Notify.init("BAT FULL")
		st=Notify.Notification.new("Battery","fully-charged","dialog-information")
		st.show()
		time.sleep(60)
		state=commands.getoutput('upower -i /org/freedesktop/UPower/devices/battery_BAT0| grep -E "state"')
	# battery() # call itself when the charge is disconnected
        '''
battery()
state=commands.getoutput('./a.out')
print state

