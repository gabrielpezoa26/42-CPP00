NAME = phonebook
SRC = Phonebook.cpp Contact.cpp main.cpp 
OBJECTS = Phonebook.o Contact.o main.o

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = objects

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^



%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

run: all
	./$(NAME)

re: fclean all
