CC=gcc
AR=ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = basicMath.o power.o
FLAGS= -g -Wall

all: maind mains
mymathd: libmyMath.so
mymaths: libmyMath.a

#dynamyc
maind: main.o libmyMath.so 
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
#static
mains: main.o libmyMath.a  
	$(CC) $(FLAGS) -o mains main.o libmyMath.a


#dynamyc library	
libmyMath.so: $(OBJECTS_LIB)	
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB) 
#static library		
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)

main.o: main.c myMath.h
		$(CC) $(FLAGS) -c main.c
		
basicMath.o:  basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c 

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c 



.PHONY: clean all mymathd mymaths

clean:
	rm -f *.o  *.a *.so mains maind
