all:
	@cat Makefile
reset:
	@touch in9
	@rm in*
	@if [ -s a.out ]; then\
		rm a.out;\
	fi
	@cp template main.c
	@clear
c:
	@gcc -std=c17 -Wall main.c
	@rm a.out
r:
	@gcc -std=c17 -Wall main.c
	@./a.out
	@rm a.out
d:
	@gcc -g -lm -std=c17 -Wall -o a.out main.c
	@gdb ./a.out
	@rm a.out
t:
	@gcc -std=c17 -Wshadow -Wall -o a.out main.c -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG -g
	@if [ -s in1 ]; then\
		echo "Output one :";\
		./a.out < in1;\
	fi
	@if [ -s in2 ]; then\
		echo "Output two :";\
		./a.out < in2;\
	fi
	@if [ -s in3 ]; then\
		echo "Output three :";\
		./a.out < in3;\
	fi
	@rm a.out
tm:
	@gcc -O2 -std=c17 -Wno-unused-result -Wshadow -Wall -o a.out main.c
	@if [ -s in1 ]; then\
		echo "Output one :";\
		time ./a.out < in1;\
	fi
	@if [ -s in2 ]; then\
		echo "Output two :";\
		time ./a.out < in2;\
	fi
	@if [ -s in3 ]; then\
		echo "Output three :";\
		time ./a.out < in3;\
	fi
	@rm a.out
stc:
	@cat in*
git:
	@git add .
	@git commit -S 
	@git push
	@clear
