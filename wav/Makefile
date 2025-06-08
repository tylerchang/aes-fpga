CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: wav_converter wav_stitcher

wav_converter: wav_converter.c wav_converter.h
	$(CC) $(CFLAGS) -o wav_converter wav_converter.c

wav_stitcher: wav_stitcher.c wav_converter.h
	$(CC) $(CFLAGS) -o wav_stitcher wav_stitcher.c

clean:
	rm -f wav_converter wav_stitcher *.bin