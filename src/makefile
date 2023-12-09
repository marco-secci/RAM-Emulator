# Compiler and flags
CC = gcc
CFLAGS = -O3 -Wall -pedantic -std=c18

# Library and headers
LIB = lib
CHEADERS = ${wildcard *.h}

# Program name
PROGNAME = main

# Source and object files for libraries
FUN_SRC = fun.c
RAM_SRC = ram.c
FUN_OBJ = $(FUN_SRC:.c=.o)
RAM_OBJ = $(RAM_SRC:.c=.o)

# Targets
all: ${LIB} ${PROGNAME}

${PROGNAME}: main.o ${LIB}/libfun.a ${LIB}/libram.a
	${CC} ${CFLAGS} -o $@ main.o -L./${LIB}/ -lfun -lram

main.o: main.c ${CHEADERS}
	${CC} ${CFLAGS} -c $< -o $@

${LIB}:
	mkdir -p ${LIB}

${LIB}/libfun.a: ${FUN_OBJ}
	ar rs $@ $^

${LIB}/libram.a: ${RAM_OBJ}
	ar rs $@ $^

${FUN_OBJ}: ${FUN_SRC}
	${CC} ${CFLAGS} -c $< -o $@

${RAM_OBJ}: ${RAM_SRC}
	${CC} ${CFLAGS} -c $< -o $@

.PHONY: clean clean-all
clean:
	rm -f *.o ${LIB}/*.a

clean-all: clean
	rm -rf ${LIB}
	rm -f ${PROGNAME}
