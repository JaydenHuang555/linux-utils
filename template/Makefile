CC=gcc
NAME=template
SRC=$(shell ls *.c)
COM_ARGS?=
DEBUG_ARG?=-g
NAME_ARG=-o

compile=gcc $1 $(NAME_ARG) $(NAME) $(COM_ARGS)
all:
	$(call compile, $(SRC) )
