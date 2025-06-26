CC = xc8-cc
CFLAGS= -mcpu=16F1619 -std=c99

SRC = main.c mcp2515.c $(wildcard mcc_generated_files/system/src/*.c)
OBJ = $(notdir ${SRC:.c=.p1})
HDR = mcp2515.h util.h $(wildcard mcc_generated_files/system/*.h)

main.hex: ${OBJ}
	${CC} ${CFLAGS} $^ ${LDFLAGS}

clean:
	rm -f ./*.p1 ./*.d

fmt: ${SRC} ${HDR}
	clang-format -i $^

%.p1: %.c
	${CC} -c ${CFLAGS} $<

${OBJ}: ${HDR}
