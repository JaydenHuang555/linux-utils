CC=gcc
NAME=example_name
FILES=$(shell ls *.c)
all:
	echo $(FILES)
