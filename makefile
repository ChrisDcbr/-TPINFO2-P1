exe: fonctions.o trisLents.o main.o
	
	gcc fonctions.o trisLents.o main.o -o exe -lm

fonctions.o : fonctions.c fonctions.h

	gcc -c fonctions.c -o fonctions.o -Wall

trisLents.o : trisLents.c trisLents.h
	
	gcc -c trisLents.c -o trisLents.o -Wall

main.o : main.c fonctions.h trisLents.h
	gcc -c main.c -o main.o -Wall

clean: 
	@echo "Jai tout effacé"
	rm -f * .o

