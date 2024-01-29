all:
	g++ -Wall -std=c++17 arquivo.cpp
clean:
	rm main
run:
	time ./a.exe < arquivo.in > my.sol 
