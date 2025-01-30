clean:
	rm -f *.out

compile:
	gcc $(args) -o $(args).out && ./$(args).out
