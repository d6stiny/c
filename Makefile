clean:
	rm -f *.out

age:
	gcc age.c -o age.out && ./age.out

fib:
	gcc fib.c -o fib.out && ./fib.out