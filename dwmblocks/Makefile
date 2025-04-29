.POSIX:

PREFIX = /usr/local
CFLAGS = -Ofast
LDLIBS = -lX11

CFLAGS2 = -03 -Wall -Wextra

BIN = dwmblocks

$(BIN): main.o
	$(CC) $^ -o $@ $(LDLIBS)

xgetrootname: xgetrootname.c
	$(CC) $^ -o $@ $(LDLIBS)

clean:
	$(RM) *.o $(BIN)

install: $(BIN)
	install -D -m 755 $(BIN) $(DESTDIR)$(PREFIX)/bin/$(BIN)

uninstall:
	$(RM) $(DESTDIR)$(PREFIX)/bin/$(BIN)

.PHONY: clean install uninstall
