CC=g++

install: cpfgen.cpp
	${CC} -o ${PREFIX}/bin/cpfgen cpfgen.cpp
