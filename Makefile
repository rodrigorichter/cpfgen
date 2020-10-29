CC=g++

install: cpfgen.cpp
	${CC} -o ${PREFIX}/cpfgen cpfgen.cpp
