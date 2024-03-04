all:
	g++ -Wall -std=c++17 main.cpp
clean:
	rm main
run:
	time ./a.out < arquivo.in > my.sol 
diff:
	diff arquivo.sol my.sol