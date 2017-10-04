stringy: linS.o liK.o main.o
	gcc -o stringy linS.o liK.o main.o

linS.o: linS.c include/linS.h
	gcc -c linS.c include/linS.h

liK.o: liK.c include/liK.h
	gcc -c liK.c include/liK.h

main.o: main.c include/linS.h include/liK.h
	gcc -c main.c include/linS.h include/liK.h

run:
	./stringy

clean:
	rm *.o
