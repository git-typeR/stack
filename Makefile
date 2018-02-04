CC   = gcc
OBJS = stack.o



main: $(OBJS)
	$(CC) -o stack.exe $(OBJS)

stack.o: stack.c
	$(CC) -c stack.c -o stack.o

clean:
	rm -f $(OBJS) stack.exe
