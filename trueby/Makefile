#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/trueby
sysconfdir=${prefix}/etc/trueby
includedir=${prefix}/include/trueby
datarootdir=${prefix}/share/trueby
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=neo-c
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
TARGET=trueby
TARGET_DEBUG=trueby-debug

#########################################
# main
#########################################
all: common.h trueby

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
	neo-c header -common-header $(SINGLE_SRCS)

common.h: *.c
	bash -c 'shopt -s extglob; neo-c header !(*.c).c'

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./trueby "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/trueby"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/trueby/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c trueby *.log *.out common.h trueby-debug

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/trueby
	rm -f "$(DESTDIR)/share/doc/trueby/README.md"

run: trueby
	rm -f *.log
	./trueby a.trb
	ruby a.rb

debug: trueby-debug
	rm -f *.log
	./trueby-debug a.trb

