# specify the shell in case the SHELL variable is not set or is not
# inherited from the environment
SHELL = /bin/zsh

# first clear, then set suffix list
.SUFFIXES:
.SUFFIXES: .c .h .o

# project set up
CC	  = gcc -g -DNDEBUG
CFLAGS	  = -Wall -g 
OBJFILES  = main.o logfind.o
TARGET	  = logfind

.PHONY: all
all: $(TARGET) $(SOURCES)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)
