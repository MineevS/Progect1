CC=g++                          # указываем компилятор
LDFLAGS=                        # флаги линковщика
CFLAGS=-std=c++11 -c -MD        # флаги компилятора //
SOURCES= main.cpp MyString.cpp  # список исходников
OBJECTS=$(SOURCES:.cpp=.o)
TARGET=str                      # имя бинарника

all: $(TARGET)
    
$(TARGET): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp 
	$(CC) $(CFLAGS) $< 

include $(wildcard *.d)

clean:
	rm *.o *.d $(TARGET)