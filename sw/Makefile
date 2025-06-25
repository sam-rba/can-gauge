CC = xc8-cc
CFLAGS= -mcpu=16F1619
LDFLAGS= -mcpu=16F1619

SRC = main.c mcp2515.c
OBJ = ${SRC:.c=.p1}
HDR = mcp2515.h util.h

main.hex: ${OBJ}
	${CC} $^ ${LDFLAGS}

clean:
	rm -f ./*.p1 ./*.d

%.p1: %.c
	${CC} -c ${CFLAGS} $<

${OBJ}: ${HDR}
