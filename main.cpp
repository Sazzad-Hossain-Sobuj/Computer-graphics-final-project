
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy){

    glBegin(GL_TRIANGLE_FAN);

	for(int i=0;i<=100;i++){

	float angle=2*3.1416*i/100;

	float x=rx*cosf(angle);
	float y=ry*sinf(angle);
	glVertex2f(x+cx,y+cy);

}
  glEnd();
}

void circle1(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy){

    glBegin(GL_TRIANGLE_FAN);

	for(int i=0;i<=50;i++){

	float angle=2*3.1416*i/100;

	float x=rx*cosf(angle);
	float y=ry*sinf(angle);
	glVertex2f(x+cx,y+cy);

}
  glEnd();
}

void display();
void reshape(int,int);
void timer(int);



GLfloat  i = 0.1f;
void Idle()
{
    glutPostRedisplay();
}





float x_position = 0;
int state = 1;
float n_position = 0;
int n = 1;
float a_position = 0;
int a = 1;
float c_position = 0;
int c = 1;
float bc_position = 0;
int bc = 1;
float sh_position = 0;
int sh = 1;



void display(void)
{
    //sea
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0,0);
    glVertex2d(110,0);
    glColor3ub(178, 255, 254);
    glVertex2d(110,12.5);
    glVertex2d(0,12.5);
    //road
    glColor3ub(114,114,114);
    glVertex2d(0,12.5);
    glVertex2d(110,12.5);
    glColor3ub(47,47,47);
    glVertex2d(110,27.5);
    glVertex2d(0,27.5);
    //field behind road
    glColor3ub(41, 79, 30);
    glVertex2d(0,27.5);
    glVertex2d(110,27.5);
    glColor3ub(74, 143, 53);
    glVertex2d(110,35);
    glVertex2d(0,35);
    //road border
    glColor3ub(255,255,255);
    glVertex2d(0,27.5);
    glVertex2d(0,28.5);
    glVertex2d(110,28.5);
    glVertex2d(110,27.5);
    glEnd();
    //road border lines
    glLineWidth(20);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(5,28.5);
    glVertex2d(5,27.5);
    glVertex2d(15,28.5);
    glVertex2d(15,27.5);
    glVertex2d(25,28.5);
    glVertex2d(25,27.5);
    glVertex2d(35,28.5);
    glVertex2d(35,27.5);
    glVertex2d(45,28.5);
    glVertex2d(45,27.5);
    glVertex2d(55,28.5);
    glVertex2d(55,27.5);
    glVertex2d(65,28.5);
    glVertex2d(65,27.5);
    glVertex2d(75,28.5);
    glVertex2d(75,27.5);
    glVertex2d(85,28.5);
    glVertex2d(85,27.5);
    glVertex2d(95,28.5);
    glVertex2d(95,27.5);
    glVertex2d(105,28.5);
    glVertex2d(105,27.5);
    glEnd();
    //road light
    //light pillar rectangle
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    //1st
    glVertex2d(4.25,28.5);
    glVertex2d(4.25,30.5);
    glVertex2d(5.75,30.5);
    glVertex2d(5.75,28.5);
    //2n
    glColor3ub(0,0,0);
    glVertex2d(14.25,28.5);
    glVertex2d(14.25,30.5);
    glVertex2d(15.75,30.5);
    glVertex2d(15.75,28.5);
    //3rd
    glVertex2d(24.25,28.5);
    glVertex2d(24.25,30.5);
    glVertex2d(25.75,30.5);
    glVertex2d(25.75,28.5);
    //4th
    glVertex2d(34.25,28.5);
    glVertex2d(34.25,30.5);
    glVertex2d(35.75,30.5);
    glVertex2d(35.75,28.5);
    //5th
    glVertex2d(44.25,28.5);
    glVertex2d(44.25,30.5);
    glVertex2d(45.75,30.5);
    glVertex2d(45.75,28.5);
    //6th
    glVertex2d(54.25,28.5);
    glVertex2d(54.25,30.5);
    glVertex2d(55.75,30.5);
    glVertex2d(55.75,28.5);
    //7th
    glVertex2d(64.25,28.5);
    glVertex2d(64.25,30.5);
    glVertex2d(65.75,30.5);
    glVertex2d(65.75,28.5);
    //8th
    glVertex2d(74.25,28.5);
    glVertex2d(74.25,30.5);
    glVertex2d(75.75,30.5);
    glVertex2d(75.75,28.5);
    //9th
    glVertex2d(84.25,28.5);
    glVertex2d(84.25,30.5);
    glVertex2d(85.75,30.5);
    glVertex2d(85.75,28.5);
    //10th
    glVertex2d(94.25,28.5);
    glVertex2d(94.25,30.5);
    glVertex2d(95.75,30.5);
    glVertex2d(95.75,28.5);
    //11th
    glVertex2d(104.25,28.5);
    glVertex2d(104.25,30.5);
    glVertex2d(105.75,30.5);
    glVertex2d(105.75,28.5);
    glEnd();





    //chorki 1
    glPushMatrix();
    glTranslatef(5,31,0);
    glRotatef(i,0.0,0.0,1.0);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0,0);
    glColor3ub(255,255,255 );
    glVertex2f(1,3);
    glVertex2f(3,1);

    glColor3ub(0,0,0);
    glVertex2f(0,0);
    glColor3ub(255,255,255);
    glVertex2f(-1,-3);
    glVertex2f(-3,-1);

    glColor3ub(0,0,0);
    glVertex2f(0,0);
    glColor3ub(255,255,255 );
    glVertex2f(-1,3);
    glVertex2f(-3,1);

    glColor3ub(0,0,0);
    glVertex2f(0,0);
    glColor3ub(255,255,255);
    glVertex2f(1,-3);
    glVertex2f(3,-1);
    glEnd();
    glPopMatrix();




    //chorki 2
    glPushMatrix();
    glTranslatef(105,31,0);
    glRotatef(i,0.0,0.0,-1.0);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0,0);
    glColor3ub(255,255,255 );
    glVertex2f(1,3);
    glVertex2f(3,1);

    glColor3ub(0,0,0);
    glVertex2f(0,0);
    glColor3ub(255,255,255);
    glVertex2f(-1,-3);
    glVertex2f(-3,-1);

    glColor3ub(0,0,0);
    glVertex2f(0,0);
    glColor3ub(255,255,255 );
    glVertex2f(-1,3);
    glVertex2f(-3,1);

    glColor3ub(0,0,0);
    glVertex2f(0,0);
    glColor3ub(255,255,255);
    glVertex2f(1,-3);
    glVertex2f(3,-1);
    glEnd();
    glPopMatrix();

    i+= 0.05f;

    //circle of chorki 1
    glColor3ub(0,0,0);
    circle(1,0.75,5,31);
    //circle of chorki 2
    glColor3ub(0,0,0);
    circle(1,0.75,105,31);


    //circle of light 2
    glColor3ub(255,255,255);
    circle(1.5,1,15,31.75);
    //circle of light 3
    glColor3ub(255,255,255);
    circle(1.5,1,25,31.75);
    //circle of light 4
    glColor3ub(255,255,255);
    circle(1.5,1,35,31.75);
    //circle of light 5
    glColor3ub(255,255,255);
    circle(1.5,1,45,31.75);
    //circle of light 6
    glColor3ub(255,255,255);
    circle(1.5,1,55,31.75);
    //circle of light 7
    glColor3ub(255,255,255);
    circle(1.5,1,65,31.75);
    //circle of light 8
    glColor3ub(255,255,255);
    circle(1.5,1,75,31.75);
    //circle of light 9
    glColor3ub(255,255,255);
    circle(1.5,1,85,31.75);
    //circle of light 10
    glColor3ub(255,255,255);
    circle(1.5,1,95,31.75);


    glLineWidth(3);
    glBegin(GL_LINES);
    //upper line of the sea
    glColor3ub(40, 61, 57 );
    glVertex2d(0,12.20);
    glVertex2d(110,12.20);
    glVertex2d(0,12.10);
    glVertex2d(110,12.10);
    //road line yellow
    glColor3ub(210,183,70);
    glVertex2d(0,20);
    glVertex2d(110,20);
    glEnd();
    glLineWidth(1.5);
    glBegin(GL_LINES);
    //road dot.line
    //down side
    glColor3ub(255,255,255);
    glVertex2d(3,16.125);
    glVertex2d(6,16.125);
    glVertex2d(11,16.125);
    glVertex2d(14,16.125);
    glVertex2d(19,16.125);
    glVertex2d(22,16.125);
    glVertex2d(27,16.125);
    glVertex2d(30,16.125);
    glVertex2d(35,16.125);
    glVertex2d(38,16.125);
    glVertex2d(43,16.125);
    glVertex2d(46,16.125);
    glVertex2d(51,16.125);
    glVertex2d(54,16.125);
    glVertex2d(59,16.125);
    glVertex2d(62,16.125);
    glVertex2d(67,16.125);
    glVertex2d(70,16.125);
    glVertex2d(75,16.125);
    glVertex2d(78,16.125);
    glVertex2d(83,16.125);
    glVertex2d(86,16.125);
    glVertex2d(91,16.125);
    glVertex2d(94,16.125);
    glVertex2d(99,16.125);
    glVertex2d(102,16.125);
    glVertex2d(107,16.125);
    glVertex2d(110,16.125);
    //upper side
    glVertex2d(0,23.875);
    glVertex2d(2,23.875);
    glVertex2d(7,23.875);
    glVertex2d(10,23.875);
    glVertex2d(15,23.875);
    glVertex2d(18,23.875);
    glVertex2d(23,23.875);
    glVertex2d(26,23.875);
    glVertex2d(31,23.875);
    glVertex2d(34,23.875);
    glVertex2d(39,23.875);
    glVertex2d(42,23.875);
    glVertex2d(47,23.875);
    glVertex2d(50,23.875);
    glVertex2d(55,23.875);
    glVertex2d(58,23.875);
    glVertex2d(63,23.875);
    glVertex2d(66,23.875);
    glVertex2d(71,23.875);
    glVertex2d(74,23.875);
    glVertex2d(79,23.875);
    glVertex2d(82,23.875);
    glVertex2d(87,23.875);
    glVertex2d(90,23.875);
    glVertex2d(95,23.875);
    glVertex2d(98,23.875);
    glVertex2d(103,23.875);
    glVertex2d(106,23.875);
    glEnd();
    //road fence
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(	233,224,212);
    glVertex2d(0,12.25);
    glVertex2d(0,14);
    glVertex2d(0,14);
    glVertex2d(110,14);
    glVertex2d(2,12.25);
    glVertex2d(2,14);
    glVertex2d(4,12.25);
    glVertex2d(4,14);
    glVertex2d(6,12.25);
    glVertex2d(6,14);
    glVertex2d(8,12.25);
    glVertex2d(8,14);
    glVertex2d(10,12.25);
    glVertex2d(10,14);
    glVertex2d(12,12.25);
    glVertex2d(12,14);
    glVertex2d(14,12.25);
    glVertex2d(14,14);
    glVertex2d(16,12.25);
    glVertex2d(16,14);
    glVertex2d(18,12.25);
    glVertex2d(18,14);
    glVertex2d(20,12.25);
    glVertex2d(20,14);
    glVertex2d(22,12.25);
    glVertex2d(22,14);
    glVertex2d(24,12.25);
    glVertex2d(24,14);
    glVertex2d(26,12.25);
    glVertex2d(26,14);
    glVertex2d(28,12.25);
    glVertex2d(28,14);
    glVertex2d(30,12.25);
    glVertex2d(30,14);
    glVertex2d(32,12.25);
    glVertex2d(32,14);
    glVertex2d(34,12.25);
    glVertex2d(34,14);
    glVertex2d(36,12.25);
    glVertex2d(36,14);
    glVertex2d(38,12.25);
    glVertex2d(38,14);
    glVertex2d(40,12.25);
    glVertex2d(40,14);
    glVertex2d(42,12.25);
    glVertex2d(42,14);
    glVertex2d(44,12.25);
    glVertex2d(44,14);
    glVertex2d(46,12.25);
    glVertex2d(46,14);
    glVertex2d(48,12.25);
    glVertex2d(48,14);
    glVertex2d(50,12.25);
    glVertex2d(50,14);
    glVertex2d(52,12.25);
    glVertex2d(52,14);
    glVertex2d(54,12.25);
    glVertex2d(54,14);
    glVertex2d(56,12.25);
    glVertex2d(56,14);
    glVertex2d(58,12.25);
    glVertex2d(58,14);
    glVertex2d(60,12.25);
    glVertex2d(60,14);
    glVertex2d(62,12.25);
    glVertex2d(62,14);
    glVertex2d(64,12.25);
    glVertex2d(64,14);
    glVertex2d(66,12.25);
    glVertex2d(66,14);
    glVertex2d(68,12.25);
    glVertex2d(68,14);
    glVertex2d(70,12.25);
    glVertex2d(70,14);
    glVertex2d(72,12.25);
    glVertex2d(72,14);
    glVertex2d(74,12.25);
    glVertex2d(74,14);
    glVertex2d(76,12.25);
    glVertex2d(76,14);
    glVertex2d(78,12.25);
    glVertex2d(78,14);
    glVertex2d(80,12.25);
    glVertex2d(80,14);
    glVertex2d(82,12.25);
    glVertex2d(82,14);
    glVertex2d(84,12.25);
    glVertex2d(84,14);
    glVertex2d(86,12.25);
    glVertex2d(86,14);
    glVertex2d(88,12.25);
    glVertex2d(88,14);
    glVertex2d(90,12.25);
    glVertex2d(90,14);
    glVertex2d(92,12.25);
    glVertex2d(92,14);
    glVertex2d(94,12.25);
    glVertex2d(94,14);
    glVertex2d(96,12.25);
    glVertex2d(96,14);
    glVertex2d(98,12.25);
    glVertex2d(98,14);
    glVertex2d(100,12.25);
    glVertex2d(100,14);
    glVertex2d(102,12.25);
    glVertex2d(102,14);
    glVertex2d(104,12.25);
    glVertex2d(104,14);
    glVertex2d(106,12.25);
    glVertex2d(106,14);
    glVertex2d(108,12.25);
    glVertex2d(108,14);
    glVertex2d(110,12.25);
    glVertex2d(110,14);
    glEnd();






    //boat 1
    glBegin(GL_QUADS);
    glColor3ub(48, 77, 72 );
    glVertex2d(n_position+7,5);
    glVertex2d(n_position+12,5);
    glVertex2d(n_position+11,6);
    glVertex2d(n_position+8,6);
    //boat 2
    glBegin(GL_QUADS);
    glColor3ub(48, 77, 72 );
    glVertex2d(n_position+20,8);
    glVertex2d(n_position+25,8);
    glVertex2d(n_position+24,9);
    glVertex2d(n_position+21,9);
    //boat 1 shadow
    glColor3ub(172, 178, 177  );
    glVertex2d(n_position+7,5);
    glVertex2d(n_position+12,5);
    glVertex2d(n_position+13,4);
    glVertex2d(n_position+6,4);
    //boat 2 shadow
    glColor3ub(172, 178, 177  );
    glVertex2d(n_position+20,8);
    glVertex2d(n_position+25,8);
    glVertex2d(n_position+26,7);
    glVertex2d(n_position+19,7);
    glEnd();
    //boat 1 triangles part
    glBegin(GL_TRIANGLES);
    glColor3ub(48, 77, 72 );
    glVertex2d(n_position+7,5);
    glVertex2d(n_position+8,6);
    glVertex2d(n_position+5,7);

    glColor3ub(48, 77, 72 );
    glVertex2d(n_position+12,5);
    glVertex2d(n_position+11,6);
    glVertex2d(n_position+14,7);

    //boat 2 triangles part
    glColor3ub(48, 77, 72 );
    glVertex2d(n_position+20,8);
    glVertex2d(n_position+21,9);
    glVertex2d(n_position+17.5,10);

    glVertex2d(n_position+25,8);
    glVertex2d(n_position+24,9);
    glVertex2d(n_position+27.5,10);
    glEnd();
    //boat man
    glLineWidth(5);
    glColor3ub(48, 77, 72 );
    //boat 1 man body
    glBegin(GL_LINES);
    glVertex2d(n_position+7.5,7.5);
    glVertex2d(n_position+7,6);
    //boat 2 man body
    glBegin(GL_LINES);
    glVertex2d(n_position+20.5,9);
    glVertex2d(n_position+21,10);
    glEnd();
    //boat1 man stick
    glLineWidth(3);
    glColor3ub(48, 77, 72 );
    glBegin(GL_LINES);
    glVertex2d(n_position+10,9);
    glVertex2d(n_position+5,4);
    //boat 2 man stick
    glVertex2d(n_position+23.5,11);
    glVertex2d(n_position+18,7);
    glEnd();
    //boat 1 man head
    glColor3ub(48, 77, 72 );
    circle(0.75,0.5,n_position+7.25,7.5);
    //boat 2 man head
    glColor3ub(48, 77, 72 );
    circle(0.75,0.5,n_position+21,10);






    //ship
    //part one structure
    glBegin(GL_QUADS);
    glColor3ub(113, 112, 110);
    glVertex2d(sh_position+70,2);
    glVertex2d(sh_position+90,2);
    glVertex2d(sh_position+95,5);
    glVertex2d(sh_position+60,5);
    //ship shadow
    glColor3ub(204, 204, 204);
    glVertex2d(sh_position+70,2);
    glVertex2d(sh_position+90,2);
    glVertex2d(sh_position+92,1);
    glVertex2d(sh_position+68,1);


    //part one windows
    glColor3ub(255,255,255);
    glVertex2d(sh_position+70,4.5);
    glVertex2d(sh_position+91.5,4.5);
    glVertex2d(sh_position+91.5,3.5);
    glVertex2d(sh_position+70,3.5);

    glEnd();
    //part one line
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2d(sh_position+67.5,3);
    glVertex2d(sh_position+91.5,3);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    //part one windows lines
    glColor3ub(132, 132, 130);
    glVertex2d(sh_position+72,4.5);
    glVertex2d(sh_position+72,3.5);
    glVertex2d(sh_position+74,4.5);
    glVertex2d(sh_position+74,3.5);
    glVertex2d(sh_position+76,4.5);
    glVertex2d(sh_position+76,3.5);
    glVertex2d(sh_position+78,4.5);
    glVertex2d(sh_position+78,3.5);
    glVertex2d(sh_position+80,4.5);
    glVertex2d(sh_position+80,3.5);
    glVertex2d(sh_position+82,4.5);
    glVertex2d(sh_position+82,3.5);
    glVertex2d(sh_position+84,4.5);
    glVertex2d(sh_position+84,3.5);
    glVertex2d(sh_position+86,4.5);
    glVertex2d(sh_position+86,3.5);
    glVertex2d(sh_position+88,4.5);
    glVertex2d(sh_position+88,3.5);
    glVertex2d(sh_position+90,4.5);
    glVertex2d(sh_position+90,3.5);
    glEnd();
    //part one circle
    glColor3ub(255,255,255);
    circle(0.5,0.25,sh_position+66.5,4);
    circle(0.5,0.25,sh_position+68.5,4);

    //part two structure
    glBegin(GL_QUADS);
    glColor3ub(143, 143, 143);
    glVertex2d(sh_position+93,5);
    glVertex2d(sh_position+93,6);
    glVertex2d(sh_position+65,6);
    glVertex2d(sh_position+66.5,5);
    glEnd();
    //part two circle
    glColor3ub(255,255,255);
    circle(0.30,0.15,sh_position+70,5.5);
    circle(0.30,0.15,sh_position+72,5.5);
    circle(0.30,0.15,sh_position+74,5.5);
    circle(0.30,0.15,sh_position+72,5.5);
    circle(0.30,0.15,sh_position+76,5.5);
    circle(0.30,0.15,sh_position+78,5.5);
    circle(0.30,0.15,sh_position+80,5.5);
    circle(0.30,0.15,sh_position+72,5.5);
    circle(0.30,0.15,sh_position+82,5.5);
    circle(0.30,0.15,sh_position+84,5.5);
    circle(0.30,0.15,sh_position+76,5.5);
    circle(0.30,0.15,sh_position+86,5.5);
    circle(0.30,0.15,sh_position+88,5.5);
    circle(0.30,0.15,sh_position+88,5.5);
    circle(0.30,0.15,sh_position+90,5.5);
    circle(0.30,0.15,sh_position+92,5.5);

    //part three
    glBegin(GL_QUADS);
    glColor3ub(113, 112, 110);
    glVertex2d(sh_position+90,6);
    glVertex2d(sh_position+90,7);
    glVertex2d(sh_position+70,7);
    glVertex2d(sh_position+71,6);
    glEnd();
    //part three pipe
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(113, 112, 110);
    glVertex2d(sh_position+88,6);
    glVertex2d(sh_position+88,11);
    glVertex2d(sh_position+86,6);
    glVertex2d(sh_position+86,10);
    glEnd();





    glBegin(GL_QUADS);
    //sky
    glColor3ub(216, 242, 255);
    glVertex2d(0,35);
    glVertex2d(110,35);
    glColor3ub(132, 228, 247);
    glVertex2d(110,80);
    glVertex2d(0,80);





    //1st home
    //right part
    glColor3ub(172, 176, 71 );
    glVertex2d(14,35);
    glVertex2d(19,35);
    glVertex2d(19,52);
    glVertex2d(14,52);
    //middle part
    glColor3ub(181, 187, 63 );
    glVertex2d(5,35);
    glVertex2d(15,35);
    glVertex2d(15,55);
    glVertex2d(5,55);
    //left part
    glColor3ub(199, 206, 51 );
    glVertex2d(1,35);
    glVertex2d(6,35);
    glVertex2d(6,50);
    glVertex2d(1,50);
    //home door
    glColor3ub(133, 138, 40);
    glVertex2d(8,35);
    glVertex2d(13,35);
    glVertex2d(13,39);
    glVertex2d(8,39);
    //door shadow
    glColor3ub(82, 90, 93);
    glVertex2d(8,35);
    glVertex2d(13,35);
    glVertex2d(13.5,34);
    glVertex2d(7.5,34);
    glEnd();
    //1st home windows line
    //horizontal lines
    glLineWidth(2);
    glColor3ub(133, 138, 40);
    glBegin(GL_LINES);
    glVertex2d(5,54);
    glVertex2d(15,54);
    glVertex2d(5,52);
    glVertex2d(15,52);
    glVertex2d(5,51);
    glVertex2d(15,51);
    glVertex2d(6,49);
    glVertex2d(15,49);
    glVertex2d(6,48);
    glVertex2d(15,48);
    glVertex2d(6,46);
    glVertex2d(15,46);
    glVertex2d(6,45);
    glVertex2d(15,45);
    glVertex2d(6,43);
    glVertex2d(15,43);
    glVertex2d(6,42);
    glVertex2d(15,42);
    glVertex2d(6,40);
    glVertex2d(15,40);
    //vertical lines
    glVertex2d(8,54);
    glVertex2d(8,52);
    glVertex2d(13,54);
    glVertex2d(13,52);
    glVertex2d(8,51);
    glVertex2d(8,49);
    glVertex2d(13,51);
    glVertex2d(13,49);
    glVertex2d(8,48);
    glVertex2d(8,46);
    glVertex2d(13,48);
    glVertex2d(13,46);
    glVertex2d(8,45);
    glVertex2d(8,43);
    glVertex2d(13,45);
    glVertex2d(13,43);
    glVertex2d(8,42);
    glVertex2d(8,40);
    glVertex2d(13,42);
    glVertex2d(13,40);
    glEnd();








    //2n home
    glBegin(GL_QUADS);
    //middle
    glColor3ub(166, 176, 180 );
    glVertex2d(24,35);
    glVertex2d(44,35);
    glVertex2d(44,54);
    glVertex2d(24,54);
    //left
    glVertex2d(21,35);
    glVertex2d(26,35);
    glVertex2d(26,55);
    glVertex2d(21,55);
    //right
    glVertex2d(41,35);
    glVertex2d(46,35);
    glVertex2d(46,55);
    glVertex2d(41,55);
    //door
    glColor3ub(134, 139, 141 );
    glVertex2d(31,35);
    glVertex2d(36,35);
    glVertex2d(36,39);
    glVertex2d(31,39);
    //window
    glVertex2d(22,40);
    glVertex2d(45,40);
    glVertex2d(45,53);
    glVertex2d(22,53);
    //door shadow
    glColor3ub(82, 90, 93);
    glVertex2d(31,35);
    glVertex2d(36,35);
    glVertex2d(36.5,34);
    glVertex2d(30.5,34);
    glEnd();
    //2n home windows line
    //horizontal lines
    glLineWidth(5);
    glColor3ub(166, 176, 180);
    glBegin(GL_LINES);
    glVertex2d(22,43);
    glVertex2d(45,43);
    glVertex2d(22,46.5);
    glVertex2d(45,46.5);
    glVertex2d(22,50);
    glVertex2d(45,50);
    //vertical lines
    glVertex2d(26,40);
    glVertex2d(26,55);
    glVertex2d(41,40);
    glVertex2d(41,55);
    glEnd();
    //fence lines
    glLineWidth(2);
    glColor3ub(134, 139, 141 );
    glBegin(GL_LINES);
    glVertex2d(19,37);
    glVertex2d(31,37);
    glVertex2d(19,35);
    glVertex2d(19,37);
    glVertex2d(20,35);
    glVertex2d(20,37);
    glVertex2d(21,35);
    glVertex2d(21,37);
    glVertex2d(22,35);
    glVertex2d(22,37);
    glVertex2d(23,35);
    glVertex2d(23,37);
    glVertex2d(24,35);
    glVertex2d(24,37);
    glVertex2d(25,35);
    glVertex2d(25,37);
    glVertex2d(26,35);
    glVertex2d(26,37);
    glVertex2d(27,35);
    glVertex2d(27,37);
    glVertex2d(28,35);
    glVertex2d(28,37);
    glVertex2d(29,35);
    glVertex2d(29,37);
    glVertex2d(30,35);
    glVertex2d(30,37);

    glVertex2d(35,37);
    glVertex2d(46,37);
    glVertex2d(37,35);
    glVertex2d(37,37);
    glVertex2d(38,35);
    glVertex2d(38,37);
    glVertex2d(39,35);
    glVertex2d(39,37);
    glVertex2d(40,35);
    glVertex2d(40,37);
    glVertex2d(41,35);
    glVertex2d(41,37);
    glVertex2d(42,35);
    glVertex2d(42,37);
    glVertex2d(43,35);
    glVertex2d(43,37);
    glVertex2d(44,35);
    glVertex2d(44,37);
    glVertex2d(45,35);
    glVertex2d(45,37);
    glVertex2d(46,35);
    glVertex2d(46,37);
    glEnd();







    //3rd home
    glBegin(GL_QUADS);
    //left part
    glColor3ub(157,193,131);
    glVertex2d(50,35);
    glVertex2d(55,35);
    glVertex2d(55,55);
    glVertex2d(50,55);
    //right part
    glVertex2d(55,35);
    glVertex2d(75,35);
    glVertex2d(75,53);
    glVertex2d(55,53);
    glColor3ub(143,151,121);
    //balcony
    //1
    glVertex2d(50,53);
    glVertex2d(48,53);
    glVertex2d(48,51);
    glVertex2d(50,51);
    //2
    glVertex2d(50,50);
    glVertex2d(48,50);
    glVertex2d(48,48);
    glVertex2d(50,48);
    //3
    glVertex2d(50,47);
    glVertex2d(48,47);
    glVertex2d(48,45);
    glVertex2d(50,45);
    //4
    glVertex2d(50,44);
    glVertex2d(48,44);
    glVertex2d(48,42);
    glVertex2d(50,42);
    //5
    glVertex2d(50,41);
    glVertex2d(48,41);
    glVertex2d(48,39);
    glVertex2d(50,39);
    //windows
    glVertex2d(55,40);
    glVertex2d(75,40);
    glVertex2d(75,50);
    glVertex2d(55,50);
    //wall
    glColor3ub(157,193,131);
    glVertex2d(46.25,35);
    glVertex2d(75,35);
    glVertex2d(75,38);
    glVertex2d(46.25,38);
    //wall left part
    glColor3ub(143,151,121);
    glVertex2d(50,36);
    glVertex2d(59.5,36);
    glVertex2d(59.5,37);
    glVertex2d(50,37);
    //wall right part
    glColor3ub(143,151,121);
    glVertex2d(65.5,36);
    glVertex2d(74.5,36);
    glVertex2d(74.5,37);
    glVertex2d(65.5,37);
    //door
    glColor3ub(143,151,121);
    glVertex2d(60,35);
    glVertex2d(65,35);
    glVertex2d(65,39);
    glVertex2d(60,39);
    //door shadow
    glColor3ub(82, 90, 93);
    glVertex2d(60,35);
    glVertex2d(65,35);
    glVertex2d(65.5,34);
    glVertex2d(59.5,34);
    glEnd();
    //3rd home windows lines
    glLineWidth(5);
    glColor3ub(157,193,131);
    glBegin(GL_LINES);
    glVertex2d(55,43);
    glVertex2d(75,43);
    glVertex2d(55,46.75);
    glVertex2d(75,46.75);
    glVertex2d(70,40);
    glVertex2d(70,50);
    glEnd();
    //3rd home wall lines
    glLineWidth(3);
    glColor3ub(157,193,131);
    glBegin(GL_LINES);
    glVertex2d(55,36);
    glVertex2d(55,38);
    glVertex2d(70,36);
    glVertex2d(70,38);
    glEnd();








    //4th home
    glBegin(GL_QUADS);
    //structure
    glColor3ub(128, 0, 0);
    glVertex2d(80,35);
    glVertex2d(105,35);
    glVertex2d(105,53);
    glVertex2d(80,53);
    //wall
    glVertex2d(75,35);
    glVertex2d(110,35);
    glVertex2d(110,39);
    glVertex2d(75,39);
    //door home
    glColor3ub(219, 233, 244);
    glVertex2d(87.5,35);
    glVertex2d(97.5,35);
    glVertex2d(97.5,40);
    glVertex2d(87.5,40);
    //door
    glColor3ub(128, 0, 0);
    glVertex2d(90,35);
    glVertex2d(95,35);
    glVertex2d(95,39);
    glVertex2d(90,39);
    //door shadow
    glColor3ub(82, 90, 93);
    glVertex2d(90,35);
    glVertex2d(95,35);
    glVertex2d(95.5,34);
    glVertex2d(89.5,34);
    //rooftop squares
    glColor3ub(128, 0, 0);
    glVertex2d(85,53);
    glVertex2d(100,53);
    glVertex2d(100,55);
    glVertex2d(85,55);
    glEnd();
    //door home upper side triangle shape
    glBegin(GL_TRIANGLES);
    glColor3ub(219, 233, 244);
    glVertex2d(86,40);
    glVertex2d(99,40);
    glVertex2d(92.5,43);
    //roof top triangle
    glColor3ub(128, 0, 0);
    glVertex2d(83,55);
    glVertex2d(102,55);
    glVertex2d(92.5,59);
    glEnd();
    glLineWidth(2);
    //upper white line for home
    glColor3ub(219, 233, 244 );
    glBegin(GL_LINES);
    //horizontal
    glVertex2d(80,52);
    glVertex2d(105,52);
    glVertex2d(85,55);
    glVertex2d(100,55);
    //wall lines
    glVertex2d(75,37);
    glVertex2d(89,37);
    glVertex2d(75,35);
    glVertex2d(75,37);
    glVertex2d(76,35);
    glVertex2d(76,37);
    glVertex2d(77,35);
    glVertex2d(77,37);
    glVertex2d(78,35);
    glVertex2d(78,37);
    glVertex2d(79,35);
    glVertex2d(79,37);
    glVertex2d(80,35);
    glVertex2d(80,37);
    glVertex2d(81,35);
    glVertex2d(81,37);
    glVertex2d(82,35);
    glVertex2d(82,37);
    glVertex2d(83,35);
    glVertex2d(83,37);
    glVertex2d(84,35);
    glVertex2d(84,37);
    glVertex2d(85,35);
    glVertex2d(85,37);
    glVertex2d(86,35);
    glVertex2d(86,37);
    glVertex2d(87,35);
    glVertex2d(87,37);

    glVertex2d(97,37);
    glVertex2d(110,37);
    glVertex2d(98,35);
    glVertex2d(98,37);
    glVertex2d(99,35);
    glVertex2d(99,37);
    glVertex2d(100,35);
    glVertex2d(100,37);
    glVertex2d(101,35);
    glVertex2d(101,37);
    glVertex2d(102,35);
    glVertex2d(102,37);
    glVertex2d(103,35);
    glVertex2d(103,37);
    glVertex2d(104,35);
    glVertex2d(104,37);
    glVertex2d(105,35);
    glVertex2d(105,37);
    glVertex2d(106,35);
    glVertex2d(106,37);
    glVertex2d(107,35);
    glVertex2d(107,37);
    glVertex2d(108,35);
    glVertex2d(108,37);
    glVertex2d(109,35);
    glVertex2d(109,37);
    glVertex2d(110,35);
    glVertex2d(110,37);
    glEnd();
    //4th home windows
    glBegin(GL_QUADS);
    glColor3ub(219, 233, 244);
    glVertex2d(81,43);
    glVertex2d(104,43);
    glVertex2d(104,51);
    glVertex2d(81,51);
    glEnd();
    //windows lines
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(128, 0, 0);
    glVertex2d(81,48.5);
    glVertex2d(104,48.5);
    glVertex2d(81,45.5);
    glVertex2d(104,45.5);
    glVertex2d(85,51);
    glVertex2d(85,43);
    glVertex2d(100,51);
    glVertex2d(100,43);
    glEnd();
    //upper circle shape
    glColor3ub(219, 233, 244 );
    circle(2,1,92.5,53.5);
    circle(2,1,92.5,37);
    //home baseline
    glLineWidth(1);
    glColor3ub(82, 90, 93 );
    glBegin(GL_LINES);
    glVertex2d(0,35);
    glVertex2d(110,35);
    glEnd();








    //Bus1
    //structure
    glBegin(GL_POLYGON);
    glColor3ub( 85, 255, 0 );
    glVertex2d(x_position+2,22);
    glVertex2d(x_position+2,26);
    glVertex2d(x_position+17,26);
    glVertex2d(x_position+19,24);
    glVertex2d(x_position+19,22);
    glEnd();
    //bus window front side
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(x_position+17,26);
    glVertex2d(x_position+19,24);
    glVertex2d(x_position+19,23);
    glVertex2d(x_position+16,26);
    //bus door
    glColor3ub(255,255,255);
    glVertex2d(x_position+16,22);
    glVertex2d(x_position+14,22);
    glVertex2d(x_position+14,25);
    glVertex2d(x_position+16,25);
    //window
    glColor3ub(255,255,255);
    glVertex2d(x_position+3,23.5);
    glVertex2d(x_position+3,25.5);
    glVertex2d(x_position+12,25.5);
    glVertex2d(x_position+12,23.5);
    glEnd();
    //while1
    glColor3ub(0,0,0);
    circle(1.25,1,x_position+4.5,22);
    glColor3ub(255,255,255);
    circle(0.75,0.5,x_position+4.5,22);
    //while2
    glColor3ub(0,0,0);
    circle(1.25,1,x_position+12,22);
    glColor3ub(255,255,255);
    circle(0.75,0.5,x_position+12,22);







    //bus2
    // structure
    glBegin(GL_POLYGON);
    glColor3ub(59, 170, 230  );
    glVertex2d(bc_position+108,16);
    glVertex2d(bc_position+108,21);
    glVertex2d(bc_position+94,21);
    glVertex2d(bc_position+91,18);
    glVertex2d(bc_position+91,16);
    glEnd();
    //bus door
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(bc_position+95,16);
    glVertex2d(bc_position+95,19);
    glVertex2d(bc_position+93,19);
    glVertex2d(bc_position+93,16);
    //window
    glColor3ub(245, 245, 234 );
    glVertex2d(bc_position+96,20);
    glVertex2d(bc_position+107,20);
    glVertex2d(bc_position+107,18);
    glVertex2d(bc_position+96,18);
    glEnd();
    //bus window line
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(bc_position+99,18);
    glVertex2d(bc_position+99,20);
    glVertex2d(bc_position+102,18);
    glVertex2d(bc_position+102,20);
    glVertex2d(bc_position+105,18);
    glVertex2d(bc_position+105,20);
    glEnd();
    //while1 back
    glColor3ub(0,0,0);
    circle(1.25,1,bc_position+105,16);
    glColor3ub(255,255,255);
    circle(0.75,0.5,bc_position+105,16);
    //while1 front
    glColor3ub(0,0,0);
    circle(1.25,1,bc_position+97,16);
    glColor3ub(255,255,255);
    circle(0.75,0.5,bc_position+97,16);







    //car 1
    //car structure
    glBegin(GL_POLYGON);
    glColor3ub(186, 28, 28 );
    glVertex2d(x_position+25,22);
    glVertex2d(x_position+25,24.5);
    glVertex2d(x_position+27,24.5);
    glVertex2d(x_position+29,26);
    glVertex2d(x_position+34,26);
    glVertex2d(x_position+36,24.5);
    glVertex2d(x_position+38,24.5);
    glVertex2d(x_position+38,22);
    glEnd();
    //while1
    glColor3ub(0,0,0);
    circle(1.25,1,x_position+27,22);
    glColor3ub(255,255,255);
    circle(0.75,0.5,x_position+27,22);
    //while2 front
    glColor3ub(0,0,0);
    circle(1.25,1,x_position+35,22);
    glColor3ub(255,255,255);
    circle(0.75,0.5,x_position+35,22);
    //car window
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(x_position+28,24);
    glVertex2d(x_position+35,24);
    glVertex2d(x_position+33,25.5);
    glVertex2d(x_position+30,25.5);
    glEnd();
    //car window line
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(x_position+31.5,24);
    glVertex2d(x_position+31.5,25.5);
    glEnd();






    //car2 structure
    glBegin(GL_POLYGON);
    glColor3ub(238, 234, 16 );
    glVertex2d(bc_position+76.5,16);
    glVertex2d(bc_position+76.5,21);
    glVertex2d(bc_position+72,21);
    glVertex2d(bc_position+70,19);
    glVertex2d(bc_position+68,17.5);
    glVertex2d(bc_position+68,16);
    glEnd();
    //2n part
    glBegin(GL_QUADS);
    glColor3ub(238, 234, 16 );
    glVertex2d(bc_position+75,16);
    glVertex2d(bc_position+85,16);
    glVertex2d(bc_position+85,19);
    glVertex2d(bc_position+75,19);
    //window
    glColor3ub(82, 75, 73);
    glVertex2d(bc_position+71,19);
    glVertex2d(bc_position+76,19);
    glVertex2d(bc_position+76,20.5);
    glVertex2d(bc_position+72.5,20.5);
    glEnd();
    //while1 back
    glColor3ub(0,0,0);
    circle(1.25,1,bc_position+82,16);
    glColor3ub(255,255,255);
    circle(0.75,0.5,bc_position+82,16);
    //back 2
    glColor3ub(0,0,0);
    circle(1.25,1,bc_position+79,16);
    glColor3ub(255,255,255);
    circle(0.75,0.5,bc_position+79,16);
    //while1 front
    glColor3ub(0,0,0);
    circle(1.25,1,bc_position+72,16);
    glColor3ub(255,255,255);
    circle(0.75,0.5,bc_position+72,16);








    //airplane
    glBegin(GL_POLYGON);
    glColor3ub(242, 246, 242 );
    glVertex2d(a_position+ 10,72);
    glVertex2d(a_position+ 30,75);
    glVertex2d(a_position+ 35,74);
    glVertex2d(a_position+ 33,72);
    glVertex2d(a_position+ 10,69);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(242, 246, 242 );
    glVertex2d(a_position+10,72);
    glVertex2d(a_position+10,69);
    glVertex2d(a_position+5,73);
    glVertex2d(a_position+5,75);
    //window
    glColor3ub(210, 213, 210  );
    glVertex2d(a_position+14,72);
    glVertex2d(a_position+28,74);
    glVertex2d(a_position+28,73);
    glVertex2d(a_position+14,71);
    //middle
    glColor3ub(202, 205, 202  );
    glVertex2d(a_position+17,71);
    glVertex2d(a_position+20,71);
    glVertex2d(a_position+15,67);
    glVertex2d(a_position+13,67);
    //front window
    glColor3ub(210, 213, 210  );
    glVertex2d(a_position+29,74);
    glVertex2d(a_position+30,74);
    glVertex2d(a_position+30,73);
    glVertex2d(a_position+29,73);
    glEnd();
    //back
    glBegin(GL_TRIANGLES);
    glColor3ub(202, 205, 202  );
    glVertex2d(a_position+9,71);
    glVertex2d(a_position+11,70);
    glVertex2d(a_position+5,67);
    glEnd();
    //window line
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(242, 246, 242);
    glVertex2d(a_position+16,72.25);
    glVertex2d(a_position+16,71);
    glVertex2d(a_position+18,73);
    glVertex2d(a_position+18,71);
    glVertex2d(a_position+20,73);
    glVertex2d(a_position+20,71);
    glVertex2d(a_position+22,73.5);
    glVertex2d(a_position+22,71);
    glVertex2d(a_position+24,73.5);
    glVertex2d(a_position+24,71);
    glVertex2d(a_position+26,74);
    glVertex2d(a_position+26,71);
    glEnd();




    //cloud right
    glColor3ub(229, 232, 229);
    circle1(3,2,c_position+95,70);
    glColor3ub(240, 241, 240 );
    circle1(5,3.5,c_position+90,70);
    glColor3ub(229, 232, 229);
    circle1(3,2,c_position+85,70);
    //cloud middle
    glColor3ub(229, 232, 229);
    circle1(3,2,c_position+75,68);
    glColor3ub(240, 241, 240 );
    circle1(5,3.5,c_position+70,68);
    glColor3ub(229, 232, 229);
    circle1(3,2,c_position+65,68);
    //cloud left
    glColor3ub(229, 232, 229);
    circle1(3,2,a_position+55,70);
    glColor3ub(240, 241, 240 );
    circle1(5,3.5,a_position+50,70);
    glColor3ub(229, 232, 229);
    circle1(3,2,a_position+45,70);



    glutSwapBuffers();
}


void init(){
	glClearColor(0.0, 0.0, 0.0, 0.0);
}



void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,110,0,80);
    glMatrixMode(GL_MODELVIEW);

}



//for left bus and car
void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1500/60,timer,0);

    switch(state)
    {
    case 1:
        if(x_position<110)
            x_position+=0.15;
        else
            state = -1;
        break;

  case -1:
        if(x_position>0)
            x_position-=50;
        else
            state = 1;
        break;
    }

}


//for small boat
void timer1(int)
{
    glutPostRedisplay();
    glutTimerFunc(1500/60,timer1,0);

    switch(n)
    {
    case 1:
        if(n_position<110)
            n_position+=0.10;
        else
            n = -1;
        break;

  case -1:
        if(n_position>0)
            n_position-=50;
        else
            n = 1;
        break;
    }

}


//airplane and left cloud
void timer2(int)
{
    glutPostRedisplay();
    glutTimerFunc(1500/60,timer2,0);

    switch(a)
    {
    case 1:
        if(a_position<110)
            a_position+=0.075;
        else
            a = -1;
        break;

  case -1:
        if(a_position>0)
            a_position-=50;
        else
            a = 1;
        break;
    }

}



//right and middle cloud
void timer3(int)
{
    glutPostRedisplay();
    glutTimerFunc(2500/60,timer3,0);

    switch(c)
    {
    case 1:
        if(c_position>-100)
            c_position-=0.25;
        else
            c = -1;
        break;

    case -1:
        if(c_position<20)
            c_position+=50;
        else
            c = 1;
        break;

    }

}


//right bus and car
void timer4(int)
{
    glutPostRedisplay();
    glutTimerFunc(2500/60,timer4,0);

    switch(bc)
    {
    case 1:
        if(bc_position>-100)
            bc_position-=0.15;
        else
            bc = -1;
        break;

    case -1:
        if(bc_position<20)
            bc_position+=50;
        else
            bc = 1;
        break;

    }

}



// for Ship
void timer5(int)
{
    glutPostRedisplay();
    glutTimerFunc(2500/60,timer5,0);

    switch(sh)
    {
    case 1:
        if(sh_position>-100)
            sh_position-=0.10;
        else
            sh = -1;
        break;

    case -1:
        if(sh_position<20)
            sh_position+=50;
        else
            sh = 1;
        break;

    }

}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600,500);
glutInitWindowPosition (50, 50);
glutCreateWindow ("City_View");

glutReshapeFunc(reshape);
glutTimerFunc(1000,timer,0);
glutTimerFunc(1000,timer1,0);
glutTimerFunc(1000,timer2,0);
glutTimerFunc(1000,timer3,0);
glutTimerFunc(1000,timer4,0);
glutTimerFunc(1000,timer5,0);
glutDisplayFunc(display);
init ();
glutIdleFunc(Idle);
glutMainLoop();
return 0;
}
