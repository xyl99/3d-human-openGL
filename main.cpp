#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <Windows.h>
#include <GL\glut.h>

//untuk glu
GLUquadric *myQuad;
//def var posisi obj
int skalaX = 0, skalaY = 0, z = -30;
int walkstate = 0;

int Kepala = 0;
int Leher = 270;
int Torso = -90;
int Perut = 0;
int Pinggul = -90;
int PanggulKanan = 0;
int PanggulKiri = 0;

int BahuKanan = 0;
int BahuKiri = 0;
int TanganAL = 90;
int TanganAR = 90;
int SikutKanan = 0;
int SikutKiri = 0;
int TanganBL = 0;
int TanganBR = 0;
int TanganTL = 0;
int TanganTR = 0;

int PahaAL = 90;
int PahaAR = 90;
int LututKanan = 0;
int LututKiri = 0;
int BetisAL = 0;
int BetisAR = 0;
int TumitKanan = 0;
int TumitKiri = 0;
int KakiTL = 0;
int KakiTR = 0;

void kepala()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(1, 100, 100);
	glPopMatrix();
}

void leher()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) Leher, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.45, 0.4, 0.5, 100, 100);
	glPopMatrix();
}

void torso()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) Torso, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.8, 1.1, 1.8, 100, 100);
	glPopMatrix();
}

void perut()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.7, 100, 100);
	glPopMatrix();
}

void pinggul()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) Pinggul, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 1, 0.8, 1.3, 100, 100);
	glPopMatrix();
}

void panggulKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void panggulKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void sendi()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void bahuKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void bahuKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.4, 100, 100);
	glPopMatrix();
}

void tanganAL()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) TanganAL, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.35, 0.3, 1.8, 100, 100);
	glPopMatrix();
}

void tanganAR()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) TanganAR, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.35, 0.3, 1.8, 100, 100);
	glPopMatrix();
}

void sikut()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void sikutKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void sikutKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void tanganBL()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) TanganBL, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.3, 0.25, 1.5, 100, 100);
	glPopMatrix();
}

void tanganBR()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) TanganBR, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.3, 0.25, 1.5, 100, 100);
	glPopMatrix();
}

void tanganTR()
{
    glPushMatrix();
	myQuad = gluNewQuadric();
	glColor3f(0.545, 0.271, 0.075);
	glScalef(1, 1.5, 1);
	//glRotatef(90, 1.0, 0.0, 0.0);
	gluSphere(myQuad, 0.3, 100, 100);
	glPopMatrix();
}

void tanganTL()
{
    glPushMatrix();
	myQuad = gluNewQuadric();
	glColor3f(0.545, 0.271, 0.075);
	//glRotatef(90.0, 1.0, 0.0, 0.0);
	glScalef(1, 1.5, 1);
	gluSphere(myQuad, 0.3, 100, 100);
	glPopMatrix();
}

void pahaAL()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) PahaAL, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.44, 0.33, 2, 100, 100);
	glPopMatrix();
}

void pahaAR()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) PahaAR, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.44, 0.33, 2, 100, 100);
	glPopMatrix();
}

void lututKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void lututKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void betisAL()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) BetisAL, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.35, 0.3, 1.8, 100, 100);
	glPopMatrix();
}

void betisAR()
{
    glPushMatrix();
	glColor3f(0.545, 0.271, 0.075);
	myQuad = gluNewQuadric();
	//glRotatef((GLfloat) BetisAR, 1.0, 0.0, 0.0);
	gluCylinder(myQuad, 0.35, 0.3, 1.8, 100, 100);
	glPopMatrix();
}

void tumitKanan()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void tumitKiri()
{
    glPushMatrix();
    glColor3f(0.545, 0.271, 0.075);
	glutSolidSphere(0.3, 100, 100);
	glPopMatrix();
}

void kakiTL()
{
    glPushMatrix();
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) KakiTL, 1.0, 0.0, 0.0);
	glColor3f(0.545, 0.271, 0.075);
	glScalef(1.3, 2, 1);
	gluSphere(myQuad, 0.3, 100, 100);
	glPopMatrix();
}

void kakiTR()
{
    glPushMatrix();
	myQuad = gluNewQuadric();
	glRotatef((GLfloat) KakiTR, 1.0, 0.0, 0.0);
	glColor3f(0.545, 0.271, 0.075);
	glScalef(1.3, 2, 1);
	gluSphere(myQuad, 0.3, 100, 100);
	glPopMatrix();
}

void renderScene()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 1, 1);
	glLoadIdentity();
	glTranslated(0, 0, z);
	glRotatef(0, 0, 0, 0);

	glPushMatrix();

	glPushMatrix(); //badan
	glTranslatef(0.0, 6.8, 0.0);
	kepala();
	glTranslatef(0.0, -1.5, 0.0);
	leher();
	glTranslatef(0.0, -1.8, 0.0);
	torso();
	glTranslatef(0.0, 0.0, -0.1);
	perut();
	glTranslatef(0.0, -1.4, 0.0);
	pinggul();
	glTranslatef(0.5, -0.3, 0.0);
	panggulKanan();
	glTranslatef(-1.0, 0.0, 0.0);
	panggulKiri();
	glPopMatrix();

	glPushMatrix(); //tangan kanan
	glTranslatef(1.4, 4.95, 0.0);
	bahuKanan();
	glTranslatef(0.0, 0.0, 0.0);
	glRotatef((GLfloat) TanganAR, 1.0, 0.0, 0.0);
	tanganAR();
	glTranslatef(0.0, 0.0, 1.95);
	sikutKanan();
	glTranslatef(0.0, 0.0, 0.15);
	glRotatef((GLfloat) TanganBR, 1.0, 0.0, 0.0);
	tanganBR();
	glTranslatef(0.0, 0.0, 1.85);
	glRotatef(90, 1.0, 0.0, 0.0);
	tanganTR();
    glPopMatrix();

    glPushMatrix(); //tangan kiri
    glTranslatef(-1.4, 4.95, 0.0);
	bahuKiri();
	glTranslatef(0.0, 0.0, 0.0);
	glRotatef((GLfloat) TanganAL, 1.0, 0.0, 0.0);
	tanganAL();
	glTranslatef(0.0, 0.0, 1.95);
	sikutKiri();
	glTranslatef(0.0, 0.0, 0.15);
	glRotatef((GLfloat) TanganBL, 1.0, 0.0, 0.0);
	tanganBL();
	glTranslatef(0.0, 0.0, 1.85);
	glRotatef(90, 1.0, 0.0, 0.0);
	tanganTL();
    glPopMatrix();

    glPushMatrix(); //kaki kanan
    glTranslatef(0.5, 1.5, 0.0);
    glRotatef((GLfloat) PahaAR, 1.0, 0.0, 0.0);
    pahaAR();
    glTranslatef(0.0, 0.0, 2.1);
    lututKanan();
    glTranslatef(0.0, 0.0, 0.1);
    glRotatef((GLfloat) BetisAR, 1.0, 0.0, 0.0);
    betisAR();
    glTranslatef(0.0, 0.0, 1.95);
    tumitKanan();
    glTranslatef(0.0, 0.5, 0.0);
    kakiTR();
    glPopMatrix();

    glPushMatrix(); //kaki kiri
    glTranslatef(-0.5, 1.5, 0.0);
    glRotatef((GLfloat) PahaAL, 1.0, 0.0, 0.0);
    pahaAL();
    glTranslatef(0.0, 0.0, 2.1);
    lututKiri();
    glTranslatef(0.0, 0.0, 0.1);
    glRotatef((GLfloat) BetisAL, 1.0, 0.0, 0.0);
    betisAL();
    glTranslatef(0.0, 0.0, 1.95);
    tumitKiri();
    glTranslatef(0.0, 0.5, 0.0);
    kakiTL();
    glPopMatrix();

	glPopMatrix();
    glFlush();
	glutSwapBuffers();
}

int state = 1;
void jalan()
{
    if (state < 15)
    {
        TanganAR = (TanganAR + 5) % 360;
        TanganAL = (TanganAL - 5) % 360;
        PahaAL = (PahaAL + 5) % 360;
        PahaAR = (PahaAR - 5) %360;
        glutPostRedisplay();
        state++;
    }
    else if (state >= 15 && state < 30)
    {
        TanganAR = (TanganAR - 5) % 360;
        TanganAL = (TanganAL + 5) % 360;
        PahaAL = (PahaAL - 5) % 360;
        PahaAR = (PahaAR + 5) %360;
        glutPostRedisplay();
        state++;
    }
    else if (state >= 30 && state < 45)
    {
        TanganAR = (TanganAR - 5) % 360;
        TanganAL = (TanganAL + 5) % 360;
        PahaAL = (PahaAL - 5) % 360;
        PahaAR = (PahaAR + 5) %360;
        glutPostRedisplay();
        state++;
    }
    else if (state >= 45 && state < 60)
    {
        TanganAR = (TanganAR + 5) % 360;
        TanganAL = (TanganAL - 5) % 360;
        PahaAL = (PahaAL + 5) % 360;
        PahaAR = (PahaAR - 5) %360;
        glutPostRedisplay();
        state++;
    }
    else
        state = 0;
}

void keyboard (unsigned char key, int x, int y)
{
    switch (key) {
        case 'u': //lengan atas kanan
            TanganAR = (TanganAR + 5) % 360;
            glutPostRedisplay();
            break;
        case 'i': //lengan atas kanan
            TanganAR = (TanganAR - 5) % 360;
            glutPostRedisplay();
            break;
        case 'o'://lengan bawah kanan
            TanganBR = (TanganBR + 5) % 360;
            glutPostRedisplay();
            break;
        case 'p': //lengan bawah kanan
            TanganBR = (TanganBR - 5) % 360;
            glutPostRedisplay();
            break;
        case 'h': //paha kanan
            PahaAR = (PahaAR + 5) % 360;
            glutPostRedisplay();
            break;
        case 'j': //paha kanan
            PahaAR = (PahaAR - 5) % 360;
            glutPostRedisplay();
            break;
        case 'k': //betis kanan
            BetisAR = (BetisAR + 5) % 360;
            glutPostRedisplay();
            break;
        case 'l': //betis kanan
            BetisAR = (BetisAR - 5) % 360;
            glutPostRedisplay();
            break;

        case 'q': //lengan atas kanan
            TanganAL = (TanganAL + 5) % 360;
            glutPostRedisplay();
            break;
        case 'w': //lengan atas kanan
            TanganAL = (TanganAL - 5) % 360;
            glutPostRedisplay();
            break;
        case 'e'://lengan bawah kanan
            TanganBL = (TanganBL + 5) % 360;
            glutPostRedisplay();
            break;
        case 'r': //lengan bawah kanan
            TanganBL = (TanganBL - 5) % 360;
            glutPostRedisplay();
            break;
        case 'a': //paha kanan
            PahaAL = (PahaAL + 5) % 360;
            glutPostRedisplay();
            break;
        case 's': //paha kanan
            PahaAL = (PahaAL - 5) % 360;
            glutPostRedisplay();
            break;
        case 'd': //betis kanan
            BetisAL = (BetisAL + 5) % 360;
            glutPostRedisplay();
            break;
        case 'f': //betis kanan
            BetisAL = (BetisAL - 5) % 360;
            glutPostRedisplay();
            break;
        case 'b': //walk
            walkstate++;
            if(walkstate % 2 == 0)
                glutIdleFunc(jalan);
            else
                glutIdleFunc(NULL);
            break;
        default:
            break;
    }
}

//def var ukuran layar
int w = 1200, h = 600;

void init()
{
	//inisialisasi
	glClearColor(0, 0, 0, 0); //source untuk mengubah warna RGBA (Red, Green, Blue, Alfa)
	//untuk lightning
	GLfloat modelambient[] = { 0, 0.2, 0.2, 0.2 };
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glColorMaterial(GL_FRONT_AND_BACK, GL_EMISSION);
	glEnable(GL_COLOR_MATERIAL);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, modelambient);

	//proyeksi ke layarr
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (GLdouble)w / (GLdouble)h, 1.0, 300.0);
	glMatrixMode(GL_MODELVIEW);



}

int main(int argc, char ** argv)
{
	// inisialisasi GLUT
	glutInit(&argc, argv);
	// Output pada console nama anggota kelompok
	printf("Anggota Kelompok : \n\n");
	printf("Iin Firlyana\t\t 4616010013\n");
	printf("Mohammad Yasin\t\t 4616010045\n");
	printf("M. Rizky Pradana\t 4616010025\n");
	printf("Shiddiq Asy Syuhada\t 4616010017");
	// Set display mode
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
	// Set Posisi window saat program dijalankan
	glutInitWindowPosition(150, 100);
	//Resolusi Jendela Program
	glutInitWindowSize(1200, 600);
	//Memberikan Title pada Window
	glutCreateWindow("Projek UAS ORANG GERAK");
	// Menjalankan Prosedur Inisialisasi
	init();
	// Menjalankan fungsi untuk menampilkan visual pada program
	glutDisplayFunc(renderScene);

	glutKeyboardFunc(keyboard);
	init();
	// Menjalankan program, tidak langsung exit
	glutMainLoop();
}
