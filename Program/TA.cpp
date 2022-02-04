#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>


//Mendeklarasikan
const double PI = 3.14 ; //NILAI PHI

float i, radius, jumlah_titik, x_tengah, y_tengah; 
GLfloat xRotated, yRotated, zRotated; // deklarasi sumbu rotasi x,y,z


void bentuk(void) { //menampilkan

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0, 1.0, 1.0);
 
glLineWidth(4.0f);

glLoadIdentity(); //definisi objek

glTranslatef(0.0,0.0,-2.0); //translasi

// Menentukan Bentuk Rotasi
//glRotatef(xRotated,1.0,0.0,0.0);
//glRotatef(yRotated,0.0,1.0,0.0);
glRotatef(zRotated,0.0,0.0,1.0);



//PROSES PEMBUATAN LINGKARAN1 (WARNA)

glBegin(GL_POLYGON);

glColor3f(0.0,0.5,1.0);

radius=25; //ukuran lingkaran

jumlah_titik=40;

x_tengah=0;

y_tengah=0;

//proses pembuatan lingkaran

for(i=0; i<=360; i++) {

float sudut=i*(2*PI/jumlah_titik);

float x=x_tengah+radius*cos(sudut);

float y=y_tengah+radius*sin(sudut);

glVertex2f(x/100, y/100);

}

glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan


// PROSES PEMBUATAN LINGKARAN2 LUAR HITAM

glColor3f(1.0,1.0,1.0);
 
glBegin(GL_LINE_LOOP);

radius=30;

jumlah_titik=40;

x_tengah=0;

y_tengah=0;


//proses pembuatan lingkaran

for(i=0; i<=360; i++) {

float sudut=i*(2*PI/jumlah_titik);

float x=x_tengah+radius*cos(sudut);

float y=y_tengah+radius*sin(sudut);

glVertex2f(x/100, y/100);

}

glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan





//PROSES PEMBUATAN LINGKARAN SEDANG ATAS KANAN
glColor3f(1.0,1.0,0.0); //WARNA KUNING

glBegin(GL_LINE_LOOP);

radius=3;

jumlah_titik=40;

x_tengah=18;

y_tengah=58;


//proses pembuatan lingkaran sedang

for(i=0; i<=360; i++) {

float sudut=i*(2*PI/jumlah_titik);
 

float x=x_tengah+radius*cos(sudut);

float y=y_tengah+radius*sin(sudut);

glVertex2f(x/100, y/100);

}

glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan


//PROSES PEMBUATAN LINGKARAN ATAS KIRI KECIL
glColor3f(1.0,1.0,0.0); //WARNA KUNING

glBegin(GL_LINE_LOOP);

radius=1.5;

jumlah_titik=40;

x_tengah=-18;

y_tengah=58;


//proses pembuatan lingkaran

for(i=0; i<=360; i++) {

float sudut=i*(2*PI/jumlah_titik);

float x=x_tengah+radius*cos(sudut);

float y=y_tengah+radius*sin(sudut);

glVertex2f(x/100, y/100);

}

glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan




// PROSES PEMBUATAN KOTAK1 LUAR BESAR

glBegin(GL_LINES); 
glColor3f(0.0,0.5,1.0);

glVertex3f(-0.4,-0.6,0.0); //garis kiri
glVertex3f(-0.4,0.4,0.0);

glVertex3f(0.4,-0.6,0.0); //garis kanan
glVertex3f(0.4,0.4,0.0);

glVertex3f(-0.4,-0.6,0.0); //garis bawah
glVertex3f(0.4,-0.6,0.0);

glVertex3f(-0.4,0.4,0.0); //garis atas
glVertex3f(0.4,0.4,0.0);

glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan





// PROSES PEMBUATAN KOTAK MIRING TENGAH BERWARNA

glBegin(GL_POLYGON); 
glColor3f(1.0,0.0,0.0); //MERAH

glVertex3f(-0.4,0.4,0.0); //garis kiri
//glColor3f(0.0,0.0,0.0); //BIRU KEMERAHAN
glVertex3f(-0.3,0.5,0.0);
 
glVertex3f(0.4,0.4,0.0); //garis kanan
glVertex3f(0.3,0.5,0.0);

glVertex3f(-0.3,0.5,0.0); //garis atas
glVertex3f(0.3,0.5,0.0);

glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan




//PROSES PEMBUATAN KOTAK3 ATAS

glBegin(GL_LINES); 
glColor3f(0.0f,0.0f,1.0f);


glVertex3f(-0.3,0.5,0.0); //garis kiri
glVertex3f(-0.3,0.65,0.0);

glVertex3f(0.3,0.5,0.0); //garis kanan
glVertex3f(0.3,0.65,0.0);

glVertex3f(-0.3,0.65,0.0); //garis atas
glVertex3f(0.3,0.65,0.0);

glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan


// PROSES PEMBUATAN KOTAK ATAS TENGAH BERWARNA

glBegin(GL_POLYGON); 
glColor3f(1.0,0.0,0.0); //MERAH


glVertex3f(-0.1,0.55,0.0); //garis kiri
glColor3f(0.5,0.0,1.0); //BIRU KEMERAHAN
glVertex3f(-0.1,0.6,0.0);

glVertex3f(0.1,0.55,0.0); //garis kanan
glVertex3f(0.1,0.6,0.0);

glVertex3f(-0.1,0.55,0.0); //garis bawah
glVertex3f(0.1,0.55,0.0);

glVertex3f(-0.1,0.6,0.0); //garis atas
glVertex3f(0.1,0.6,0.0);

glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan



// PROSES PEMBUATAN KOTAK5 POJOK BAWAH

glBegin(GL_POLYGON);
glColor3f(0.5,0.5,0.5);


glVertex3f(-0.35,-0.55,0.0); //garis kiri
glVertex3f(-0.35,-0.45,0.0);

glVertex3f(-0.2,-0.55,0.0); //garis kanan
glVertex3f(-0.2,-0.45,0.0);

glVertex3f(-0.35,-0.55,0.0); //garis bawah
glVertex3f(-0.2,-0.55,0.0);
 
glVertex3f(-0.35,-0.45,0.0); //garis atas
glVertex3f(-0.2,-0.45,0.0);


glEnd();
glFlush();
glutSwapBuffers(); //fungsi perpindahan

}

void Reshape(int x,int y) //fungsi

{
	
//PERINTAH PERSPEKTIF 3D

if (y==0 || x==0) return;

glMatrixMode(GL_PROJECTION); //fungsi mode proyeksi

glLoadIdentity();

gluPerspective(60.0,(GLdouble)x/(GLdouble)y,0.5,20.0);

glMatrixMode(GL_MODELVIEW); //mengatur model display objek

}

void idle(void)

{
	
// ROTASI

xRotated +=0.4; //mengatur kecepatan rotasi bergerak sumbu x

yRotated +=0.7; //mengatur kecepatan rotasi bergerak sumbu y

zRotated +=0.5; //mengatur kecepatan rotasi bergerak sumbu z

bentuk(); //menampilkan gerakan rotasi

}

int main( int argc, char* argv[] ) {
	
// Inisialisasi GLUT
glutInit(&argc, argv);

// Membuat kanvas dengan dukungan warna RGBA.
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
 
 // Membuat jendela dengan ukuran 800x800 pixel
glutInitWindowSize(800,800);

// Membuat jendela dengan judul "Washing Machine"
glutCreateWindow("Washing Machine");

// Set warna background (R, G, B, A)
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

// Memanggil fungsi untuk membuat gambar
glutDisplayFunc(bentuk);
glutReshapeFunc(Reshape);
glutIdleFunc(idle);

// Memulai "Windows Message Pump" untuk menampilkan jendela
glutMainLoop();
return 0;

}

