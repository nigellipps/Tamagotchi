Tom: main.o Pet.o
	g++ main.o Pet.o -o Tom

main.o: main.cpp
	g++ -c main.cpp

Pet.o: Pet.cpp Pet.h
	g++ -c Pet.cpp

clean:
	rm *.o Tom
