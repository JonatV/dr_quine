CC = gcc
FL = -Wall -Wextra -Werror
NAMES = Colleen Grace Sully

all: $(NAMES)
$(NAMES): %: %.c
	$(CC) $(FL) $< -o $@
clean:
	rm -f $(NAMES)
fclean:
	rm -f $(NAMES)
	rm -f Grace_kid.c
re : clean all
