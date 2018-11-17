import sys

def rel_error(x,y):
	if x == 0.0:
		print("Machine Precision cannot be Zero")
		sys.exit(1)    
	return abs(x-y)/x

print(f"Relative error between 0.0000012345 and 0.0000023456 is {rel_error(0.0000012345,0.0000023456)}")
