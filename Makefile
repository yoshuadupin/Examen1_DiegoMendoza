#Tipos Objetos

JuegoDeTronos: main.o Starks.o Targaryen.o Lannister.o PequenasFamilias.o Dothraki.o GuardiaReal.o 
	g++ main.o Starks.o Targaryen.o Lannister.o PequenasFamilias.o Dothraki.o GuardiaReal.o -o JuegoDeTronos

main.o:	main.cpp Starks.h Targaryen.h Lannister.h PequenasFamilias.h Dothraki.h GuardiaReal.h
	g++ main.cpp

Starks.o:	Starks.h Starks.cpp PequenasFamilias.h
	g++ -c Starks.cpp

Targaryen.o:	Targaryen.h Targaryen.cpp Dothraki.h
	g++ -c Targaryen.cpp

Lannister.o: Lannister.h Lannister.cpp GuardiaReal.h
	g++ -c Lannister.cpp

PequenasFamilias.o: PequenasFamilias.h PequenasFamilias.cpp
	g++ -c PequenasFamilias.cpp

Dothraki.o: Dothraki.h Dothraki.cpp
	g++ -c Dothraki.cpp

GuardiaReal.o: GuardiaReal.h GuardiaReal.cpp
	g++ -c GuardiaReal.cpp
