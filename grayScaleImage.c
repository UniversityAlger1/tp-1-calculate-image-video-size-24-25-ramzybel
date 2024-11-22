#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
   // Variable pour stocker la taille de l'image
   float grayScale = (float)(w * h * 1); // 1 byte par pixel
   // Retourne la valeur stockée dans grayScale
   return grayScale;   // YOUR CODE HERE - END
}