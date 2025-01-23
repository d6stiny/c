clean:
	rm -f *.out

age:
	gcc age.c -o age.out && ./age.out

fib:
	gcc fib.c -o fib.out && ./fib.out

bills:
	gcc bills.c -o bills.out && ./bills.out