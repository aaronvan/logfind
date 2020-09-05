CC	  = gcc
CFLAGS	  = -Wall -g 
OBJFILES  = main.o
TARGET	  = logfind

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)
