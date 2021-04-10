import ctypes  
ll = ctypes.cdll.LoadLibrary

lib = ll("./lib_cyber_wrapper.so")

print(dir(lib))