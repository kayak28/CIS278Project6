Exe : PlaneFlight.o PlaneTest.o
	g++ -o Exe PlaneFlight.o PlaneTest.o
JetBlue.o : JetBlue.cpp 
	g++ -c JetBlue.cpp
AppsJet.o : AppsJet.cpp
	g++ -c AppsJet.cpp
PlaneFlight.o : PlaneFlight.cpp
	g++ -c PlaneFlight.cpp 
