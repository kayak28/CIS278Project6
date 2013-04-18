JetBlue.o : JetBlue.cpp 
	g++ -c JetBlue.cpp
AppsJet.o : mainJet.cpp
	g++ -c mainJet.cpp
PlaneFlight.o : PlaneFlight.cpp
	g++ -c PlaneFlight.cpp
run : JetBlue.o mainJet.o
	g++ -o Exe JetBlue.o mainJet.o PlaneFlight.o

