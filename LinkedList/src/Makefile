CC	= g++
FLAG	= -I. -fpermissive
OBJ	= Test.o
TARGET	= TestList

$(TARGET) : $(OBJ)
	$(CC) -o $@ $^ $(FLAG)
$(OBJ): Test.cpp
	$(CC) -c $^

clean: 
	rm -f *.o
	rm -f $(TARGET)
