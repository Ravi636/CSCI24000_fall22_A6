sim: address.o date.o student.o main.o
	g++ -g -Wall adress.o date.o student.o main.o -o sim
address.o: address.cpp address.h
	g++ -g -Wall -c horse.cpp
date.o: date.cpp date.h
	g++ -g -Wall -c date.cpp
student.o: student.cpp student.h date.cpp date.h address.cpp address.h
	g++ -g -Wall -c student.cpp
main.o: main.cpp student.h date.h address.h
	g++ -c -Wall main.cpp
run: sim 
	./sim

clean:
	rm *.o
	rm sim

debug: sim
	gdb sim
