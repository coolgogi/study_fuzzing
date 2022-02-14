all: src/runner.c src/main.c test/exec.c
	rm -rf ~/Documents/Master/study_fuzzing/runner/main
	rm -rf ~/Documents/Master/study_fuzzing/runner/test/exec
	gcc -o main src/main.c
	gcc -o test/exec test/exec.c
	./main

clean:
	rm -rf main
