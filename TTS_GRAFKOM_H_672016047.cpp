#include<windows.h>
#include<GL\glut.h>
#include<stdlib.h>



void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);//backgroung
    glColor3f(0.60,0.40,0.12);
	glVertex2f(-10, 10);
	glVertex2f(-10, -10);
	glVertex2f(10, -10);
	glVertex2f(10, 10);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-9, 7);
	glVertex2f(-9, -7);
	glVertex2f(9, -7);
	glVertex2f(9, 7);
	glEnd();

    glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(-9, 7);
	glVertex2f(-9, -7);
	glVertex2f(9, -7);
	glVertex2f(9, 7);
	glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.60,0.40,0.12);
	glVertex2f(-9, 6);
	glVertex2f(-9, -6);
	glVertex2f(9, -6);
	glVertex2f(9, 6);
	glEnd();



    glBegin(GL_TRIANGLES); // sisi kiri bawah
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-9,-5);
	glVertex2f(-9,-6);
	glVertex2f(-8,-6);
	glEnd();

    glBegin(GL_TRIANGLES); // sisi kiri atas
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-9,5);
	glVertex2f(-9,6);
	glVertex2f(-8,6);
	glEnd();

    glBegin(GL_TRIANGLES); // sisi kanan atas
	glColor3f(0.9,0.9,0.8);
	glVertex2f(8,6);
	glVertex2f(9,5);
	glVertex2f(9,6);
	glEnd();

    glBegin(GL_TRIANGLES); // sisi kanan bawah
	glColor3f(0.9,0.9,0.8);
	glVertex2f(8,-6);
	glVertex2f(9,-5);
	glVertex2f(9,-6);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-8,3);
	glVertex2f(-7.5,2.5);
	glVertex2f(-7,3);
	glVertex2f(-7.5,3.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-8,0);
	glVertex2f(-7.5,-0.5);
	glVertex2f(-7,0);
	glVertex2f(-7.5,0.5);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-8,-3);
	glVertex2f(-7.5,-3.5);
	glVertex2f(-7,-3);
	glVertex2f(-7.5,-2.5);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-8,6);
	glVertex2f(-7.5,5.5);
	glVertex2f(-7,6);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-8,-6);
	glVertex2f(-7.5,-5.5);
	glVertex2f(-7,-6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-6.5,4.5);
	glVertex2f(-6,4);
	glVertex2f(-5.5,4.5);
	glVertex2f(-6,5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-6.5,1.5);
	glVertex2f(-6,1);
	glVertex2f(-5.5,1.5);
	glVertex2f(-6,2);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-6.5,-1.5);
	glVertex2f(-6,-2);
	glVertex2f(-5.5,-1.5);
	glVertex2f(-6,-1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-6.5,-4.5);
	glVertex2f(-6,-5);
	glVertex2f(-5.5,-4.5);
	glVertex2f(-6,-4);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-5,6);
	glVertex2f(-4.5,5.5);
	glVertex2f(-4,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-5,3);
	glVertex2f(-4.5,2.5);
	glVertex2f(-4,3);
	glVertex2f(-4.5,3.5);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-5,0);
	glVertex2f(-4.5,-0.5);
	glVertex2f(-4,0);
	glVertex2f(-4.5,0.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-5,-3);
	glVertex2f(-4.5,-3.5);
	glVertex2f(-4,-3);
	glVertex2f(-4.5,-2.5);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-5,-6);
	glVertex2f(-4.5,-5.5);
	glVertex2f(-4,-6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-3.5,4.5);
	glVertex2f(-3,4);
	glVertex2f(-2.5,4.5);
	glVertex2f(-3,5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-3.5,1.5);
	glVertex2f(-3,1);
	glVertex2f(-2.5,1.5);
	glVertex2f(-3,2);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-3.5,-1.5);
	glVertex2f(-3,-2);
	glVertex2f(-2.5,-1.5);
	glVertex2f(-3,-1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-3.5,-4.5);
	glVertex2f(-3,-5);
	glVertex2f(-2.5,-4.5);
	glVertex2f(-3,-4);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-2,6);
	glVertex2f(-1.5,5.5);
	glVertex2f(-1,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-2,3);
	glVertex2f(-1.5,2.5);
	glVertex2f(-1,3);
	glVertex2f(-1.5,3.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-2,0);
	glVertex2f(-1.5,-0.5);
	glVertex2f(-1,0);
	glVertex2f(-1.5,0.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-2,-3);
	glVertex2f(-1.5,-3.5);
	glVertex2f(-1,-3);
	glVertex2f(-1.5,-2.5);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-2,-6);
	glVertex2f(-1.5,-5.5);
	glVertex2f(-1,-6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-0.5,4.5);
	glVertex2f(0,4);
	glVertex2f(0.5,4.5);
	glVertex2f(0,5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-0.5,1.5);
	glVertex2f(0,1);
	glVertex2f(0.5,1.5);
	glVertex2f(0,2);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-0.5,-1.5);
	glVertex2f(0,-2);
	glVertex2f(0.5,-1.5);
	glVertex2f(0,-1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(-0.5,-4.5);
	glVertex2f(0,-5);
	glVertex2f(0.5,-4.5);
	glVertex2f(0,-4);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(1,6);
	glVertex2f(1.5,5.5);
	glVertex2f(2,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(1,3);
	glVertex2f(1.5,2.5);
	glVertex2f(2,3);
	glVertex2f(1.5,3.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(1,0);
	glVertex2f(1.5,-0.5);
	glVertex2f(2,0);
	glVertex2f(1.5,0.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(1,-3);
	glVertex2f(1.5,-3.5);
	glVertex2f(2,-3);
	glVertex2f(1.5,-2.5);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(1,-6);
	glVertex2f(1.5,-5.5);
	glVertex2f(2,-6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(2.5,4.5);
	glVertex2f(3,4);
	glVertex2f(3.5,4.5);
	glVertex2f(3,5);
	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0);
	glVertex2f(2.5,1.5);
	glVertex2f(3,1);
	glVertex2f(3.5,1.5);
	glVertex2f(3,2);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(2.5,-1.5);
	glVertex2f(3,-2);
	glVertex2f(3.5,-1.5);
	glVertex2f(3,-1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(2.5,-4.5);
	glVertex2f(3,-5);
	glVertex2f(3.5,-4.5);
	glVertex2f(3,-4);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(4,6);
	glVertex2f(4.5,5.5);
	glVertex2f(5,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(4,3);
	glVertex2f(4.5,2.5);
	glVertex2f(5,3);
	glVertex2f(4.5,3.5);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(4,0);
	glVertex2f(4.5,-0.5);
	glVertex2f(5,0);
	glVertex2f(4.5,0.5);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(4,-3);
	glVertex2f(4.5,-3.5);
	glVertex2f(5,-3);
	glVertex2f(4.5,-2.5);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(4,-6);
	glVertex2f(4.5,-5.5);
	glVertex2f(5,-6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(5.5,4.5);
	glVertex2f(6,4);
	glVertex2f(6.5,4.5);
	glVertex2f(6,5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(5.5,1.5);
	glVertex2f(6,1);
	glVertex2f(6.5,1.5);
	glVertex2f(6,2);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(5.5,-1.5);
	glVertex2f(6,-2);
	glVertex2f(6.5,-1.5);
	glVertex2f(6,-1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(5.5,-4.5);
	glVertex2f(6,-5);
	glVertex2f(6.5,-4.5);
	glVertex2f(6,-4);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(7,6);
	glVertex2f(7.5,5.5);
	glVertex2f(8,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(7,3);
	glVertex2f(7.5,2.5);
	glVertex2f(8,3);
	glVertex2f(7.5,3.5);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(7,0);
	glVertex2f(7.5,-0.5);
	glVertex2f(8,0);
	glVertex2f(7.5,0.5);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(7,-3);
	glVertex2f(7.5,-3.5);
	glVertex2f(8,-3);
	glVertex2f(7.5,-2.5);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(7,-6);
	glVertex2f(7.5,-5.5);
	glVertex2f(8,-6);
	glEnd();

	 glBegin(GL_TRIANGLES);//sisi kiri
	glColor3f(0.5,0,0);
	glVertex2f(-9,5);
	glVertex2f(-9,4);
	glVertex2f(-8.5,4.5);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-9,2);
	glVertex2f(-9,1);
	glVertex2f(-8.5,1.5);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-9,-1);
	glVertex2f(-9,-2);
	glVertex2f(-8.5,-1.5);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(-9,-4);
	glVertex2f(-9,-5);
	glVertex2f(-8.5,-4.5);
	glEnd();

    glBegin(GL_POLYGON);//diamond 1
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-8.5,4.5);
	glVertex2f(-7.5,3.5);
	glVertex2f(-6.5,4.5);
	glVertex2f(-7.5,5.5);
	glEnd();

    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-8.5,1.5);
	glVertex2f(-7.5,0.5);
	glVertex2f(-6.5,1.5);
	glVertex2f(-7.5,2.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-8.5,-1.5);
	glVertex2f(-7.5,-2.5);
	glVertex2f(-6.5,-1.5);
	glVertex2f(-7.5,-0.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-8.5,-4.5);
	glVertex2f(-7.5,-5.5);
	glVertex2f(-6.5,-4.5);
	glVertex2f(-7.5,-3.5);
	glEnd();



    glBegin(GL_TRIANGLES);//diamond 2
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-7,6);
	glVertex2f(-6,5);
	glVertex2f(-5,6);
	glEnd();

    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-7,3);
	glVertex2f(-6,2);
	glVertex2f(-5,3);
	glVertex2f(-6,4);
	glEnd();

    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-7,0);
	glVertex2f(-6,-1);
	glVertex2f(-5,0);
	glVertex2f(-6,1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-7,-3);
	glVertex2f(-6,-4);
	glVertex2f(-5,-3);
	glVertex2f(-6,-2);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-7,-6);
	glVertex2f(-6,-5);
	glVertex2f(-5,-6);
	glEnd();

    glBegin(GL_POLYGON);//diamond 3
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-5.5,4.5);
	glVertex2f(-4.5,3.5);
	glVertex2f(-3.5,4.5);
	glVertex2f(-4.5,5.5);
	glEnd();

    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-5.5,1.5);
	glVertex2f(-4.5,0.5);
	glVertex2f(-3.5,1.5);
	glVertex2f(-4.5,2.5);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-5.5,-1.5);
	glVertex2f(-4.5,-2.5);
	glVertex2f(-3.5,-1.5);
	glVertex2f(-4.5,-0.5);
	glEnd();

    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-5.5,-4.5);
	glVertex2f(-4.5,-5.5);
	glVertex2f(-3.5,-4.5);
	glVertex2f(-4.5,-3.5);
	glEnd();

    glBegin(GL_TRIANGLES);//diamond 4
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-4,6);
	glVertex2f(-3,5);
	glVertex2f(-2,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-4,3);
	glVertex2f(-3,2);
	glVertex2f(-2,3);
	glVertex2f(-3,4);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-4,0);
	glVertex2f(-3,-1);
	glVertex2f(-2,0);
	glVertex2f(-3,1);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-4,-3);
	glVertex2f(-3,-4);
	glVertex2f(-2,-3);
	glVertex2f(-3,-2);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-4,-6);
	glVertex2f(-3,-5);
	glVertex2f(-2,-6);
	glEnd();


    glBegin(GL_POLYGON);//diamond 5
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-2.5,4.5);
	glVertex2f(-1.5,3.5);
	glVertex2f(-0.5,4.5);
	glVertex2f(-1.5,5.5);
	glEnd();


    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-2.5,1.5);
	glVertex2f(-1.5,0.5);
	glVertex2f(-0.5,1.5);
	glVertex2f(-1.5,2.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
    glVertex2f(-2.5,-1.5);
	glVertex2f(-1.5,-2.5);
	glVertex2f(-0.5,-1.5);
	glVertex2f(-1.5,-0.5);
	glEnd();

    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(-2.5,-4.5);
	glVertex2f(-1.5,-5.5);
	glVertex2f(-0.5,-4.5);
	glVertex2f(-1.5,-3.5);
	glEnd();

    glBegin(GL_TRIANGLES);//diamond 6
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-1,6);
	glVertex2f(0,5);
	glVertex2f(1,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-1,3);
	glVertex2f(0,2);
	glVertex2f(1,3);
	glVertex2f(0,4);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-1,0);
	glVertex2f(0,-1);
	glVertex2f(1,0);
	glVertex2f(0,1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-1,-3);
	glVertex2f(0,-4);
	glVertex2f(1,-3);
	glVertex2f(0,-2);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-1,-6);
	glVertex2f(0,-5);
	glVertex2f(1,-6);
	glEnd();


    glBegin(GL_POLYGON);//diamond 7
	glColor3f(0.9,0.9,0.8);
	glVertex2f(0.5,4.5);
	glVertex2f(1.5,3.5);
	glVertex2f(2.5,4.5);
	glVertex2f(1.5,5.5);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(0.5,1.5);
	glVertex2f(1.5,0.5);
	glVertex2f(2.5,1.5);
	glVertex2f(1.5,2.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(0.5,-1.5);
	glVertex2f(1.5,-2.5);
	glVertex2f(2.5,-1.5);
	glVertex2f(1.5,-0.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(0.5,-4.5);
	glVertex2f(1.5,-5.5);
	glVertex2f(2.5,-4.5);
	glVertex2f(1.5,-3.5);
	glEnd();


    glBegin(GL_TRIANGLES);//diamond 8
	glColor3f(0.9,0.9,0.8);
	glVertex2f(2,6);
	glVertex2f(3,5);
	glVertex2f(4,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(2,3);
	glVertex2f(3,2);
	glVertex2f(4,3);
	glVertex2f(3,4);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(2,0);
	glVertex2f(3,-1);
	glVertex2f(4,0);
	glVertex2f(3,1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(2,-3);
	glVertex2f(3,-4);
	glVertex2f(4,-3);
	glVertex2f(3,-2);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(2,-6);
	glVertex2f(3,-5);
	glVertex2f(4,-6);
	glEnd();

    glBegin(GL_POLYGON);//diamond 9
	glColor3f(0.9,0.9,0.8);;
	glVertex2f(3.5,4.5);
	glVertex2f(4.5,3.5);
	glVertex2f(5.5,4.5);
	glVertex2f(4.5,5.5);
	glEnd();


    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(3.5,1.5);
	glVertex2f(4.5,0.5);
	glVertex2f(5.5,1.5);
	glVertex2f(4.5,2.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(3.5,-1.5);
	glVertex2f(4.5,-2.5);
	glVertex2f(5.5,-1.5);
	glVertex2f(4.5,-0.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(3.5,-4.5);
	glVertex2f(4.5,-5.5);
	glVertex2f(5.5,-4.5);
	glVertex2f(4.5,-3.5);
	glEnd();

    glBegin(GL_TRIANGLES);//diamond 10
	glColor3f(0.9,0.9,0.8);
	glVertex2f(5,6);
	glVertex2f(6,5);
	glVertex2f(7,6);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(5,3);
	glVertex2f(6,2);
	glVertex2f(7,3);
	glVertex2f(6,4);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(5,0);
	glVertex2f(6,-1);
	glVertex2f(7,0);
	glVertex2f(6,1);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(5,-3);
	glVertex2f(6,-4);
	glVertex2f(7,-3);
	glVertex2f(6,-2);
	glEnd();


    glBegin(GL_TRIANGLES);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(5,-6);
	glVertex2f(6,-5);
	glVertex2f(7,-6);
	glEnd();

	glBegin(GL_POLYGON);//diamond 11
		glColor3f(0.9,0.9,0.8);
	glVertex2f(6.5,4.5);
	glVertex2f(7.5,3.5);
	glVertex2f(8.5,4.5);
	glVertex2f(7.5,5.5);
	glEnd();


    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(6.5,1.5);
	glVertex2f(7.5,0.5);
	glVertex2f(8.5,1.5);
	glVertex2f(7.5,2.5);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(6.5,-1.5);
	glVertex2f(7.5,-2.5);
	glVertex2f(8.5,-1.5);
	glVertex2f(7.5,-0.5);
	glEnd();

    glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.8);
	glVertex2f(6.5,-4.5);
	glVertex2f(7.5,-5.5);
	glVertex2f(8.5,-4.5);
	glVertex2f(7.5,-3.5);
	glEnd();


    glBegin(GL_TRIANGLES);//sisi kiri diamond
	glColor3f(0.9,0.9,0.8);;
	glVertex2f(-9,4);
	glVertex2f(-8,3);
	glVertex2f(-9,2);
	glEnd();



    glBegin(GL_TRIANGLES);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-9,1);
	glVertex2f(-8,0);
	glVertex2f(-9,-1);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(-9,-2);
	glVertex2f(-8,-3);
	glVertex2f(-9,-4);
	glEnd();

    glBegin(GL_TRIANGLES);//sisi kanan
	glColor3f(0.5,0,0);
	glVertex2f(9,5);
	glVertex2f(9,4);
	glVertex2f(8.5,4.5);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(9,2);
	glVertex2f(9,1);
	glVertex2f(8.5,1.5);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(9,-1);
	glVertex2f(9,-2);
	glVertex2f(8.5,-1.5);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.5,0,0);
	glVertex2f(9,-4);
	glVertex2f(9,-5);
	glVertex2f(8.5,-4.5);
	glEnd();



    glBegin(GL_TRIANGLES);//sisi kanan diamond
	glColor3f(0.9,0.9,0.8);
	glVertex2f(9,4);
	glVertex2f(8,3);
	glVertex2f(9,2);
	glEnd();



    glBegin(GL_TRIANGLES);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(9,1);
	glVertex2f(8,0);
	glVertex2f(9,-1);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(0.9,0.9,0.8);
	glVertex2f(9,-2);
	glVertex2f(8,-3);
	glVertex2f(9,-4);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 1
	glColor3f(0,0,0.8);
	glVertex2f(-6.7, 4.5);
	glVertex2f(-7.5,5.3);
	glVertex2f(-7.65,5);
	glVertex2f(-7.75,4.5);
	glVertex2f(-7.65,4);
	glVertex2f(-7.5, 3.7);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 2
	glColor3f(0,0,0.8);
	glVertex2f(-6.7, 1.5);
	glVertex2f(-7.5,2.3);
	glVertex2f(-7.65,2);
	glVertex2f(-7.75,1.5);
	glVertex2f(-7.65,1);
	glVertex2f(-7.5, 0.69);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 3
	glColor3f(0,0,0.8);
	glVertex2f(-6.7, -1.5);
	glVertex2f(-7.5,-2.3);
	glVertex2f(-7.65,-2);
	glVertex2f(-7.75,-1.5);
	glVertex2f(-7.65,-1);
	glVertex2f(-7.5, -0.69);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 4
	glColor3f(0,0,0.8);
	glVertex2f(-6.7, -4.5);
	glVertex2f(-7.5,-5.3);
	glVertex2f(-7.65,-5);
	glVertex2f(-7.75,-4.5);
	glVertex2f(-7.65,-4);
	glVertex2f(-7.5, -3.7);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 5
	glColor3f(0,0,0.8);
	glVertex2f(-6.7, 3);
	glVertex2f(-6,3.77);
	glVertex2f(-5.85, 3.39);
	glVertex2f(-5.81,3);
	glVertex2f(-5.85,2.59);
	glVertex2f(-6,2.21);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 6
	glColor3f(0,0,0.8);
	glVertex2f(-6.75, 0);
	glVertex2f(-6,0.69);
	glVertex2f(-5.91,0.35);
	glVertex2f(-5.87,0);
	glVertex2f(-6,-0.75);
	glVertex2f(-6, -0.75);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 7
	glColor3f(0,0,0.8);
	glVertex2f(-6.7, -3);
	glVertex2f(-6,-3.77);
	glVertex2f(-5.85, -3.39);
	glVertex2f(-5.81,-3);
	glVertex2f(-5.85,-2.59);
	glVertex2f(-6,-2.21);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 8
	glColor3f(0,0,0.8);
	glVertex2f(-3.71, 4.5);
	glVertex2f(-4.5,5.33);
	glVertex2f(-4.59, 5.01);
	glVertex2f(-4.65,4.5);
	glVertex2f(-4.61,4.01);
	glVertex2f(-4.5,3.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 9
	glColor3f(0,0,0.8);
	glVertex2f(-3.73, 1.5);
	glVertex2f(-4.5,2.25);
	glVertex2f(-4.63, 1.99);
	glVertex2f(-4.71,1.5);
	glVertex2f(-4.63,1.01);
	glVertex2f(-4.5,0.70);
	glEnd();

    glBegin(GL_TRIANGLE_FAN);//kipas 10
	glColor3f(0,0,0.8);
	glVertex2f(-3.73, -1.5);
	glVertex2f(-4.5,-2.25);
	glVertex2f(-4.63, -1.99);
	glVertex2f(-4.71,-1.5);
	glVertex2f(-4.63,-1.01);
	glVertex2f(-4.5,-0.70);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 11
	glColor3f(0,0,0.8);
	glVertex2f(-3.71, -4.5);
	glVertex2f(-4.5,-5.33);
	glVertex2f(-4.59, -5.01);
	glVertex2f(-4.65,-4.5);
	glVertex2f(-4.61,-4.01);
	glVertex2f(-4.5,-3.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 12
	glColor3f(0,0,0.8);
	glVertex2f(-3.73, 3);
	glVertex2f(-2.99,3.85);
	glVertex2f(-2.87, 3.49);
	glVertex2f(-2.83,3);
	glVertex2f(-2.89,2.63);
	glVertex2f(-3.01,2.25);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 13
	glColor3f(0,0,0.8);
	glVertex2f(-3.77, 0);
	glVertex2f(-3.01,0.75);
	glVertex2f(-2.89, 0.43);
	glVertex2f(-2.79,0);
	glVertex2f(-2.89,-0.47);
	glVertex2f(-3.01,-0.81);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 14
	glColor3f(0,0,0.8);
	glVertex2f(-3.73, -3);
	glVertex2f(-2.99,-3.85);
	glVertex2f(-2.87, -3.49);
	glVertex2f(-2.83,-3);
	glVertex2f(-2.89,-2.63);
	glVertex2f(-3.01,-2.25);
	glEnd();



    glBegin(GL_TRIANGLE_FAN);//kipas 15
	glColor3f(0,0,0.8);
	glVertex2f(-0.71, 4.5);
	glVertex2f(-1.5,5.27);
	glVertex2f(-1.59, 5.01);
	glVertex2f(-1.71,4.5);
	glVertex2f(-1.61,4.05);
	glVertex2f(-1.5,3.73);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 16
	glColor3f(0,0,0.8);
	glVertex2f(-0.73, 1.5);
	glVertex2f(-1.5,2.27);
	glVertex2f(-1.65, 1.97);
	glVertex2f(-1.73,1.5);
	glVertex2f(-1.65,1.05);
	glVertex2f(-1.5,0.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 17
	glColor3f(0,0,0.8);
	glVertex2f(-0.73, -1.5);
	glVertex2f(-1.5,-2.27);
	glVertex2f(-1.65, -1.97);
	glVertex2f(-1.73,-1.5);
	glVertex2f(-1.65,-1.05);
	glVertex2f(-1.5,-0.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 18
	glColor3f(0,0,0.8);
	glVertex2f(-0.71, -4.5);
	glVertex2f(-1.5,-5.27);
	glVertex2f(-1.59, -5.01);
	glVertex2f(-1.71,-4.5);
	glVertex2f(-1.61,-4.05);
	glVertex2f(-1.5,-3.73);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 19
	glColor3f(0,0,0.8);
	glVertex2f(-0.77, 3);
	glVertex2f(0,3.79);
	glVertex2f(0.11, 3.35);
	glVertex2f(0.17,3);
	glVertex2f(0.11,2.53);
	glVertex2f(0,2.21);
	glEnd();



    glBegin(GL_TRIANGLE_FAN);//kipas 20
	glColor3f(0,0,0.8);
	glVertex2f(-0.81, 0);
	glVertex2f(0,0.81);
	glVertex2f(0.11, 0.49);
	glVertex2f(0.17,0);
	glVertex2f(0,-0.77);
	glVertex2f(0,-0.79);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 21
    glColor3f(0,0,0.8);
	glVertex2f(-0.77, -3);
	glVertex2f(0,-3.79);
	glVertex2f(0.11, -3.35);
	glVertex2f(0.17,-3);
	glVertex2f(0.11,-2.53);
	glVertex2f(0,-2.21);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 22
	glColor3f(0,0,0.8);
	glVertex2f(2.29, 4.5);
	glVertex2f(1.5,5.25);
	glVertex2f(1.39, 5.01);
	glVertex2f(1.33,4.5);
	glVertex2f(1.39,4.03);
	glVertex2f(1.5,3.75);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 23
	glColor3f(0,0,0.8);
	glVertex2f(2.33, 1.5);
	glVertex2f(1.5,2.29);
	glVertex2f(1.39, 2.01);
	glVertex2f(1.31,1.5);
	glVertex2f(1.39,1.03);
	glVertex2f(1.5,0.71);
	glEnd();



    glBegin(GL_TRIANGLE_FAN);//kipas 24
	glColor3f(0,0,0.8);
	glVertex2f(2.33, -1.5);
	glVertex2f(1.5,-2.29);
	glVertex2f(1.39, -2.01);
	glVertex2f(1.31,-1.5);
	glVertex2f(1.39,-1.03);
	glVertex2f(1.5,-0.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 25
	glColor3f(0,0,0.8);
	glVertex2f(2.29, -4.5);
	glVertex2f(1.5,-5.25);
	glVertex2f(1.39, -5.01);
	glVertex2f(1.33,-4.5);
	glVertex2f(1.39,-4.03);
	glVertex2f(1.5,-3.75);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 26
	glColor3f(0,0,0.8);
	glVertex2f(2.21, 3);
	glVertex2f(3,3.77);
	glVertex2f(3.13, 3.43);
	glVertex2f(3.21,3);
	glVertex2f(3.13,2.57);
	glVertex2f(3,2.21);
	glEnd();



    glBegin(GL_TRIANGLE_FAN);//kipas 27
	glColor3f(0,0,0.8);
	glVertex2f(2.21, 3);
	glVertex2f(3,3.77);
	glVertex2f(3.13, 3.43);
	glVertex2f(3.21,3);
	glVertex2f(3.13,2.57);
	glVertex2f(3,2.21);
	glEnd();



    glBegin(GL_TRIANGLE_FAN);//kipas 28
	glColor3f(0,0,0.8);
	glVertex2f(2.21, -3);
	glVertex2f(3,-3.77);
	glVertex2f(3.13, -3.43);
	glVertex2f(3.21,-3);
	glVertex2f(3.13,-2.57);
	glVertex2f(3,-2.21);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 29
	glColor3f(0,0,0.8);
	glVertex2f(2.25,0);
	glVertex2f(3,0.75);
	glVertex2f(3.09, 0.47);
	glVertex2f(3.17,0);
	glVertex2f(3.09,-0.47);
	glVertex2f(3,-0.77);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 30
	glColor3f(0,0,0.8);
	glVertex2f(5.29,4.5);
	glVertex2f(4.5,5.31);
	glVertex2f(4.39,5.01);
	glVertex2f(4.31,4.5);
	glVertex2f(4.39,4.01);
	glVertex2f(4.5,3.73);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 31
	glColor3f(0,0,0.8);
	glVertex2f(5.29,1.5);
	glVertex2f(4.5,2.31);
	glVertex2f(4.39,2.01);
	glVertex2f(4.33,1.5);
	glVertex2f(4.39,1.01);
	glVertex2f(4.5,0.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 32
	glColor3f(0,0,0.8);
	glVertex2f(5.29,-1.5);
	glVertex2f(4.5,-2.31);
	glVertex2f(4.39,-2.01);
	glVertex2f(4.33,-1.5);
	glVertex2f(4.39,-1.01);
	glVertex2f(4.5,-0.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 33
	glColor3f(0,0,0.8);
	glVertex2f(5.29,-4.5);
	glVertex2f(4.5,-5.31);
	glVertex2f(4.39,-5.01);
	glVertex2f(4.31,-4.5);
	glVertex2f(4.39,-4.01);
	glVertex2f(4.5,-3.73);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 34
	glColor3f(0,0,0.8);
	glVertex2f(5.23,3);
	glVertex2f(6,3.77);
	glVertex2f(6.09,3.43);
	glVertex2f(6.15,3);
	glVertex2f(6.09,2.53);
	glVertex2f(6,2.23);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 35
	glColor3f(0,0,0.8);
	glVertex2f(5.23,0);
	glVertex2f(6,0.75);
	glVertex2f(6.09,0.37);
	glVertex2f(6.15,0);
	glVertex2f(6.09,-0.47);
	glVertex2f(6,-0.79);
	glEnd();



    glBegin(GL_TRIANGLE_FAN);//kipas 36
	glColor3f(0,0,0.8);
	glVertex2f(5.23,-3);
	glVertex2f(6,-3.77);
	glVertex2f(6.09,-3.43);
	glVertex2f(6.15,-3);
	glVertex2f(6.09,-2.53);
	glVertex2f(6,-2.23);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 37
	glColor3f(0,0,0.8);
	glVertex2f(8.29,4.5);
	glVertex2f(7.5,5.29);
	glVertex2f(7.41,4.97);
	glVertex2f(7.33,4.55);
	glVertex2f(7.41,4.01);
    glVertex2f(7.5,3.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 38
	glColor3f(0,0,0.8);
	glVertex2f(8.29,1.5);
	glVertex2f(7.5,2.29);
	glVertex2f(7.41,1.89);
	glVertex2f(7.37,1.5);
	glVertex2f(7.41,1.09);
    glVertex2f(7.5,0.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 39
	glColor3f(0,0,0.8);
	glVertex2f(8.29,-1.5);
	glVertex2f(7.5,-2.29);
	glVertex2f(7.41,-1.89);
	glVertex2f(7.37,-1.5);
	glVertex2f(7.41,-1.09);
    glVertex2f(7.5,-0.71);
	glEnd();


    glBegin(GL_TRIANGLE_FAN);//kipas 40
	glColor3f(0,0,0.8);
	glVertex2f(8.29,-4.5);
	glVertex2f(7.5,-5.29);
	glVertex2f(7.41,-4.97);
	glVertex2f(7.33,-4.55);
	glVertex2f(7.41,-4.01);
    glVertex2f(7.5,-3.71);
	glEnd();


    glBegin(GL_TRIANGLES);//tepi atas
	glColor3f(1,0,0);
	glVertex2f(-9,6);
	glVertex2f(-8, 6);
	glVertex2f(-8.51,7);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(1,0,0);
	glVertex2f(-8, 6);
    glVertex2f(-7.5,7);
	glVertex2f(-7,6);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(1,0,0);
    glVertex2f(-7,6);
	glVertex2f(-6.5, 7);
    glVertex2f(-6,6);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-6,6);
    glVertex2f(-5.5,7);
	glVertex2f(-5, 6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-5,6);
    glVertex2f(-4.5,7);
	glVertex2f(-4, 6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-4,6);
    glVertex2f(-3.5,7);
	glVertex2f(-3, 6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-3,6);
    glVertex2f(-2.5,7);
	glVertex2f(-2, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-2,6);
    glVertex2f(-1.5,7);
	glVertex2f(-1, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-1,6);
    glVertex2f(-0.5,7);
	glVertex2f(0, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(0,6);
    glVertex2f(0.5,7);
	glVertex2f(1, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(1,6);
    glVertex2f(1.5,7);
	glVertex2f(2, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(2,6);
    glVertex2f(2.5,7);
	glVertex2f(3, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(3,6);
    glVertex2f(3.5,7);
	glVertex2f(4, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(4,6);
    glVertex2f(4.5,7);
	glVertex2f(5, 6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(5,6);
    glVertex2f(5.5,7);
	glVertex2f(6, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(6,6);
    glVertex2f(6.5,7);
	glVertex2f(7, 6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(7,6);
    glVertex2f(7.5,7);
	glVertex2f(8, 6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(8,6);
    glVertex2f(8.5,7);
	glVertex2f(9, 6);
    glEnd();

    glBegin(GL_TRIANGLES);//tepi bawah
	glColor3f(1,0,0);
	glVertex2f(-9,-6);
	glVertex2f(-8, -6);
	glVertex2f(-8.51,-7);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(1,0,0);
	glVertex2f(-8, -6);
    glVertex2f(-7.5,-7);
	glVertex2f(-7,-6);
	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3f(1,0,0);
    glVertex2f(-7,-6);
	glVertex2f(-6.5, -7);
    glVertex2f(-6,-6);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-6,-6);
    glVertex2f(-5.5,-7);
	glVertex2f(-5, -6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-5,-6);
    glVertex2f(-4.5,-7);
	glVertex2f(-4, -6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-4,-6);
    glVertex2f(-3.5,-7);
	glVertex2f(-3, -6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-3,-6);
    glVertex2f(-2.5,-7);
	glVertex2f(-2, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-2,-6);
    glVertex2f(-1.5,-7);
	glVertex2f(-1, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-1,-6);
    glVertex2f(-0.5,-7);
	glVertex2f(0, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(0,-6);
    glVertex2f(0.5,-7);
	glVertex2f(1, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(1,-6);
    glVertex2f(1.5,-7);
	glVertex2f(2, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(2,-6);
    glVertex2f(2.5,-7);
	glVertex2f(3, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(3,-6);
    glVertex2f(3.5,-7);
	glVertex2f(4, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(4,-6);
    glVertex2f(4.5,-7);
	glVertex2f(5, -6);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(5,-6);
    glVertex2f(5.5,-7);
	glVertex2f(6, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(6,-6);
    glVertex2f(6.5,-7);
	glVertex2f(7, -6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(7,-6);
    glVertex2f(7.5,-7);
	glVertex2f(8, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(8,-6);
    glVertex2f(8.5,-7);
	glVertex2f(9, -6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-10,6);
    glVertex2f(-9,6);
	glVertex2f(-9,7);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-10,-6);
    glVertex2f(-9,-6);
	glVertex2f(-9,-7);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.8);
    glVertex2f(-10,-6);
    glVertex2f(-9,-6);
	glVertex2f(-9,6);
	glVertex2f(-10,6);
    glEnd();


    glBegin(GL_LINE_LOOP);//garis samping
	glColor3f(0,0,1);
	glVertex2f(-10, -6);
	glVertex2f(-9, -5);
	glVertex2f(-10, -4);
	glVertex2f(-9, -3);
	glVertex2f(-10, -2);
	glVertex2f(-9, -1);
    glVertex2f(-10, 0);
	glVertex2f(-9, 1);
	glVertex2f(-10, 2);
	glVertex2f(-9, 3);
    glVertex2f(-10, 4);
    glVertex2f(-9, 5);
    glVertex2f(-10, 6);
    glVertex2f(-9, 6);
    glVertex2f(-10, 5);
    glVertex2f(-9, 4);
    glVertex2f(-10, 3);
    glVertex2f(-9, 2);
    glVertex2f(-10, 1);
    glVertex2f(-9, 0);
    glVertex2f(-10, -1);
    glVertex2f(-9, -2);
    glVertex2f(-10, -3);
    glVertex2f(-9, -4);
    glVertex2f(-10,-5);
    glVertex2f(-9, -6);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0,0,0);
    glVertex2f(-9,-6);
	glVertex2f(-9,6);
	glEnd();

	 glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(10,6);
    glVertex2f(9,6);
	glVertex2f(9,7);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(10,-6);
    glVertex2f(9,-6);
	glVertex2f(9,-7);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.8);
    glVertex2f(10,6);
    glVertex2f(9,6);
	glVertex2f(9,-6);
	glVertex2f(10,-6);
    glEnd();


    glBegin(GL_LINE_LOOP);//garis samping
	glColor3f(0,0,1);
	glVertex2f(10, 6);
	glVertex2f(9, 5);
	glVertex2f(10, 4);
	glVertex2f(9, 3);
	glVertex2f(10, 2);
	glVertex2f(9, 1);
    glVertex2f(10, 0);
	glVertex2f(9, -1);
	glVertex2f(10, -2);
	glVertex2f(9, -3);
    glVertex2f(10, -4);
    glVertex2f(9, -5);
    glVertex2f(10, -6);
    glVertex2f(9,- 6);
    glVertex2f(10, -5);
    glVertex2f(9, -4);
    glVertex2f(10, -3);
    glVertex2f(9, -2);
    glVertex2f(10, -1);
    glVertex2f(9, 0);
    glVertex2f(10, 1);
    glVertex2f(9, 2);
    glVertex2f(10, 3);
    glVertex2f(9, 4);
    glVertex2f(10,5);
    glVertex2f(9, 6);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0,0,0);
    glVertex2f(9,6);
	glVertex2f(9,-6);
	glEnd();

	glFlush();
}
void myinit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10.0f, 10.0f, -10.0f, 10.0f);


}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutCreateWindow("672016047");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
