

// written by jonathan gea || 672019111
// 01-may-2021

#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>

void init(void);
void display(void);
const double PI= 3.141592653589793;
int i;


void lingkaran(int jari2,int jumlah_titik,int x_tengah,int y_tengah)
{
    glBegin(GL_POLYGON);
    for(i=0; i<=360; i++)
    {
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+jari2*cos(sudut);
        float y=y_tengah+jari2*sin(sudut);
        glVertex2f(x,y);
    }
    glEnd();
}

void segitiga(int x1,int y1,int x2,int y2,int x3,int y3) // titiak A, titik tengah, titik B
{
    glBegin(GL_POLYGON);
    glVertex2i(x1,y1);
    glVertex2i(x2,y2);
    glVertex2i(x3,y3);
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

    // rumah
    glRectf(75.0,200.0,275.0,100.0);
     //atab
    glColor3f(1.0,0.0,0.0); // warna merah
    segitiga(50.0,200.0,175.0,250.0,300.0,200);
    //jendela
    glColor3f(0.0,1.0,0.0); // warna hijau
    glRectf(100.0,175.0,125.0,125.0);
    glRectf(225.0,175.0,250.0,125.0);
    //pintu
    glRectf(150.0,150.0,200.0,100.0);
    //sun
    glColor3f(1.0,1.0,0.0); // warna kuning
    lingkaran(50,360,350,350);
    //depan pintu
    glRectf(150.0,100.0,200.0,50.0);
    //pagar
    glColor3f(1.0,0.0,0.0); // warna merah
    glRectf(30.0,80.0,40.0,50.0); //kiri
    glRectf(125.0,80.0,135.0,50.0);
    glRectf(40.0,75.0,125.0,70.0);
    glRectf(40.0,65.0,125.0,60.0);

    glRectf(215.0,80.0,225.0,50.0); //kanan
    glRectf(310.0,80.0,320.0,50.0);
    glRectf(225.0,75.0,310.0,70.0);
    glRectf(225.0,65.0,310.0,60.0);
    //jalan
    glColor3f(0.0,1.0,1.0); // warna biru langit
    glRectf(0.0,50.0,450.0,10.0);
    //pembatas jalan
    glColor3f(1.0,1.0,0.0); // warna kuning
    glRectf(50.0,35.0,100.0,25.0);
    glRectf(150.0,35.0,200.0,25.0);
    glRectf(250.0,35.0,300.0,25.0);
    glRectf(350.0,35.0,400.0,25.0);

    //bendera
    glColor3f(0.0,0.0,0.0); // warna hitam
    glRectf(395.0,225.0,405.0,80.0);
    glRectf(375.0,80.0,425.0,70.0);
    glColor3f(0.0,0.0,1.0); // warna biru
    glRectf(350.0,225.0,400.0,200.0);

    //awan
    glColor3f(0.0,1.0,1.0); // warna biru langit
    lingkaran(40,360,70,380);
    lingkaran(30,360,115,370);


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
