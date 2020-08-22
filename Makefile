CC=g++

cpfgen: cpfgen.cpp
	${CC} -o cpfgen cpfgen.cpp

clean:
	rm cpfgen
