/*
#include<GL/gl.h>
#include<iostream>
#include<GL/glu.h>
#include<GL/glut.h>

using namespace std;

void cetak_hallo();

int main (){
    cetak_hallo();
    cout<<"Kelas TI 2B"<<endl;
}

void cetak_hallo (){
    cout <<"hallo guys"<<endl;

}
*/

#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>


//deklarasi fungsi
void display();
void init();
void reshape (int,int);
void layang();


int main (int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200, 100);
    glutInitWindowSize (1000, 600);
    glutCreateWindow ("Jendela 1");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();

    glutMainLoop();

}

void init(){
    glClearColor(0.0, 0.0, 0.3, 0.0);
}
void display(){
    //reset
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    //glPointSize(10);
    //glBegin(GL_POINTS);
    //glVertex2f(5, 5);
    //glEnd ();


//pohon1
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.0);
    glVertex2f(-260,160);
    glVertex2f(-300,20);
    glVertex2f(-220,20);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.0);
    glVertex2f(-260,220);
    glVertex2f(-300,60);
    glVertex2f(-220,60);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-270.0, 20.0);
    glVertex2f(-270.0, -100.0);
    glVertex2f(-250.0, -100.0);
    glVertex2f(-250.0, 20.0);
    glEnd();

//pohon2

    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.0);
    glVertex2f(-160,160);
    glVertex2f(-200,20);
    glVertex2f(-120,20);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.0);
    glVertex2f(-160,220);
    glVertex2f(-200,60);
    glVertex2f(-120,60);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-170.0, 20.0);
    glVertex2f(-170.0, -100.0);
    glVertex2f(-150.0, -100.0);
    glVertex2f(-150.0, 20.0);
    glEnd();

//pohon

    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.0);
    glVertex2f(-60,160);
    glVertex2f(-100,20);
    glVertex2f(-20,20);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.0);
    glVertex2f(-60,220);
    glVertex2f(-100,60);
    glVertex2f(-20,60);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-70.0, 20.0);
    glVertex2f(-70.0, -100.0);
    glVertex2f(-50.0, -100.0);
    glVertex2f(-50.0, 20.0);
    glEnd();
     //gedung1
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(120.0, 170.0);
    glVertex2f(120.0, -100.0);
    glVertex2f(200.0, -100.0);
    glVertex2f(200.0, 170.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.,1.0);
    glVertex2f(160.0, 150.0);
    glVertex2f(160.0, 100.0);
    glVertex2f(185.0, 100.0);
    glVertex2f(185.0, 150.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(130.0, 150.0);
    glVertex2f(130.0, 100.0);
    glVertex2f(155.0, 100.0);
    glVertex2f(155.0, 150.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(160.0, 80.0);
    glVertex2f(160.0, 30.0);
    glVertex2f(185.0, 30.0);
    glVertex2f(185.0, 80.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(130.0, 80.0);
    glVertex2f(130.0, 30.0);
    glVertex2f(155.0, 30.0);
    glVertex2f(155.0, 80.0);
    glEnd();
//gedung2
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(200.0, 200.0);
    glVertex2f(200.0, -100.0);
    glVertex2f(300.0, -100.0);
    glVertex2f(300.0, 200.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(220.0, 170.0);
    glVertex2f(220.0, 110.0);
    glVertex2f(250.0, 110.0);
    glVertex2f(250.0, 170.0);
    glEnd();

      glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(260.0, 170.0);
    glVertex2f(260.0, 110.0);
    glVertex2f(290.0, 110.0);
    glVertex2f(290.0, 170.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(260.0, 100.0);
    glVertex2f(260.0, 40.0);
    glVertex2f(290.0, 40.0);
    glVertex2f(290.0, 100.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(220.0, 100.0);
    glVertex2f(220.0, 40.0);
    glVertex2f(250.0, 40.0);
    glVertex2f(250.0, 100.0);
    glEnd();
//gedung3

glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(20.0, 100.0);
    glVertex2f(20.0,-100.0);
    glVertex2f(120.0,-100.0);
    glVertex2f(120.0, 170.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.,1.0);
    glVertex2f(30.0, 80.0);
    glVertex2f(30.0, 50.0);
    glVertex2f(85.0, 50.0);
    glVertex2f(85.0, 120.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(1.0,1.,1.0);
    glVertex2f(30.0, 40.0);
    glVertex2f(30.0, 10.0);
    glVertex2f(85.0, 10.0);
    glVertex2f(85.0, 40.0);
    glEnd();


//layangan
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2d(-100,250);
    glVertex2d(-120,230);
    glVertex2d(-100,170);
    glVertex2d(-80, 230);
    glEnd();
    //layangan2
    glBegin(GL_POLYGON);
    glColor3f(1,0,4);
    glVertex2d(-200,250);
    glVertex2d(-220,230);
    glVertex2d(-200,170);
    glVertex2d(-180,230);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.6,0.3);
    glVertex2f(-350.0, -100.0);
    glVertex2f(-350.0, -350.0);
    glVertex2f(350.0, -350.0);
    glVertex2f(350.0, -100.0);
    glEnd();

//tanah
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.2,0);
    glVertex2f(-350.0, -100.0);
    glVertex2f(-350.0, -350.0);
    glVertex2f(350.0, -350.0);
    glVertex2f(350.0, -100.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-100,170);
    glVertex2f(-150,-150);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-200,170);
    glVertex2f(-250,-150);
    glEnd();
    glFlush();
}

void reshape (int w, int h){

    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi proyeksi
    glLoadIdentity();   //reset transformasi misalnya rotasi pada display
    gluOrtho2D(-300, 300, -300, 300);   //setting spesifikasi proyeksi yang diinginkan
    glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi model view

}

