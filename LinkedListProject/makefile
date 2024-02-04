all:derle bagla calistir

derle:
	
	g++ -c -I "./include" ./src/ReadFile.cpp -o ./lib/ReadFile.o
	g++ -c -I "./include" ./src/LinkedList.cpp -o ./lib/LinkedList.o
	g++ -c -I "./include" ./src/LinkedListManager.cpp -o ./lib/LinkedListManager.o
	g++ -c -I "./include" ./src/ListHeadNode.cpp -o ./lib/ListHeadNode.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
bagla:
	g++ ./lib/ListHeadNode.o ./lib/LinkedListManager.o ./lib/ReadFile.o ./lib/LinkedList.o ./lib/main.o -o ./bin/program

calistir:
	./bin/program	