// written by jonathan gea || 672019111
// 06-June-2021

#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>

void init(void);
void display(void);
const double PI= 3.141592653589793;

void lingkaran(int jari2,int jumlah_titik,int x_tengah,int y_tengah)
{
    glBegin(GL_POLYGON);
    for(int i=0; i<=360; i++)
    {
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+jari2*cos(sudut);
        float y=y_tengah+jari2*sin(sudut);
        glVertex2f(x,y);
    }
    glEnd();
}

// --------------------------------------------------------------------------------------------------

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3f(0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.,450.,0.,450.);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,1.0);
    glRectf(0,125,450,0); // laut
    glColor3f(1.25,0.0,1.0);
    glBegin(GL_POLYGON); // gunung 1
        glVertex2i(325,300);
        glVertex2i(480,125);
        glVertex2i(125,125);
    glEnd(); // end gunung 1
     glColor3f(0.25,0.25,0.0);
    glBegin(GL_POLYGON); // gunung 2
        glVertex2i(400,250);
        glVertex2i(500,125);
        glVertex2i(225,125);
    glEnd(); // end gunung 2
    glColor3f(0.0,1.0,1.0); // warna biru langit
    glBegin(GL_POLYGON); // badab kapal
        glVertex2i(75,150);
        glVertex2i(125,100);
        glVertex2i(400,100);
        glVertex2i(425,150);
    glEnd();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON); // atap kapal
        glVertex2i(200,200);
        glVertex2i(375,200);
        glVertex2i(375,150);
        glVertex2i(160,150);
    glEnd();
    glColor3f(1.0,1.0,0.0);
    glRectf(205,180,225,165); // jendela kapal
    glRectf(250,180,270,165);
    glRectf(290,180,310,165);
    glRectf(335,180,360,165);
    glColor3f(1,1,0);
    lingkaran(30,10,350,350);
    glColor3f(0.0,1.0,1.0); // warna biru langit
    lingkaran(40,360,70,380); //awan
    lingkaran(30,360,115,380);
    // ikan
    glColor3f(1,0,1);
    glBegin(GL_POLYGON); // badab kapal
        glVertex2i(200,75);
        glVertex2i(225,50);
        glVertex2i(200,25);
        glVertex2i(175,50);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2i(220,50);
        glVertex2i(240,65);
        glVertex2i(240,35);
    glEnd();



    glutSwapBuffers();
}

main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(450, 450); // size jendela
    glutInitWindowPosition(100, 100); //posisi jendela
    glutCreateWindow("Tugas1_672019111");
    init(); //memanggil fungsi init
    glutDisplayFunc(display);//memanggil fungsi display
    glutMainLoop(); //untuk menjalankan program
    return 0;
}

