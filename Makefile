all:
	cat Makefile
reset:
	rm in*
	touch in1 in2 in3
	echo "0 0 0" > in2
	echo "0 0 0" > in3
	cp template main.c
	clear
c:
	gcc -std=c17 -Wall main.c
	rm a.out
r:
	gcc -std=c17 -Wall main.c
	./a.out
	rm a.out
d:
	gcc -g -lm -std=c17 -Wall -o a.out main.c
	gdb ./a.out
	rm a.out

t:
	gcc -std=c17 -Wall -o a.out main.c
	./a.out < in1
	./a.out < in2
	./a.out < in3
	rm a.out
tm:
	gcc -std=c17 -Wall -o a.out main.c
	time ./a.out < in1
	time ./a.out < in2
	time ./a.out < in3
	rm a.out
stc:
	cat in*
git:
	git status
	git add .
	git commit -S 
	git push
	clear
bkp:
	cp main.c main.c.backup
ub:
	mv main.c.backup main.c
