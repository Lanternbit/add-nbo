#Makefile
all: add-nbo

add-nbo: main.o size_check.o correction.o add.o print_result.o
	g++ -o add-nbo main.cpp size_check.cpp correction.cpp add.cpp print_result.cpp

main.o: add.h main.cpp
	g++ -c -o main.o main.cpp

size_check.o: add.h size_check.cpp
	g++ -c -o size_check.o size_check.cpp

correction.o: add.h correction.cpp
	g++ -c -o correction.o correction.cpp

add.o: add.h add.cpp
	g++ -c -o add.o add.cpp

print_result.o: add.h print_result.cpp
	g++ -c -o print_result.o print_result.cpp

clean:
	rm -f add-nbo
	rm -f *.o
