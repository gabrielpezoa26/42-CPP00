
SRC = megaphone.cpp
OBJECTS = megaphone.o

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: megaphone

megaphone: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f megaphone

re: fclean all
