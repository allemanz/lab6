QueueDemo: main.o Queue.o QueueTest.o
	g++ -g -Wall -std=c++11 main.o Queue.o QueueTest.o -o QueueDemo

main.o: main.cpp
	g++ -g -std=c++11 -c main.cpp

QueueTest.o: QueueTest.cpp
	g++ -g -std=c++11 -c QueueTest.cpp

clean:
	rm main.o QueueTest.o QueueDemo *~
