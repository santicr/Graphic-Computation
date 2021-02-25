#include "Triangulo.h"

Triangulo::Triangulo(){

}

void Triangulo::DibujarTriangulo(float aX, float aY, float aZ){
    glPushMatrix();
        glScalef(0.3, 0.3, 0.8);
        glTranslatef(aX, aY, aZ);

        glBegin(GL_TRIANGLES);
            glVertex3f(1.5f, 0.0f, 0.0f);
            glVertex3f(-1.5f, 0.0f, 0.0f);
            glVertex3f(0, 2.3, 0.0f);
        glEnd();

    glPopMatrix();
}

Triangulo::~Triangulo(){

}