#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
   // Taille brute en bits
   float sizeInBits = (float)(w * h * 3 * 8);
   //conversion en fonction de l'unite demandee
   if (strcmp(unit, "bt") == 0) {
       return sizeInBits; //reste en bits
   } else if (strcmp(unit, "ko") == 0) {
       return sizeInBits / 1024; //convertir en kilobits
   } else if (strcmp(unit, "mo") == 0) {
       return sizeInBits / (1024 * 1024); //convertir en mégabits
   } else if (strcmp(unit, "go") == 0) {
       return sizeInBits / (1024 * 1024 * 1024); //convertir en gigabits
   } else {
       //si l'unite n'est pas reconnue, retourne 0 (ou un message d'erreur pourrait être ajoute)
       return 0;
   }
   // YOUR CODE HERE - END
}