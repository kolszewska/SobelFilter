#include "Image.h"
#include "Sobel.h"

int main(int argc, char *argv[])
{
    Image *image = new Image;
    Sobel::applySobelFilterOnCpu(image);
    image->saveImage();
    Sobel::aplySobelFilterOnGpu(image);
    return 0;
}
