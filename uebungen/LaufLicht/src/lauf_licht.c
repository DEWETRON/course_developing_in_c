//Lauflicht Knight Rider

#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <unistd.h>

#define LIGHT_STRIP_SIZE 10

int main() {
    int i,j;
    char light_strip[LIGHT_STRIP_SIZE+1];
    size_t light_strip_size = LIGHT_STRIP_SIZE;

    memset(light_strip, ' ', light_strip_size);
    light_strip[LIGHT_STRIP_SIZE] = 0;

    printf("KITT:\n");

    for (j=0; j<3;++j) {
        for (i=0; i<light_strip_size-1;i++) {
            light_strip[i] = 'X';
            printf("%s\r", light_strip);
            fflush(stdout);
            light_strip[i] = ' ';
            sleep(1);
        }

        for (i=light_strip_size-1; i>0;i--) {
            light_strip[i] = 'X';
            printf("%s\r", light_strip);
            fflush(stdout);
            light_strip[i] = ' ';
            sleep(1);
        }
    }
    printf("Danke Kumpel!\n");
}