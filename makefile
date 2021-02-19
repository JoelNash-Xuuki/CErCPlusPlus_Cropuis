PROJ = Algorithms 
SRC = Test.cpp Algorithms.cpp Stack.cpp Queue.cpp
${PROJ}: ${SRC}
	g++ -o ${PROJ} ${SRC}

