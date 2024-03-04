src = main.cpp

all:
	g++ -Wall -std=c++17 $(src)
clean:
	rm main
run:
	time ./a.out < arquivo.in > my.sol 
diff:
	diff arquivo.sol my.sol