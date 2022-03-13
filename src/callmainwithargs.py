import sys
from ctypes import *

c_program = "a.out"
c_loaded_program = CDLL(c_program)
main = c_loaded_program.main
main.argtypes = [c_int, POINTER(c_char_p)]

args = sys.argv
args[0] = c_program #replace python file name with C/C++ file name
byteargs = [bytes(arg,'utf-8') for arg in args]
arglen = len(args)
argv = (c_char_p * arglen)(*byteargs)
argc = c_int(arglen)

main(argc,argv)
