#En la carpeta Build estarán todos los programas compilados.
Build:
	mkdir -p ../Build
	mkdir -p ../Build/0-HolaMundo
	mkdir -p ../Build/1-OperadoresBasicos

# Compilación de programas individuales
Holamundo:
	make Build
	g++ -Wall 0-HolaMundo/HolaMundo.cpp -o ../Build/0-HolaMundo/HolaMundo.o

Holaname:
	make Build
	g++ -Wall 0-HolaMundo/HolaName.cpp -o ../Build/0-HolaMundo/HolaName.o

OpAritmeticos:
	make Build
	g++ -Wall 1-OperadoresBasicos/Aritmeticos.cpp -o ../Build/1-OperadoresBasicos/Aritmeticos.o

Clear:
	rm -rf ../Build *.o

All:
	make Build
	make Holamundo
	make Holaname
	make OpAritmeticos
	
.DEFAULT_GOAL = All