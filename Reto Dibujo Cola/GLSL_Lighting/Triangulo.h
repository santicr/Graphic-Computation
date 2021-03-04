#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

#pragma once
class Triangulo{
	public:
		Triangulo();
		void DibujarTriangulo(float aX, float aY, float aZ);
		~Triangulo();
};

