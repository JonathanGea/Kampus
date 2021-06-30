// tugas perpotongan garis grafkom
// written by jonathan gea || 672019111
// 07-june-2021

#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>
// --------------------------------------------------------------------------------------------------
void init(void)
{
    glClearColor(1.0, 1.0, 1.0,1.0);
    glColor3f(0.0,0.0, 1.0);
    glPointSize(10.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(7.0f);
    gluOrtho2D(0,300,0,300);
}
void display(void)//start display
{
//---------------start inisialisasi
    float xA1=120, yA1=190, xA2=185, yA2=220,xA3=100, yA3=90,xA4=140, yA4=120;
    float xB1=200, yB1=200, xB2=180, yB2=60,xB3=210, yB3=70, xB4=110, yB4=70;
    float Mab1,Mab2,Mab3,Mab4,Cab1,Cab2,Cab3,Cab4;
    float x1,y1,x2,y2,x3,y3;
//---------------end inisialisasi
//--------------- start rumus perpotongan
    Mab1 = (yB1-yA1)/(xB1-xA1);
    Mab2 = (yB2-yA2)/(xB2-xA2);
    Mab3 = (yB3-yA3)/(xB3-xA3);
    Mab4 = (yB4-yA4)/(xB4-xA4);
    Cab1 = yA1-(Mab1*xA1);
    Cab2 = yA2-(Mab2*xA2);
    Cab3 = yA3-(Mab3*xA3);
    Cab4 = yA4-(Mab4*xA4);
//--------------- end rumus perpotongan
//--------------- start titik potong

    x1 = (Cab1-Cab2)/(Mab2-Mab1); //12
    y1 = (Mab2*x1)+Cab2;
    x2 = (Cab3-Cab2)/(Mab2-Mab3); //23
    y2 = (Mab2*x2)+Cab2;
    x3 = (Cab4-Cab3)/(Mab3-Mab4); //23
    y3 = (Mab3*x3)+Cab3;
//--------------- end titik potong
    glClear(GL_COLOR_BUFFER_BIT);
//---------------start garis
    glBegin (GL_LINES);  //start garis AB1
    glColor3f(1, 0, 0);
    glVertex2i(xA1,yA1);
    glVertex2i(xB1,yB1);
    glEnd();// end garis AB1
    glBegin (GL_LINES);  //start garis AB2
    glColor3f(0, 0, 1);
    glVertex2i(xA2,yA2);
    glVertex2i(xB2,yB2);
    glEnd();// end garis AB2
    glBegin (GL_LINES);  //start garis AB3
    glColor3f(0, 1, 0);
    glVertex2i(xA3,yA3);
    glVertex2i(xB3,yB3);
    glEnd();// end garis AB3 */
    glBegin (GL_LINES);  //start garis AB4
    glColor3f(1, 1, 0);
    glVertex2i(xA4,yA4);
    glVertex2i(xB4,yB4);
    glEnd();// end garis AB4 */

//---------------end garis
//--------------- start cetak poin
    glBegin(GL_POINTS); //start titik 12
    glColor3f(0, 0, 0);
    glVertex2f(x1,y1);
    glEnd();//end titik 12
    glBegin(GL_POINTS); //start titik 23
    glColor3f(0, 0, 0);
    glVertex2f(x2,y2);
    glEnd();//end titik 23
    glBegin(GL_POINTS); //start titik 34
    glColor3f(0, 0, 0);
    glVertex2f(x3,y3);
    glEnd();//end titik 34

//--------------- end cetak poin
    glutSwapBuffers();
}//end display

main(int argc, char **argv)//start main
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(880, 600); // size jendela
    glutInitWindowPosition(10, 10); //posisi jendela
    glutCreateWindow("Jonathan Gea_672019111");
    init(); //memanggil fungsi init
    glutDisplayFunc(display);//memanggil fungsi display
    glutMainLoop(); //untuk menjalankan program
    return 0;
}// end main
