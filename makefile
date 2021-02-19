PROJ = Algorithms 
SRC = Test.cpp Algorithms.cpp Stack.cpp
${PROJ}: ${SRC}
	g++ -o ${PROJ} ${SRC}

