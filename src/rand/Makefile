CC=gcc
NAME=rand
SRC=$(shell ls *.c)
COM_ARGS?=
DEBUG_ARG?=-g
DEBUG_ARGS+=$(COM_ARGS)
NAME_ARG=-o


# c
compile=$1 $2 $3 $4 $5
debug = $(compile) $1 $2

all:
	make com
com:
	$(call compile, $(CC), $(SRC), $(NAME_ARG), $(NAME), $(COM_ARGS))
debug:
	$(call compile, $(CC), $(SRC), $(NAME_ARG), $(NAME), $(DEBUG_ARGS))
clean:
	@(rm -rf $(NAME))
