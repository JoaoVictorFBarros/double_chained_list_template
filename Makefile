make:
	g++ -o ./build/app ./src/main.cpp ./src/list.hpp ./src/list_implementation.hpp
run:
	./build/app