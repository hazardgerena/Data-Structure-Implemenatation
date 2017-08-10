CC	= g++
FLAG	= -I. -fpermissive
OBJ	= Test.o
TARGET	= TestList

$(TARGET) : $(OBJ)
	$(CC) -o $@ $^ $(FLAG)
Test.o : Test.cpp
	$(CC) -c Test.cpp

clean: 
	rm -f *.o
