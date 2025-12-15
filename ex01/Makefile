NAME = phonebook
OBJECTS = objects/Phonebook.o objects/Contact.o objects/main.o

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = objects

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

objects/Phonebook.o: Phonebook.cpp
	$(CC) $(CFLAGS) -c Phonebook.cpp -o objects/Phonebook.o

objects/Contact.o: Contact.cpp
	$(CC) $(CFLAGS) -c Contact.cpp -o objects/Contact.o

objects/main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o objects/main.o


clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

run: all
	./$(NAME)

re: fclean all