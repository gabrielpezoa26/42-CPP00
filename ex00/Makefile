
SRC = megaphone.cpp
OBJECTS = megaphone.o

CC = g++
# CFLAGS = -Wall -Wextra -Werror -std=c++98

all: megaphone

megaphone: megaphone.o
	$(CC) $(CFLAGS) -o megaphone megaphone.o

megaphone.o: megaphone.cpp
	$(CC) $(CFLAGS) megaphone.cpp -o megaphone.o

clean:
	rm -f $(OBJECTS)
	make -C clean

fclean: clean
	rm -f megaphone
	make -C fclean

re: fclean all