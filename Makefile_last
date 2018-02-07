
CC = gcc
IDIR=inc
COPT = -I $(IDIR)

_DEPS = inc/core.h
DEPS = $(addprefix $(IDIR)/,$(_DEPS))

ODIR=obj
_SRC=main.c core.c
_OBJ=$(_SRC:.c=.o)
OBJ = $(addprefix $(_ODIR)/,$(_OBJ))
PRNAME = prog

all:$(ODIR) $(PRNAME)

$(ODIR):
	mkdir -p $@

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(COPT)

$(PRNAME): $(OBJ)
	$(CC) -o $(PRNAME) $^

clean:
	rm -rf $(ODIR) $(PRNAME)