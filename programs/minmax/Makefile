# to Makefile to bazoume sto directory pou brisketai h main() thn opoia 8eloume na trexoume
# edw to path ths main() einai to :  ..../programs/minmax
# ekei loipon bazoume to Makefile
# thn edolh make run thn trexoume exodas paei sto parapanw path sto terminal


MODULES = ../../modules
INCLUDE = ../../include


CFLAGS = -I$(INCLUDE)
CC = gcc

OBJS = minmax.o $(MODULES)/stats.o
EXEC = minmax

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)


run: minmax
	./minmax



clean:
	rm -f $(OBJS) $(EXEC)










minmax: minmax.c ../../modules/stats.c 	# auto to path bainei wste an kanw allagh sta data ths main na mhn bgazei oti to .exe is up to date
	gcc minmax.c ../../modules/stats.c -I../../include -o minmax

