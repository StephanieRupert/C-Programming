#include <stdio.h>

#ifndef RGB_STRUCT
#define RGB_STRUCT

typedef struct pixel {
    int red;
    int green;
    int blue;
} Pixel;

#endif

#ifndef PPM_STRUCT
#define PPM_STRUCT

typedef struct ppm {
    int rows;
    int cols;
    int colors;
    Pixel **pixels;
} ppmPic;

#endif

ppmPic *readPic(FILE *);
void writePic(FILE *,ppmPic *);
void invert(FILE *,ppmPic *);
void swap(FILE *,ppmPic *);
void flip(FILE *,ppmPic *);
void rotate(FILE *,ppmPic *);
