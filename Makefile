PWD=$(shell pwd)
BIN=$(PWD)/bin
SRC=$(PWD)/src


all:
	$(foreach 1, $(shell ls $(SRC)), cd $(SRC)/$1; ls; make; ls -A; mv $1 $(BIN)/$1)


