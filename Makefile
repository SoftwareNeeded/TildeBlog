COMPILER = gcc
COMPFLAGS = -o tildeblog
CODE = $(wildcard *.c)

tildeblog: $(CODE)
	$(COMPILER) $(COMPFLAGS) $(CODE)

.PHONY: clean
clean:
	rm -f tildeblog
