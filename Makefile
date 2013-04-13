run : JetBlue.o AppsJet.o
	g++ -o run JetBlue.o AppsJet.o

Exe : PlaneFlight.o PlaneTest.o
	g++ -o Exe PlaneFlight.o PlaneTest.o
JetBlue.o : JetBlue.cpp 
	g++ -c JetBlue.cpp
AppsJet.o : AppsJet.cpp
	g++ -c AppsJet.cpp

PlaneTest.o : PlaneTest.cpp
	g++ -c PlaneTest.cpp 

PlaneFlight.o : PlaneFlight.cpp
	g++ -c PlaneFlight.cpp 
