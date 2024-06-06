/* These functions take the data from the first file and distribute it to the
 * second and third files.
 *
 * Note; fp1 must be opened for reading
 *       fp2 and fp3 must be opened for writing
 *
 */

#include <stdio.h>

void x(FILE *fp1, FILE *fp2, FILE *fp3);
void y(FILE *fp1, FILE *fp2, FILE *fp3);
void z(FILE *fp1, FILE *fp2, FILE *fp3);
