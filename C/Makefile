CC = gcc
FL = -Wall -Wextra -Werror
NAMES = Colleen Grace Sully

all: $(NAMES)
$(NAMES): %: %.c
	$(CC) $(FL) $< -o $@
clean:
	rm -f Grace_kid.c
	@i=0; \
	while [ -f Sully_$$i.c ]; do \
		rm -f Sully_$$i.c; \
		i=$$((i + 1)); \
	done
	
fclean: clean
	rm -f $(NAMES)
re : clean all
