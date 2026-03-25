CC = g++
CFLAGS = -g -Wno-deprecated

TARGET = triangle

OBJS = $(TARGET).o CTriangle.o 

HEADERS = CTriangle.hpp 
SOURCES = $(TARGET).cpp CTriangle.cpp

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJS): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(SOURCES)

tidy:
	\rm -rf $(OBJS)

clean: tidy
	\rm -rf $(TARGET)