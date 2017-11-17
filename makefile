# make sin parametros hace un "make all"
all: hello fact

hello: hello.c

fact: fact.c calcfact.c

clean:
	echo "No me borres"
	rm -f *.o hello fact
