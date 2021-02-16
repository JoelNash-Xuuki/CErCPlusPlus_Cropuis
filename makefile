PROJ = Algorithme 
SRC = Algorithme.cpp InsertSort.cpp Counting.cpp
${PROJ}: ${SRC}
	g++ -o ${PROJ} ${SRC}

#PiqureTrion: test.cpp
#	g++ test.cpp
