portscanner.out: main.o
	g++ main.o -g -o portscanner.out -lsfml-system -lsfml-network

main.o: main.cpp
	g++ -c -g main.cpp

clean:
	rm main.o portscanner
