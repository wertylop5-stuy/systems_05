stringy: linS.o main.o
	gcc linS.o main.o
main.o: main.c include/linS.h
	gcc -c main.c include/linS.h
linS.o: linS.c include/linS.h
	gcc -c linS.c include/linS.h
run:
	./stringy
