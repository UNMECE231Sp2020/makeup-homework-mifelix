all: linearSearch.o tests.o bubbleSort.o mergeSort.o binarySearch.o
	g++ linearSearch.o tests.o bubbleSort.o mergeSort.o binarySearch.o -O0 -o run_tests


clean: rm run_tests


fast: linearSearch.o tests.o bubbleSort.o mergeSort.o binarySearch.o
	g++ linearSearch.o tests.o bubbleSort.o mergeSort.o binarySearch.o -O3 -run_tests


linearSearch.o:linearSearch.cpp search.h
	g++ -c linearSearch.cpp


tests.o: tests.cpp Timer.h search.h sort.h
	g++ -c tests.cpp

bubbleSort.o: bubbleSort.cpp sort.h
	g++ -c bubbleSort.cpp

mergeSort.o: mergeSort.cpp sort.h
	g++ -c mergeSort.cpp

binarySearch.o: binarySearch.cpp search.h
	g++ -c binarySearch.cpp
