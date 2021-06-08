#include <windows.h>
#include <GL/glut.h>


void myInit(void)
{
    gluOrtho2D(0.0,640.0,0.0,480.0);
}

void myDisplay(void)
{
    glColor3f(0.0,1.0,0.0);
    glRectf(300.0,200.0,400.0,300.0);
    glColor3f(0.0,0.0,1.0);
    glPushMatrix();
    glTranslated(150,150,0);
    glRectf(300.0,200.0,400.0,300.0);
    glPopMatrix();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100,150);

    glutCreateWindow("Transformasi");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();

    return 0;
}
