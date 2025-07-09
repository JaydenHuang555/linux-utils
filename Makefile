PWD=$(shell pwd)
BIN=$(PWD)/bin
SRC=$(PWD)/src

all:
	$(foreach(target, $(SRC), (shell cd $(target); make)))	
