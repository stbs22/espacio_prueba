
##Cambiar por nombre de archivo .c
###########################
NAME = correr
###########################

#Copiar y pegar en consola para correr archivo destino
######################################################
#
# cd /home/_init_/Escritorio/Scripts/GIT/espacio_prueba ; make
#
######################################################

CC = gcc
CODE = $(NAME).c
OBJ = $(NAME).o
EXE = $(NAME)
FILE = covid1.csv

all: $(CODE)
	$(CC) $(CODE) -o $(EXE)
#	./$(EXE)
	./$(EXE) $(FILE)


$(OBJ): $(CODE)
	$(CC) -c $(CODE)
clean:
	rm -f *.o $(EXE) *~

