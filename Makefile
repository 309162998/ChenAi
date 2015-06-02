LCM:	main.o	Component.o	Wire.o	Gate.o	Construct.o	
	g++	-o	$@	$^
main.o:	main.cpp
	g++	-c	$^
	
Construct.o:	Construct.cpp	Construct.h
	g++	-c	$^
Gate.o:	Gate.cpp	Gate.h
	g++	-c	$^
Component.o:	Component.cpp	Component.cpp
	g++	-c	$^
Wire.o:	Wire.cpp	Wire.h
	g++	-c	$^
clean:	
	rm	*.o	*.h.gch
