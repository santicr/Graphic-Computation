#include "Teteras.h"

Teteras::Teteras(){}

void Teteras::DibujarTetera(float x, float y, float z){
    glPushMatrix();
        glTranslatef(x, y, z);
        glutSolidTeapot(0.5);
    glPopMatrix();
}

Teteras::~Teteras(){}