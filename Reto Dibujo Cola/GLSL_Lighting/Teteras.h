#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

#pragma once
class Teteras{
	public:
		Teteras();
		void DibujarTetera(float x, float y, float z);
		~Teteras();
};

