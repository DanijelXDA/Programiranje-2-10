////////////////////////////////////////////
// PROGRAM ZA PISANJE U BINARNU DATOTETKU //
////////////////////////////////////////////

/*
#include <stdio.h>

int main(void) {

    int i;
    FILE *bin;

    bin = fopen("NekiBinarniFajl.bin", "wb");

    for(i = 1; i <= 50; ++i)
        fwrite(&i, sizeof(int), 1, bin);

    fclose(bin);

    return 0;
}
*/


#include <stdio.h>

int main(void) {

    int i, n;
    FILE *bin;

    bin = fopen("NekiBinarniFajl.bin", "rb");

    for(i = 1; i <= 50; ++i) {
        fread(&n, sizeof(int), 1, bin);
        printf("%d\n", n);
    }

    fclose(bin);

    return 0;
}
