CC=g++

install: cpfgen.cpp
	${CC} -o cpfgen cpfgen.cpp

clean:
	rm cpfgen
