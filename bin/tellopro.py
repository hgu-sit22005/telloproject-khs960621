from tello import Tello
import sys
from datetime import datetime
import time
import TelloPro

tello = Tello()

command_lst = []
command_lst.append(TelloPro.get_instance('takeoff', -1))
for i in range(4):
	command_lst.append(TelloPro.get_instance('flip', i))
command_lst.append(TelloPro.get_instance('land', -1))


for command in command_lst:
	tello.send_command_instance(command)
