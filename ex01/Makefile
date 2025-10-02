
SRC = Phonebook.cpp Contact.cpp main.cpp 
OBJECTS = Phonebook.o Contact.o main.o

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: phonebook

phonebook: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f phonebook

run: all
	./phonebook

re: fclean all
