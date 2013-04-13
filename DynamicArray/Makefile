
run : MainIntList.o IntList.o 
	g++ -o run MainIntList.o IntList.o 
IntList.o : IntList.cpp
	g++ -c IntList.cpp
MainIntList.o : MainIntList.cpp
	g++ -c MainIntList.cpp
clean : IntList.o MainIntList.o run
	rm IntList.o MainIntList.o run 
