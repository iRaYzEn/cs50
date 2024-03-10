#include "helpers.h"
#include <math.h>
#include <stdio.h>
#include <sys/types.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width]) {

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      int average = round(
          (image[i][j].rgbtRed + image[i][j].rgbtBlue + image[i][j].rgbtGreen) /
          3.0);
      image[i][j].rgbtRed = average;
      image[i][j].rgbtBlue = average;
      image[i][j].rgbtGreen = average;
    }
  }

  return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width]) {

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      int sepiaRed =
          round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen +
                .189 * image[i][j].rgbtBlue);

      if (sepiaRed > 255)
        sepiaRed = 255;

      int sepiaGreen =
          round(image[i][j].rgbtRed * .349 + image[i][j].rgbtGreen * .686 +
                image[i][j].rgbtBlue * .168);
      if (sepiaGreen > 255)
        sepiaGreen = 255;

      int sepiaBlue =
          round(image[i][j].rgbtRed * .272 + image[i][j].rgbtGreen * .534 +
                image[i][j].rgbtBlue * .131);
      if (sepiaBlue > 255)
        sepiaBlue = 255;

      image[i][j].rgbtRed = sepiaRed;
      image[i][j].rgbtGreen = sepiaGreen;
      image[i][j].rgbtBlue = sepiaBlue;
    }
  }

  return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width]) {
  int middle = round(width / 2.0);
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < middle; j++) {
      RGBTRIPLE tmp = image[i][j];
      image[i][j] = image[i][width - 1 - j];
      image[i][width - 1 - j] = tmp;
    }
  }
  return;
}

void blur(int height, int width, RGBTRIPLE image[height][width]) {
  RGBTRIPLE copy[height][width];

  for (int i = 0; i < height; i++) {
      for (int j = 0; j < width; j++) {
        copy[i][j] = image[i][j];
      }
  }

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      int red = 0;
      int green = 0;
      int blue = 0;
      int validSroundning = 0;
      for (int a = -1; a < 2; a++) {
        for (int b = -1; b < 2; b++) {
          if ((a + i) >= 0 && (a + i) < height && (b + j) >= 0 &&
              (b + j) < width) {
            red += copy[a + i][b + j].rgbtRed;
            green += copy[a + i][b + j].rgbtGreen;
            blue += copy[a + i][b + j].rgbtBlue;
            validSroundning++;
          }
        }
      }
      int averageRed = round((float) red / validSroundning);
      int averageGreen = round((float)green / validSroundning);
      int averageBlue = round((float)blue / validSroundning);
      image[i][j].rgbtRed = averageRed;
      image[i][j].rgbtGreen = averageGreen;
      image[i][j].rgbtBlue = averageBlue;
    }
  }
}
