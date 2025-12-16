NAME = ScavTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

${NAME}: ${OBJ}
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp includes/ClapTrap.hpp includes/ScavTrap
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
