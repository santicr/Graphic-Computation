#include "Cola.h"
#define max 5

Cola::Cola() {

}

void Cola::DibujarCola(){
	glTranslatef(0, -2, 0);
	glPushMatrix();
		glTranslatef(-0.5, 0.0, 0.0);
		glRotatef((GLfloat)30, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 0.4, 0.5);
		glutSolidCube(1.0);
		glPopMatrix();
		
		for (int i = 0; i < max; i++){
			glTranslatef(0.15, -.3, 0.0);
			glRotatef((GLfloat)45, 0.0, 0.0, 0.3);
			glTranslatef(1.0, 0.0, 0.0);
			glPushMatrix();
			glScalef(1.0, 0.4, 0.5);
			glutSolidCube(1.0);
			glPopMatrix();
		}
	
	glPopMatrix();

	glTranslatef(-1.7f, 1.0f, 0.0f);
	glPushMatrix();
		for (int i = 0; i < 10; i++){
			glTranslatef(.1f, 0.0f, 0.0f);
			glRotatef((GLfloat)38, 0.0, 0.0, 1.0);
			glPushMatrix();
			glutSolidSphere(.5f, 20, 10);
			glPopMatrix();
		}
	glPopMatrix();
}

Cola::~Cola(){

}