all:

	gcc -o nginx_automator src/*.c

clean:
	rm nginx_automator