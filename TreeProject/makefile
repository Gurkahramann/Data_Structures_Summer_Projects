all:derle bagla calistir

derle:
	g++ -c -I "./include" ./src/FileManager.cpp -o ./lib/FileManager.o
	g++ -c -I "./include" ./src/BST.cpp -o ./lib/BST.o
	g++ -c -I "./include" ./src/BSTManager.cpp -o ./lib/BSTManager.o
	g++ -c -I "./include" ./src/BSTNode.cpp -o ./lib/BSTNode.o
	g++ -c -I "./include" ./src/Stack.cpp -o ./lib/Stack.o
	g++ -c -I "./include" ./src/StackNode.cpp -o ./lib/StackNode.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
bagla:
	g++ ./lib/FileManager.o ./lib/BST.o ./lib/BSTManager.o ./lib/BSTNode.o ./lib/Stack.o ./lib/StackNode.o ./lib/main.o -o ./bin/program

calistir:
	./bin/program	