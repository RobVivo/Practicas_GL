/*
*	HolaOpenGL.cpp
*	Codigo plantilla basico para una aplicacion de
*	OpenGL
* 
*	@author	r.vivo'
*/

// Bibliotecas de C++
#include <iostream>

// Bibliotecas graficas
#include <GL/freeglut.h>

using namespace std;

void display()
{
	// Callback de dibujo 
	glClearColor(0.0f, 0.0f, 0.2f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	// Renovar el dibujo
	glFlush();

}

void reshape(GLint w, GLint h)
{
	// w,h son las nuevas dimensiones de la ventana
}

int main(int argc, char** argv)
{
	// Inicializaciones
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 400);
	glutInitWindowPosition(0, 0);

	// Crear la ventana
	glutCreateWindow("HOLA OpenGL");

	// Seccion de registrode callbacks
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);

	// Pone en marcha el bucle de atencion de evntos
	glutMainLoop();
}