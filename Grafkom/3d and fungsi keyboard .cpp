#include<windows.h>
#include<gl/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("HERMON JULKIFLY SEBAH - 672019280");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
}

void bangunannya() {
    //depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(-10.0, -10.0, 0.0);
    glVertex3f(-10.0, 15.0, 0.0);
    glVertex3f(10.0, 15.0, 0.0);
    glVertex3f(10.0, -10.0, 0.0);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(-10.0, 15.0, 0.0);
    glVertex3f(-10.0, -10.0, 0.0);
    glVertex3f(-10.0, -10.0, -40.0);
    glVertex3f(-10.0, 15.0, -40.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(-10.0, -10.0, -40.0);
    glVertex3f(-10.0, 15.0, -40.0);
    glVertex3f(10.0, 15.0, -40.0);
    glVertex3f(10.0, -10.0, -40.0);
    glEnd();

    //belakang2
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(10.0, -10.0, -40.0);
    glVertex3f(10.0, 15.0, -40.0);
    glVertex3f(10.0, 15.0, -60.0);
    glVertex3f(10.0, -10.0, -60.0);
    glEnd();

    //belakang3
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(10.0, -10.0, -60.0);
    glVertex3f(10.0, 15.0, -60.0);
    glVertex3f(35.0, 15.0, -60.0);
    glVertex3f(35.0, -10.0, -60.0);
    glEnd();

    //belakang4
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(35.0, -10.0, -60.0);
    glVertex3f(35.0, 15.0, -60.0);
    glVertex3f(35.0, 15.0, -45.0);
    glVertex3f(35.0, -10.0, -45.0);
    glEnd();

    //belakang5
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(35.0, -10.0, -45.0);
    glVertex3f(35.0, 15.0, -45.0);
    glVertex3f(30.0, 15.0, -45.0);
    glVertex3f(30.0, -10.0, -45.0);
    glEnd();

    //belakang6
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(30.0, -10.0, -36.0);
    glVertex3f(30.0, 15.0, -36.0);
    glVertex3f(30.0, 15.0, -45.0);
    glVertex3f(30.0, -10.0, -45.0);
    glEnd();

    //belakang7
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(30.0, -10.0, -36.0);
    glVertex3f(30.0, 15.0, -36.0);
    glVertex3f(35.0, 15.0, -36.0);
    glVertex3f(35.0, -10.0, -36.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(35.0, 15.0, -36.0);
    glVertex3f(35.0, -10.0, -36.0);
    glVertex3f(35.0, -10.0, -12.0);
    glVertex3f(35.0, 15.0, -12.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(35.0, -10.0, -12.0);
    glVertex3f(35.0, 15.0, -12.0);
    glVertex3f(27.0, 15.0, -12.0);
    glVertex3f(27.0, -10.0, -12.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(27.0, -10.0, -12.0);
    glVertex3f(27.0, 15.0, -12.0);
    glVertex3f(27.0, 15.0, 7.0);
    glVertex3f(27.0, -10.0, 7.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(27.0, -10.0, 7.0);
    glVertex3f(27.0, 15.0, 7.0);
    glVertex3f(10.0, 15.0, 7.0);
    glVertex3f(10.0, -10.0, 7.0);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(10.0, -10.0, 7.0);
    glVertex3f(10.0, 15.0, 7.0);
    glVertex3f(10.0, 15.0, 0.0);
    glVertex3f(10.0, -10.0, 0.0);
    glEnd();
}

void furniture() {
    ///meja
    glBegin(GL_POLYGON);
    glColor3f(240 / 255.0, 230 / 255.0, 140 / 255.0);
    glVertex3f(1.0, 0.0, -35.0);
    glVertex3f(14.0, 0.0, -35.0);
    glVertex3f(14.0, 0.0, -5.0);
    glVertex3f(1.0, 0.0, -5.0);
    glEnd();
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(240 / 255.0, 230 / 255.0, 140 / 255.0);
    glVertex3f(1.0, -7.0, -35.0);
    glVertex3f(1.0, -7.0, -35.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(240 / 255.0, 230 / 255.0, 140 / 255.0);
    glVertex3f(1.0, 0.0, -5.0);
    glVertex3f(1.0, -7.0, -5.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(240 / 255.0, 230 / 255.0, 140 / 255.0);
    glVertex3f(14.0, 0.0, -35.0);
    glVertex3f(14.0, -7.0, -35.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(240 / 255.0, 230 / 255.0, 140 / 255.0);
    glVertex3f(14.0, -.0, -5.0);
    glVertex3f(14.0, -7.0, -5.0);
    glEnd();

    //rak
    glBegin(GL_POLYGON);
    glColor3f(218 / 255.0, 165 / 255.0, 32 / 255.0);
    glVertex3f(19.0, -10.0, -20.0);
    glVertex3f(27.0, -10.0, -20.0);
    glVertex3f(27.0, -10.0, -40.0);
    glVertex3f(19.0, -10.0, -40.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(218 / 255.0, 165 / 255.0, 32 / 255.0);
    glVertex3f(19.0, -10.0, -40.0);
    glVertex3f(19.0, 0.0, -20.0);
    glVertex3f(19.0, 0.0, -40.0);
    glVertex3f(19.0, -10.0, -20.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(218 / 255.0, 165 / 255.0, 32 / 255.0);
    glVertex3f(19.0, -10.0, -45.0);
    glVertex3f(27.0, -10.0, -45.0);
    glVertex3f(27.0, -10.0, -15.0);
    glVertex3f(19.0, -10.0, -15.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(218 / 255.0, 165 / 255.0, 32 / 255.0);
    glVertex3f(19.0, -10.0, -45.0);
    glVertex3f(27.0, -10.0, -45.0);
    glVertex3f(27.0, -10.0, -45.0);
    glVertex3f(19.0, -10.0, -45.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(218 / 255.0, 165 / 255.0, 32 / 255.0);
    glVertex3f(27.0, 0.0, -15.0);
    glVertex3f(19.0, 0.0, -15.0);
    glVertex3f(19.0, -10.0, -15.0);
    glVertex3f(27.0, -10.0, -15.0);
    glEnd();
}

void halaman() {
    //Semen lantai kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-50.0, -20.0, 30.0);
    glVertex3f(-50.0, -10.0, 30.0);
    glVertex3f(-50.0, -10.0, -70.0);
    glVertex3f(-50.0, -20.0, -70.0);
    glEnd();

    //Semen lantai belakang
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-50.0, -20.0, -70.0);
    glVertex3f(-50.0, -10.0, -70.0);
    glVertex3f(50.0, -10.0, -70.0);
    glVertex3f(50.0, -20.0, -70.0);
    glEnd();

    //Semen lantai Kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(50.0, -20.0, -70.0);
    glVertex3f(50.0, -10.0, -70.0);
    glVertex3f(50.0, -10.0, 30.0);
    glVertex3f(50.0, -20.0, 30.0);
    glEnd();

    //Semen lantai depan
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(50.0, -20.0, 30.0);
    glVertex3f(50.0, -10.0, 30.0);
    glVertex3f(-50.0, -10.0, 30.0);
    glVertex3f(-50.0, -20.0, 30.0);
    glEnd();

    //Semen lantai atas
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-50.0, -10.0, 30.0);
    glVertex3f(-50.0, -10.0, -70.0);
    glVertex3f(50.0, -10.0, -70.0);
    glVertex3f(50.0, -10.0, 30.0);
    glEnd();
}

void jendelapintu() {
    //pintu
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-4.0, -8.0, 1.0);
    glVertex3f(-4.0, 6.0, 1.0);
    glVertex3f(4.0, 6.0, 1.0);
    glVertex3f(4.0, -8.0, 1.0);
    glEnd();

    //jendela kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-7.0, -4.0, 1.0);
    glVertex3f(-7.0, 6.0, 1.0);
    glVertex3f(-5.0, 6.0, 1.0);
    glVertex3f(-5.0, -4.0, 1.0);
    glEnd();

    //jendela kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(5.0, -4.0, 1.0);
    glVertex3f(5.0, 6.0, 1.0);
    glVertex3f(7.0, 6.0, 1.0);
    glVertex3f(7.0, -4.0, 1.0);
    glEnd();

    //jendela atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-4.0, 7.0, 1.0);
    glVertex3f(-4.0, 10.0, 1.0);
    glVertex3f(4.0, 10.0, 1.0);
    glVertex3f(4.0, 7.0, 1.0);
    glEnd();

    //jendela atas kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-7.0, 7.0, 1.0);
    glVertex3f(-7.0, 8.0, 1.0);
    glVertex3f(-5.0, 10.0, 1.0);
    glVertex3f(-5.0, 7.0, 1.0);
    glEnd();

    //jendela atas kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(5.0, 7.0, 1.0);
    glVertex3f(5.0, 10.0, 1.0);
    glVertex3f(7.0, 8.0, 1.0);
    glVertex3f(7.0, 7.0, 1.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 7.0, -5.0);
    glVertex3f(-11.0, 8.0, -5.0);
    glVertex3f(-11.0, 10.0, -7.0);
    glVertex3f(-11.0, 7.0, -7.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 7.0, -8.0);
    glVertex3f(-11.0, 10.0, -8.0);
    glVertex3f(-11.0, 10.0, -10.0);
    glVertex3f(-11.0, 7.0, -10.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 7.0, -11.0);
    glVertex3f(-11.0, 10.0, -11.0);
    glVertex3f(-11.0, 8.0, -13.0);
    glVertex3f(-11.0, 7.0, -13.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, -4.0, -5.0);
    glVertex3f(-11.0, 6.0, -5.0);
    glVertex3f(-11.0, 6.0, -7.0);
    glVertex3f(-11.0, -4.0, -7.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, -4.0, -8.0);
    glVertex3f(-11.0, 6.0, -8.0);
    glVertex3f(-11.0, 6.0, -10.0);
    glVertex3f(-11.0, -4.0, -10.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, -4.0, -11.0);
    glVertex3f(-11.0, 6.0, -11.0);
    glVertex3f(-11.0, 6.0, -13.0);
    glVertex3f(-11.0, -4.0, -13.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 0.0, -16.0);
    glVertex3f(-11.0, 6.0, -16.0);
    glVertex3f(-11.0, 6.0, -18.0);
    glVertex3f(-11.0, 0.0, -18.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 0.0, -19.0);
    glVertex3f(-11.0, 6.0, -19.0);
    glVertex3f(-11.0, 6.0, -21.0);
    glVertex3f(-11.0, 0.0, -21.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 7.0, -16.0);
    glVertex3f(-11.0, 10.0, -16.0);
    glVertex3f(-11.0, 10.0, -18.0);
    glVertex3f(-11.0, 7.0, -18.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 7.0, -19.0);
    glVertex3f(-11.0, 10.0, -19.0);
    glVertex3f(-11.0, 10.0, -21.0);
    glVertex3f(-11.0, 7.0, -21.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 7.0, -27.0);
    glVertex3f(-11.0, 10.0, -27.0);
    glVertex3f(-11.0, 10.0, -29.0);
    glVertex3f(-11.0, 7.0, -29.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 7.0, -30.0);
    glVertex3f(-11.0, 10.0, -30.0);
    glVertex3f(-11.0, 10.0, -32.0);
    glVertex3f(-11.0, 7.0, -32.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 0.0, -27.0);
    glVertex3f(-11.0, 6.0, -27.0);
    glVertex3f(-11.0, 6.0, -29.0);
    glVertex3f(-11.0, 0.0, -29.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-11.0, 0.0, -30.0);
    glVertex3f(-11.0, 6.0, -30.0);
    glVertex3f(-11.0, 6.0, -32.0);
    glVertex3f(-11.0, 0.0, -32.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(9.0, 0.0, -43.0);
    glVertex3f(9.0, 4.0, -43.0);
    glVertex3f(9.0, 4.0, -45.0);
    glVertex3f(9.0, 0.0, -45.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(9.0, 0.0, -46.0);
    glVertex3f(9.0, 4.0, -46.0);
    glVertex3f(9.0, 4.0, -48.0);
    glVertex3f(9.0, 0.0, -48.0);
    glEnd();

    //pintu belakang
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(9.0, -8.0, -50.0);
    glVertex3f(9.0, 4.0, -50.0);
    glVertex3f(9.0, 4.0, -54.0);
    glVertex3f(9.0, -8.0, -54.0);
    glEnd();

    //jendela dinding kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(9.0, 0.0, -56.0);
    glVertex3f(9.0, 4.0, -56.0);
    glVertex3f(9.0, 4.0, -58.0);
    glVertex3f(9.0, 0.0, -58.0);
    glEnd();

    //jendela dinding kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(14.0, 6.0, 8.0);
    glVertex3f(14.0, 8.0, 8.0);
    glVertex3f(17.0, 8.0, 8.0);
    glVertex3f(17.0, 6.0, 8.0);
    glEnd();

    //jendela dinding kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(14.0, 0.0, 8.0);
    glVertex3f(14.0, 5.0, 8.0);
    glVertex3f(17.0, 5.0, 8.0);
    glVertex3f(17.0, 0.0, 8.0);
    glEnd();

    //jendela dinding kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(18.0, 6.0, 8.0);
    glVertex3f(18.0, 8.0, 8.0);
    glVertex3f(21.0, 8.0, 8.0);
    glVertex3f(21.0, 6.0, 8.0);
    glEnd();

    //jendela dinding kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(18.0, 0.0, 8.0);
    glVertex3f(18.0, 5.0, 8.0);
    glVertex3f(21.0, 5.0, 8.0);
    glVertex3f(21.0, 0.0, 8.0);
    glEnd();
}

void teras() {
    //Teras depan
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(-10.0, 15.0, 0.0);
    glVertex3f(-10.0, 15.0, 20.0);
    glVertex3f(10.0, 15.0, 20.0);
    glVertex3f(10.0, 15.0, 0.0);
    glEnd();

    //Teras depan atas kiri
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-5.0, 14.0, 5.0);
    glVertex3f(-5.0, 15.0, 5.0);
    glVertex3f(-5.0, 15.0, 15.0);
    glVertex3f(-5.0, 14.0, 15.0);
    glEnd();

    //Teras depan atas kiri2
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(-5.0, 14.0, 0.0);
    glVertex3f(-5.0, 14.0, 20.0);
    glVertex3f(-10.0, 14.0, 20.0);
    glVertex3f(-10.0, 14.0, 0.0);
    glEnd();

    //Teras depan atas depan
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-5.0, 14.0, 15.0);
    glVertex3f(-5.0, 15.0, 15.0);
    glVertex3f(5.0, 15.0, 15.0);
    glVertex3f(5.0, 14.0, 15.0);
    glEnd();

    //Teras depan atas depan
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(-5.0, 14.0, 15.0);
    glVertex3f(-5.0, 14.0, 20.0);
    glVertex3f(5.0, 14.0, 20.0);
    glVertex3f(5.0, 14.0, 15.0);
    glEnd();

    //Teras depan atas kanan
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(5.0, 14.0, 15.0);
    glVertex3f(5.0, 15.0, 15.0);
    glVertex3f(5.0, 15.0, 5.0);
    glVertex3f(5.0, 14.0, 5.0);
    glEnd();

    //Teras depan atas kanan2
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(5.0, 14.0, 0.0);
    glVertex3f(5.0, 14.0, 20.0);
    glVertex3f(10.0, 14.0, 20.0);
    glVertex3f(10.0, 14.0, 0.0);
    glEnd();

    //Teras depan atas belakang
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-5.0, 14.0, 5.0);
    glVertex3f(-5.0, 15.0, 5.0);
    glVertex3f(5.0, 15.0, 5.0);
    glVertex3f(5.0, 14.0, 5.0);
    glEnd();

    //lantai teras
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(-10.0, -9.0, 1.0);
    glVertex3f(-10.0, -8.0, 1.0);
    glVertex3f(10.0, -8.0, 1.0);
    glVertex3f(10.0, -9.0, 1.0);
    glEnd();

    //lantai teras
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(-10.0, -9.0, 1.0);
    glVertex3f(-10.0, -9.0, 20.0);
    glVertex3f(10.0, -9.0, 20.0);
    glVertex3f(10.0, -9.0, 1.0);
    glEnd();

    //lantai teras
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(-10.0, -9.0, 20.0);
    glVertex3f(-10.0, -10.0, 20.0);
    glVertex3f(10.0, -10.0, 20.0);
    glVertex3f(10.0, -9.0, 20.0);
    glEnd();

    //tiang teras bawah kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-10.0, -10.0, 20.0);
    glVertex3f(-10.0, -6.0, 20.0);
    glVertex3f(-10.0, -6.0, 16.0);
    glVertex3f(-10.0, -10.0, 16.0);
    glEnd();

    //tiang teras bawah depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-10.0, -10.0, 20.0);
    glVertex3f(-10.0, -6.0, 20.0);
    glVertex3f(-6.0, -6.0, 20.0);
    glVertex3f(-6.0, -10.0, 20.0);
    glEnd();

    //tiang teras bawah kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-6.0, -10.0, 20.0);
    glVertex3f(-6.0, -6.0, 20.0);
    glVertex3f(-6.0, -6.0, 16.0);
    glVertex3f(-6.0, -10.0, 16.0);
    glEnd();

    //tiang teras bawah belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-6.0, -10.0, 16.0);
    glVertex3f(-6.0, -6.0, 16.0);
    glVertex3f(-10.0, -6.0, 16.0);
    glVertex3f(-10.0, -10.0, 16.0);
    glEnd();

    //tiang teras bawah atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-10.0, -6.0, 16.0);
    glVertex3f(-6.0, -6.0, 16.0);
    glVertex3f(-6.0, -6.0, 20.0);
    glVertex3f(-10.0, -6.0, 20.0);
    glEnd();

    //tiang teras kanan bawah kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(10.0, -10.0, 20.0);
    glVertex3f(10.0, -6.0, 20.0);
    glVertex3f(10.0, -6.0, 16.0);
    glVertex3f(10.0, -10.0, 16.0);
    glEnd();

    //tiang teras bawah depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(10.0, -10.0, 20.0);
    glVertex3f(10.0, -6.0, 20.0);
    glVertex3f(6.0, -6.0, 20.0);
    glVertex3f(6.0, -10.0, 20.0);
    glEnd();

    //tiang teras bawah kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(6.0, -10.0, 20.0);
    glVertex3f(6.0, -6.0, 20.0);
    glVertex3f(6.0, -6.0, 16.0);
    glVertex3f(6.0, -10.0, 16.0);
    glEnd();

    //tiang teras bawah belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(6.0, -10.0, 16.0);
    glVertex3f(6.0, -6.0, 16.0);
    glVertex3f(10.0, -6.0, 16.0);
    glVertex3f(10.0, -10.0, 16.0);
    glEnd();

    //tiang teras bawah atas
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(10.0, -6.0, 16.0);
    glVertex3f(6.0, -6.0, 16.0);
    glVertex3f(6.0, -6.0, 20.0);
    glVertex3f(10.0, -6.0, 20.0);
    glEnd();

    //tiang teras atas kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-10.0, 10.0, 20.0);
    glVertex3f(-10.0, 14.0, 20.0);
    glVertex3f(-10.0, 14.0, 16.0);
    glVertex3f(-10.0, 10.0, 16.0);
    glEnd();

    //tiang teras atas depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-10.0, 10.0, 20.0);
    glVertex3f(-10.0, 14.0, 20.0);
    glVertex3f(-6.0, 14.0, 20.0);
    glVertex3f(-6.0, 10.0, 20.0);
    glEnd();

    //tiang teras atas kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-6.0, 10.0, 20.0);
    glVertex3f(-6.0, 14.0, 20.0);
    glVertex3f(-6.0, 14.0, 16.0);
    glVertex3f(-6.0, 10.0, 16.0);
    glEnd();

    //tiang teras atas belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-6.0, 10.0, 16.0);
    glVertex3f(-6.0, 14.0, 16.0);
    glVertex3f(-10.0, 14.0, 16.0);
    glVertex3f(-10.0, 10.0, 16.0);
    glEnd();

    //tiang teras atas bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-10.0, 10.0, 16.0);
    glVertex3f(-6.0, 10.0, 16.0);
    glVertex3f(-6.0, 10.0, 20.0);
    glVertex3f(-10.0, 10, 20.0);
    glEnd();

    //tiang teras atas kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(10.0, 10.0, 20.0);
    glVertex3f(10.0, 14.0, 20.0);
    glVertex3f(10.0, 14.0, 16.0);
    glVertex3f(10.0, 10.0, 16.0);
    glEnd();

    //tiang teras atas depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(10.0, 10.0, 20.0);
    glVertex3f(10.0, 14.0, 20.0);
    glVertex3f(6.0, 14.0, 20.0);
    glVertex3f(6.0, 10.0, 20.0);
    glEnd();

    //tiang teras atas kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(6.0, 10.0, 20.0);
    glVertex3f(6.0, 14.0, 20.0);
    glVertex3f(6.0, 14.0, 16.0);
    glVertex3f(6.0, 10.0, 16.0);
    glEnd();

    //tiang teras atas belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(6.0, 10.0, 16.0);
    glVertex3f(6.0, 14.0, 16.0);
    glVertex3f(10.0, 14.0, 16.0);
    glVertex3f(10.0, 10.0, 16.0);
    glEnd();

    //tiang teras atas bawah
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(10.0, 10.0, 16.0);
    glVertex3f(6.0, 10.0, 16.0);
    glVertex3f(6.0, 10.0, 20.0);
    glVertex3f(10.0, 10, 20.0);
    glEnd();

    //tiang kanan depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(7.0, 10.0, 19.0);
    glVertex3f(7.0, -6.0, 19.0);
    glVertex3f(9.0, -6.0, 19.0);
    glVertex3f(9.0, 10.0, 19.0);
    glEnd();

    //tiang kanan kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(7.0, 10.0, 19.0);
    glVertex3f(7.0, -6.0, 19.0);
    glVertex3f(7.0, -6.0, 17.0);
    glVertex3f(7.0, 10.0, 17.0);
    glEnd();

    //tiang kanan kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(9.0, 10.0, 19.0);
    glVertex3f(9.0, -6.0, 19.0);
    glVertex3f(9.0, -6.0, 17.0);
    glVertex3f(9.0, 10.0, 17.0);
    glEnd();

    //tiang kanan belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(7.0, 10.0, 17.0);
    glVertex3f(7.0, -6.0, 17.0);
    glVertex3f(9.0, -6.0, 17.0);
    glVertex3f(9.0, 10.0, 17.0);
    glEnd();

    //tiang kiri depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(-7.0, 10.0, 19.0);
    glVertex3f(-7.0, -6.0, 19.0);
    glVertex3f(-9.0, -6.0, 19.0);
    glVertex3f(-9.0, 10.0, 19.0);
    glEnd();

    //tiang kiri kiri
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(-7.0, 10.0, 19.0);
    glVertex3f(-7.0, -6.0, 19.0);
    glVertex3f(-7.0, -6.0, 17.0);
    glVertex3f(-7.0, 10.0, 17.0);
    glEnd();

    //tiang kiri kanan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(9.0, 10.0, 19.0);
    glVertex3f(9.0, -6.0, 19.0);
    glVertex3f(9.0, -6.0, 17.0);
    glVertex3f(9.0, 10.0, 17.0);
    glEnd();

    //tiang kiri belakang
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.80588);
    glVertex3f(-7.0, 10.0, 17.0);
    glVertex3f(-7.0, -6.0, 17.0);
    glVertex3f(-9.0, -6.0, 17.0);
    glVertex3f(-9.0, 10.0, 17.0);
    glEnd();
}

void atap() {
    //plapon depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-10.0, 14.0, 20.0);
    glVertex3f(-10.0, 16.0, 20.0);
    glVertex3f(0.0, 26.0, 20.0);
    glVertex3f(0.0, 14.0, 20.0);
    glEnd();
    //plapon depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(0.0, 14.0, 20.0);
    glVertex3f(0.0, 26.0, 20.0);
    glVertex3f(10.0, 16.0, 20.0);
    glVertex3f(10.0, 14.0, 20.0);
    glEnd();
    //garis plapon
    glPushMatrix();
    glBegin(GL_LINES);
    glColor3f(0.496078, 0.262745, 0.0);
    glVertex3f(-8.0, 18.0, 20.5);
    glVertex3f(-8.0, 14.0, 20.5);
    glVertex3f(-6.0, 20.0, 20.5);
    glVertex3f(-6.0, 14.0, 20.5);
    glVertex3f(-4.0, 22.0, 20.5);
    glVertex3f(-4.0, 14.0, 20.5);
    glVertex3f(-2.0, 24.0, 20.5);
    glVertex3f(-2.0, 14.0, 20.5);
    glVertex3f(0.0, 26.0, 20.5);
    glVertex3f(0.0, 14.0, 20.5);
    glVertex3f(2.0, 24.0, 20.5);
    glVertex3f(2.0, 14.0, 20.5);
    glVertex3f(4.0, 22.0, 20.5);
    glVertex3f(4.0, 14.0, 20.5);
    glVertex3f(6.0, 20.0, 20.5);
    glVertex3f(6.0, 14.0, 20.5);
    glVertex3f(2.0, 18.0, 20.5);
    glVertex3f(2.0, 14.0, 20.5);
    glEnd();

    //atap teras
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-12.0, 14.0, 22.0);
    glVertex3f(0.0, 26.0, 22.0);
    glVertex3f(0.0, 26.0, 7.0);
    glVertex3f(-12.0, 14.0, 7.0);
    glEnd();
    //atap depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(12.0, 14.0, 22.0);
    glVertex3f(0.0, 26.0, 22.0);
    glVertex3f(0.0, 26.0, 7.0);
    glVertex3f(12.0, 14.0, 7.0);
    glEnd();

    //atap depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(-12.0, 14.0, 7.0);
    glVertex3f(10.0, 32.0, 7.0);
    glVertex3f(10.0, 32.0, -40.0);
    glVertex3f(-12.0, 14.0, -40.0);
    glEnd();
    //atap depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(37.0, 14.0, 7.0);
    glVertex3f(10.0, 32.0, 7.0);
    glVertex3f(10.0, 32.0, -40.0);
    glVertex3f(37.0, 14.0, -40.0);
    glEnd();

    //plapon depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(0.0, 13.0, 7.0);
    glVertex3f(0.0, 26.0, 7.0);
    glVertex3f(10.0, 32.0, 7.0);
    glVertex3f(10.0, 13.0, 7.0);
    glEnd();
    //plapon depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(10.0, 13.0, 7.0);
    glVertex3f(10.0, 32.0, 7.0);
    glVertex3f(27.0, 20.0, 7.0);
    glVertex3f(27.0, 13.0, 7.0);
    glEnd();

    //plapon depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(27.0, 20.0, 7.0);
    glVertex3f(27.0, 13.0, 7.0);
    glVertex3f(27.0, 13.0, -12.0);
    glVertex3f(27.0, 20.0, -12.0);
    glEnd();
    //plapon depan
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(27.0, 20.0, -12.0);
    glVertex3f(27.0, 13.0, -12.0);
    glVertex3f(35.0, 13.0, -12.0);
    glEnd();

    //atap depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(8.5, 14.0, -40.0);
    glVertex3f(22.5, 27.5, -40.0);
    glVertex3f(22.5, 27.5, -60.0);
    glVertex3f(8.5, 14.0, -60.0);
    glEnd();
    //atap depan
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(37.0, 14.0, -40.0);
    glVertex3f(22.5, 27.5, -40.0);
    glVertex3f(22.5, 27.5, -60.0);
    glVertex3f(37.0, 14.0, -60.0);
    glEnd();

    //plapon belakang
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(35.0, 15.0, -40.0);
    glVertex3f(10.5, 32.0, -40.0);
    glVertex3f(-11.0, 15.0, -40.0);
    glEnd();

    //plapon belakang
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.994313, 0.90588);
    glVertex3f(10.0, 15.0, -60.0);
    glVertex3f(22.5, 27.0, -60.0);
    glVertex3f(35.0, 15.0, -60.0);
    glEnd();
    
}

void tampil(void)
{
    if (is_depth) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }
    else {
        glClear(GL_COLOR_BUFFER_BIT);
    }
    bangunannya();
    furniture();
    halaman();
    jendelapintu();
    teras();
    atap();
   
   

    /*//atap depan kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(30.0, 13.0, 8.0);
    glVertex3f(10.0, 28.0, 8.0);
    glVertex3f(10.0, 30.0, 8.0);
    glVertex3f(30.0, 15.0, 8.0);
    glEnd(); 

    //atap samping kanan
    glBegin(GL_QUADS);
    glColor3f(0.5450980, 0.0, 0.0);
    glVertex3f(30.0, 13.0, 8.0);
    glVertex3f(10.0, 28.0, 8.0);
    glVertex3f(10.0, 30.0, -41.0);
    glVertex3f(30.0, 15.0, -41.0);
    glEnd();

    //atap belakang kanan
    glBegin(GL_QUADS);
    glColor3f(0.5450980, 0.0, 0.0);
    glVertex3f(37.0, 16.0, -41.0);
    glVertex3f(20.0, 22.0, -41.0);
    glVertex3f(20.0, 23.0, -61.0);
    glVertex3f(37.0, 16.0, -61.0);
    glEnd();

    //atap depan kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-13.0, 13.0, 8.0);
    glVertex3f(10.0, 28.0, 8.0);
    glVertex3f(10.0, 30.0, 8.0);
    glVertex3f(-13.0, 15.0, 8.0);
    glEnd();
    
    //atap samping kiri
    glBegin(GL_QUADS);
    glColor3f(0.5450980, 0.0, 0.0);
    glVertex3f(-13.0, 13.0, 8.0);
    glVertex3f(10.0, 28.0, 8.0);
    glVertex3f(10.0, 30.0, -41.0);
    glVertex3f(-13.0, 15.0, -41.0);
    glEnd();

    //atap belakang kiri
    glBegin(GL_QUADS);
    glColor3f(0.5450980, 0.0, 0.0);
    glVertex3f(6.0, 13.0, -41.0);
    glVertex3f(20.0, 22.0, -41.0);
    glVertex3f(20.0, 23.0, -61.0);
    glVertex3f(6.0, 14.0, -61.0);
    glEnd();
    */
    

    

    

   /* //kanan
    glBegin(GL_QUADS);
    glColor3f(0.396078, 0.262745, 0.0);
    glVertex3f(27.0, -10.0, 7.0);
    glVertex3f(27.0, 15.0, 7.0);
    glVertex3f(10.0, 15.0, 7.0);
    glVertex3f(10.0, -10.0, 7.0);
    glEnd();
    */

    glPopMatrix();
    glutSwapBuffers();


}

void keyboard(unsigned char key, int x, int y) {
    /// > = putar kanan
    /// < = putar kiri
    /// a = rotasi kiri
    /// s = rotasi kanan
    /// + = maju
    /// - = mundur
    /// 2 = geser kanan
    /// 1 = geser kiri
    /// 3 = geser atas
    /// 4 = geser bawah
    /// 5 = putar bawah
    /// 6 = putar atas
    /// 0 = transparan

    switch (key)
    {
    case '+':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case '-':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case '1':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    case '2':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case '3':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '4':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '5':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '>':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '<':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case 'a':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case 's':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '0':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;

void identity() {
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}

void idle() {
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y) {

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y) {
    identity();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }

}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
