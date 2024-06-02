#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/x
sysconfdir=${prefix}/etc/x
includedir=${prefix}/include/x
datarootdir=${prefix}/share/x
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=comelang2
INSTALL=install
CFLAGS= -common-header -O2 
CFLAGS_DEBUG= -common-header -gdwarf-4 -cg 
LIBS=-lpcre
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)
TARGET=x
TARGET_DEBUG=x-debug

#########################################
# main
#########################################
all: common.h x

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_DEBUG): $(DEBUG_OBJS)
	$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.o: %.c header
	$(CC) $(CFLAGS) -c $< -o $@

%.debug.o: %.c header
	$(CC) $(CFLAGS_DEBUG) -c $< -o $@

#########################################
# header
#########################################

header:
	comelang2 header -common-header $(SINGLE_SRCS)

common.h: *.c
	bash -c 'shopt -s extglob; comelang2 header !(*.c).c'

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./x "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/x"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/x/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c x *.log *.out common.h x-debug

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/x
	rm -f "$(DESTDIR)/share/doc/x/README.md"

run: x
	rm -f *.log
	./x

debug: x-debug
	rm -f *.log
	./x-debug
