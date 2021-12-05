
all: slstatus

slstatus: cpu.o battery.o slstatus.o util.o
	clang   cpu.o battery.o slstatus.o util.o -o slstatus

battery.o: battery.c modules.h
	clang -c battery.c

cpu.o: cpu.c modules.h
	clang -c cpu.c

util.o: util.c util.h
	clang -c util.c

slstatus.o: slstatus.c slstatus.h
	clang -c slstatus.c

clean:
	rm -f *.o
	rm -f slstatus
