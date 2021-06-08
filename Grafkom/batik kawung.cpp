#define _USE_MATH_DEFINES
#include <windows.h>
#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

void init(void);
void display(void);

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(750, 750);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Batik kawung");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -100.0, 100.0);
}

void persegi(int x1, int y1,int x2, int y2 )
{
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1,y1);
    glVertex2f(x1,y2);
    glVertex2f(x2,y2);
    glVertex2f(x2,y1);
    glEnd();
}

void lingkaran(int jari2,int jumlah_titik,int x_tengah,int y_tengah)
{
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<=360; i++)
    {
        float sudut=i*(2*M_PI/jumlah_titik);
        float x=x_tengah+jari2*cos(sudut);
        float y=y_tengah+jari2*sin(sudut);
        glVertex2f(x,y);
    }
    glEnd();
}
//===========================================================================================

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    int n = 20;
    for(int a=-100; a<=100; a+=n)
    {
        for(int b=-100; b<=100; b+=n)
        {
            if(b%100==0)
            {
                glColor3f(0.0, 0.0, 1.0);
                lingkaran(n, 60,a,b);
            }
            else
            {
                glColor3f(1.0, 0.0, 0.0);
                lingkaran(n, 60,a,b);
            }
        }
    }
    for(int a=-100; a<=100; a+=n)
    {
        for(int b=-100; b<=100; b+=n)
        {
            glColor3f(0.0, 1.0, 0.0);
            persegi(0,a,b,0);

        }
    }

    glutSwapBuffers();
}
