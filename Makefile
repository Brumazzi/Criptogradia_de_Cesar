GCC = cc
LIB = cesar.c
MAIN = main.c


build:
	${GCC} -shared -fPIC -I./ ${LIB} -o cesar.so 
	${GCC} -I./ ./cesar.so ${MAIN} -o cript-cesar

#all:
#	@echo "Nothing to build"
#
#install:
#	@echo "Can be not install this file"
