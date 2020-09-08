CC	  = gcc -g #-DNDEBUG
CFLAGS	  = -Wall -g 
OBJFILES  = main.o logfind.o
TARGET	  = logfind

all: $(TARGET) $(SOURCES)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)
