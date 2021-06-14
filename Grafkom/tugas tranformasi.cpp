// program by Jonathan Gea || 672019111
// 15 june 2021
// tugas transformasi


#include <windows.h>
#include <GL/glut.h>
#include <math.h>

//variabel untuk menampung sudut dan posisi awal
float angle = 0.0f;
float scale = 0.0f;
int color = 0;
//variabel untuk mengatur perubahan sudut dan posisi
float delta_angle = 45.0f;


// end deklasrasi

void lingkaran(int jari2,int jumlah_titik,int x_tengah,int y_tengah)
{
    glBegin(GL_POLYGON);
    for(int i=0; i<=360; i++)
    {
        float sudut=i*(2*M_PI/jumlah_titik);
        float x=x_tengah+jari2*cos(sudut);
        float y=y_tengah+jari2*sin(sudut);
        glVertex2f(x,y);
    }
    glEnd();
} //end lingkaran


void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.5, 0.0, (color+0.5), 0.0);
    glColor3f(color,1.0,0.0); // warna kuning > hijau
    glPushMatrix();
        glRotatef((angle+5),0.0,0.0,1.0);
        lingkaran(40,7,0,0);
    glPopMatrix();
    glColor3f(0.1,0.5,color); // warna biru muda > hijau tua
    glPushMatrix();
        glRotatef(angle,0.0,0.0,1.0);
        glScaled(scale,-scale,0.0f);
        glRectf(-100.0,100.0,-50.0,50.0);
    glPopMatrix();
    glColor3f(1.0,0.0,color); //pink ke merah
    glPushMatrix();
        glScaled(-scale,scale,0.0f);
        glRotatef(angle,0.0,0.0,1.0);
        lingkaran(20,60,-100,100);
    glPopMatrix();

    glutSwapBuffers();
}

void myInit(void)
{
    glClearColor(1.5, 0.0, 0.5, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-200.0,200.0,-200.0,200.0);
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000,timer,0);
    angle += delta_angle;
    if (color == 0){
        color = 1;
    }else{
        color = 0;
    }
    if (scale == 0.5f){
        scale = 1.0f;

    }else{
        scale = 0.5f;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(300,50);
    glutCreateWindow("Jonathan gea - 67201911");
    glutDisplayFunc(myDisplay);
    myInit();
    glutTimerFunc(0,timer,0);
    glutMainLoop();
    return 0;
}
