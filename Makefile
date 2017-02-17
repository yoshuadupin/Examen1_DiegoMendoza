#Tipos Objetos

JuegoDeTronos: main.cpp	Starks.o Targaryen.o Lannister.o PequenasFamilias.o Dothraki.o GuardiaReal.o 
	g++ Starks.o Targaryen.o Lannister.o PequenasFamilias.o Dothraki.o GuardiaReal.o -o JuegoDeTronos



Starks.o:	Starks.h Starks.cpp PequenasFamilias.h
	g++ Starks.cpp

Targaryen.o:	Targaryen.h Targaryen.cpp Dothraki.h
	g++ Targaryen.cpp

Lannister.o: Lannister.h Lannister.cpp GuardiaReal.h
	g++ Lannister.cpp

PequenasFamilias.o: PequenasFamilias.h PequenasFamilias.cpp
	g++ PequenasFamilias.cpp

Dothraki.o: Dothraki.h Dothraki.cpp
	g++ Dothraki.cpp

GuardiaReal.o: GuardiaReal.h GuardiaReal.cpp
	g++ Dothraki.cpp
