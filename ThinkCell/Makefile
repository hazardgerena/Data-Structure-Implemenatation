CC	= g++
FLAG	= -I. -fpermissive
OBJ	= interval_map.o
TARGET	= TestList

$(TARGET) : $(OBJ)
	$(CC) -o $@ $^ $(FLAG)
$(OBJ) : interval_map.cpp
	$(CC) -c $^ 

clean: 
	rm -f *.o
	rm -f $(TARGET)
