
#include <stdio.h>
#include <stdlib.h>

#include "scanner.h"

typedef struct Image {
    int height,width,largest;
    unsigned char** pixels;
} Image;

unsigned char symbols[] = { '@', '%', '#', 'x', '+', '=', ':', '-', '.', ' ' };


// Prototypes, implement these (located at bottom)
void convert(Image *);
void display(Image *);


// Read in the image
Image *readImage( FILE* fp ) {
    int row,col;
    Image *image = malloc(sizeof(Image)); //failure check omitted
    char* magic     = readToken(fp);
    free(magic);
    image->width     = readInt(fp);
    image->height    = readInt(fp);
    image->largest   = readInt(fp);
    image->pixels    = malloc(sizeof(int*) * image->height);
    for(row = 0;row < image->height;++row) {
        image->pixels[row] = malloc(sizeof(int) * image->width);
        for(col = 0;col < image->width;++col) {
            image->pixels[row][col] = readInt(fp);
        }
    }
    return image;
}


// Release the memory for the image
void freeImage( Image *image ) {
    int row;
    for( row = 0 ; row < image->height ; ++row ) {
        free( image->pixels[row] );
    }
    free( image->pixels );
    free( image );
}


// Open file, read in contents, convert to ascii, display back out
int main(int argc, char* argv[] ) {
    FILE *fp = fopen(argv[1],"r");
    Image *image = readImage(fp);
    fclose(fp);

    convert(image);
    display(image);
    freeImage(image);

    return 0;
}

/*               IMPLEMENT EVERYTHING BELOW               */

// Go through the image and replace the 
// pixel with the appropriate symbol
void convert( Image *image ) {
    /* put code here */
}

// Print out the new image to the screen
void display( Image *image ) {
    /* put code here */
}
