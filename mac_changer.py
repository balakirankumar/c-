import subprocess
import optparse
def get_arguments():
	parser=opt.parse.OptionParser()
	parse.addoption("--i", "--interface", dest="interface", help="interface to change mac address")
	parse.addoption("--m", "--mac", dest="new_mac",help="to change the mac address")
	return parse.parse_args()
def change_mac():
	print("changing the mac address of" +interface+ "to" +new_mac)
	subprocess.call(["ifconfig" , interface "down"])
	subprocess.call(["ifconfig",interface, "hw", "ether",new_mac])
	subprocess.call(["ifconfig", interface ,"up"])
(options,arguments)=get_arguments()
change_mac(options.interface,options.new_mac)