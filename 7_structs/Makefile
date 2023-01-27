CC=gcc
DIRS:=./

HEADERS:=$(wildcard $(DIRS:%=%/*.h))
SOURCES:=$(wildcard $(DIRS:%=%/*.c))

make:
	$(CC) -o exe $(SOURCES) 

clean:
	rm exe
