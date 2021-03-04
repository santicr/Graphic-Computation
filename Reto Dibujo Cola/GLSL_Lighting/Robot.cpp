#include "Robot.h"
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

Robot::Robot(){}

void Robot::DibujarRobot(float x, float y, float z){
	glPushMatrix();

		glTranslatef(x, y, z);

		glPushMatrix();
			glTranslatef(0, 0, 0);
			glutSolidCube(0.5);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0, -0.5, 0);
			glutSolidCube(0.5);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-.3, -0.25, 0);
			glutSolidCube(0.5);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(.3, -0.25, 0);
			glutSolidCube(0.5);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(.3, -0.8, 0);
			glutSolidCube(0.5);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-.3, -0.8, 0);
			glutSolidCube(0.5);
		glPopMatrix();

	glPopMatrix();
}

Robot::~Robot(){}