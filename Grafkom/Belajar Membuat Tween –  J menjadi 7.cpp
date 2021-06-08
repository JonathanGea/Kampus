// Tugas 3 tweening fuiyohh
// written by jonathan gea || 672019111
// 09-june-2021
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>

#define RATIO 1.200
#define WW 100
#define WH (WW/RATIO)
#define HALFX ((int)(WW/2))
#define HALFY ((int)(WH/2))
#define deltat .0009
int WindowWidth;
int WindowHeight;

void InitGL();
void Display();
void Reshape(int,int);


main(int argc, char **argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    WindowWidth = (int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.4);
    WindowHeight = (int)(WindowWidth/RATIO);
    glutInitWindowSize(WindowWidth,WindowHeight);
    glutInitWindowPosition((int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.1),(glutGet((GLenum)GLUT_SCREEN_HEIGHT)/2)-(WindowHeight/2));
    glutCreateWindow(" Jonathan Gea - 672019111");
    glutDisplayFunc(Display);
    glutReshapeFunc(Reshape);
    InitGL();
    glutMainLoop();
}

void Display()
{
    glLineWidth(4.0);
    float StartShape[14][2] = {{-9,15},{10,15},{10,5},{10,-9},{7,-15},{2,-18},{-5,-18},{-13,-14},{-12,-9},{-4,-11},{-2,-11},{2,-9},{2,10},{-9,10}};
    float EndShape[14][2] = {{-11,15},{11,15},{7,2},{10,2},{10,-3},{5,-3},{0,-18},{-7,-18},{-2,-3},{-5,-3},{-5,2},{0,2},{3,10},{-11,10}};
    float IntermediateShape[12][2];
    float VertexColors[12][3]= {{1,0,0},{1,1,0},{1,0,1},{0,1,0},{0,1,1},{0,0,1},{1,0.5,0},{1,0,0.5},{0.5,1,0},{0.5,0,1}, {1,0,0.5},{0,1,0.5}};
    static float Tween=0.0-deltat;
    if(Tween<1)
    {
        Tween+= deltat;
    }
    for (int Vtx=0; Vtx<14; Vtx++)
    {
        IntermediateShape[Vtx][0]=(1.0-Tween)*StartShape[Vtx][0]+Tween*EndShape[Vtx][0];
        IntermediateShape[Vtx][1]=(1.0-Tween)*StartShape[Vtx][1]+Tween*EndShape[Vtx][1];
    }
    glVertexPointer(2,GL_FLOAT,0,IntermediateShape);
    glColorPointer(3,GL_FLOAT,0,VertexColors);
    for (int i = 0; i < 1000000; i++);
    glClear(GL_COLOR_BUFFER_BIT);
    glDrawArrays(GL_LINE_LOOP,0,14);
    glutSwapBuffers();
    glutPostRedisplay();
}
void Reshape(int w,int h)
{
 glutReshapeWindow(w,(int)(w/RATIO));
 WindowWidth=w;
 WindowHeight=(int)(w/RATIO);
 InitGL();
}

void InitGL()
{
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-HALFX,HALFX,-HALFY,HALFY);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(0, 0, 0, 0);
 glEnableClientState (GL_VERTEX_ARRAY);
 glEnableClientState (GL_COLOR_ARRAY);
 glShadeModel(GL_SMOOTH);
 glViewport(0,0,WindowWidth,WindowHeight);
}

