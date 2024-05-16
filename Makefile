src = main.cpp

all:
	touch $(problem).in $(problem).out sol.out
	g++ -Wall -std=c++17 $(src)

clean:
	rm $(problem).in *.out

run:
	time ./a.out < $(problem).in > $(problem).out 

diff:
	diff $(problem).out sol.out
