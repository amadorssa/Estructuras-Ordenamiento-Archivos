AUXILIARES := archivo.o \
			functions.o \

main.exe: main.cpp $(AUXILIARES)
	g++ -std=c++11  main.cpp $(AUXILIARES) -o main.exe

%.o: %.cpp
	g++ -std=c++11 -c $^ -o $@

clean:
	rm *.o