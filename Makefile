CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
CPPFLAGS = -Iinclude
AR      = ar
ARFLAGS = rcs

NAME    = build/c_lab.exe
LIB     = build/libmy.a
LIB_SRC = $(wildcard lib/*.c)
LIB_OBJ = $(LIB_SRC:lib/%.c=build/lib/%.o)
SRC     ?= src/01_basics/solutions/hello.c

all: $(NAME)

$(NAME): $(SRC) $(LIB)
	@if not exist build mkdir build
	$(CC) $(CFLAGS) $(CPPFLAGS) $(SRC) $(LIB) -o $@

$(LIB): $(LIB_OBJ)
	@if not exist build mkdir build
	$(AR) $(ARFLAGS) $@ $^

build/lib/%.o: lib/%.c include/my.h
	@if not exist build\lib mkdir build\lib
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	@if exist build rmdir /s /q build

fclean: clean

re: fclean all

.PHONY: all clean fclean re
