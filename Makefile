all:
	cc -Wall -Wextra -Werror ft_*.c -o exec -std=c99

clean:
	rm *.o exec