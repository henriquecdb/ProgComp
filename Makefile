all:
	g++ -Wall -std=c++17 bee1089.cpp
clean:
	rm main
run:
	time ./a.out < arquivo.in > my.sol 
diff:
	diff arquivo.sol my.sol