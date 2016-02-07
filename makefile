CC=/usr/bin/gcc

all: vgs2mml

vgs2mml: src/vgsmml.c src/vgsmml.h src/cli.c vgs-bgm-decoder/src/vgsdec_internal.h
	$(CC) -o vgs2mml -I./src -I./vgs-bgm-decoder/src src/vgsmml.c src/cli.c

