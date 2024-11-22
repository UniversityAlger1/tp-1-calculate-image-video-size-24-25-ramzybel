#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
   //taille d'une image couleur en bits
   float sizeColorImage = (float)(w * h * 3 * 8);
   //taille d'une image noir et blanc en bits
   float sizeBWImage = (float)(w * h * 1);
   //taille totale de la section en couleurs
   float totalColorSize = sizeColorImage * fps * durationMovie;
   //taille totale de la section en noir et blanc
   float totalBWSize = sizeBWImage * fps * durationCredits;
   //taille totale de la video en bits
   float totalVideoSize = totalColorSize + totalBWSize;
   //conversion dans l'unite specifiee
   if (strcmp(unit, "bt") == 0) {
       return totalVideoSize; // Bits
   } else if (strcmp(unit, "ko") == 0) {
       return totalVideoSize / 1024; // Kilobits
   } else if (strcmp(unit, "mo") == 0) {
       return totalVideoSize / (1024 * 1024); // Megabits
   } else if (strcmp(unit, "go") == 0) {
       return totalVideoSize / (1024 * 1024 * 1024); // Gigabits
   } else {
       //si l'unite est invalide, retournez 0
       return 0;
   }
   // YOUR CODE HERE - END
}