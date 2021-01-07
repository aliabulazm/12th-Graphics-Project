
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include "RGBpixmap.cpp"

float anglex=0,angley=0,sc=.5;
RGBpixmap pix[15];

void top();
void door();
void wall();
void road();

void floor(){

    glColor3d(1,1,1);
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,3);
    glEnable(GL_TEXTURE_2D);

    glBegin(GL_QUADS);
    //glColor3d(1,0,0);
    glVertex3d(.9,0,-.9);
    glVertex3d(-.9,0,-.9);
    glVertex3d(-.9,0,.9);
    glVertex3d(.9,0,.9);
    glEnd();


    glPopMatrix();

    //glDisable(GL_TEXTURE_2D);
    glColor3d(1,1,1);
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,2);
    glEnable(GL_TEXTURE_2D);


    glBegin(GL_QUADS);
    //glColor3d(1,0,1);
    glVertex3d(.9,-.1,-.9);
    glVertex3d(-.9,-.1,-.9);
    glVertex3d(-.9,-.1,.9);
    glVertex3d(.9,-.1,.9);
    glEnd();



    glBegin(GL_QUADS);
    glVertex3d(.9,-.1,-.9);
    glVertex3d(-.9,-.1,-.9);
    glVertex3d(-.9,-.1,.9);
    glVertex3d(.9,-.1,.9);
    glEnd();

    //glColor3d(0,0,1);
    glBegin(GL_QUADS);
    glVertex3d(.9,0,-.9);
    glVertex3d(-.9,0,-.9);
    glVertex3d(-.9,-.1,-.9);
    glVertex3d(.9,-.1,-.9);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3d(-.9,0,-.9);
    glVertex3d(-.9,-.1,-.9);
    glVertex3d(-.9,-.1,.9);
    glVertex3d(-.9,0,.9);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3d(-.9,0,.9);
    glVertex3d(-.9,-.1,.9);
    glVertex3d(.9,-.1,.9);
    glVertex3d(.9,0,.9);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3d(.9,0,.9);
    glVertex3d(.9,-.1,.9);
    glVertex3d(.9,-.1,-.9);
    glVertex3d(.9,0,-.9);
    glEnd();

    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}
void house(){


    glColor3d(.5,.5,.8);


    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,4);
    glEnable(GL_TEXTURE_2D);

    // wall
    glBegin(GL_QUADS);
    glVertex3d(-.3,0,.2);
    glVertex3d(.3,0,.2);
    glVertex3d(.3,.5,.2);
    glVertex3d(-.3,.5,.2);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3d(.3,0,-.2);
    glVertex3d(.3,0,.2);
    glVertex3d(.3,.5,.2);
    glVertex3d(.3,.5,-.2);
    glEnd();



    //roof

    glBegin(GL_QUADS);
    glVertex3d(-.3,0,-.2);
    glVertex3d(.3,0,-.2);
    glVertex3d(.3,0.5,-.2);
    glVertex3d(-.3,0.5,-.2);
    glEnd();


    glBegin(GL_QUADS);
    glVertex3d(-.3,0,-.2);
    glVertex3d(-.3,0,.2);
    glVertex3d(-.3,0.5,.2);
    glVertex3d(-.3,0.5,-.2);
    glEnd();


    glBegin(GL_TRIANGLES);
    glVertex3d(.3,.5,.2);
    glVertex3d(.3,.5,-.2);
    glVertex3d(.3,.7,0);

    glVertex3d(-.3,.5,.2);
    glVertex3d(-.3,.5,-.2);
    glVertex3d(-.3,.7,0);

    glEnd();

    glPopMatrix();
    glDisable(GL_TEXTURE_2D);





    door();

    top();
}
void door(){
    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,6);
    glEnable(GL_TEXTURE_2D);
    // door
    glColor3d(1,1,1);
    glBegin(GL_QUADS);
    glVertex3d(-.08,0,.201);
    glVertex3d(.08,0,.201);
    glVertex3d(.08,.3,.201);
    glVertex3d(-.08,.3,.201);
    glEnd();

    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}
void top(){

    glColor3d(1,1,0);

    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,5);
    glEnable(GL_TEXTURE_2D);

    glBegin(GL_QUADS);
    glVertex3d(-.3,0.5,.2);
    glVertex3d(.3,0.5,.2);
    glVertex3d(.3,0.7,0);
    glVertex3d(-.3,0.7,0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3d(-.3,.5,-.2);
    glVertex3d(.3,0.5,-.2);
    glVertex3d(.3,0.7,0);
    glVertex3d(-.3,0.7,0);
    glEnd();




    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}

void wall(){

    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,7);
    glEnable(GL_TEXTURE_2D);

    // front wall

    glBegin(GL_QUADS);
    glVertex3d(-.9,0,.9);
    glVertex3d(-.12,0,.9);
    glVertex3d(-.12,.2,.9);
    glVertex3d(-.9,.2,.9);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3d(.12,0,.9);
    glVertex3d(.9,0,.9);
    glVertex3d(.9,.2,.9);
    glVertex3d(.12,.2,.9);
    glEnd();

    // right wall

    glBegin(GL_QUADS);
    glVertex3d(.9,0,.9);
    glVertex3d(.9,0,-.9);
    glVertex3d(.9,0.2,-.9);
    glVertex3d(.9,0.2,.9);
    glEnd();


    // back wall

    glBegin(GL_QUADS);
    glVertex3d(-.9,0,-.9);
    glVertex3d(.9,0,-.9);
    glVertex3d(.9,0.2,-.9);
    glVertex3d(-.9,0.2,-.9);
    glEnd();

    // left wall

    glBegin(GL_QUADS);
    glVertex3d(-.9,0,-.9);
    glVertex3d(-.9,0,.9);
    glVertex3d(-.9,0.2,.9);
    glVertex3d(-.9,0.2,-.9);
    glEnd();

    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

}

void road(){

    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D,7);
    glEnable(GL_TEXTURE_2D);
    glColor3d(.5,.5,.5);
    glBegin(GL_QUADS);
    glVertex3d(-.12,0,.9);
    glVertex3d(.12,0,.9);
    glVertex3d(.12,0,.2);
    glVertex3d(-.12,0,.2);
    glEnd();


    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}
void display(){


    glDisable(GL_TEXTURE_2D);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glRotatef(anglex,1,0,0);
    glRotatef(angley,0,1,0);
    glScalef(sc,sc,sc);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);


    floor();
    wall();
    house();
    road();


    glPopMatrix();
    glFlush();
    glutSwapBuffers();

}

static void key(unsigned char key, int x, int y)
{

    switch (key)
    {
        case 27 :
        case 'a':
            angley+=1;
            if(angley>360)
            {
                angley-=360;
            }
            break;

        case 'd':
            angley-=1;
            if(angley<-360)
            {
                angley+=360;
            }
            break;

        case 'w':
            anglex+=1;
            if(anglex>360)
            {
                anglex-=360;
            }
            break;
        case 's':
            anglex-=1;
            if(anglex<-360)
            {
                anglex+=360;
            }
            break;

        case 'q':

            if(sc<=1)
                sc+=.1;
            break;

        case 'e':
            if(sc>=0)
                sc-=.1;
            break;
    }

    glutPostRedisplay();
}
/*void lighting()
{
	GLfloat lightpos[] = { 20,20,20 };
	GLfloat lightcolor[] = { 1,0,1 };
	GLfloat ambColor[] = { 1,1,0 };

	glEnable(GL_LIGHTING);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambColor);

	glEnable(GL_LIGHT0);

	glLightfv(GL_LIGHT0, GL_POSITION, lightpos);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightcolor);
}*/

void Init()
{
	glEnable(GL_TEXTURE_2D);


    pix[0].makeCheckImage();
	pix[0].setTexture(1);

	pix[1].readBMPFile("D:\OpenGL\Final\3DHome-master\3D Home Project\\wood.bmp");
    pix[1].setTexture(2);
    pix[2].readBMPFile("D:\OpenGL\Final\3DHome-master\3D Home Project\\grass.bmp");
    pix[2].setTexture(3);

    pix[3].readBMPFile("D:\OpenGL\Final\3DHome-master\3D Home Project\\brick.bmp");
    pix[3].setTexture(4);

    pix[4].readBMPFile("D:\OpenGL\Final\3DHome-master\3D Home Project\\fire.bmp");
    pix[4].setTexture(5);

    pix[5].readBMPFile("D:\OpenGL\Final\3DHome-master\3D Home Project\\jake.bmp");
    pix[5].setTexture(6);

    pix[6].readBMPFile("D:\OpenGL\Final\3DHome-master\3D Home Project\\table.bmp");
    pix[6].setTexture(7);
}



int main(){
    glutInitWindowSize(800,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Project");
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    //lighting();
    Init();

    glutMainLoop();
    return 0;
}


