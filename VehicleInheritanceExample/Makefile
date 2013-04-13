



run : Main.o Truck.o Car.o Vehicle.o
	g++ -o run Main.o Truck.o Car.o Vehicle.o 
Vehicle.o : Vehicle.cpp
	g++ -c Vehivle.cpp
Car.o : Car.cpp
	g++ -c Car.cpp
Truck.o : Truck.cpp
	g++ -c Truck.cpp
Main.o : Main.cpp
	g++ -c Main.cpp
claen: Main.o Truck.o Car.o Vehicle.o
	rm main.o Truck.o Car.o Vehile.o 
