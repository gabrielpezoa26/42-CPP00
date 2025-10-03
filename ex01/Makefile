NAME = phonebook
SRC = Phonebook.cpp Contact.cpp main.cpp 
OBJECTS = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = objects

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^


$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

run: all
	./$(NAME)

re: fclean all
