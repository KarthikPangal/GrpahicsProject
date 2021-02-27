#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<time.h>
GLfloat house[9][2]={{100,100},{100,300},{250,300},{250,100},{175,400},{150,100},{150,150},{200,150},{200,100}};
GLfloat jfo[][3]={{673,280,0},{683,258,0},{725,241,0},{754,236,0},{808,232,0},{839,240,0},{845,260,0},{841,283,0}};
int delay=10;
int cmv=0.0;
int z1;
int smv=0.0;
int up=0;
int x;
float cd=400.0;
float lhu=0.0;
float hmv1=0.0;
float y;
float u=0.0;
float v=0.0;
int i,flag=0;
float p1,p2;
float h[9][3]={{0.0,0.0,0.0},{100.0,3000.0,0.0},{250.0,300.0,0.0},{250.0,100.0,0.0},{175.0,400.0,0.0},{150.0,100.0,0.0},{150.0,150.0,0.0},{200.0,150.0,0.0},{200.0,100.0,0.0}};
float t1=0,k1=0,theta=0,r1=0.0;
float t2=-10.0,k2=-10.0;
float mv=0.0,z=0.0;
float mv1=0.0;
float decesion=1.0;
float j=0.0,a=0.0;
float m=1.0;
float e=0.0;
float s=0.0;
float hmv=0.0;
float zh=0.0;
float zh1=1.0;
float getSet=0.0;
float fu=0.0;
float fd=0.0;
int chmv=0.0;
int cmv1=0.0;
void timer(int v){
	y=y+1.8;
	x=x+2;
	if(x>2400 && x<=4000){
		flag=1;
		cmv1=cmv1+2;
	}
	if(x>4000 && x<=6000.0){
		flag=2;
		cmv=cmv+2;
		u=u+1;
		if(x>5900)
		cmv=2900;
		if(u>60 &&u<200){
			smv=smv+1;
		}
	}
		if(x>6000 && x<6600){
			flag=3;
			delay=60;
			if(lhu>80){
				hmv1=hmv1+0;
				r1=r1+0;
     mv=mv+0;
     mv1=mv1+0;
     hmv=hmv-0;
     z=z+0;
     zh=zh+0;
     j=j+0;
     a=a+0;
     e=e+0;
	 s=s+0; 
	 r1=r1-0;
     	y=y+0;
     	z=z-0;
     	j=j-0;
     	a=a-0;
     	e=e-0;
     	s=s-0;
     	lhu=lhu+0;
     	hmv=hmv+0;
     	zh=zh-0;
			}
			else{
			hmv1=hmv1+1;
			if(decesion==1.0){
     r1=r1+1;
     mv=mv+1;
     mv1=mv1+2;
     hmv=hmv-1.4;
     z=z+1;
     up=up+1;
     zh=zh+2;
     zh1=zh1+1;
     j=j+1;
     a=a+1;
     e=e+0.5;
	 s=s+2; 
     if(a>5)
     m=0.0;
     else
     	m=1.0;
}

     
     if(j>5 || m==0.0){
     	r1=r1-1.0;
     	y=y+1.0;
     	z=z-1.0;
     	j=j-1.0;
     	a=a-1.0;
     	e=e-0.5;
     	s=s-2;
     	lhu++;
     	hmv=hmv+1.4;
     	zh=zh-2;
     	zh1=zh1-1;
     	decesion=0.0;
     }
     	if(r1<-5.0)
     	decesion=1.0;     		 

		}
	}
if(x>=6600&&x<9000){
flag=4;
delay=10;
getSet=getSet+1;
if(getSet>20&&getSet!=1){
fu=fu+1;
fd=fd+1;
}
if(fu>880){
fu=890;
fd=-1000;
getSet=1.0;
}
}
if(x>=9000){
	flag=5;
	if(chmv==0||chmv<2000)
	chmv=chmv+1;
	if(chmv>=2000)
	chmv=0;
}

	glutPostRedisplay();
	glutTimerFunc(delay,timer,0);
}
void salutingSoldier(){
	//shirt
	glColor3f(0.0,0.0,0.8);
  		glBegin(GL_POLYGON);
  		glVertex3f(90,300,0.0);
  		glVertex3f(190,300.0,0.0);
  		glVertex3f(210,700,0.0);
  		glVertex3f(70,700,0.0);
  		glEnd();
  		
  		//Finger
  		glColor3f(1.0,0.5,0.5);
  		glBegin(GL_POLYGON);
  		glVertex3f(230,500,0.0);
  		glVertex3f(220,500.0,0.0);
  		glVertex3f(220,460,0.0);
  		glVertex3f(240,450,0.0);
  		glEnd();
  		//other hand
  		glColor3f(0.0,0.0,0.8);
  		glBegin(GL_POLYGON);
  		glVertex3f(210,700,0.0);
  		glVertex3f(230,700.0,0.0);
  		glVertex3f(240,500,0.0);
  		glVertex3f(210,480,0.0);
  		glEnd();
  		//Buttons
  		glPushMatrix();
  		glTranslatef(-60.0,-50.0,0.0);
  		glColor3f(0.0,0.0,0.0);
  		glPointSize(6.0);
  		glBegin(GL_POINTS);
  		glVertex3f(200,700,0.0);
  		glEnd();
  		glPopMatrix();
  		glPushMatrix();
  		glTranslatef(-60.0,-90.0,0.0);
  		glColor3f(0.0,0.0,0.0);
  		glPointSize(6.0);
  		glBegin(GL_POINTS);
  		glVertex3f(200,700,0.0);
  		glEnd();
  		glPopMatrix();
  		glPushMatrix();
  		glTranslatef(-60.0,-130.0,0.0);
  		glColor3f(0.0,0.0,0.0);
  		glPointSize(6.0);
  		glBegin(GL_POINTS);
  		glVertex3f(200,700,0.0);
  		glEnd();
  		glPopMatrix();
  		glPushMatrix();
  		glTranslatef(-60.0,-170.0,0.0);
  		glColor3f(0.0,0.0,0.0);
  		glPointSize(6.0);
  		glBegin(GL_POINTS);
  		glVertex3f(200,700,0.0);
  		glEnd();
  		glPopMatrix();
  		glPushMatrix();
  		glTranslatef(-60.0,-210.0,0.0);
  		glColor3f(0.0,0.0,0.0);
  		glPointSize(6.0);
  		glBegin(GL_POINTS);
  		glVertex3f(200,700,0.0);
  		glEnd();
  		glPopMatrix();
  		glPushMatrix();
  		glTranslatef(-60.0,-250.0,0.0);
  		glColor3f(0.0,0.0,0.0);
  		glPointSize(6.0);
  		glBegin(GL_POINTS);
  		glVertex3f(200,700,0.0);
  		glEnd();
  		glPopMatrix();
  		glPushMatrix();
  		glTranslatef(-60.0,-290.0,0.0);
  		glColor3f(0.0,0.0,0.0);
  		glPointSize(6.0);
  		glBegin(GL_POINTS);
  		glVertex3f(200,700,0.0);
  		glEnd();
  		glPopMatrix();
  		glPushMatrix();
  		glTranslatef(-60.0,-330.0,0.0);
  		glColor3f(0.0,0.0,0.0);
  		glPointSize(6.0);
  		glBegin(GL_POINTS);
  		glVertex3f(200,700,0.0);
  		glEnd();
  		glPopMatrix();
  		//neck
  		glColor3f(0.0,0.0,0.8);
  		glBegin(GL_POLYGON);
  		glVertex3f(115,700,0.0);
  		glVertex3f(115,750.0,0.0);
  		glVertex3f(170,750,0.0);
  		glVertex3f(170,700,0.0);
  		glEnd();
  		//face 
  		glPushMatrix();
  		glColor3f(1.0,0.7,0.7);
  		glScalef(1.0,2.0,0.0);
  		glTranslatef(140,415,0.0);
  		glutSolidSphere(50,100,100);
  		glPopMatrix();
  		//Mouth
  		glPushMatrix();
  		glColor3f(0.0,0.0,0.0);
  		glTranslatef(142,780,0.0);
  		glutSolidSphere(26,100,100);
  		glPopMatrix();
//  		//Hair
//  		glPushMatrix();
//  		glColor3f(0.0,0.0,0.0);
//  		//glScalef(1.0,2.0,0.0);
//  		glTranslatef(138,910,0.0);
//  		glutWireSphere(35,50,50);
//  		glPopMatrix();
  		//Mouth cover
  		glPushMatrix();
  		glColor3f(1.0,0.7,0.7);
  		glScalef(2.0,1.9,0.0);
  		glTranslatef(71.1,422,0.0);
  		glutSolidCube(25);
  		glPopMatrix();
	glColor3f(1.0,1.0,1.0);
  		glBegin(GL_POLYGON);
  		glVertex3f(100,-200,0.0);
  		glVertex3f(90,258.0,0.0);
  		glVertex3f(90,300,0.0);
  		glVertex3f(140,300,0.0);
  		glVertex3f(140,250,0.0);
  		glVertex3f(120,-200,0.0);
  		glEnd();
	    glColor3f(1.0,1.0,1.0);
  		glBegin(GL_POLYGON);
  		glVertex3f(100,-200,0.0);
  		glVertex3f(90,258.0,0.0);
  		glVertex3f(90,300,0.0);
  		glVertex3f(140,300,0.0);
  		glVertex3f(140,250,0.0);
  		glVertex3f(120,-200,0.0);
  		glEnd();
  		//eye1
  		 
  		glPushMatrix();
  		glColor3f(1.0,1.0,1.0);
  		glScalef(1.0,2.0,0.0);
  		glTranslatef(120,425,0.0);
  		glutSolidSphere(10,100,100);
  		glPopMatrix();
  		//Dhristi 1
  		glPushMatrix();
  		glColor3f(0.0,0.0,0.0);
  		glScalef(1.0,2.0,0.0);
  		glTranslatef(120,422,0.0);
  		glutSolidSphere(6,100,100);
  		glPopMatrix();
  		//eye2
  		glPushMatrix();
  		glColor3f(1.0,1.0,1.0);
  		glScalef(1.0,2.0,0.0);
  		glTranslatef(160,425,0.0);
  		glutSolidSphere(10,100,100);
  		glPopMatrix();
  		//Dhristi 2
  		glPushMatrix();
  		glColor3f(0.0,0.0,0.0);
  		glScalef(1.0,2.0,0.0);
  		glTranslatef(160,422,0.0);
  		glutSolidSphere(6,100,100);
  		glPopMatrix();
  		//Nose
  		glPushMatrix();
  		glColor3f(0.5,0.0,0.0);
  		glScalef(0.5,2.0,0.0);
  		glTranslatef(285,402,0.0);
  		glutSolidCube(20);
  		glPopMatrix();
  		//feet
  		glColor3f(0.0,0.0,0.0);
  		glBegin(GL_POLYGON);
  		glVertex3f(100,-200,0.0);
  		glVertex3f(120,-200,0.0);
  		glVertex3f(110,-250,0.0);
  		glVertex3f(90,-240,0.0);
  		glEnd();
  		glPushMatrix();
  		glTranslatef(50.0,0.0,0.0);
  		glColor3f(1.0,1.0,1.0);
  		glBegin(GL_POLYGON);
  		glVertex3f(100,-200,0.0);
  		glVertex3f(90,258.0,0.0);
  		glVertex3f(90,300,0.0);
  		glVertex3f(140,300,0.0);
  		glVertex3f(140,250,0.0);
  		glVertex3f(120,-200,0.0);
  		glEnd();
  		glBegin(GL_LINE_LOOP);
  		glVertex3f(100,-200,0.0);
  		glVertex3f(90,258.0,0.0);
  		glVertex3f(90,300,0.0);
  		glVertex3f(140,300,0.0);
  		glVertex3f(140,250,0.0);
  		glVertex3f(120,-200,0.0);
  		glEnd();
  		//feet
  		glColor3f(0.0,0.0,0.0);
  		glBegin(GL_POLYGON);
  		glVertex3f(100,-200,0.0);
  		glVertex3f(120,-200,0.0);
  		glVertex3f(110,-250,0.0);
  		glVertex3f(90,-240,0.0);
  		glEnd();
  		glPopMatrix();
  		//saluting hand
  		glColor3f(0.0,0.0,0.8);
  		glBegin(GL_POLYGON);
  		glVertex3f(70,700,0.0);
  		glVertex3f(20,770,0.0);
  		glVertex3f(10,730,0.0);
  		glVertex3f(80,660,0.0);
  		glEnd();
  		//saluting hand
  		glColor3f(0.0,0.0,0.8);
  		glBegin(GL_POLYGON);
  		glVertex3f(20,720,0.0);
  		glVertex3f(80,810,0.0);
  		glVertex3f(80,850,0.0);
  		glVertex3f(10,780,0.0);
  		glEnd();
  		//saluting finger
  		glColor3f(1.0,0.5,0.5);
  		glBegin(GL_POLYGON);
  		glVertex3f(80,830,0.0);
  		glVertex3f(80,840,0.0);
  		glVertex3f(110,870,0.0);
  		glVertex3f(100,830,0.0);
  		glEnd();
}
void EnglishFlag(){
	//Flag polygon
	glPushMatrix();
	glTranslatef(-200.0,-240.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,0,0.0);
	glVertex3f(-45.0,0,0.0);
	glVertex3f(-45.0,-100,0.0);
	glEnd();
	glPopMatrix();
	//Flag polygon 2
	glPushMatrix();
	glTranslatef(-200.0,-340.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,0,0.0);
	glVertex3f(-45.0,0,0.0);
	glVertex3f(-45.0,-100,0.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-200.0,-440.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,0,0.0);
	glVertex3f(-45.0,0,0.0);
	glVertex3f(-45.0,-100,0.0);
	glEnd();
	glPopMatrix();
	//Vertical red lines
	glPushMatrix();
	glTranslatef(-200.0,-240.0,0.0);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-160.0,0.0,0.0);
	glVertex3f(-150.0,0,0.0);
	glVertex3f(-150.0,-300,0.0);
	glVertex3f(-160.0,-300,0.0);
	glEnd();
	glPopMatrix();
	//Horizontal red lines
	glPushMatrix();
	//glRotatef(90.0,0,0,1);
	glTranslatef(-144.0,-405.0,0.0);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-100.0,0.0,0.0);
	glVertex3f(-100.0,20,0.0);
	glVertex3f(-320.0,20,0.0);
	glVertex3f(-320.0,0,0.0);
	glEnd();
	glPopMatrix();
}
void Circle_draw(int xm,int ym,int rm)
 {   
     glPointSize(2.0);
     glBegin(GL_POINTS);
     glColor3f(0.0,0.0,1.0);
     for(theta=0;theta<360;theta++)
     {
      glVertex2f(xm+(rm*cos(theta)),ym+(rm*sin(theta)));
      }
      glEnd();
      //STROKES
      glBegin(GL_LINES);
     glColor3f(0.0,0.0,1.0);
     for(theta=0;theta<=24;theta++)
     {
     	glVertex2f(xm,ym);
      glVertex2f(xm+(rm*cos(theta)),ym+(rm*sin(theta)));
      }
      glEnd();
      }
      void wheel()
      {
        GLint xc=100,yc=100,r=25;
        GLint i,n=50;
           for(i=0;i<n;i=i+3)
           {
           Circle_draw(xc,yc,r);
            }
            }
      void parallelpiped(int x1,int x2,int y1,int y2)
      {
           glColor3f(0.0,0.0,1.0);
            glBegin(GL_LINE_LOOP);
            glVertex2i(x1,y1);
              glVertex2i(x2,y1);
                glVertex2i(x2,y2);
                  glVertex2i(x1,y2);
                  glEnd();
                 
     }          
void parallelpiped_draw()
{
     int x1=200,x2=300,y1=100,y2=175;
     GLint i,n=40;
     for(i=0;i<n;i=i+2)
     {
                       parallelpiped(x1+i,x2+i,y1+i,y2+i);
                       }
                       }
void flagPostBase(){
	//Flag post base 1
	glPushMatrix();
	glTranslatef(100.0,-440.0,0.0);
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,0,0.0);
	glVertex3f(-45.0,0,0.0);
	glVertex3f(-45.0,-100,0.0);
	glEnd();
	glPopMatrix();
	//Flag post base 2
	glPushMatrix();
	glTranslatef(100.0,-540.0,0.0);
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-285.0,-100,0.0);
	glVertex3f(-285.0,0,0.0);
	glVertex3f(-15.0,0,0.0);
	glVertex3f(-15.0,-100,0.0);
	glEnd();
	glPopMatrix();
	//Flag post base 3
	glPushMatrix();
	glTranslatef(100.0,-640.0,0.0);
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-315.0,-100,0.0);
	glVertex3f(-315.0,0,0.0);
	glVertex3f(15.0,0,0.0);
	glVertex3f(15.0,-100,0.0);
	glEnd();
	glPopMatrix();
	//Flag post base 4
	glPushMatrix();
	glTranslatef(100.0,-740.0,0.0);
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-345.0,-100,0.0);
	glVertex3f(-345.0,0,0.0);
	glVertex3f(55.0,0,0.0);
	glVertex3f(55.0,-100,0.0);
	glEnd();
	glPopMatrix();
}                       
void IndianFlag(){
	//Flag polygon
	glPushMatrix();
	glTranslatef(-200.0,-240.0,0.0);
	glColor3f(1.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,0,0.0);
	glVertex3f(-45.0,0,0.0);
	glVertex3f(-45.0,-100,0.0);
	glEnd();
	glPopMatrix();
	//Flag polygon 2
	glPushMatrix();
	glTranslatef(-200.0,-340.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,0,0.0);
	glVertex3f(-45.0,0,0.0);
	glVertex3f(-45.0,-100,0.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-200.0,-440.0,0.0);
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,0,0.0);
	glVertex3f(-45.0,0,0.0);
	glVertex3f(-45.0,-100,0.0);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslatef(-445,-490,0);
    wheel();
    glPopMatrix();
    //Wheel 2
    glPushMatrix();
    //wheel();
    glPopMatrix();

}
	GLint theta1;
void parallePiped(GLint x1,GLint y1,GLint x2,GLint y2){
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1,y1);
	glVertex2f(x1,y2);
	glVertex2f(x2,y2);
	glVertex2f(x2,y1);
	glEnd();
}
void parallelPiped_draw(){
	GLint x1=200;
	GLint y1=200;
	GLint x2=300;
	GLint y2=300;
	GLint n=50;
	GLint k;
	for(k=0;k<=n;k=k+2){
		parallePiped(x1+k,y1+k,x2+k,y2+k);
	}
}
void circle_draw(GLint xm,GLint ym,GLint rm){
	for(theta1=0;theta1<=360;theta1=theta1+4){
		glColor3f(1.0,0.0,1.0);
		glBegin(GL_LINES);
		glVertex2f(xm,ym);
		glVertex2f(xm+(rm*cos(theta1)),ym+(rm*sin(theta1)));
		glEnd();
	}
}
void cylinder_draw(){
	GLint xc=100;
	GLint yc=100;
	GLint n=50;
	GLint rc=50;
	GLint i;
	for(i=0;i<=n;i=i+10){
		circle_draw(xc+i,yc+i,rc+i);
	}
}
 void hfg2(){
	//Filling of right hand thumb
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-145.0,-55,0.0);
	glVertex3f(-165.0,-70,0.0);
	glVertex3f(-205.0,-55,0.0);
	glVertex3f(-210.0,-95,0.0);
    glVertex3f(-225.0,-100,0.0);
    glVertex3f(-222.0,-35,0.0);
    glVertex3f(-180.0,-35,0.0);
	glEnd();
	//Filling of right hand fingers 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-225.0,-100,0.0);
	glVertex3f(-225.0,-80,0.0);
	glVertex3f(-255.0,-80,0.0);
	glEnd();
	//Filling of right hand fingers 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-225.0,-80,0.0);
	glVertex3f(-265.0,-80,0.0);
	glVertex3f(-265.0,-50,0.0);
	glVertex3f(-225.0,-50,0.0);
	
	glEnd();
	//Filling of right hand fingers 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,-140,0.0);
	glVertex3f(-210.0,-140,0.0);
	glVertex3f(-210.0,-100,0.0);
	
	glEnd();
		//Filling of right hand fingers 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-210.0,-140,0.0);
	glVertex3f(-210.0,-100,0.0);
	glVertex3f(-165.0,-90,0.0);
	//glVertex3f(-165.0,-30,0.0);
	
	glEnd();
	//Filling of right hand fingers 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-210.0,-140,0.0);
	glVertex3f(-165.0,-90,0.0);
	glVertex3f(-205.0,-55,0.0);
	
	glEnd();
	//Filling of right hand fingers 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-165.0,-90,0.0);
	glVertex3f(-205.0,-55,0.0);
	glVertex3f(-165.0,-70,0.0);
glVertex3f(-165.0,-90,0.0);
	
	glEnd();
	//Filling of right hand fingers 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-165.0,-90,0.0);
	glVertex3f(-165.0,-70,0.0);
	glVertex3f(-145.0,-55,0.0);
    glVertex3f(-145.0,-90,0.0);
//	
	glEnd();
//Filling of right hand 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,40,0.0);
	glVertex3f(50.0,-40,0.0);
	glVertex3f(25.0,-30,0.0);
	glVertex3f(-9.0,10,0.0);
	glEnd();
	//Filling of right hand 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(50.0,-40,0.0);
	glVertex3f(-70.0,-90,0.0);
	glVertex3f(-75.0,-55,0.0);
	glVertex3f(25.0,-30,0.0);
	glEnd();
	//Filling of right hand 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-9.0,10,0.0);
	glVertex3f(-9.0,50,0.0);
	glVertex3f(-10.0,50,0.0);
	glVertex3f(-10.0,40,0.0);
	//glVertex3f(25.0,-30,0.0);
	glEnd();
	//Filling of right hand 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-70.0,-90,0.0);
	glVertex3f(-75.0,-55,0.0);
	glVertex3f(-145.0,-55,0.0);
	glVertex3f(-145.0,-90,0.0);
	glEnd();
	//HandJoint 1
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex3f(-10.0,10,0.0);
	glVertex3f(50.0,-40,0.0);
	glVertex3f(50.0,-40,0.0);
	glVertex3f(-70.0,-90,0.0);
	glVertex3f(-145.0,-55,0.0);
	glVertex3f(-165.0,-70,0.0);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-165.0,-70,0.0);
	glVertex3f(-205.0,-55,0.0);
	glVertex3f(-205.0,-55,0.0);
	glVertex3f(-210.0,-95,0.0);
	glVertex3f(-210.0,-95,0.0);
	glVertex3f(-225.0,-100,0.0);
	glVertex3f(-225.0,-100,0.0);
	glVertex3f(-222.0,-35,0.0);
	glVertex3f(-222.0,-35,0.0);
	glVertex3f(-180.0,-35,0.0);
	glVertex3f(-180.0,-35,0.0);
	glVertex3f(-145.0,-55,0.0);
	glVertex3f(-225.0,-100,0.0);
	glVertex3f(-255.0,-100,0.0);
    glColor3f(0.0,0.0,0.0);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,-80,0.0);
	glVertex3f(-255.0,-80,0.0);
	glVertex3f(-225.0,-80,0.0);
	glVertex3f(-255.0,-80,0.0);
	glVertex3f(-265.0,-80,0.0);
	glVertex3f(-265.0,-80,0.0);
	glVertex3f(-265.0,-50,0.0);
	glVertex3f(-265.0,-50,0.0);
	glVertex3f(-225.0,-50,0.0);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,-120,0.0);
	glVertex3f(-255.0,-120,0.0);
	glVertex3f(-210.0,-120,0.0);
	glVertex3f(-210.0,-120,0.0);
	glVertex3f(-210.0,-95,0.0);
	glVertex3f(-255.0,-120,0.0);
	glVertex3f(-255.0,-140,0.0);
	glVertex3f(-255.0,-140,0.0);
	glVertex3f(-210.0,-140,0.0);
	glVertex3f(-210.0,-140,0.0);
	glVertex3f(-210.0,-95,0.0);
	glVertex3f(-210.0,-140,0.0);
	glVertex3f(-165.0,-90,0.0);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-165.0,-90,0.0);
	glVertex3f(-70.0,-90,0.0);
	glEnd();
 }
void hgf1(){
	//Filling of hand 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-290.0,0.0);
	glVertex3f(-235.0,-290.0,0.0);
	glVertex3f(-235.0,-270.0,0.0);
	glVertex3f(-220.0,-270.0,0.0);
	glEnd();
	//Filling of hand 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-270.0,0.0);
	glVertex3f(-240.0,-270.0,0.0);
	glVertex3f(-240.0,-250.0,0.0);
	glVertex3f(-220.0,-250.0,0.0);
	glEnd();
	//Filling of hand 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-250.0,0.0);
	glVertex3f(-245.0,-250.0,0.0);
	glVertex3f(-245.0,-230.0,0.0);
	glVertex3f(-220.0,-230.0,0.0);
	glEnd();
	//Filling of hand 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-230.0,0.0);
	glVertex3f(-250.0,-230.0,0.0);
	glVertex3f(-250.0,-200.0,0.0);
	glVertex3f(-240.0,-190.0,0.0);
	glVertex3f(-210.0,-190.0,0.0);
    glVertex3f(-190.0,-220.0,0.0);
	//Filling of hand 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-180.0,-240,0.0);
	glVertex3f(-220.0,-230.0,0.0);
	glVertex3f(-220.0,-250.0,0.0);
	glVertex3f(-180.0,-240,0.0);
	glEnd();
	//Filling of hand 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-230.0,0.0);
	glVertex3f(-220.0,-290.0,0.0);
	glVertex3f(-180.0,-240,0.0);
	glEnd();
	//Left thumb of Gandhiji's hand 
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-240.0,-190.0,0.0);
	glVertex3f(-240.0,-180.0,0.0);
	glVertex3f(-210.0,-190.0,0.0);
	glEnd();
	//HandJoint 1
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex3f(30.0,10,0.0);
	glVertex3f(-10.0,20.0,0.0);
	glVertex3f(-10.0,20.0,0.0);
	glVertex3f(-30.0,-150.0,0.0);
	glVertex3f(-30.0,-150.0,0.0);
	glVertex3f(-190.0,-220.0,0.0);
	glVertex3f(30.0,10,0.0);
	glVertex3f(-10.0,-140,0.0);
	glVertex3f(-10.0,-140,0.0);
	glVertex3f(-20.0,-180,0.0);
	glVertex3f(-20.0,-180,0.0);
	glVertex3f(-180.0,-240,0.0);
	glVertex3f(-190.0,-220.0,0.0);
	glVertex3f(-210.0,-190.0,0.0);
	glVertex3f(-240.0,-190.0,0.0);
	glVertex3f(-240.0,-190.0,0.0);
	glVertex3f(-250.0,-200.0,0.0);
	glVertex3f(-250.0,-200.0,0.0);
	glVertex3f(-250.0,-230.0,0.0);
	glVertex3f(-250.0,-230.0,0.0);
	glVertex3f(-220.0,-230.0,0.0);
	glVertex3f(-245.0,-230.0,0.0);
	glVertex3f(-245.0,-250.0,0.0);
	glVertex3f(-245.0,-250.0,0.0);
	glVertex3f(-220.0,-250.0,0.0);
	glVertex3f(-240.0,-250.0,0.0);
	glVertex3f(-240.0,-270.0,0.0);
	glVertex3f(-240.0,-270.0,0.0);
	glVertex3f(-220.0,-270.0,0.0);
	glVertex3f(-235.0,-270.0,0.0);
	glVertex3f(-235.0,-290.0,0.0);
	glVertex3f(-235.0,-290.0,0.0);
	glVertex3f(-220.0,-290.0,0.0);
	glVertex3f(-220.0,-290.0,0.0);
	glVertex3f(-180.0,-240,0.0);
	glEnd();
	//Filling of hand 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(30.0,10,0.0);
	glVertex3f(-10.0,20.0,0.0);
	glVertex3f(-30.0,-150.0,0.0);
	glVertex3f(-20.0,-180,0.0);
	glEnd();
	//Filling of hand 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-30.0,-150.0,0.0);
	glVertex3f(-20.0,-180.0,0.0);
	glVertex3f(-180.0,-240,0.0);
	glVertex3f(-190.0,-220.0,0.0);
	glEnd();
}
void lfg1(){
	//LegJoint
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,-30.0);
	glVertex3f(50.0,0.0,-30.0);
	glVertex3f(50.0,20,-30.0);
	glVertex3f(0.0,20.0,-30.0);
	glEnd();
	//Leg
	 glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,-30.0);
	glVertex3f(-10.0,-500.0,-30.0);
	glVertex3f(30.0,-510,-30.0);
	glVertex3f(50.0,-50.0,-30.0);
	glVertex3f(50.0,0.0,-30.0);
	glEnd();
	//feet
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,-500.0,-30.0);
	glVertex3f(20.0,-780,-30.0);
	glVertex3f(30.0,-780,-30.0);
	glVertex3f(30.0,-510,-30.0);
	glEnd();
}
void lgf(){
	//LegJoint
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(50.0,0.0,0.0);
	glVertex3f(50.0,20,0.0);
	glVertex3f(0.0,20.0,0.0);
	glEnd();
    //Leg
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(-10.0,-500.0,0.0);
	glVertex3f(30.0,-510,0.0);
	glVertex3f(50.0,-50.0,0.0);
	glVertex3f(50.0,0.0,0.0);
	glEnd();
	//feet
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,-500.0,0.0);
	glVertex3f(20.0,-780,0.0);
	glVertex3f(30.0,-780,0.0);
	glVertex3f(30.0,-510,0.0);
	glEnd();
}
void gandhiFollowers(){
//Front face of UpperBody 1
	glColor3f(0.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(70.0,20,0.0);
	glVertex3f(-20.0,20.0,0.0);
	glVertex3f(-20.0,100.0,0.0);
	glVertex3f(70.0,120.0,0.0);
	glEnd();
	//Front face of UpperBody 2
	glColor3f(0.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-20.0,120.0,0.0);
	glVertex3f(70.0,120.0,0.0);
	glVertex3f(60.0,520.0,0.0);
	glVertex3f(-10.0,480.0,0.0);
	glEnd();
	//Left face of upperBody
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-20.0,20.0,0.0);
	glVertex3f(-20.0,20.0,-30.0);
	glVertex3f(-20.0,520.0,-30.0);
	glVertex3f(-20.0,520.0,0.0);
	glEnd();
	//Right face of upperBody
	glColor3f(0.0,0.0,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(70.0,20.0,0.0);
	glVertex3f(70.0,20.0,-30.0);
	glVertex3f(70.0,520.0,-30.0);
	glVertex3f(70.0,520.0,0.0);
	glEnd();
	//Back face of UpperBody 1
	glColor3f(0.0,0.0,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(70.0,20,-30.0);
	glVertex3f(-20.0,20.0,-30.0);
	glVertex3f(-20.0,100.0,-30.0);
	glVertex3f(70.0,120.0,-30.0);
	glEnd();
	//Back face of UpperBody 2
	glColor3f(0.0,0.0,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-20.0,100.0,-30.0);
	glVertex3f(70.0,120.0,-30.0);
	glVertex3f(60.0,520.0,-30.0);
	glVertex3f(-10.0,480.0,-30.0);
	glEnd();
	//Filling of Gandhi's neck 5
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-100.0,632.0,0.0);
	glVertex3f(-100.0,585.0,0.0);
	glVertex3f(-95.0,590.0,0.0);
	glVertex3f(-95.0,632.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 6
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(-40.0,842.0,0.0);
	glVertex3f(-20.0,842.0,0.0);
	glVertex3f(-20.0,802.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 7
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-75.0,692.0,0.0);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(40.0,765.0,0.0);
	glVertex3f(40.0,692.0,0.0);
    glEnd();
    //Filling of Gandhi's neck 8
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-100.0,632.0,0.0);
	glVertex3f(-75.0,692.0,0.0);
	glVertex3f(40.0,692.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 9
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-95.0,632.0,0.0);
	glVertex3f(-95.0,590.0,0.0);
	glVertex3f(-75.0,590.0,0.0);
	glVertex3f(-75.0,632.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 10
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-75.0,550.0,0.0);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-55.0,650.0,0.0);
	glVertex3f(-75.0,650.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 11
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-55.0,650.0,0.0);
	glVertex3f(-39.0,650.0,0.0);
	glVertex3f(-39.0,550.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 12
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-39.0,650.0,0.0);
	glVertex3f(-39.0,550.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
//	glVertex3f(-39.0,550.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 13
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glVertex3f(52.0,565.0,0.0);
//	glVertex3f(-20.0,565.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 14
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glVertex3f(-40.0,645.0,0.0);
	//glVertex3f(52.0,565.0,0.0);
//	glVertex3f(-20.0,565.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Gandhi's neck with face and head
	glColor3f(0.0,0.0,0.0);
	glLineWidth(0.1);
	glBegin(GL_LINES);
	glVertex3f(-10.0,480.0,0.0);
	glVertex3f(60.0,520.0,0.0);	
	glVertex3f(60.0,520.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glColor3f(1.0,0.0,0.0);	
	glVertex3f(-10.0,480.0,0.0);
	glVertex3f(-10.0,505.0,0.0);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-10.0,505.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(-40.0,510.0,0.0);
	glVertex3f(-40.0,510.0,0.0);
	glVertex3f(-60.0,510.0,0.0);
	glVertex3f(-60.0,510.0,0.0);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-75.0,550.0,0.0);
//	 
	glVertex3f(-75.0,550.0,0.0);
	glVertex3f(-75.0,590.0,0.0);
//	glColor3f(0.0,0.0,0.0);
	glVertex3f(-75.0,590.0,0.0);
	glVertex3f(-95.0,590.0,0.0);
	glVertex3f(-95.0,590.0,0.0);
	glVertex3f(-100.0,585.0,0.0);
	glVertex3f(-100.0,585.0,0.0);
	glVertex3f(-100.0,592.0,0.0);
	glVertex3f(-100.0,592.0,0.0);
	glVertex3f(-100.0,632.0,0.0);
	glVertex3f(-100.0,632.0,0.0);
	glVertex3f(-75.0,692.0,0.0);
	glVertex3f(-75.0,692.0,0.0);
	glVertex3f(-65.0,762.0,0.0);
	glVertex3f(-65.0,762.0,0.0);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(-40.0,842.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glVertex3f(40.0,692.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 1
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-10.0,480.0,0.0);
	glVertex3f(-10.0,505.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glVertex3f(60.0,520.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 2
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-10.0,505.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glEnd();
//Filling for Gandhi's mouth
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-75.0,590.0,0.0);
	glVertex3f(-55.0,590.0,0.0);
	glVertex3f(-75.0,550.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 3
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-40.0,550.0,0.0);
	glVertex3f(-40.0,510.0,0.0);
	glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 4
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-40.0,550.0,0.0);
	glVertex3f(-40.0,510.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glEnd();
	//Waist Band
	glPushMatrix();
	glColor3f(0.0,0.0,0.7);
	glScalef(1.4,0.3,30.0);
	glTranslatef(20.0,85.0,30.0);
	glutSolidSphere(32,100,100);
	glPopMatrix();
//Sphere for Gandhi's eyebrow
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glScalef(1.9,2.1,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(-22.0,350.0,30.0);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//Polygon to cover eyebrow
	glPushMatrix();
	glColor3f(1.0,0.7,0.7);
//	glRotatef(1,0,0,1);
	glTranslatef(-38.0,720.0,0.0);
	glScalef(12.0,12.0,0.0);
	glutSolidCube(5.0);
	glPopMatrix();
//Sphere for Gndhiji's white part of eye
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glScalef(0.5,1.1,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(-80.0,656.0,30.0);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//Sphere for Gndhiji's black part of eye
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glScalef(0.5,1.1,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(-78.0,646.0,30.0);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//Gandhiji's ear 1
	glPushMatrix();
	glScalef(0.7,1.0,0.0);
	glTranslatef(0.5,19.0,0.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.0,655.0,0.0);
	glVertex3f(20.0,655.0,0.0);
	glVertex3f(25,665.0,0.0);
	glVertex3f(25.0,700.0,0.0);
	glVertex3f(20.0,715.0,0.0);
	glVertex3f(0.0,715.0,0.0);
	glVertex3f(-5.0,700.0,0.0);
	glVertex3f(-5.0,665.0,0.0);
	glVertex3f(0.0,655.0,0.0);
	glEnd();
	glPopMatrix();
	//Sphere for Gndhiji's ear
	glPushMatrix();
	glColor3f(1.0,0.6,0.6);
	glScalef(0.4,1.3,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(16.0,544.0,30.0);
	glutSolidSphere(26,100,100);
	glPopMatrix();
	//Sphere for Gndhiji's ear inside
	glPushMatrix();
	glColor3f(1.0,0.5,0.5);
	glScalef(0.5,1.3,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(16.0,544.0,30.0);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//cover up sphere for Gndhiji's ear
	glPushMatrix();
	glColor3f(0.2,0.2,0.2);
	glScalef(0.1,0.7,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(59.0,1010.0,0.0);
	glutSolidSphere(26,100,100);
	glPopMatrix();
	//Cap of Gandhi's follower 
	glPushMatrix();
//	glTranslatef(0.0,50.0,0.0);
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(40.0,765.0,0.0);
	glVertex3f(50.0,835.0,0.0);
	glVertex3f(-70.0,840.0,0.0);
	glEnd();	
    glPopMatrix();
//collar
	glColor3f(0.0,0.0,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(60.0,520.0,-30.0);
	glVertex3f(-10.0,480.0,-30.0);
	glVertex3f(-10.0,490.0,-30.0);
	glVertex3f(60.0,490.0,-30.0);
	glEnd();
	//collar
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(60.0,520.0,-30.0);
	glVertex3f(-10.0,490.0,-30.0);
	glVertex3f(-10.0,480.0,-30.0);
	glVertex3f(60.0,480.0,-30.0);
	glEnd();
}
void h2(){
	//Filling of right hand thumb
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-145.0,-55,0.0);
	glVertex3f(-165.0,-70,0.0);
	glVertex3f(-205.0,-55,0.0);
	glVertex3f(-210.0,-95,0.0);
    glVertex3f(-225.0,-100,0.0);
    glVertex3f(-222.0,-35,0.0);
    glVertex3f(-180.0,-35,0.0);
	glEnd();
	//Filling of right hand fingers 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-225.0,-100,0.0);
	glVertex3f(-225.0,-80,0.0);
	glVertex3f(-255.0,-80,0.0);
	glEnd();
	//Filling of right hand fingers 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-225.0,-80,0.0);
	glVertex3f(-265.0,-80,0.0);
	glVertex3f(-265.0,-50,0.0);
	glVertex3f(-225.0,-50,0.0);
	
	glEnd();
	//Filling of right hand fingers 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,-140,0.0);
	glVertex3f(-210.0,-140,0.0);
	glVertex3f(-210.0,-100,0.0);
	
	glEnd();
		//Filling of right hand fingers 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-210.0,-140,0.0);
	glVertex3f(-210.0,-100,0.0);
	glVertex3f(-165.0,-90,0.0);
	//glVertex3f(-165.0,-30,0.0);
	
	glEnd();
	//Filling of right hand fingers 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-210.0,-140,0.0);
	glVertex3f(-165.0,-90,0.0);
	glVertex3f(-205.0,-55,0.0);
	
	glEnd();
	//Filling of right hand fingers 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-165.0,-90,0.0);
	glVertex3f(-205.0,-55,0.0);
	glVertex3f(-165.0,-70,0.0);
glVertex3f(-165.0,-90,0.0);
	
	glEnd();
	//Filling of right hand fingers 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
    glVertex3f(-165.0,-90,0.0);
	glVertex3f(-165.0,-70,0.0);
	glVertex3f(-145.0,-55,0.0);
    glVertex3f(-145.0,-90,0.0);
//	
	glEnd();
	glColor3f(0.2,0.0,0.0);
	glPushMatrix();
	glTranslatef(-200.0,-240.0,0.0);
	glScalef(2.0,250.5,0.0);
	glutSolidCube(5.0);
	glPopMatrix();
//Filling of right hand 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,40,0.0);
	glVertex3f(50.0,-40,0.0);
	glVertex3f(25.0,-30,0.0);
	glVertex3f(-9.0,10,0.0);
	glEnd();
	//Filling of right hand 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(50.0,-40,0.0);
	glVertex3f(-70.0,-90,0.0);
	glVertex3f(-75.0,-55,0.0);
	glVertex3f(25.0,-30,0.0);
	glEnd();
	//Filling of right hand 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-9.0,10,0.0);
	glVertex3f(-9.0,50,0.0);
	glVertex3f(-10.0,50,0.0);
	glVertex3f(-10.0,40,0.0);
	//glVertex3f(25.0,-30,0.0);
	glEnd();
	//Filling of right hand 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-70.0,-90,0.0);
	glVertex3f(-75.0,-55,0.0);
	glVertex3f(-145.0,-55,0.0);
	glVertex3f(-145.0,-90,0.0);
	glEnd();
	//HandJoint 1
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex3f(-10.0,10,0.0);
	glVertex3f(50.0,-40,0.0);
	glVertex3f(50.0,-40,0.0);
	glVertex3f(-70.0,-90,0.0);
	glVertex3f(-145.0,-55,0.0);
	glVertex3f(-165.0,-70,0.0);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-165.0,-70,0.0);
	glVertex3f(-205.0,-55,0.0);
	glVertex3f(-205.0,-55,0.0);
	glVertex3f(-210.0,-95,0.0);
	glVertex3f(-210.0,-95,0.0);
	glVertex3f(-225.0,-100,0.0);
	glVertex3f(-225.0,-100,0.0);
	glVertex3f(-222.0,-35,0.0);
	glVertex3f(-222.0,-35,0.0);
	glVertex3f(-180.0,-35,0.0);
	glVertex3f(-180.0,-35,0.0);
	glVertex3f(-145.0,-55,0.0);
	glVertex3f(-225.0,-100,0.0);
	glVertex3f(-255.0,-100,0.0);
    glColor3f(0.0,0.0,0.0);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,-80,0.0);
	glVertex3f(-255.0,-80,0.0);
	glVertex3f(-225.0,-80,0.0);
	glVertex3f(-255.0,-80,0.0);
	glVertex3f(-265.0,-80,0.0);
	glVertex3f(-265.0,-80,0.0);
	glVertex3f(-265.0,-50,0.0);
	glVertex3f(-265.0,-50,0.0);
	glVertex3f(-225.0,-50,0.0);
	glVertex3f(-255.0,-100,0.0);
	glVertex3f(-255.0,-120,0.0);
	glVertex3f(-255.0,-120,0.0);
	glVertex3f(-210.0,-120,0.0);
	glVertex3f(-210.0,-120,0.0);
	glVertex3f(-210.0,-95,0.0);
	glVertex3f(-255.0,-120,0.0);
	glVertex3f(-255.0,-140,0.0);
	glVertex3f(-255.0,-140,0.0);
	glVertex3f(-210.0,-140,0.0);
	glVertex3f(-210.0,-140,0.0);
	glVertex3f(-210.0,-95,0.0);
	glVertex3f(-210.0,-140,0.0);
	glVertex3f(-165.0,-90,0.0);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-165.0,-90,0.0);
	glVertex3f(-70.0,-90,0.0);
	glEnd();
}
void h1()
{
	//Filling of hand 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-290.0,0.0);
	glVertex3f(-235.0,-290.0,0.0);
	glVertex3f(-235.0,-270.0,0.0);
	glVertex3f(-220.0,-270.0,0.0);
	glEnd();
	//Filling of hand 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-270.0,0.0);
	glVertex3f(-240.0,-270.0,0.0);
	glVertex3f(-240.0,-250.0,0.0);
	glVertex3f(-220.0,-250.0,0.0);
	glEnd();
	//Filling of hand 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-250.0,0.0);
	glVertex3f(-245.0,-250.0,0.0);
	glVertex3f(-245.0,-230.0,0.0);
	glVertex3f(-220.0,-230.0,0.0);
	glEnd();
	//Filling of hand 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-230.0,0.0);
	glVertex3f(-250.0,-230.0,0.0);
	glVertex3f(-250.0,-200.0,0.0);
	glVertex3f(-240.0,-190.0,0.0);
	glVertex3f(-210.0,-190.0,0.0);
    glVertex3f(-190.0,-220.0,0.0);
	//Filling of hand 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-180.0,-240,0.0);
	glVertex3f(-220.0,-230.0,0.0);
	glVertex3f(-220.0,-250.0,0.0);
	glVertex3f(-180.0,-240,0.0);
	glEnd();
	//Filling of hand 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-220.0,-230.0,0.0);
	glVertex3f(-220.0,-290.0,0.0);
	glVertex3f(-180.0,-240,0.0);
	glEnd();
	//Left thumb of Gandhiji's hand 
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-240.0,-190.0,0.0);
	glVertex3f(-240.0,-180.0,0.0);
	glVertex3f(-210.0,-190.0,0.0);
	glEnd();
	//HandJoint 1
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex3f(30.0,10,0.0);
	glVertex3f(-10.0,20.0,0.0);
	glVertex3f(-10.0,20.0,0.0);
	glVertex3f(-30.0,-150.0,0.0);
	glVertex3f(-30.0,-150.0,0.0);
	glVertex3f(-190.0,-220.0,0.0);
	glVertex3f(30.0,10,0.0);
	glVertex3f(-10.0,-140,0.0);
	glVertex3f(-10.0,-140,0.0);
	glVertex3f(-20.0,-180,0.0);
	glVertex3f(-20.0,-180,0.0);
	glVertex3f(-180.0,-240,0.0);
	glVertex3f(-190.0,-220.0,0.0);
	glVertex3f(-210.0,-190.0,0.0);
	glVertex3f(-210.0,-190.0,0.0);
	glVertex3f(-240.0,-190.0,0.0);
	glVertex3f(-240.0,-190.0,0.0);
	glVertex3f(-250.0,-200.0,0.0);
	glVertex3f(-250.0,-200.0,0.0);
	glVertex3f(-250.0,-230.0,0.0);
	glVertex3f(-250.0,-230.0,0.0);
	glVertex3f(-220.0,-230.0,0.0);
	glVertex3f(-245.0,-230.0,0.0);
	glVertex3f(-245.0,-250.0,0.0);
	glVertex3f(-245.0,-250.0,0.0);
	glVertex3f(-220.0,-250.0,0.0);
	glVertex3f(-240.0,-250.0,0.0);
	glVertex3f(-240.0,-270.0,0.0);
	glVertex3f(-240.0,-270.0,0.0);
	glVertex3f(-220.0,-270.0,0.0);
	glVertex3f(-235.0,-270.0,0.0);
	glVertex3f(-235.0,-290.0,0.0);
	glVertex3f(-235.0,-290.0,0.0);
	glVertex3f(-220.0,-290.0,0.0);
	glVertex3f(-220.0,-290.0,0.0);
	glVertex3f(-180.0,-240,0.0);
	glEnd();
	//Filling of hand 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(30.0,10,0.0);
	glVertex3f(-10.0,20.0,0.0);
	glVertex3f(-30.0,-150.0,0.0);
	glVertex3f(-20.0,-180,0.0);
	glEnd();
	//Filling of hand 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-30.0,-150.0,0.0);
	glVertex3f(-20.0,-180.0,0.0);
	glVertex3f(-180.0,-240,0.0);
	glVertex3f(-190.0,-220.0,0.0);
	glEnd();
}
void gandhiBody(){
//Front face of UpperBody 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(70.0,20,0.0);
	glVertex3f(-20.0,20.0,0.0);
	glVertex3f(-20.0,100.0,0.0);
	glVertex3f(70.0,120.0,0.0);
	glEnd();
	//Front face of UpperBody 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-20.0,120.0,0.0);
	glVertex3f(70.0,120.0,0.0);
	glVertex3f(60.0,520.0,0.0);
	glVertex3f(-10.0,480.0,0.0);
	glEnd();
	//Left face of upperBody
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-20.0,20.0,0.0);
	glVertex3f(-20.0,20.0,-30.0);
	glVertex3f(-20.0,520.0,-30.0);
	glVertex3f(-20.0,520.0,0.0);
	glEnd();
	//Right face of upperBody
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(70.0,20.0,0.0);
	glVertex3f(70.0,20.0,-30.0);
	glVertex3f(70.0,520.0,-30.0);
	glVertex3f(70.0,520.0,0.0);
	glEnd();
	//Back face of UpperBody 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(70.0,20,-30.0);
	glVertex3f(-20.0,20.0,-30.0);
	glVertex3f(-20.0,100.0,-30.0);
	glVertex3f(70.0,120.0,-30.0);
	glEnd();
	//Back face of UpperBody 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-20.0,100.0,-30.0);
	glVertex3f(70.0,120.0,-30.0);
	glVertex3f(60.0,520.0,-30.0);
	glVertex3f(-10.0,480.0,-30.0);
	glEnd();
	//Filling of Gandhi's neck 5
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-100.0,632.0,0.0);
	glVertex3f(-100.0,585.0,0.0);
	glVertex3f(-95.0,590.0,0.0);
	glVertex3f(-95.0,632.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 6
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(-40.0,842.0,0.0);
	glVertex3f(-20.0,842.0,0.0);
	glVertex3f(-20.0,802.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 7
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-75.0,692.0,0.0);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(60.0,802.0,0.0);
	glVertex3f(40.0,692.0,0.0);
    glEnd();
    //Filling of Gandhi's neck 8
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-100.0,632.0,0.0);
	glVertex3f(-75.0,692.0,0.0);
	glVertex3f(40.0,692.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 9
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-95.0,632.0,0.0);
	glVertex3f(-95.0,590.0,0.0);
	glVertex3f(-75.0,590.0,0.0);
	glVertex3f(-75.0,632.0,0.0);
	//glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 10
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-75.0,550.0,0.0);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-55.0,650.0,0.0);
	glVertex3f(-75.0,650.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 11
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-55.0,650.0,0.0);
	glVertex3f(-39.0,650.0,0.0);
	glVertex3f(-39.0,550.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 12
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-39.0,650.0,0.0);
	glVertex3f(-39.0,550.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 13
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 14
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glVertex3f(-40.0,645.0,0.0);
	glEnd();
	//Gandhi's neck with face and head
	glColor3f(0.0,0.0,0.0);
	glLineWidth(0.1);
	glBegin(GL_LINES);
	glVertex3f(-10.0,480.0,0.0);
	glVertex3f(60.0,520.0,0.0);	
	glVertex3f(60.0,520.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glColor3f(1.0,0.0,0.0);	
	glVertex3f(-10.0,480.0,0.0);
	glVertex3f(-10.0,505.0,0.0);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-10.0,505.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(-40.0,510.0,0.0);
	glVertex3f(-40.0,510.0,0.0);
	glVertex3f(-60.0,510.0,0.0);
	glVertex3f(-60.0,510.0,0.0);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-75.0,550.0,0.0);
	glVertex3f(-75.0,550.0,0.0);
	glVertex3f(-75.0,590.0,0.0);
	glVertex3f(-75.0,590.0,0.0);
	glVertex3f(-95.0,590.0,0.0);
	glVertex3f(-95.0,590.0,0.0);
	glVertex3f(-100.0,585.0,0.0);
	glVertex3f(-100.0,585.0,0.0);
	glVertex3f(-100.0,592.0,0.0);
	glVertex3f(-100.0,592.0,0.0);
	glVertex3f(-100.0,632.0,0.0);
	glVertex3f(-100.0,632.0,0.0);
	glVertex3f(-75.0,692.0,0.0);
	glVertex3f(-75.0,692.0,0.0);
	glVertex3f(-65.0,762.0,0.0);
	glVertex3f(-65.0,762.0,0.0);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(-60.0,802.0,0.0);
	glVertex3f(-40.0,842.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glVertex3f(42.0,645.0,0.0);
	glVertex3f(40.0,692.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 1
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-10.0,480.0,0.0);
	glVertex3f(-10.0,505.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glVertex3f(60.0,520.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 2
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-10.0,505.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glEnd();
//Filling for Gandhi's mouth
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-75.0,590.0,0.0);
	glVertex3f(-55.0,570.0,0.0);
	glVertex3f(-75.0,550.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 3
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-55.0,550.0,0.0);
	glVertex3f(-40.0,550.0,0.0);
	glVertex3f(-40.0,510.0,0.0);
	glVertex3f(-60.0,510.0,0.0);
	glEnd();
	//Filling of Gandhi's neck 4
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-40.0,550.0,0.0);
	glVertex3f(-40.0,510.0,0.0);
	glVertex3f(-20.0,530.0,0.0);
	glEnd();
	//Waist Band
	glPushMatrix();
	glColor3f(1.0,0.7,0.7);
	glScalef(1.4,0.3,30.0);
	glTranslatef(20.0,85.0,30.0);
	glutSolidSphere(32,100,100);
	glPopMatrix();
	//Sphere for Gandhi's face
	glPushMatrix();
	glColor3f(1.0,0.7,0.7);
	glTranslatef(11.0,804.0,30.0);
	glutSolidSphere(62,100,100);
	glPopMatrix();
//Sphere for Gandhi's eyebrow
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glScalef(1.9,2.1,0.0);
	glTranslatef(-22.0,350.0,30.0);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//Polygon to cover eyebrow
	glPushMatrix();
	glColor3f(1.0,0.7,0.7);
	glTranslatef(-32.0,720.0,0.0);
	glScalef(12.0,12.0,0.0);
	glutSolidCube(5.0);
	glPopMatrix();
//Sphere for Gndhiji's white part of eye
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glScalef(0.5,1.1,0.0);
	glTranslatef(-80.0,656.0,30.0);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	//Sphere for Gndhiji's black part of eye
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glScalef(0.5,1.1,0.0);
	glTranslatef(-78.0,646.0,30.0);
	glutSolidSphere(12,100,100);
	glPopMatrix();
//	//Sphere for moving eye ball of Gndhiji's eye
//	glPushMatrix();
//	glColor3f(1.0,0.4,0.4);
//	glScalef(0.5,1.1,0.0);
//	//glRotatef(90,1,1,1);
//	glTranslatef(-78.0,655.0+e,30.0);
//	glutSolidSphere(12,100,100);
//	glPopMatrix();
	//Gandhiji's ear 1
	glPushMatrix();
	glScalef(0.7,1.0,0.0);
	glTranslatef(0.5,19.0,0.0);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.0,655.0,0.0);
	glVertex3f(20.0,655.0,0.0);
	glVertex3f(25,665.0,0.0);
	glVertex3f(25.0,700.0,0.0);
	glVertex3f(20.0,715.0,0.0);
	glVertex3f(0.0,715.0,0.0);
	glVertex3f(-5.0,700.0,0.0);
	glVertex3f(-5.0,665.0,0.0);
	glVertex3f(0.0,655.0,0.0);
	glEnd();
	glPopMatrix();
	//Glass connector 1
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glRotatef(2,0,0,1);
	glTranslatef(0.0,700.0,0.0);
	glScalef(15.0,1.0,0.0);
	glutSolidCube(5.0);
	glPopMatrix();
	//Glass connector 2
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	//glRotatef(2,0,0,1);
	glTranslatef(20.0,705.0,0.0);
	glScalef(3.0,1.0,0.0);
	glutSolidCube(5.0);
	glPopMatrix();
	//Sphere for Gndhiji's ear
	glPushMatrix();
	glColor3f(1.0,0.6,0.6);
	glScalef(0.4,1.3,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(16.0,544.0,30.0);
	glutSolidSphere(26,100,100);
	glPopMatrix();
	//Sphere for Gndhiji's ear inside
	glPushMatrix();
	glColor3f(1.0,0.5,0.5);
	glScalef(0.5,1.3,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(16.0,544.0,30.0);
	glutSolidSphere(16,100,100);
	glPopMatrix();
	//cover up sphere for Gndhiji's ear
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glScalef(0.1,0.7,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(59.0,1010.0,0.0);
	glutSolidSphere(26,100,100);
	glPopMatrix();
	//Sphere for  outer cover Gndhiji's glass
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glScalef(0.5,1.3,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(-115.0,550.0,30.0);
	glutSolidSphere(26,100,100);
	glPopMatrix();
	//Sphere for Gndhiji's glass 
	glPushMatrix();
	glColor3f(0.7,0.7,0.7);
	glScalef(0.4,1.2,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(-145.0,598.0,30.0);
	glutSolidSphere(20,100,100);
	glPopMatrix();
	//Sphere for Gandhi's chin
	glPushMatrix();
	glColor3f(1.0,0.7,0.7);
	glScalef(0.9,2.1,0.0);
	//glRotatef(90,1,1,1);
	glTranslatef(-55.0,252.0,30.0);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	//Filling of white shall around Gandhiji's neck 6
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-45.0,380.0,0.0);
	glVertex3f(-25.0,340.0,0.0);
	glVertex3f(52.0,470.0,0.0);
	glVertex3f(50.0,490.0,0.0);
	//glVertex3f(-45.0,380.0,0.0);
	glEnd();
	//Filling of white shall around Gandhiji's neck 7
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-45.0,330.0,0.0);
	glVertex3f(-39.0,370.0,0.0);
	glVertex3f(-25.0,340.0,0.0);
	glEnd();
	//Filling of white shall around Gandhiji's neck 8
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-25.0,310.0,0.0);
	glVertex3f(50.0,490.0,0.0);
	glVertex3f(-45.0,330.0,0.0);
	glEnd();
	//Polygon for extending shall 1
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-45.0,310.0,0.0);
	glVertex3f(-50.0,200.0,0.0);
	glVertex3f(-10.0,180.0,0.0);
	glVertex3f(0.0,440.0,0.0);
	glEnd();
	//Polygon for extending shall 2
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-10.0,180.0,0.0);
	glVertex3f(-15.0,160.0,0.0);
	glVertex3f(-40.0,140.0,0.0);
	glVertex3f(-40.0,200.0,0.0);
	glEnd();
//Polygon for extending shall 3
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-40.0,140.0,0.0);
	glVertex3f(-35.0,120.0,0.0);
	glVertex3f(-15.0,100.0,0.0);
	glVertex3f(-15.0,200.0,0.0);
	glEnd();
	//Polygon for extending shall 4
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-15.0,110.0,0.0);
	glVertex3f(-15.0,100.0,0.0);
	glVertex3f(-35.0,60.0,0.0);
	glVertex3f(-35.0,130.0,0.0);
	glEnd();
	//Polygon for extending shall 5
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-35.0,60.0,0.0);
	glVertex3f(-35.0,50.0,0.0);
	glVertex3f(-20.0,0.0,0.0);
	glVertex3f(-20.0,90.0,0.0);
	glEnd();
	//Polygon for extending shall 6
	glPushMatrix();
	glTranslatef(-20,15,0);
glRotatef(theta+z,0,0,1);
glTranslatef(-(-20),-15,0);
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-30.0,50.0,0.0);
	glVertex3f(-30.0,00.0,0.0);
	glVertex3f(-25.0,-5.0,0.0);
	glVertex3f(-20.0,00.0,0.0);
	glEnd();
	glPopMatrix();
//	//White shall around Gandhiji's neck 
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-40.0,450.0,0.0);
	glVertex3f(70.0,490.0,0.0);
	glEnd();
	//Filling of white shall around Gandhiji's neck 1
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-10.0,480.0,0.0);
	glVertex3f(-10.0,505.0,0.0);
	glVertex3f(-15.0,505.0,0.0);
	glVertex3f(-40.0,450.0,0.0);
	glEnd();
	//Filling of white shall around Gandhiji's neck 2
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-10.0,480.0,0.0);
	glVertex3f(-40.0,450.0,0.0);
	glVertex3f(70.0,490.0,0.0);
	glVertex3f(60.0,520.0,0.0);
	glEnd();
	////Filling of white shall around Gandhiji's neck 3
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(70.0,490.0,0.0);
	glVertex3f(52.0,565.0,0.0);
	glVertex3f(60.0,565.0,0.0);
	glEnd();
	////Filling of white shall around Gandhiji's neck 4
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-45.0,380.0,0.0);
	glVertex3f(-34.0,430.0,0.0);
	glVertex3f(-21.0,400.0,0.0);
	glVertex3f(50.0,490.0,0.0);
	glEnd();
	////Filling of white shall around Gandhiji's neck 5
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-21.0,400.0,0.0);
	glVertex3f(50.0,470.0,0.0);
	glVertex3f(80.0,490.0,0.0);
glVertex3f(-40.0,450.0,0.0);
	glEnd();
	glPopMatrix();
}
void d()
{    
     //LegJoint
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(50.0,0.0,0.0);
	glVertex3f(50.0,20,0.0);
	glVertex3f(0.0,20.0,0.0);
	glEnd();
    //Leg
    glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,0.0);
	glVertex3f(-10.0,-500.0,0.0);
	glVertex3f(30.0,-510,0.0);
	glVertex3f(50.0,-50.0,0.0);
	glVertex3f(50.0,0.0,0.0);
	glEnd();
	//feet
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,-500.0,0.0);
	glVertex3f(20.0,-780,0.0);
	glVertex3f(30.0,-780,0.0);
	glVertex3f(30.0,-510,0.0);
	glEnd();
}
void d1()
{
	//LegJoint
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,-30.0);
	glVertex3f(50.0,0.0,-30.0);
	glVertex3f(50.0,20,-30.0);
	glVertex3f(0.0,20.0,-30.0);
	glEnd();
	//Leg
	 glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0,0.0,-30.0);
	glVertex3f(-10.0,-500.0,-30.0);
	glVertex3f(30.0,-510,-30.0);
	glVertex3f(50.0,-50.0,-30.0);
	glVertex3f(50.0,0.0,-30.0);
	glEnd();
	//feet
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-10.0,-500.0,-30.0);
	glVertex3f(20.0,-780,-30.0);
	glVertex3f(30.0,-780,-30.0);
	glVertex3f(30.0,-510,-30.0);
	glEnd();
}
void sword1(){
	//Front face of Sword polygon 1
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-10.0);
	glVertex3f(530.0,570.0,-10.0);
	glVertex3f(545.0,500.0,-10.0);
	glEnd();
//	//Front face of Sword polygon 1
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-30.0);
	glVertex3f(530.0,570.0,-30.0);
	glVertex3f(545.0,500.0,-30.0);
	glEnd();
	//Left face of Sword polygon 1
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-10.0);
	glVertex3f(530.0,570.0,-10.0);
	glVertex3f(530.0,570.0,-30.0);
	glVertex3f(515.0,500.0,-30.0);
	glEnd();
	//Front face of Sword polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-10.0);
	glVertex3f(545.0,500.0,-10.0);
	glVertex3f(545.0,0.0,-10.0);
	glVertex3f(515.0,0.0,-10.0);
	glEnd();
//	//Back face of Sword polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-30.0);
	glVertex3f(545.0,500.0,-30.0);
	glVertex3f(545.0,0.0,-30.0);
	glVertex3f(515.0,0.0,-30.0);
	glEnd();
//	//Left face of Sword polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-10.0);
	glVertex3f(515.0,0.0,-10.0);
	glVertex3f(515.0,0.0,-30.0);
	glVertex3f(515.0,500.0,-30.0);
	glEnd();
//	//Front face of Sword polygon 3
	glColor3f(0.6,0.6,0.6);
    glBegin(GL_POLYGON);
	glVertex3f(545.0,0.0,-10.0);
	glVertex3f(515.0,0.0,-10.0);
	glVertex3f(505.0,-20.0,-10.0);
	glVertex3f(555.0,-20.0,-10.0);
	glEnd();
//	//Back face of Sword polygon 3
    glColor3f(0.6,0.6,0.6);
    glBegin(GL_POLYGON);
	glVertex3f(545.0,0.0,-30.0);
	glVertex3f(515.0,0.0,-30.0);
	glVertex3f(505.0,-20.0,-30.0);
	glVertex3f(555.0,-20.0,-30.0);
	glEnd();
//	//Left face of Sword polygon 3
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,0.0,-10.0);
	glVertex3f(505.0,-20.0,-10.0);
	glVertex3f(505.0,-20.0,-30.0);
	glVertex3f(515.0,0.0,-30.0);
	glEnd();
	//Front face of Sword polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(505.0,-20.0,-10.0);
	glVertex3f(555.0,-20.0,-10.0);
	glVertex3f(570.0,-50.0,-10.0);
	glVertex3f(490.0,-50.0,-10.0);
	glEnd();
//	//Back face of Sword polygon 4
    glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(505.0,-20.0,-30.0);
	glVertex3f(555.0,-20.0,-30.0);
	glVertex3f(570.0,-50.0,-30.0);
	glVertex3f(490.0,-50.0,-30.0);
	glEnd();
//	//Left face of Sword polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(505.0,-20.0,-10.0);
	glVertex3f(490.0,-50.0,-10.0);
	glVertex3f(490.0,-50.0,-30.0);
	glVertex3f(505.0,-20.0,-30.0);
	glEnd();
//	//Front face of handle of the Sword polygon 1
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(520.0,-50.0,-10.0);
	glVertex3f(540.0,-50.0,-10.0);
	glVertex3f(540.0,-110.0,-10.0);
	glVertex3f(520.0,-110.0,-10.0);
	glEnd();
//	//Back face of handle of the Sword polygon 1
    glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(520.0,-50.0,-30.0);
	glVertex3f(540.0,-50.0,-30.0);
	glVertex3f(540.0,-110.0,-30.0);
	glVertex3f(520.0,-110.0,-30.0);
	glEnd();
//	//Left face of handle of the Sword polygon 1
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(520.0,-50.0,-10.0);
	glVertex3f(520.0,-110.0,-10.0);
	glVertex3f(520.0,-110.0,-30.0);
	glVertex3f(520.0,-50.0,-30.0);
	glEnd();
//	//Front face of handle of the Sword polygon 2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(540.0,-110.0,-10.0);
	glVertex3f(520.0,-110.0,-10.0);
	glVertex3f(525.0,-150.0,-10.0);
	glVertex3f(535.0,-150.0,-10.0);
	glEnd();
//	//Back face of handle of the Sword polygon 2
    glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(540.0,-110.0,-30.0);
	glVertex3f(520.0,-110.0,-30.0);
	glVertex3f(525.0,-150.0,-30.0);
	glVertex3f(535.0,-150.0,-30.0);
	glEnd();
//	//Left face of handle of the Sword polygon 2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(520.0,-110.0,-10.0);
	glVertex3f(525.0,-150.0,-10.0);
	glVertex3f(525.0,-150.0,-30.0);
	glVertex3f(520.0,-110.0,-30.0);
	glEnd();
}
void sword2(){
	//Front face of Sword polygon 1
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-10.0);
	glVertex3f(530.0,570.0,-10.0);
	glVertex3f(545.0,500.0,-10.0);
	//glVertex3f(-845.0,-310.0,-10.0);
	glEnd();
//	//Front face of Sword polygon 1
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-30.0);
	glVertex3f(530.0,570.0,-30.0);
	glVertex3f(545.0,500.0,-30.0);
	glEnd();
	//Left face of Sword polygon 1
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-10.0);
	glVertex3f(530.0,570.0,-10.0);
	glVertex3f(530.0,570.0,-30.0);
	glVertex3f(515.0,500.0,-30.0);
	glEnd();
	//Front face of Sword polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-10.0);
	glVertex3f(545.0,500.0,-10.0);
	glVertex3f(545.0,0.0,-10.0);
	glVertex3f(515.0,0.0,-10.0);
	glEnd();
//	//Back face of Sword polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-30.0);
	glVertex3f(545.0,500.0,-30.0);
	glVertex3f(545.0,0.0,-30.0);
	glVertex3f(515.0,0.0,-30.0);
	glEnd();
//	//Left face of Sword polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,500.0,-10.0);
	glVertex3f(515.0,0.0,-10.0);
	glVertex3f(515.0,0.0,-30.0);
	glVertex3f(515.0,500.0,-30.0);
	glEnd();
//	//Front face of Sword polygon 3
	glColor3f(0.6,0.6,0.6);
    glBegin(GL_POLYGON);
	glVertex3f(545.0,0.0,-10.0);
	glVertex3f(515.0,0.0,-10.0);
	glVertex3f(505.0,-20.0,-10.0);
	glVertex3f(555.0,-20.0,-10.0);
	glEnd();
//	//Back face of Sword polygon 3
    glColor3f(0.6,0.6,0.6);
    glBegin(GL_POLYGON);
	glVertex3f(545.0,0.0,-30.0);
	glVertex3f(515.0,0.0,-30.0);
	glVertex3f(505.0,-20.0,-30.0);
	glVertex3f(555.0,-20.0,-30.0);
	glEnd();
//	//Left face of Sword polygon 3
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(515.0,0.0,-10.0);
	glVertex3f(505.0,-20.0,-10.0);
	glVertex3f(505.0,-20.0,-30.0);
	glVertex3f(515.0,0.0,-30.0);
	glEnd();
	//Front face of Sword polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(505.0,-20.0,-10.0);
	glVertex3f(555.0,-20.0,-10.0);
	glVertex3f(570.0,-50.0,-10.0);
	glVertex3f(490.0,-50.0,-10.0);
	glEnd();
//	//Back face of Sword polygon 4
    glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(505.0,-20.0,-30.0);
	glVertex3f(555.0,-20.0,-30.0);
	glVertex3f(570.0,-50.0,-30.0);
	glVertex3f(490.0,-50.0,-30.0);
	glEnd();
//	//Left face of Sword polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(505.0,-20.0,-10.0);
	glVertex3f(490.0,-50.0,-10.0);
	glVertex3f(490.0,-50.0,-30.0);
	glVertex3f(505.0,-20.0,-30.0);
	glEnd();
//	//Front face of handle of the Sword polygon 1
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(520.0,-50.0,-10.0);
	glVertex3f(540.0,-50.0,-10.0);
	glVertex3f(540.0,-110.0,-10.0);
	glVertex3f(520.0,-110.0,-10.0);
	glEnd();
//	//Back face of handle of the Sword polygon 1
    glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(520.0,-50.0,-30.0);
	glVertex3f(540.0,-50.0,-30.0);
	glVertex3f(540.0,-110.0,-30.0);
	glVertex3f(520.0,-110.0,-30.0);
	glEnd();
//	//Left face of handle of the Sword polygon 1
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(520.0,-50.0,-10.0);
	glVertex3f(520.0,-110.0,-10.0);
	glVertex3f(520.0,-110.0,-30.0);
	glVertex3f(520.0,-50.0,-30.0);
	glEnd();
//	//Front face of handle of the Sword polygon 2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(540.0,-110.0,-10.0);
	glVertex3f(520.0,-110.0,-10.0);
	glVertex3f(525.0,-150.0,-10.0);
	glVertex3f(535.0,-150.0,-10.0);
	glEnd();
//	//Back face of handle of the Sword polygon 2
    glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(540.0,-110.0,-30.0);
	glVertex3f(520.0,-110.0,-30.0);
	glVertex3f(525.0,-150.0,-30.0);
	glVertex3f(535.0,-150.0,-30.0);
	glEnd();
//	//Left face of handle of the Sword polygon 2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(520.0,-110.0,-10.0);
	glVertex3f(525.0,-150.0,-10.0);
	glVertex3f(525.0,-150.0,-30.0);
	glVertex3f(520.0,-110.0,-30.0);
	glEnd();
}
void wrist1(){
	//Front face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glVertex3f(-825.0,-280.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-30.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glVertex3f(-855.0,-350.0,-30.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-833.0,-380.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-30.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-833.0,-380.0,-30.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glVertex3f(-855.0,-350.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-833.0,-380.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glVertex3f(-820.0,-385.0,-10.0);
	glVertex3f(-820.0,-380.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-833.0,-380.0,-30.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glVertex3f(-820.0,-385.0,-30.0);
	glVertex3f(-820.0,-380.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-808.0,-350.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-808.0,-350.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-10.0);
	glVertex3f(-818.0,-350.0,-10.0);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-30.0);
	glVertex3f(-818.0,-350.0,-30.0);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-810.0,-378.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-10.0);
	glVertex3f(-818.0,-350.0,-10.0);
	glVertex3f(-818.0,-350.0,-30.0);
	glVertex3f(-818.0,-378.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glVertex3f(-810.0,-378.0,-30.0);
	glEnd();
	//Right face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glVertex3f(-810.0,-378.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Right face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glEnd();
}
void wrist2(){
	//Front face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glVertex3f(-825.0,-280.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-30.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glVertex3f(-855.0,-350.0,-30.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-833.0,-380.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-30.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-833.0,-380.0,-30.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glVertex3f(-855.0,-350.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-833.0,-380.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glVertex3f(-820.0,-385.0,-10.0);
	glVertex3f(-820.0,-380.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-833.0,-380.0,-30.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glVertex3f(-820.0,-385.0,-30.0);
	glVertex3f(-820.0,-380.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-808.0,-350.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-808.0,-350.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-10.0);
	glVertex3f(-818.0,-350.0,-10.0);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-30.0);
	glVertex3f(-818.0,-350.0,-30.0);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-810.0,-378.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-10.0);
	glVertex3f(-818.0,-350.0,-10.0);
	glVertex3f(-818.0,-350.0,-30.0);
	glVertex3f(-818.0,-378.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glVertex3f(-810.0,-378.0,-30.0);
	glEnd();
	//Right face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glVertex3f(-810.0,-378.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Right face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glEnd();
}

void legs2(){
	//FRONT FACE OF LEFT LEG POLYGON 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-490.0,-10.0);
	glVertex3f(-760.0,-480.0,-10.0);
	glVertex3f(-765.0,-530.0,-10.0);
	glVertex3f(-790.0,-530.0,-10.0);
	glEnd();
	//Back FACE OF LEFT LEG POLYGON 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-490.0,-30.0);
	glVertex3f(-760.0,-480.0,-30.0);
	glVertex3f(-765.0,-530.0,-30.0);
	glVertex3f(-790.0,-530.0,-30.0);
	glEnd();
	//LEFT FACE OF LEFT LEG POLYGON 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-490.0,-10.0);
	glVertex3f(-790.0,-530.0,-10.0);
	glVertex3f(-790.0,-530.0,-30.0);
	glVertex3f(-790.0,-490.0,-30.0);
	glEnd();
	//RIGHT FACE OF LEFT LEG POLYGON 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-760.0,-480.0,-10.0);
	glVertex3f(-765.0,-530.0,-10.0);
	glVertex3f(-765.0,-530.0,-30.0);
	glVertex3f(-760.0,-480.0,-30.0);
	glEnd();
	//FRONT FACE OF LEFT LEG POLYGON 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-530.0,-10.0);
	glVertex3f(-790.0,-530.0,-10.0);
	glVertex3f(-805.0,-630.0,-10.0);
	glVertex3f(-755.0,-630.0,-10.0);
	glEnd();
	//BACK FACE OF LEFT LEG POLYGON 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-530.0,-30.0);
	glVertex3f(-790.0,-530.0,-30.0);
	glVertex3f(-805.0,-630.0,-30.0);
	glVertex3f(-755.0,-630.0,-30.0);
	glEnd();
	//LEFT FACE OF LEFT LEG POLYGON 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-530.0,-10.0);
	glVertex3f(-805.0,-630.0,-10.0);
	glVertex3f(-805.0,-630.0,-30.0);
	glVertex3f(-790.0,-530.0,-30.0);
	glEnd();
	//RIGHT FACE OF LEFT LEG POLYGON 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-530.0,-10.0);
	glVertex3f(-755.0,-630.0,-10.0);;
	glVertex3f(-755.0,-630.0,-30.0);
	glVertex3f(-765.0,-530.0,-30.0);
	glEnd();
	//FRONT FACE OF LEFT LEG POLYGON 3
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-805.0,-630.0,-10.0);
	glVertex3f(-755.0,-630.0,-10.0);
	glVertex3f(-765.0,-830.0,-10.0);
	glVertex3f(-790.0,-828.0,-10.0);
	glEnd();
	//BACK FACE OF LEFT LEG POLYGON 3
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-805.0,-630.0,-30.0);
	glVertex3f(-755.0,-630.0,-30.0);
	glVertex3f(-765.0,-830.0,-30.0);
	glVertex3f(-790.0,-828.0,-30.0);
	glEnd();
	//LEFT FACE OF LEFT LEG POLYGON 3
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-805.0,-630.0,-10.0);
	glVertex3f(-790.0,-828.0,-10.0);
	glVertex3f(-790.0,-828.0,-30.0);
	glVertex3f(-805.0,-630.0,-30.0);
	glEnd();
	//RIGHT FACE OF LEFT LEG POLYGON 3
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-755.0,-630.0,-10.0);
	glVertex3f(-765.0,-830.0,-10.0);
	glVertex3f(-765.0,-830.0,-30.0);
	glVertex3f(-755.0,-630.0,-30.0);
	glEnd();
	//TOP FACE OF THE FEET OF LEFT LEG POLYGON 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-830.0,-10.0);
	glVertex3f(-790.0,-828.0,-10.0);
	glVertex3f(-790.0,-838.0,40.0);
	glVertex3f(-765.0,-838.0,40.0);
	glEnd();
//	//LEFT SIDE FACE OF THE FEET OF LEFT LEG POLYGON 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-848.0,40.0);
	glVertex3f(-790.0,-848.0,-30.0);
	glVertex3f(-790.0,-818.0,-30.0);
	glVertex3f(-790.0,-818.0,-10.0);
	glEnd();
	//Right SIDE FACE OF THE FEET OF LEFT LEG POLYGON 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-848.0,40.0);
	glVertex3f(-765.0,-848.0,-30.0);
	glVertex3f(-765.0,-818.0,-30.0);
	glVertex3f(-765.0,-818.0,-10.0);
	glEnd();
	//BACK FACE OF THE FEET OF LEFT LEG POLYGON 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-830.0,-30.0);
	glVertex3f(-790.0,-828.0,-30.0);
	glVertex3f(-790.0,-838.0,-30.0);
	glVertex3f(-765.0,-838.0,-30.0);
	glEnd();
	//FRONT FACE OF THE TOE OF LEFT LEG POLYGON 1
	 glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-838.0,40.0);
	glVertex3f(-765.0,-838.0,40.0);
	glVertex3f(-765.0,-848.0,40.0);
	glVertex3f(-790.0,-848.0,40.0);
	glEnd();
	//BACK FACE OF THE TOE OF LEFT LEG POLYGON 1
	 glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-838.0,-30.0);
	glVertex3f(-790.0,-838.0,-30.0);
	glVertex3f(-790.0,-848.0,-30.0);
	glVertex3f(-765.0,-848.0,-30.0);
	glEnd();
	glFlush();
}
void rightArm1(){
	//Front face of RightArm Polygon 1 
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-615.0,200.0,-10.0);
	glVertex3f(-580.0,350.0,-10.0);
	glVertex3f(-650.0,350.0,-10.0);
	glEnd();
	//Back face of RightArm Polygon 1 
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-615.0,200.0,-30.0);
	glVertex3f(-580.0,350.0,-30.0);
	glVertex3f(-650.0,350.0,-30.0);
	glEnd();
	//Front face of Right Arm  Polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,350.0,-10.0);
	glVertex3f(-480.0,200.0,-10.0);
	glVertex3f(-480.0,150.0,-10.0);
	glVertex3f(-615.0,200.0,-10.0);
	glEnd();
	//Back face of Right Arm  Polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,350.0,-30.0);
	glVertex3f(-480.0,200.0,-30.0);
	glVertex3f(-480.0,150.0,-30.0);
	glVertex3f(-615.0,200.0,-30.0);
	glEnd();
	//Top face of Right Arm  Polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,350.0,-10.0);
	glVertex3f(-480.0,200.0,-10.0);
	glVertex3f(-480.0,200.0,-30.0);
	glVertex3f(-580.0,350.0,-30.0);
	glEnd();
	//Bottom face of Right Arm  Polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,200.0,-10.0);
	glVertex3f(-480.0,150.0,-10.0);
	glVertex3f(-480.0,150.0,-30.0);
	glVertex3f(-580.0,200.0,-30.0);
	glEnd();
	//Front face of Right Arm  Polygon 3
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-480.0,200.0,-10.0);
	glVertex3f(-430.0,220.0,-10.0);
	glVertex3f(-430.0,115.0,-10.0);
	glVertex3f(-480.0,150.0,-10.0);
	glEnd();
	//Back face of face of Right Arm  Polygon 3
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-480.0,200.0,-30.0);
	glVertex3f(-430.0,220.0,-30.0);
	glVertex3f(-430.0,115.0,-30.0);
	glVertex3f(-480.0,150.0,-30.0);
	glEnd();
	//Top face of Right Arm  Polygon 3
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-480.0,200.0,-10.0);
	glVertex3f(-430.0,220.0,-10.0);
	glVertex3f(-430.0,220.0,-30.0);
	glVertex3f(-480.0,200.0,-30.0);
	glEnd();
	//Bottom face of Right Arm  Polygon 3
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-480.0,150.0,-10.0);
	glVertex3f(-430.0,115.0,-10.0);
	glVertex3f(-430.0,115.0,-30.0);
	glVertex3f(-480.0,150.0,-30.0);
	glEnd();
	//Front face of Right Arm  Polygon 4
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-430.0,220.0,-10.0);
	glVertex3f(-320.0,170.0,-10.0);
	glVertex3f(-340.0,145.0,-10.0);
	glVertex3f(-430.0,115.0,-10.0);
	glEnd();
	//Back face of Arm  Polygon 4
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-430.0,220.0,-30.0);
	glVertex3f(-320.0,170.0,-30.0);
	glVertex3f(-340.0,145.0,-30.0);
	glVertex3f(-430.0,115.0,-30.0);
	glEnd();
	//Top face of Right Arm  Polygon 4
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-430.0,220.0,-10.0);
	glVertex3f(-320.0,170.0,-10.0);
	glVertex3f(-330.0,170.0,-30.0);
	glVertex3f(-430.0,220.0,-30.0);
	glEnd();
	glPushMatrix();
	glTranslatef(-1148.0,450.0,-20.0);
	glRotatef(180.0,0,1,0);
	wrist1();
	glPopMatrix();
}
void rightArm2(){
		//Front face 0f RightArm Polygon 1 
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-615.0,200.0,-10.0);
	glVertex3f(-580.0,350.0,-10.0);
	glVertex3f(-650.0,350.0,-10.0);
	glEnd();
	//Back face of RightArm Polygon 1 
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-615.0,200.0,-30.0);
	///glVertex3f(-610.0,200.0,-10.0);
	glVertex3f(-580.0,350.0,-30.0);
	glVertex3f(-650.0,350.0,-30.0);
	glEnd();
	//Front face of Right Arm  Polygon 2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,350.0,-10.0);
	glVertex3f(-480.0,200.0,-10.0);
	glVertex3f(-480.0,150.0,-10.0);
	glVertex3f(-615.0,200.0,-10.0);
	glEnd();
	//Back face of Right Arm  Polygon 2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,350.0,-30.0);
	glVertex3f(-480.0,200.0,-30.0);
	glVertex3f(-480.0,150.0,-30.0);
	glVertex3f(-615.0,200.0,-30.0);
	glEnd();
	//Top face of Right Arm  Polygon 2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,350.0,-10.0);
	glVertex3f(-480.0,200.0,-10.0);
	glVertex3f(-480.0,200.0,-30.0);
	glVertex3f(-580.0,350.0,-30.0);
	glEnd();
	//Bottom face of Right Arm  Polygon 2
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,200.0,-10.0);
	glVertex3f(-480.0,150.0,-10.0);
	glVertex3f(-480.0,150.0,-30.0);
	glVertex3f(-580.0,200.0,-30.0);
	glEnd();
	//Front face of Right Arm  Polygon 3
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(-480.0,200.0,-10.0);
	glVertex3f(-430.0,220.0,-10.0);
	glVertex3f(-430.0,115.0,-10.0);
	glVertex3f(-480.0,150.0,-10.0);
	glEnd();
	//Back face of face of Right Arm  Polygon 3
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(-480.0,200.0,-30.0);
	glVertex3f(-430.0,220.0,-30.0);
	glVertex3f(-430.0,115.0,-30.0);
	glVertex3f(-480.0,150.0,-30.0);
	glEnd();
	//Top face of Right Arm  Polygon 3
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(-480.0,200.0,-10.0);
	glVertex3f(-430.0,220.0,-10.0);
	glVertex3f(-430.0,220.0,-30.0);
	glVertex3f(-480.0,200.0,-30.0);
	glEnd();
	//Bottom face of Right Arm  Polygon 3
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_POLYGON);
	glVertex3f(-480.0,150.0,-10.0);
	glVertex3f(-430.0,115.0,-10.0);
	glVertex3f(-430.0,115.0,-30.0);
	glVertex3f(-480.0,150.0,-30.0);
	glEnd();
	//Front face of Right Arm  Polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-430.0,220.0,-10.0);
	glVertex3f(-320.0,170.0,-10.0);
	glVertex3f(-340.0,145.0,-10.0);
	glVertex3f(-430.0,115.0,-10.0);
	glEnd();
	//Back face of Arm  Polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-430.0,220.0,-30.0);
	glVertex3f(-320.0,170.0,-30.0);
	glVertex3f(-340.0,145.0,-30.0);
	glVertex3f(-430.0,115.0,-30.0);
	glEnd();
	//Top face of Right Arm  Polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-430.0,220.0,-10.0);
	glVertex3f(-320.0,170.0,-10.0);
	glVertex3f(-330.0,170.0,-30.0);
	glVertex3f(-430.0,220.0,-30.0);
	glEnd();
	glPushMatrix();
	glTranslatef(-1148.0,450.0,-20.0);
	glRotatef(180.0,0,1,0);
	wrist2();
	glPopMatrix();
}
void legs1(){
	//FRONT FACE OF LEFT LEG POLYGON 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-490.0,-10.0);
	glVertex3f(-760.0,-480.0,-10.0);
	glVertex3f(-765.0,-530.0,-10.0);
	glVertex3f(-790.0,-530.0,-10.0);
	glEnd();
	//Back FACE OF LEFT LEG POLYGON 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-490.0,-30.0);
	glVertex3f(-760.0,-480.0,-30.0);
	glVertex3f(-765.0,-530.0,-30.0);
	glVertex3f(-790.0,-530.0,-30.0);
	glEnd();
	//LEFT FACE OF LEFT LEG POLYGON 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-490.0,-10.0);
	glVertex3f(-790.0,-530.0,-10.0);
	glVertex3f(-790.0,-530.0,-30.0);
	glVertex3f(-790.0,-490.0,-30.0);
	glEnd();
	//RIGHT FACE OF LEFT LEG POLYGON 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-760.0,-480.0,-10.0);
	glVertex3f(-765.0,-530.0,-10.0);
	glVertex3f(-765.0,-530.0,-30.0);
	glVertex3f(-760.0,-480.0,-30.0);
	glEnd();
	//FRONT FACE OF LEFT LEG POLYGON 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-530.0,-10.0);
	glVertex3f(-790.0,-530.0,-10.0);
	glVertex3f(-805.0,-630.0,-10.0);
	glVertex3f(-755.0,-630.0,-10.0);
	glEnd();
	//BACK FACE OF LEFT LEG POLYGON 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-530.0,-30.0);
	glVertex3f(-790.0,-530.0,-30.0);
	glVertex3f(-805.0,-630.0,-30.0);
	glVertex3f(-755.0,-630.0,-30.0);
	glEnd();
	//LEFT FACE OF LEFT LEG POLYGON 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-530.0,-10.0);
	glVertex3f(-805.0,-630.0,-10.0);
	glVertex3f(-805.0,-630.0,-30.0);
	glVertex3f(-790.0,-530.0,-30.0);
	glEnd();
	//RIGHT FACE OF LEFT LEG POLYGON 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-530.0,-10.0);
	glVertex3f(-755.0,-630.0,-10.0);;
	glVertex3f(-755.0,-630.0,-30.0);
	glVertex3f(-765.0,-530.0,-30.0);
	glEnd();
	//FRONT FACE OF LEFT LEG POLYGON 3
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-805.0,-630.0,-10.0);
	glVertex3f(-755.0,-630.0,-10.0);
	glVertex3f(-765.0,-830.0,-10.0);
	glVertex3f(-790.0,-828.0,-10.0);
	glEnd();
	//BACK FACE OF LEFT LEG POLYGON 3
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-805.0,-630.0,-30.0);
	glVertex3f(-755.0,-630.0,-30.0);
	glVertex3f(-765.0,-830.0,-30.0);
	glVertex3f(-790.0,-828.0,-30.0);
	glEnd();
	//LEFT FACE OF LEFT LEG POLYGON 3
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-805.0,-630.0,-10.0);
	glVertex3f(-790.0,-828.0,-10.0);
	glVertex3f(-790.0,-828.0,-30.0);
	glVertex3f(-805.0,-630.0,-30.0);
	glEnd();
	//RIGHT FACE OF LEFT LEG POLYGON 3
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-755.0,-630.0,-10.0);
	glVertex3f(-765.0,-830.0,-10.0);
	glVertex3f(-765.0,-830.0,-30.0);
	glVertex3f(-755.0,-630.0,-30.0);
	glEnd();
	//TOP FACE OF THE FEET OF LEFT LEG POLYGON 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-830.0,-10.0);
	glVertex3f(-790.0,-828.0,-10.0);
	glVertex3f(-790.0,-838.0,40.0);
	glVertex3f(-765.0,-838.0,40.0);
	glEnd();
//	//LEFT SIDE FACE OF THE FEET OF LEFT LEG POLYGON 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-848.0,40.0);
	glVertex3f(-790.0,-848.0,-30.0);
	glVertex3f(-790.0,-818.0,-30.0);
	glVertex3f(-790.0,-818.0,-10.0);
	glEnd();
	//Right SIDE FACE OF THE FEET OF LEFT LEG POLYGON 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-848.0,40.0);
	glVertex3f(-765.0,-848.0,-30.0);
	glVertex3f(-765.0,-818.0,-30.0);
	glVertex3f(-765.0,-818.0,-10.0);
	glEnd();
	//BACK FACE OF THE FEET OF LEFT LEG POLYGON 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-830.0,-30.0);
	glVertex3f(-790.0,-828.0,-30.0);
	glVertex3f(-790.0,-838.0,-30.0);
	glVertex3f(-765.0,-838.0,-30.0);
	glEnd();
	//FRONT FACE OF THE TOE OF LEFT LEG POLYGON 1
	 glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-790.0,-838.0,40.0);
	glVertex3f(-765.0,-838.0,40.0);
	glVertex3f(-765.0,-848.0,40.0);
	glVertex3f(-790.0,-848.0,40.0);
	glEnd();
	//BACK FACE OF THE TOE OF LEFT LEG POLYGON 1
	 glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-765.0,-838.0,-30.0);
	glVertex3f(-790.0,-838.0,-30.0);
	glVertex3f(-790.0,-848.0,-30.0);
	glVertex3f(-765.0,-848.0,-30.0);
	glEnd();
}
void soldier1(){
	//Left leg
	legs1();
	//Right leg
	glPushMatrix();
	glTranslatef(190.0,0.0,0.0);
	legs1();
	glPopMatrix();
	//front face of the first piece of skirt of the soldier 
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-500.0,-10.0);
	glVertex3f(-780.0,-300.0,-10.0);
	glVertex3f(-680.0,-305.0,-10.0);
	glVertex3f(-680.0,-495.0,-10.0);
	glEnd();
	//Back face of the first piece of skirt of the soldier 
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-500.0,-30.0);
	glVertex3f(-780.0,-300.0,-30.0);
	glVertex3f(-680.0,-305.0,-30.0);
	glVertex3f(-680.0,-495.0,-30.0);
	glEnd();	
	//Left Side face of the first piece of skirt of the soldier 
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-500.0,-10.0);
	glVertex3f(-780.0,-300.0,-10.0);
	glVertex3f(-780.0,-300.0,-30.0);
	glVertex3f(-800.0,-500.0,-30.0);
	glEnd();	
	//front face of the 2nd piece of skirt  of the soldier
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-495.0,-10.0);
	glVertex3f(-680.0,-305.0,-10.0);
	glVertex3f(-580.0,-300.0,-10.0);
	glVertex3f(-560.0,-500.0,-10.0);
	glEnd();
	//Back face of the 2nd piece of skirt  of the soldier
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-495.0,-30.0);
	glVertex3f(-680.0,-305.0,-30.0);
	glVertex3f(-580.0,-300.0,-30.0);
	glVertex3f(-560.0,-500.0,-30.0);
	glEnd();
	//Right side face of the 2nd piece of skirt  of the soldier
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,-300.0,-10.0);
	glVertex3f(-560.0,-500.0,-10.0);
	glVertex3f(-560.0,-500.0,-30.0);
	glVertex3f(-580.0,-300.0,-30.0);
	glEnd();
	//front face of the 3rd piece of skirt  of the soldier
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,-300.0,-10.0);
	glVertex3f(-750.0,-100.0,-10.0);
	glVertex3f(-680.0,-105.0,-10.0);
	glVertex3f(-680.0,-305.0,-10.0);
	glEnd();
	//Back face of the 3rd piece of skirt  of the soldier
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,-300.0,-30.0);
	glVertex3f(-750.0,-100.0,-30.0);
	glVertex3f(-680.0,-105.0,-30.0);
	glVertex3f(-680.0,-305.0,-30.0);
	glEnd();
	//Left side face of the 3rd piece of skirt  of the soldier
	 glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,-300.0,-10.0);
	glVertex3f(-750.0,-100.0,-10.0);
	glVertex3f(-750.0,-105.0,-30.0);
	glVertex3f(-780.0,-305.0,-30.0);
	glEnd();
	//front face of the 4th piece of skirt  of the soldier
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-305.0,-10.0);
	glVertex3f(-680.0,-105.0,-10.0);
	glVertex3f(-610.0,-100.0,-10.0);
	glVertex3f(-580.0,-300.0,-10.0);
	glEnd();
	//Back face of the 4th piece of skirt  of the soldier
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-305.0,-30.0);
	glVertex3f(-680.0,-105.0,-30.0);
	glVertex3f(-610.0,-100.0,-30.0);
	glVertex3f(-580.0,-300.0,-30.0);
	glEnd();
	//Right face of the 4th piece of skirt  of the soldier
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-610.0,-100.0,-10.0);
	glVertex3f(-580.0,-300.0,-10.0);
	glVertex3f(-610.0,-100.0,-30.0);
	glVertex3f(-580.0,-300.0,-30.0);
	glEnd();	
	//Front side face of the 5th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,-100.0,-10.0);
	glVertex3f(-750.0,50.0,-10.0);
	glVertex3f(-680.0,50.0,-10.0);
	glVertex3f(-680.0,-105.0,-10.0);
	glEnd();
	//Back face of the 5th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,-100.0,-30.0);
	glVertex3f(-750.0,50.0,-30.0);
	glVertex3f(-680.0,50.0,-30.0);
	glVertex3f(-680.0,-105.0,-30.0);
	glEnd();
	//Left side face of the 5th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,-100.0,-10.0);
	glVertex3f(-750.0,50.0,-10.0);
	glVertex3f(-750.0,50.0,-30.0);
	glVertex3f(-750.0,-105.0,-30.0);
	glEnd();	
	//front face of the 6th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-105.0,-10.0);
	glVertex3f(-680.0,50.0,-10.0);
	glVertex3f(-610.0,50.0,-10.0);
	glVertex3f(-610.0,-100.0,-10.0);
	glEnd();	
	//Back face of the 6th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-105.0,-30.0);
	glVertex3f(-680.0,50.0,-30.0);
	glVertex3f(-610.0,50.0,-30.0);
	glVertex3f(-610.0,-100.0,-30.0);
	glEnd();	
	//Right face of the 6th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-610.0,50.0,-10.0);
	glVertex3f(-610.0,-100.0,-10.0);
	glVertex3f(-610.0,50.0,-30.0);
	glVertex3f(-610.0,-100.0,-30.0);
	glEnd();	
	//front face of the 7th piece of the costume of the soldier
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,50.0,-10.0);
	glVertex3f(-750.0,200.0,-10.0);
	glVertex3f(-680.0,200.0,-10.0);
	glVertex3f(-680.0,50.0,-10.0);
	glEnd();	
	//Back face of the 7th piece of the costume of the soldier
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,50.0,-30.0);
	glVertex3f(-750.0,200.0,-30.0);
	glVertex3f(-680.0,200.0,-30.0);
	glVertex3f(-680.0,50.0,-30.0);
	glEnd();
	//Left side face of the 7th piece of the costume of the soldier
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,50.0,-10.0);
	glVertex3f(-750.0,200.0,-10.0);
	glVertex3f(-750.0,200.0,-30.0);
	glVertex3f(-750.0,50.0,-30.0);
	glEnd();	
	//front face of the 8th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,50.0,-10.0);
	glVertex3f(-680.0,200.0,-10.0);
	glVertex3f(-610.0,200.0,-10.0);
	glVertex3f(-610.0,50.0,-10.0);
	glEnd();	
	//Back face of the 8th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,50.0,-30.0);
	glVertex3f(-680.0,200.0,-30.0);
	glVertex3f(-610.0,200.0,-30.0);
	glVertex3f(-610.0,50.0,-30.0);
	glEnd();
	//Right face of the 8th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-610.0,200.0,-10.0);
	glVertex3f(-610.0,50.0,-10.0);
	glVertex3f(-610.0,200.0,-30.0);
	glVertex3f(-610.0,50.0,-30.0);
	glEnd();		
	//front face of the 9th piece of the costume of the soldier
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,200.0,-10.0);
	glVertex3f(-710.0,350.0,-10.0);
	glVertex3f(-680.0,350.0,-10.0);
	glVertex3f(-680.0,200.0,-10.0);
	glEnd();	
	//Back face of the 9th piece of the costume of the soldier
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,200.0,-30.0);
	glVertex3f(-710.0,350.0,-30.0);
	glVertex3f(-680.0,350.0,-30.0);
	glVertex3f(-680.0,200.0,-30.0);
	glEnd();	
	//front face of the 10th piece of the costume of the soldier
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,200.0,-10.0);
	glVertex3f(-680.0,350.0,-10.0);
	glVertex3f(-650.0,350.0,-10.0);
	glVertex3f(-610.0,200.0,-10.0);
	glEnd();
	rightArm1();
	//Back face of the 10th piece of the costume of the soldier
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,200.0,-30.0);
	glVertex3f(-680.0,350.0,-30.0);
	glVertex3f(-650.0,350.0,-30.0);
	glVertex3f(-610.0,200.0,-30.0);
	glEnd();
	//front face of the 11th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-710.0,350.0,-10.0);
	glVertex3f(-695.0,370.0,-10.0);
	glVertex3f(-665.0,370.0,-10.0);
	glVertex3f(-650.0,350.0,-10.0);
	glEnd();
	//Back face of the 11th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-710.0,350.0,-30.0);
	glVertex3f(-695.0,370.0,-30.0);
	glVertex3f(-665.0,370.0,-30.0);
	glVertex3f(-650.0,350.0,-30.0);
	glEnd();
	//Front face of neck 1
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-695.0,370.0,-10.0);
	glVertex3f(-695.0,400.0,-10.0);
	glVertex3f(-665.0,400.0,-10.0);
	glVertex3f(-665.0,370.0,-10.0);
	glEnd();
	//Front face of Face polygon 1
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-700.0,400.0,0.0);
	glVertex3f(-715.0,500.0,0.0);
	glVertex3f(-680.0,490.0,0.0);
	glVertex3f(-680.0,400.0,0.0);
	glEnd();
	//Back face of Face polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-700.0,400.0,-30.0);
	glVertex3f(-715.0,500.0,-30.0);
	glVertex3f(-680.0,490.0,-30.0);
	glVertex3f(-680.0,400.0,-30.0);
	glEnd();
	//Left face of Face polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-700.0,400.0,0.0);
	glVertex3f(-715.0,500.0,0.0);
	glVertex3f(-715.0,500.0,-30.0);
	glVertex3f(-700.0,400.0,-30.0);
	glEnd();
	//Front face of Face polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-680.0,490.0,0.0);
	glVertex3f(-655.0,500.0,0.0);
	glVertex3f(-665.0,400.0,0.0);
	glVertex3f(-680.0,400.0,0.0);
	glEnd();
	//Back face of Face polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-680.0,490.0,-30.0);
	glVertex3f(-655.0,500.0,-30.0);
	glVertex3f(-665.0,400.0,-30.0);
	glVertex3f(-680.0,400.0,-30.0);
	glEnd();
	//Right face of Face polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-655.0,500.0,0.0);
	glVertex3f(-665.0,400.0,0.0);
	glVertex3f(-665.0,400.0,-30.0);
	glVertex3f(-655.0,500.0,-30.0);
	glEnd();
	//Front face of Face polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-715.0,500.0,0.0);
	glVertex3f(-715.0,550.0,0.0);
	glVertex3f(-680.0,550.0,0.0);
	glVertex3f(-680.0,490.0,0.0);
	glEnd();
	//Back face of Face polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-715.0,500.0,-30.0);
	glVertex3f(-715.0,550.0,-30.0);
	glVertex3f(-680.0,550.0,-30.0);
	glVertex3f(-680.0,490.0,-30.0);
	glEnd();
	//Left face of Face polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-715.0,500.0,0.0);
	glVertex3f(-715.0,550.0,0.0);
	glVertex3f(-715.0,550.0,-30.0);
	glVertex3f(-715.0,500.0,-30.0);
	glEnd();
	//Front face of Face polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-680.0,550.0,0.0);
	glVertex3f(-655.0,560.0,0.0);
	glVertex3f(-655.0,500.0,0.0);
	glVertex3f(-680.0,490.0,0.0);
	glEnd();
	//Back face of Face polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-680.0,550.0,-30.0);
	glVertex3f(-655.0,560.0,-30.0);
	glVertex3f(-655.0,500.0,-30.0);
	glVertex3f(-680.0,490.0,-30.0);
	glEnd();
	//Right face of Face polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-655.0,560.0,0.0);
	glVertex3f(-655.0,500.0,0.0);
	glVertex3f(-655.0,500.0,-30.0);
	glVertex3f(-655.0,560.0,-30.0);
	glEnd();
	//Front face of Face polygon 5
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-715.0,550.0,0.0);
	glVertex3f(-710.0,600.0,0.0);
	glVertex3f(-680.0,600.0,0.0);
	glVertex3f(-680.0,550.0,0.0);
	glEnd();
	//Back face of Face polygon 5
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-715.0,550.0,-30.0);
	glVertex3f(-710.0,600.0,-30.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-680.0,550.0,-30.0);
	glEnd();
	//Left face of Face polygon 5
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-715.0,550.0,0.0);
	glVertex3f(-710.0,600.0,0.0);
	glVertex3f(-710.0,600.0,-30.0);
    glVertex3f(-715.0,550.0,-30.0);
	glEnd();
	//Front face of Face polygon 6
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.4,0.4);
	glVertex3f(-680.0,600.0,0.0);
	glVertex3f(-660.0,600.0,0.0);
	glVertex3f(-655.0,560.0,0.0);
	glVertex3f(-680.0,550.0,0.0);
	glEnd();
	//Back face of Face polygon 6
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.4,0.4);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-660.0,600.0,-30.0);
	glVertex3f(-655.0,560.0,-30.0);
	glVertex3f(-680.0,550.0,-30.0);
	glEnd();
	//Right face of Face polygon 6
	glBegin(GL_POLYGON);
	glColor3f(0.4,0.4,0.4);
	glVertex3f(-660.0,600.0,0.0);
	glVertex3f(-655.0,560.0,0.0);
	glVertex3f(-655.0,560.0,-30.0);
	glVertex3f(-660.0,600.0,-30.0);
	glEnd();
	//Front face of helmet polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-720.0,600.0,0.0);
	glVertex3f(-680.0,600.0,0.0);
	glVertex3f(-680.0,650.0,0.0);
	glVertex3f(-720.0,650.0,0.0);
	glEnd();
	//Back face of helmet polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-720.0,600.0,-30.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-680.0,650.0,-30.0);
	glVertex3f(-720.0,650.0,-30.0);
	glEnd();
	//Back face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-720.0,600.0,-30.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-680.0,550.0,-60.0);
	glVertex3f(-730.0,550.0,-60.0);
	glEnd();
	//Back face of helmet polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-680.0,550.0,-60.0);
	glVertex3f(-640.0,550.0,-60.0);
	glVertex3f(-650.0,600.0,-30.0);
	glEnd();
	//Left face of helmet polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-720.0,600.0,-10.0);
	glVertex3f(-720.0,650.0,-10.0);
	glVertex3f(-720.0,650.0,-30.0);
	glVertex3f(-720.0,600.0,-30.0);
	glEnd();
	//Left face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-720.0,600.0,-10.0);
	glVertex3f(-720.0,600.0,-30.0);
	glVertex3f(-720.0,520.0,-30.0);
	glVertex3f(-720.0,520.0,-10.0);
	glEnd();
	//Right face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-650.0,600.0,-10.0);
	glVertex3f(-650.0,600.0,-30.0);
	glVertex3f(-650.0,520.0,-30.0);
	glVertex3f(-650.0,520.0,-10.0);
	glEnd();
	//Front face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,650.0,0.0);
	glVertex3f(-650.0,650.0,0.0);
	glVertex3f(-650.0,600.0,0.0);
	glVertex3f(-680.0,600.0,0.0);
	glEnd();
	//Back face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,650.0,-30.0);
	glVertex3f(-650.0,650.0,-30.0);
	glVertex3f(-650.0,600.0,-30.0);
	glVertex3f(-680.0,600.0,-30.0);
	glEnd();
	//Right face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-650.0,650.0,0.0);
	glVertex3f(-650.0,600.0,0.0);
	glVertex3f(-650.0,600.0,-30.0);
	glVertex3f(-650.0,650.0,-30.0);
	glEnd();
	//Front face of helmet polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-720.0,650.0,0.0);
	glVertex3f(-708.0,700.0,0.0);
	glVertex3f(-680.0,700.0,0.0);
	glVertex3f(-680.0,650.0,0.0);
	glEnd();
	//Back face of helmet polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-720.0,650.0,-30.0);
	glVertex3f(-708.0,700.0,-30.0);
	glVertex3f(-680.0,700.0,-30.0);
	glVertex3f(-680.0,650.0,-30.0);
	glEnd();
	//Left face of helmet polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-720.0,650.0,0.0);
	glVertex3f(-708.0,700.0,0.0);
	glVertex3f(-708.0,700.0,-30.0);
	glVertex3f(-720.0,650.0,-30.0);
	glEnd();
	//Front face of helmet polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,700.0,0.0);
	glVertex3f(-665.0,700.0,0.0);
	glVertex3f(-650.0,650.0,0.0);
	glVertex3f(-680.0,650.0,0.0);
	glEnd();
	//Front face of helmet polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,700.0,-30.0);
	glVertex3f(-665.0,700.0,-30.0);
	glVertex3f(-650.0,650.0,-30.0);
	glVertex3f(-680.0,650.0,-30.0);
	glEnd();
	//Right face of helmet polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-665.0,700.0,0.0);
	glVertex3f(-650.0,650.0,0.0);
	glVertex3f(-650.0,650.0,-30.0);
	glVertex3f(-665.0,700.0,-30.0);
	glEnd();
	//Back face of neck 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-695.0,370.0,-30.0);
	glVertex3f(-695.0,400.0,-30.0);
	glVertex3f(-665.0,400.0,-30.0);
	glVertex3f(-665.0,370.0,-30.0);
	glEnd();
	//Side face of the 13th piece of the costume of the soldier 
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-695.0,370.0,-10.0);
	glVertex3f(-695.0,370.0,-30.0);
	glVertex3f(-695.0,400.0,-30.0);
	glVertex3f(-695.0,400.0,-10.0);
	glEnd();
	//Side face of collar 1
	//Side face of the 12th piece of the costume of the soldier 
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-710.0,350.0,-10.0);
	glVertex3f(-710.0,350.0,-30.0);
	glVertex3f(-690.0,355.9,-30.0);
	glVertex3f(-690.0,355.9,-10.0);
	glEnd(); 
	//Side face of collar 2
	//Side face of the 13th piece of the costume of the soldier 
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-690.0,355.9,-10.0);
	glVertex3f(-690.0,355.9,-30.0);
	glVertex3f(-695.0,375.0,-30.0);
	glVertex3f(-695.0,375.0,-10.0);
	glEnd();
	 //Side face of collar 3
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-650.0,350.0,-10.0);
	glVertex3f(-650.0,350.0,-30.0);
	glVertex3f(-665.0,355.9,-30.0);
	glVertex3f(-665.0,355.9,-10.0);
	glEnd(); 
	//Side face of collar 4
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-665.0,355.9,-10.0);
	glVertex3f(-665.0,400,-10.0);
	glVertex3f(-665.0,400,-30.0);
	glVertex3f(-665.0,355.0,-30.0);
	glEnd();
	//left arm shoulder polygon 1
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-710.0,350.0,-10.0);
	glVertex3f(-780.0,350.0,-10.0);
	glVertex3f(-780.0,350.0,-30.0);
	glVertex3f(-710.0,350.0,-30.0);
	glEnd(); 
	//Front face of left arm shoulder polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,200.0,-10.0);
	glVertex3f(-755.0,200.0,-10.0);
	glVertex3f(-780.0,350.0,-10.0);
	glVertex3f(-710.0,350.0,-10.0);
	glEnd();
	//Back face left arm shoulder polygon 2
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,200.0,-30.0);
	glVertex3f(-755.0,200.0,-30.0);
	glVertex3f(-780.0,350.0,-30.0);
	glVertex3f(-710.0,350.0,-30.0);
	glEnd();
//	//Arm polygon 1
    glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,350.0,-10.0);
	glVertex3f(-800.0,330.0,-10.0);
	glVertex3f(-770.0,190.0,-10.0);
	glVertex3f(-755.0,200.0,-10.0);
	glEnd();
	//Arm polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,330.0,-10.0);
	glVertex3f(-815.0,50.0,-10.0);
	glVertex3f(-785.0,40.0,-10.0);
	glVertex3f(-770.0,190.0,-10.0);
	glEnd();
	//Arm polygon 3
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-815.0,50.0,-10.0);
	glVertex3f(-835.0,-100.0,-10.0);
	glVertex3f(-785.0,-110.0,-10.0);
	glVertex3f(-785.0,40.0,-10.0);
	glEnd();
	//Arm polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-100.0,-10.0);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-785.0,-110.0,-10.0);
	glEnd();
	//Front face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glVertex3f(-825.0,-280.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-30.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glVertex3f(-855.0,-350.0,-30.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-833.0,-380.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-30.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-833.0,-380.0,-30.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glVertex3f(-855.0,-350.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-833.0,-380.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glVertex3f(-820.0,-385.0,-10.0);
	glVertex3f(-820.0,-380.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-833.0,-380.0,-30.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glVertex3f(-820.0,-385.0,-30.0);
	glVertex3f(-820.0,-380.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-808.0,-350.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-808.0,-350.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-10.0);
	glVertex3f(-818.0,-350.0,-10.0);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-30.0);
	glVertex3f(-818.0,-350.0,-30.0);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-810.0,-378.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-10.0);
	glVertex3f(-818.0,-350.0,-10.0);
	glVertex3f(-818.0,-350.0,-30.0);
	glVertex3f(-818.0,-378.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	//glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glVertex3f(-810.0,-378.0,-30.0);
	//glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Right face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glVertex3f(-810.0,-378.0,-30.0);
	//glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Front face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Right face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glEnd();
	//Left side face of arm polygon 1
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-100.0,-10.0);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-825.0,-280.0,-30.0);
	glVertex3f(-835.0,-100.0,-30.0);
	glEnd();
	//Right side face of arm polygon 1
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-785.0,-100.0,-10.0);
	glVertex3f(-810.0,-280.0,-10.0);
	glVertex3f(-810.0,-280.0,-30.0);
	glVertex3f(-785.0,-100.0,-30.0);
	glEnd();
	//Left side face of arm polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-815.0,50.0,-10.0);
	glVertex3f(-835.0,-100.0,-10.0);
	glVertex3f(-835.0,-100.0,-30.0);
	glVertex3f(-815.0,50.0,-30.0);
	glEnd();
	//Right side face of arm polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-785.0,50.0,-10.0);
	glVertex3f(-785.0,-100.0,-10.0);
	glVertex3f(-785.0,-100.0,-30.0);
	glVertex3f(-785.0,50.0,-30.0);
	glEnd();
	//Left side face of arm polygon 3
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,330.0,-10.0);
	glVertex3f(-815.0,50.0,-10.0);
	glVertex3f(-815.0,50.0,-30.0);
	glVertex3f(-800.0,330.0,-30.0);
	glEnd();
	//Right side face of arm polygon 3
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-770.0,330.0,-10.0);
	glVertex3f(-785.0,50.0,-10.0);
	glVertex3f(-785.0,50.0,-30.0);
	glVertex3f(-770.0,330.0,-30.0);
	glEnd();
	//Left side face of arm polygon 4
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,350.0,-10.0);
	glVertex3f(-800.0,330.0,-10.0);
	glVertex3f(-800.0,330.0,-30.0);
	glVertex3f(-780.0,350.0,-30.0);
	glEnd();
	//Back fcae of left arm top most
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,350.0,-30.0);
	glVertex3f(-800.0,330.0,-30.0);
	glVertex3f(-770.0,190.0,-30.0);
	glVertex3f(-755.0,200.0,-30.0);
	glEnd();
	//Back fcae of left arm top
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,330.0,-30.0);
	glVertex3f(-815.0,50.0,-30.0);
	glVertex3f(-785.0,40.0,-30.0);
	glVertex3f(-770.0,190.0,-30.0);
	glEnd();
	//Back fcae of left arm middle
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-815.0,50.0,-30.0);
	glVertex3f(-835.0,-100.0,-30.0);
	glVertex3f(-785.0,-110.0,-30.0);
	glVertex3f(-785.0,40.0,-30.0);
	glEnd();
	//Back fcae of left arm bottom
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-100.0,-30.0);
	glVertex3f(-825.0,-280.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-785.0,-110.0,-30.0);
	glEnd();
glPushMatrix();
	glTranslatef(-770.0,400.0,0.0);
	glRotatef(-20.0,0,0,1);
	sword1();
	glPopMatrix();	
}
//Soldier 2
void soldier2(){
	//Sword2
	glPushMatrix();
	glTranslatef(-730.0,-270.0,0.0);
	glRotatef(50.0,0,0,1);
	sword2();
	glPopMatrix();
		//Left leg
	legs2();
	//Right leg
	glPushMatrix();
	glTranslatef(190.0,0.0,0.0);
	legs2();
	glPopMatrix();
	rightArm2();
	//front face of the first piece of skirt of the soldier 
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-500.0,-10.0);
	glVertex3f(-780.0,-300.0,-10.0);
	glVertex3f(-680.0,-305.0,-10.0);
	glVertex3f(-680.0,-495.0,-10.0);
	glEnd();
	//Back face of the first piece of skirt of the soldier 
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-500.0,-30.0);
	glVertex3f(-780.0,-300.0,-30.0);
	glVertex3f(-680.0,-305.0,-30.0);
	glVertex3f(-680.0,-495.0,-30.0);
	glEnd();	
	//Left Side face of the first piece of skirt of the soldier 
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-500.0,-10.0);
	glVertex3f(-780.0,-300.0,-10.0);
	glVertex3f(-780.0,-300.0,-30.0);
	glVertex3f(-800.0,-500.0,-30.0);
	glEnd();	
	//front face of the 2nd piece of skirt  of the soldier
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-495.0,-10.0);
	glVertex3f(-680.0,-305.0,-10.0);
	glVertex3f(-580.0,-300.0,-10.0);
	glVertex3f(-560.0,-500.0,-10.0);
	glEnd();
	//Back face of the 2nd piece of skirt  of the soldier
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-495.0,-30.0);
	glVertex3f(-680.0,-305.0,-30.0);
	glVertex3f(-580.0,-300.0,-30.0);
	glVertex3f(-560.0,-500.0,-30.0);
	glEnd();
	//Right side face of the 2nd piece of skirt  of the soldier
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-580.0,-300.0,-10.0);
	glVertex3f(-560.0,-500.0,-10.0);
	glVertex3f(-560.0,-500.0,-30.0);
	glVertex3f(-580.0,-300.0,-30.0);
	glEnd();
	//front face of the 3rd piece of skirt  of the soldier
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,-300.0,-10.0);
	glVertex3f(-750.0,-100.0,-10.0);
	glVertex3f(-680.0,-105.0,-10.0);
	glVertex3f(-680.0,-305.0,-10.0);
	glEnd();
	//Back face of the 3rd piece of skirt  of the soldier
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,-300.0,-30.0);
	glVertex3f(-750.0,-100.0,-30.0);
	glVertex3f(-680.0,-105.0,-30.0);
	glVertex3f(-680.0,-305.0,-30.0);
	glEnd();
	//Left side face of the 3rd piece of skirt  of the soldier
	 glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,-300.0,-10.0);
	glVertex3f(-750.0,-100.0,-10.0);
	glVertex3f(-750.0,-105.0,-30.0);
	glVertex3f(-780.0,-305.0,-30.0);
	glEnd();
	//front face of the 4th piece of skirt  of the soldier
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-305.0,-10.0);
	glVertex3f(-680.0,-105.0,-10.0);
	glVertex3f(-610.0,-100.0,-10.0);
	glVertex3f(-580.0,-300.0,-10.0);
	glEnd();
	//Back face of the 4th piece of skirt  of the soldier
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-305.0,-30.0);
	glVertex3f(-680.0,-105.0,-30.0);
	glVertex3f(-610.0,-100.0,-30.0);
	glVertex3f(-580.0,-300.0,-30.0);
	glEnd();
	//Right face of the 4th piece of skirt  of the soldier
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-610.0,-100.0,-10.0);
	glVertex3f(-580.0,-300.0,-10.0);
	glVertex3f(-610.0,-100.0,-30.0);
	glVertex3f(-580.0,-300.0,-30.0);
	glEnd();	
	//Left side face of the 5th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,-100.0,-10.0);
	glVertex3f(-750.0,50.0,-10.0);
	glVertex3f(-680.0,50.0,-10.0);
	glVertex3f(-680.0,-105.0,-10.0);
	glEnd();
	//Back face of the 5th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,-100.0,-30.0);
	glVertex3f(-750.0,50.0,-30.0);
	glVertex3f(-680.0,50.0,-30.0);
	glVertex3f(-680.0,-105.0,-30.0);
	glEnd();
	//Left side face of the 5th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,-100.0,-10.0);
	glVertex3f(-750.0,50.0,-10.0);
	glVertex3f(-750.0,50.0,-30.0);
	glVertex3f(-750.0,-105.0,-30.0);
	glEnd();	
	//front face of the 6th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-105.0,-10.0);
	glVertex3f(-680.0,50.0,-10.0);
	glVertex3f(-610.0,50.0,-10.0);
	glVertex3f(-610.0,-100.0,-10.0);
	glEnd();	
	//Back face of the 6th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,-105.0,-30.0);
	glVertex3f(-680.0,50.0,-30.0);
	glVertex3f(-610.0,50.0,-30.0);
	glVertex3f(-610.0,-100.0,-30.0);
	glEnd();	
	//Right face of the 6th piece of the costume of the soldier
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(-610.0,50.0,-10.0);
	glVertex3f(-610.0,-100.0,-10.0);
	glVertex3f(-610.0,50.0,-30.0);
	glVertex3f(-610.0,-100.0,-30.0);
	glEnd();	
	//front face of the 7th piece of the costume of the soldier
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,50.0,-10.0);
	glVertex3f(-750.0,200.0,-10.0);
	glVertex3f(-680.0,200.0,-10.0);
	glVertex3f(-680.0,50.0,-10.0);
	glEnd();	
	//Back face of the 7th piece of the costume of the soldier
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,50.0,-30.0);
	glVertex3f(-750.0,200.0,-30.0);
	glVertex3f(-680.0,200.0,-30.0);
	glVertex3f(-680.0,50.0,-30.0);
	glEnd();
	//Left side face of the 7th piece of the costume of the soldier
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,50.0,-10.0);
	glVertex3f(-750.0,200.0,-10.0);
	glVertex3f(-750.0,200.0,-30.0);
	glVertex3f(-750.0,50.0,-30.0);
	glEnd();	
	//front face of the 8th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,50.0,-10.0);
	glVertex3f(-680.0,200.0,-10.0);
	glVertex3f(-610.0,200.0,-10.0);
	glVertex3f(-610.0,50.0,-10.0);
	glEnd();	
	//Back face of the 8th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,50.0,-30.0);
	glVertex3f(-680.0,200.0,-30.0);
	glVertex3f(-610.0,200.0,-30.0);
	glVertex3f(-610.0,50.0,-30.0);
	glEnd();
	//Right face of the 8th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-610.0,200.0,-10.0);
	glVertex3f(-610.0,50.0,-10.0);
	glVertex3f(-610.0,200.0,-30.0);
	glVertex3f(-610.0,50.0,-30.0);
	glEnd();		
	//front face of the 9th piece of the costume of the soldier
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,200.0,-10.0);
	glVertex3f(-710.0,350.0,-10.0);
	glVertex3f(-680.0,350.0,-10.0);
	glVertex3f(-680.0,200.0,-10.0);
	glEnd();	
	//Back face of the 9th piece of the costume of the soldier
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,200.0,-30.0);
	glVertex3f(-710.0,350.0,-30.0);
	glVertex3f(-680.0,350.0,-30.0);
	glVertex3f(-680.0,200.0,-30.0);
	glEnd();	
	//front face of the 10th piece of the costume of the soldier
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,200.0,-10.0);
	glVertex3f(-680.0,350.0,-10.0);
	glVertex3f(-650.0,350.0,-10.0);
	glVertex3f(-610.0,200.0,-10.0);
	glEnd();
	rightArm2();
	//Back face of the 10th piece of the costume of the soldier
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex3f(-680.0,200.0,-30.0);
	glVertex3f(-680.0,350.0,-30.0);
	glVertex3f(-650.0,350.0,-30.0);
	glVertex3f(-610.0,200.0,-30.0);
	glEnd();
	//front face of the 11th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-710.0,350.0,-10.0);
	glVertex3f(-695.0,370.0,-10.0);
	glVertex3f(-665.0,370.0,-10.0);
	glVertex3f(-650.0,350.0,-10.0);
	glEnd();
	//Back face of the 11th piece of the costume of the soldier
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-710.0,350.0,-30.0);
	glVertex3f(-695.0,370.0,-30.0);
	glVertex3f(-665.0,370.0,-30.0);
	glVertex3f(-650.0,350.0,-30.0);
	glEnd();
	//Front face of neck 1
	 glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-695.0,370.0,-10.0);
	glVertex3f(-695.0,400.0,-10.0);
	glVertex3f(-665.0,400.0,-10.0);
	glVertex3f(-665.0,370.0,-10.0);
	glEnd();
	//Front face of Face polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-700.0,400.0,0.0);
	glVertex3f(-715.0,500.0,0.0);
	glVertex3f(-680.0,490.0,0.0);
	glVertex3f(-680.0,400.0,0.0);
	glEnd();
	//Back face of Face polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-700.0,400.0,-30.0);
	glVertex3f(-715.0,500.0,-30.0);
	glVertex3f(-680.0,490.0,-30.0);
	glVertex3f(-680.0,400.0,-30.0);
	glEnd();
	//Left face of Face polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-700.0,400.0,0.0);
	glVertex3f(-715.0,500.0,0.0);
	glVertex3f(-715.0,500.0,-30.0);
	glVertex3f(-700.0,400.0,-30.0);
	glEnd();
	//Front face of Face polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,490.0,0.0);
	glVertex3f(-655.0,500.0,0.0);
	glVertex3f(-665.0,400.0,0.0);
	glVertex3f(-680.0,400.0,0.0);
	glEnd();
	//Back face of Face polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,490.0,-30.0);
	glVertex3f(-655.0,500.0,-30.0);
	glVertex3f(-665.0,400.0,-30.0);
	glVertex3f(-680.0,400.0,-30.0);
	glEnd();
	//Right face of Face polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-655.0,500.0,0.0);
	glVertex3f(-665.0,400.0,0.0);
	glVertex3f(-665.0,400.0,-30.0);
	glVertex3f(-655.0,500.0,-30.0);
	glEnd();
	//Front face of Face polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-715.0,500.0,0.0);
	glVertex3f(-715.0,550.0,0.0);
	glVertex3f(-680.0,550.0,0.0);
	glVertex3f(-680.0,490.0,0.0);
	glEnd();
	//Back face of Face polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-715.0,500.0,-30.0);
	glVertex3f(-715.0,550.0,-30.0);
	glVertex3f(-680.0,550.0,-30.0);
	glVertex3f(-680.0,490.0,-30.0);
	glEnd();
	//Left face of Face polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-715.0,500.0,0.0);
	glVertex3f(-715.0,550.0,0.0);
	glVertex3f(-715.0,550.0,-30.0);
	glVertex3f(-715.0,500.0,-30.0);
	glEnd();
	//Front face of Face polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,550.0,0.0);
	glVertex3f(-655.0,560.0,0.0);
	glVertex3f(-655.0,500.0,0.0);
	glVertex3f(-680.0,490.0,0.0);
	glEnd();
	//Back face of Face polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,550.0,-30.0);
	glVertex3f(-655.0,560.0,-30.0);
	glVertex3f(-655.0,500.0,-30.0);
	glVertex3f(-680.0,490.0,-30.0);
	glEnd();
	//Right face of Face polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-655.0,560.0,0.0);
	glVertex3f(-655.0,500.0,0.0);
	glVertex3f(-655.0,500.0,-30.0);
	glVertex3f(-655.0,560.0,-30.0);
	glEnd();
	//Front face of Face polygon 5
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-715.0,550.0,0.0);
	glVertex3f(-710.0,600.0,0.0);
	glVertex3f(-680.0,600.0,0.0);
	glVertex3f(-680.0,550.0,0.0);
	glEnd();
	//Back face of Face polygon 5
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-715.0,550.0,-30.0);
	glVertex3f(-710.0,600.0,-30.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-680.0,550.0,-30.0);
	glEnd();
	//Left face of Face polygon 5
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-715.0,550.0,0.0);
	glVertex3f(-710.0,600.0,0.0);
	glVertex3f(-710.0,600.0,-30.0);
    glVertex3f(-715.0,550.0,-30.0);
	glEnd();
	//Front face of Face polygon 6
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,600.0,0.0);
	glVertex3f(-660.0,600.0,0.0);
	glVertex3f(-655.0,560.0,0.0);
	glVertex3f(-680.0,550.0,0.0);
	glEnd();
	//Back face of Face polygon 6
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-660.0,600.0,-30.0);
	glVertex3f(-655.0,560.0,-30.0);
	glVertex3f(-680.0,550.0,-30.0);
	glEnd();
	//Right face of Face polygon 6
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.7,0.7);
	glVertex3f(-660.0,600.0,0.0);
	glVertex3f(-655.0,560.0,0.0);
	glVertex3f(-655.0,560.0,-30.0);
	glVertex3f(-660.0,600.0,-30.0);
	glEnd();
	//Front face of helmet polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-720.0,600.0,0.0);
	glVertex3f(-680.0,600.0,0.0);
	glVertex3f(-680.0,650.0,0.0);
	glVertex3f(-720.0,650.0,0.0);
	glEnd();
	//Back face of helmet polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-720.0,600.0,-30.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-680.0,650.0,-30.0);
	glVertex3f(-720.0,650.0,-30.0);
	glEnd();
	//Back face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-720.0,600.0,-30.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-680.0,550.0,-60.0);
	glVertex3f(-730.0,550.0,-60.0);
	glEnd();
	//Back face of helmet polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-680.0,600.0,-30.0);
	glVertex3f(-680.0,550.0,-60.0);
	glVertex3f(-640.0,550.0,-60.0);
	glVertex3f(-650.0,600.0,-30.0);
	glEnd();
	//Left face of helmet polygon 1
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-720.0,600.0,-10.0);
	glVertex3f(-720.0,650.0,-10.0);
	glVertex3f(-720.0,650.0,-30.0);
	glVertex3f(-720.0,600.0,-30.0);
	glEnd();
	//Left face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-720.0,600.0,-10.0);
	glVertex3f(-720.0,600.0,-30.0);
	glVertex3f(-720.0,520.0,-30.0);
	glVertex3f(-720.0,520.0,-10.0);
	glEnd();
	//Right face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-650.0,600.0,-10.0);
	glVertex3f(-650.0,600.0,-30.0);
	glVertex3f(-650.0,520.0,-30.0);
	glVertex3f(-650.0,520.0,-10.0);
	glEnd();
	//Front face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-680.0,650.0,0.0);
	glVertex3f(-650.0,650.0,0.0);
	glVertex3f(-650.0,600.0,0.0);
	glVertex3f(-680.0,600.0,0.0);
	glEnd();
	//Back face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-680.0,650.0,-30.0);
	glVertex3f(-650.0,650.0,-30.0);
	glVertex3f(-650.0,600.0,-30.0);
	glVertex3f(-680.0,600.0,-30.0);
	glEnd();
	//Right face of helmet polygon 2
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-650.0,650.0,0.0);
	glVertex3f(-650.0,600.0,0.0);
	glVertex3f(-650.0,600.0,-30.0);
	glVertex3f(-650.0,650.0,-30.0);
	glEnd();
	//Front face of helmet polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-720.0,650.0,0.0);
	glVertex3f(-708.0,700.0,0.0);
	glVertex3f(-680.0,700.0,0.0);
	glVertex3f(-680.0,650.0,0.0);
	glEnd();
	//Back face of helmet polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-720.0,650.0,-30.0);
	glVertex3f(-708.0,700.0,-30.0);
	glVertex3f(-680.0,700.0,-30.0);
	glVertex3f(-680.0,650.0,-30.0);
	glEnd();
	//Left face of helmet polygon 3
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-720.0,650.0,0.0);
	glVertex3f(-708.0,700.0,0.0);
	glVertex3f(-708.0,700.0,-30.0);
	glVertex3f(-720.0,650.0,-30.0);
	glEnd();
	//Front face of helmet polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-680.0,700.0,0.0);
	glVertex3f(-665.0,700.0,0.0);
	glVertex3f(-650.0,650.0,0.0);
	glVertex3f(-680.0,650.0,0.0);
	glEnd();
	//Front face of helmet polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-680.0,700.0,-30.0);
	glVertex3f(-665.0,700.0,-30.0);
	glVertex3f(-650.0,650.0,-30.0);
	glVertex3f(-680.0,650.0,-30.0);
	glEnd();
	//Right face of helmet polygon 4
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	glVertex3f(-665.0,700.0,0.0);
	glVertex3f(-650.0,650.0,0.0);
	glVertex3f(-650.0,650.0,-30.0);
	glVertex3f(-665.0,700.0,-30.0);
	glEnd();
	//Back face of neck 1
	 glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-695.0,370.0,-30.0);
	glVertex3f(-695.0,400.0,-30.0);
	glVertex3f(-665.0,400.0,-30.0);
	glVertex3f(-665.0,370.0,-30.0);
	glEnd();
	//Side face of the 13th piece of the costume of the soldier 
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-695.0,370.0,-10.0);
	glVertex3f(-695.0,370.0,-30.0);
	glVertex3f(-695.0,400.0,-30.0);
	glVertex3f(-695.0,400.0,-10.0);
	glEnd();
	//Side face of collar 1
	//Side face of the 12th piece of the costume of the soldier 
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-710.0,350.0,-10.0);
	glVertex3f(-710.0,350.0,-30.0);
	glVertex3f(-690.0,355.9,-30.0);
	glVertex3f(-690.0,355.9,-10.0);
	glEnd(); 
	//Side face of collar 2
	//Side face of the 13th piece of the costume of the soldier 
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-690.0,355.9,-10.0);
	glVertex3f(-690.0,355.9,-30.0);
	glVertex3f(-695.0,375.0,-30.0);
	glVertex3f(-695.0,375.0,-10.0);
	glEnd();
	 //Side face of collar 3
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-650.0,350.0,-10.0);
	glVertex3f(-650.0,350.0,-30.0);
	glVertex3f(-665.0,355.9,-30.0);
	glVertex3f(-665.0,355.9,-10.0);
	glEnd(); 
	//Side face of collar 4
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-665.0,355.9,-10.0);
	glVertex3f(-665.0,400,-10.0);
	glVertex3f(-665.0,400,-30.0);
	glVertex3f(-665.0,355.0,-30.0);
	glEnd();
	//left arm shoulder polygon 1
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-710.0,350.0,-10.0);
	glVertex3f(-780.0,350.0,-10.0);
	glVertex3f(-780.0,350.0,-30.0);
	glVertex3f(-710.0,350.0,-30.0);
	glEnd(); 
	//Front face of left arm shoulder polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,200.0,-10.0);
	glVertex3f(-755.0,200.0,-10.0);
	glVertex3f(-780.0,350.0,-10.0);
	glVertex3f(-710.0,350.0,-10.0);
	glEnd();
	//Back face left arm shoulder polygon 2
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,200.0,-30.0);
	glVertex3f(-755.0,200.0,-30.0);
	glVertex3f(-780.0,350.0,-30.0);
	glVertex3f(-710.0,350.0,-30.0);
	glEnd();
//	//Arm polygon 1
    glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,350.0,-10.0);
	glVertex3f(-800.0,330.0,-10.0);
	glVertex3f(-770.0,190.0,-10.0);
	glVertex3f(-755.0,200.0,-10.0);
	glEnd();
	//Arm polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,330.0,-10.0);
	glVertex3f(-815.0,50.0,-10.0);
	glVertex3f(-785.0,40.0,-10.0);
	glVertex3f(-770.0,190.0,-10.0);
	glEnd();
	//Arm polygon 3
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-815.0,50.0,-10.0);
	glVertex3f(-835.0,-100.0,-10.0);
	glVertex3f(-785.0,-110.0,-10.0);
	glVertex3f(-785.0,40.0,-10.0);
	glEnd();
	//Arm polygon 4
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-100.0,-10.0);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-785.0,-110.0,-10.0);
	glEnd();
	//Front face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 1
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glVertex3f(-825.0,-280.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-845.0,-310.0,-10.0);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-30.0);
	glVertex3f(-845.0,-310.0,-30.0);
	glVertex3f(-855.0,-350.0,-30.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 2
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-320.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-833.0,-380.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-30.0);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-833.0,-380.0,-30.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 3
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-855.0,-350.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glVertex3f(-855.0,-350.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-833.0,-380.0,-10.0);
	glVertex3f(-840.0,-385.0,-10.0);
	glVertex3f(-820.0,-385.0,-10.0);
	glVertex3f(-820.0,-380.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 4
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-833.0,-380.0,-30.0);
	glVertex3f(-840.0,-385.0,-30.0);
	glVertex3f(-820.0,-385.0,-30.0);
	glVertex3f(-820.0,-380.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-350.0,-10.0);
	glVertex3f(-808.0,-350.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 5
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-350.0,-30.0);
	glVertex3f(-808.0,-350.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-10.0);
	glVertex3f(-818.0,-350.0,-10.0);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-30.0);
	glVertex3f(-818.0,-350.0,-30.0);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-810.0,-378.0,-30.0);
	glEnd();
	//Left face of Wrist polygon 6
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-818.0,-378.0,-10.0);
	glVertex3f(-818.0,-350.0,-10.0);
	glVertex3f(-818.0,-350.0,-30.0);
	glVertex3f(-818.0,-378.0,-30.0);
	glEnd();
	//Front face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	//glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glVertex3f(-810.0,-378.0,-30.0);
	//glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Right face of Wrist polygon 7
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-378.0,-10.0);
	glVertex3f(-810.0,-378.0,-30.0);
	//glVertex3f(-810.0,-378.0,-10.0);
	glEnd();
	//Front face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-10.0);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-830.0,-320.0,-10.0);
	glEnd();
	//Back face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-810.0,-350.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-830.0,-320.0,-30.0);
	glEnd();
	//Right face of Wrist polygon 8
	glColor3f(1.0,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,-350.0,-10.0);
	glVertex3f(-810.0,-290.0,-10.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-800.0,-350.0,-30.0);
	glEnd();
	//Left side face of arm polygon 1
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-100.0,-10.0);
	glVertex3f(-825.0,-280.0,-10.0);
	glVertex3f(-825.0,-280.0,-30.0);
	glVertex3f(-835.0,-100.0,-30.0);
	glEnd();
	//Right side face of arm polygon 1
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-785.0,-100.0,-10.0);
	glVertex3f(-810.0,-280.0,-10.0);
	glVertex3f(-810.0,-280.0,-30.0);
	glVertex3f(-785.0,-100.0,-30.0);
	glEnd();
	//Left side face of arm polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-815.0,50.0,-10.0);
	glVertex3f(-835.0,-100.0,-10.0);
	glVertex3f(-835.0,-100.0,-30.0);
	glVertex3f(-815.0,50.0,-30.0);
	glEnd();
	//Right side face of arm polygon 2
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-785.0,50.0,-10.0);
	glVertex3f(-785.0,-100.0,-10.0);
	glVertex3f(-785.0,-100.0,-30.0);
	glVertex3f(-785.0,50.0,-30.0);
	glEnd();
	//Left side face of arm polygon 3
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,330.0,-10.0);
	glVertex3f(-815.0,50.0,-10.0);
	glVertex3f(-815.0,50.0,-30.0);
	glVertex3f(-800.0,330.0,-30.0);
	glEnd();
	//Right side face of arm polygon 3
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-770.0,330.0,-10.0);
	glVertex3f(-785.0,50.0,-10.0);
	glVertex3f(-785.0,50.0,-30.0);
	glVertex3f(-770.0,330.0,-30.0);
	glEnd();
	//Left side face of arm polygon 4
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,350.0,-10.0);
	glVertex3f(-800.0,330.0,-10.0);
	glVertex3f(-800.0,330.0,-30.0);
	glVertex3f(-780.0,350.0,-30.0);
	glEnd();
	//Back fcae of left arm top most
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-780.0,350.0,-30.0);
	glVertex3f(-800.0,330.0,-30.0);
	glVertex3f(-770.0,190.0,-30.0);
	glVertex3f(-755.0,200.0,-30.0);
	glEnd();
	//Back fcae of left arm top
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-800.0,330.0,-30.0);
	glVertex3f(-815.0,50.0,-30.0);
	glVertex3f(-785.0,40.0,-30.0);
	glVertex3f(-770.0,190.0,-30.0);
	glEnd();
	//Back fcae of left arm middle
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex3f(-815.0,50.0,-30.0);
	glVertex3f(-835.0,-100.0,-30.0);
	glVertex3f(-785.0,-110.0,-30.0);
	glVertex3f(-785.0,40.0,-30.0);
	glEnd();
	//Back face of left arm bottom
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_POLYGON);
	glVertex3f(-835.0,-100.0,-30.0);
	glVertex3f(-825.0,-280.0,-30.0);
	glVertex3f(-810.0,-290.0,-30.0);
	glVertex3f(-785.0,-110.0,-30.0);
	glEnd();
}
//FREEDOMFIGHTERS
void secondSceneSky(){
	//SKY
	 glBegin(GL_POLYGON);
     glColor3f(0.5,0.,0.0);
     glVertex3f(-1000,-1000,-1000.0);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(-1000,1000,-1000.0);
      glColor3f(0.5,0.5,0.5);
     glVertex3f(1000,1000,-1000.0);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(1000,-1000,-1000.0);
     glEnd();
     glFlush();
}
void freedomFighters(){
	//HORSE
	//FILLING OF HORSE 1ST TOE BOTTOM 1
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-900.0,-900.0,0.0);
	glVertex3f(-899.0,-890.0,0.0);
	glVertex3f(-841.0,-890.0,0.0);
	glVertex3f(-840.0,-900.0,0.0);
	glEnd();
	//FILLING OF HORSE 1ST TOE BOTTOM 2
	glBegin(GL_POLYGON);
	glColor3f(0.09,0.09,0.09);
	glVertex3f(-899.0,-890.0,0.0);
	glVertex3f(-895.0,-850.0,0.0);
	glVertex3f(-850.0,-850.0,0.0);
	glVertex3f(-841.0,-890.0,0.0);
	glEnd();
	//HORSE BACK 1ST TOE BOTTOM
	glColor3f(0.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-900.0,-900.0,0.0);
	glVertex3f(-895.0,-850.0,0.0);
	glVertex3f(-850.0,-850.0,0.0);
	glVertex3f(-840.0,-900.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOE TOP
	glBegin(GL_LINES);
    glVertex3f(-895.0,-850.0,0.0);
	glVertex3f(-900.0,-820.0,0.0);
	glEnd();
	//FILLING OF HORSE BACK 1ST1 TOP OF TOE TOP 1
	glColor3f(0.1,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-900.0,-818.0,0.0);
	glVertex3f(-880.0,-592.0,0.0);
	glVertex3f(-848.0,-592.0,0.0);
	glVertex3f(-858.0,-830.0,0.0);
	glEnd();
	//FILLING TRI OF HORSE BACK 1ST1 TOP OF TOE TOP 2
	glColor3f(0.1,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-900.0,-820.0,0.0);
	glVertex3f(-880.0,-590.0,0.0);
	glVertex3f(-848.0,-590.0,0.0);
	glVertex3f(-858.0,-820.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
    glVertex3f(-900.0,-820.0,0.0);
	glVertex3f(-880.0,-590.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
   glVertex3f(-880.0,-590.0,0.0);
	glVertex3f(-890.0,-570.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
  	glVertex3f(-890.0,-570.0,0.0);
	glVertex3f(-885.0,-565.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
    glVertex3f(-885.0,-565.0,0.0);
	glVertex3f(-860.0,-510.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
    glVertex3f(-860.0,-510.0,0.0);
	glVertex3f(-860.0,-440.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
  	glVertex3f(-860.0,-440.0,0.0);
	glVertex3f(-880.0,-360.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
  	glVertex3f(-880.0,-360.0,0.0);
	glVertex3f(-875.0,-280.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
  	glVertex3f(-875.0,-280.0,0.0);
	glVertex3f(-870.0,-260.0,0.0);
	glEnd();
    //HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
    glVertex3f(-870.0,-255.0,0.0);
	glVertex3f(-800.0,-235.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
    glVertex3f(-800.0,-235.0,0.0);
	glVertex3f(-750.0,-230.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
    glVertex3f(-750.0,-230.0,0.0);
	glVertex3f(-700.0,-250.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
    glVertex3f(-700.0,-250.0,0.0);
	glVertex3f(-600.0,-250.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP 
	glBegin(GL_LINES);
    glVertex3f(-600.0,-250.0,0.0);
	glVertex3f(-400.0,-250.0,0.0);
	glEnd();
	//HORSE NECK 
	glBegin(GL_LINES);
    glVertex3f(-400.0,-250.0,0.0);
	glVertex3f(-320.0,100.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-320.0,100.0,0.0);
	glVertex3f(-300.0,110.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-300.0,100.0,0.0);
	glVertex3f(-280.0,116.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-280.0,116.0,0.0);
	glVertex3f(-240.0,119.0,0.0);
	glEnd();
	//FACE
	glBegin(GL_LINES);
    glVertex3f(-240.0,119.0,0.0);
	glVertex3f(-270.0,-50.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-270.0,-50.0,0.0);
	glVertex3f(-260.0,-80.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-260.0,-80.0,0.0);
	glVertex3f(-240.0,-110.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-240.0,-110.0,0.0);
	glVertex3f(-190.0,-112.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-190.0,-112.0,0.0);
	glVertex3f(-185.0,-160.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-185.0,-160.0,0.0);
	glVertex3f(-190.0,-180.0,0.0);
	glEnd();
	glBegin(GL_LINES);
    glVertex3f(-190.0,-180.0,0.0);
	glVertex3f(-170.0,-190.0,0.0);
	glVertex3f(-170.0,-190.0,0.0);
	glVertex3f(-165.0,-165.0,0.0);
	glVertex3f(-165.0,-165.0,0.0);
	glVertex3f(-160.0,-190.0,0.0);
	glVertex3f(-160.0,-190.0,0.0);
	glVertex3f(-140.0,-185.0,0.0);
	glVertex3f(-140.0,-185.0,0.0);
	glVertex3f(-135.0,-135.0,0.0);
	glVertex3f(-135.0,-135.0,0.0);
	glVertex3f(-130.0,-120.0,0.0);
	glVertex3f(-130.0,-120.0,0.0);
	glVertex3f(-135.0,-100.0,0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.4,0.4);
	glVertex3f(-133.0,-100.0,0.0);
	glVertex3f(-133.0,-80.0,0.0);
	glVertex3f(-190.0,-112.0,0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(-133.0,-100.0,0.0);
	glVertex3f(-190.0,-112.0,0.0);
	glVertex3f(-133.0,-100.0,0.0);
	glVertex3f(-133.0,-80.0,0.0);
	glVertex3f(-133.0,-80.0,0.0);
	glVertex3f(-190.0,-112.0,0.0);
	glVertex3f(-135.0,-100.0,0.0);
	glVertex3f(-240.0,119.0,0.0);
	glEnd();
	//JOINING TO FRONT LEG
	glBegin(GL_LINES);
    glVertex3f(-260.0,-80.0,0.0);
	glVertex3f(-265.0,-100.0,0.0);
	glVertex3f(-265.0,-100.0,0.0);
	glVertex3f(-255.0,-110.0,0.0);
	glEnd();
	//CONTINUE TO JOIN THE FRONT LEG 1 LINE 
	 glBegin(GL_LINES);
    glVertex3f(-265.0,-115.0,0.0);
	glVertex3f(-272.0,-212.0,0.0);
	//CONTINUE TO JOIN THE FRONT LEG 2 LINE
	glVertex3f(-272.0,-212.0,0.0);
	glVertex3f(-260.0,-402.0,0.0);
	//JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 1
	glVertex3f(-260.0,-402.0,0.0);
	glVertex3f(-310.0,-422.0,0.0);
//	JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 2
	glVertex3f(-260.0,-402.0,0.0);
	glVertex3f(-230.0,-420.0,0.0);
	//	JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 3
	glVertex3f(-230.0,-420.0,0.0);
	glVertex3f(-230.0,-450.0,0.0);
	//	JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 4
	glVertex3f(-230.0,-450.0,0.0);
	glVertex3f(-235.0,-475.0,0.0);
	//	JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 5
	glVertex3f(-235.0,-475.0,0.0);
	glVertex3f(-235.0,-675.0,0.0);
	//	JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 6
	glVertex3f(-235.0,-675.0,0.0);
	glVertex3f(-230.0,-725.0,0.0);
	//	JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 7
	glVertex3f(-230.0,-725.0,0.0);
	glVertex3f(-250.0,-725.0,0.0);
	//	JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 8
	glVertex3f(-250.0,-725.0,0.0);
	glVertex3f(-260.0,-715.0,0.0);
	//	JOIN TO FIRST FRONT LEG FROM CONTINUE TO JOIN THE FRONT LEG 2 LINE 9
	glVertex3f(-260.0,-715.0,0.0);
	glVertex3f(-270.0,-725.0,0.0);
	// THE FIRST FRONT LEG TOE
	glVertex3f(-270.0,-725.0,0.0);
	glVertex3f(-270.0,-680.0,0.0);
	glVertex3f(-270.0,-680.0,0.0);
	glVertex3f(-295.0,-660.0,0.0);
	glVertex3f(-295.0,-660.0,0.0);
	glVertex3f(-295.0,-755.0,0.0);
	glVertex3f(-295.0,-755.0,0.0);
	glVertex3f(-270.0,-725.0,0.0);
	//CONTINUING UP THE JOURNEY FROM THE SECOND POINT OF FIRST FRONT LEG TOE
	glVertex3f(-270.0,-680.0,0.0);
	glVertex3f(-260.0,-660.0,0.0);
	glVertex3f(-260.0,-660.0,0.0);
	glVertex3f(-258.0,-440.0,0.0);
	glVertex3f(-258.0,-440.0,0.0);
	glVertex3f(-308.0,-450.0,0.0);
	glEnd();
//FILLING OF HORSE BACK 1ST1 TOP OF TOE TOP 1
	glColor3f(0.1,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-895.0,-850.0,0.0);
	glVertex3f(-900.0,-820.0,0.0);
	glVertex3f(-860.0,-825.0,0.0);
	glVertex3f(-860.0,-825.0,0.0);
	glEnd();
	//FILLING OF TRIANGLE HORSE BACK 1ST1 TOP OF TOE TOP 1
	glColor3f(0.1,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-850.0,-840.0,0.0);
	glVertex3f(-860.0,-825.0,0.0);
	glVertex3f(-895.0,-850.0,0.0);
	glEnd();
	//FILLING OF TRIANGLE HORSE BACK 1ST1 TOP OF TOE TOP 2
	glColor3f(0.1,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-850.0,-850.0,0.0);
	glVertex3f(-850.0,-840.0,0.0);
	glVertex3f(-895.0,-850.0,0.0);
	glEnd();
	//FILLING OF TRIANGLE HORSE BACK 1ST1 TOP OF TOE TOP 3
	glColor3f(0.1,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-830.0,-600.0,0.0);
	glVertex3f(-860.0,-600.0,0.0);
	glVertex3f(-850.0,-680.0,0.0);
	glEnd();
	//HORSE BACK FRONT 1ST1 TOP OF TOE TOP 1
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-850.0,-840.0,0.0);
	glVertex3f(-860.0,-825.0,0.0);
	glEnd();
	//HORSE BACK FRONT 1ST1 TOP OF TOE TOP 2
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-860.0,-825.0,0.0);
	glVertex3f(-850.0,-680.0,0.0);
	glEnd();
	//HORSE BACK FRONT 1ST1 TOP OF TOE TOP 3
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-850.0,-680.0,0.0);
	glVertex3f(-830.0,-600.0,0.0);
	glEnd();
	//2ND LEG
	//FILLING OF TRIANGLE HORSE BACK 1ST1 TOP OF TOE TOP 4
	glColor3f(0.125,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-840.0,-600.0,0.0);
	glVertex3f(-808.0,-560.0,0.0);
	glVertex3f(-758.0,-592.0,0.0);
	glVertex3f(-750.0,-620.0,0.0);
	glEnd();
	//FILLING OF TRIANGLE HORSE BACK 1ST1 TOP OF TOE TOP 5
	glColor3f(0.125,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-750.0,-620.0,0.0);
	glVertex3f(-700.0,-618.0,0.0);
	glVertex3f(-688.0,-590.0,0.0);
	glVertex3f(-758.0,-592.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-840.0,-600.0,0.0);
	glVertex3f(-750.0,-620.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-750.0,-620.0,0.0);
	glVertex3f(-700.0,-618.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-700.0,-618.0,0.0);
	glVertex3f(-695.0,-638.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-695.0,-638.0,0.0);
	glVertex3f(-675.0,-635.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-675.0,-635.0,0.0);
	glVertex3f(-677.0,-642.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOE BOTTOM
	glColor3f(1.0,0.0,0.0);
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-682.0,-692.0,0.0);
	glVertex3f(-677.0,-642.0,0.0);
	glVertex3f(-637.0,-642.0,0.0);
	glVertex3f(-627.0,-692.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-637.0,-642.0,0.0);
	glVertex3f(-642.0,-630.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-642.0,-630.0,0.0);
	glVertex3f(-646.0,-590.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-646.0,-590.0,0.0);
	glVertex3f(-648.0,-590.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-648.0,-590.0,0.0);
	glVertex3f(-688.0,-590.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-688.0,-590.0,0.0);
	glVertex3f(-758.0,-592.0,0.0);
	glEnd();
	//HORSE BACK 2nd TOP OF TOE TOP
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-758.0,-592.0,0.0);
	glVertex3f(-808.0,-560.0,0.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glPointSize(2.0);
	glBegin(GL_LINES);
	glVertex3f(-808.0,-558.0,0.0);
	glVertex3f(-794.0,-519.0,0.0);
	glVertex3f(-794.0,-519.0,0.0);
	glVertex3f(-792.0,-500.0,0.0);
	glVertex3f(-792.0,-500.0,0.0);
	glVertex3f(-790.0,-475.0,0.0);
	glVertex3f(-790.0,-475.0,0.0);
	glVertex3f(-788.0,-450.0,0.0);
	glVertex3f(-788.0,-450.0,0.0);
	glVertex3f(-786.0,-425.0,0.0);
	//HORIZINTAL
	glVertex3f(-786.0,-425.0,0.0);
	glVertex3f(-686.0,-422.0,0.0);
	glVertex3f(-686.0,-422.0,0.0);
	glVertex3f(-596.0,-425.0,0.0);
	glVertex3f(-596.0,-425.0,0.0);
	glVertex3f(-526.0,-425.0,0.0);
	glVertex3f(-526.0,-425.0,0.0);
	glVertex3f(-476.0,-420.0,0.0);
	glVertex3f(-476.0,-420.0,0.0);
	glVertex3f(-360.0,-425.0,0.0);
	//FRONT LEG LINE 1
	glVertex3f(-360.0,-395.0,0.0);
	glVertex3f(-345.0,-585.0,0.0);
	//FRONT LEG LINE 2
	glVertex3f(-345.0,-585.0,0.0);
	glVertex3f(-380.0,-785.0,0.0);
	//FRONT LEG LINE 3
	glVertex3f(-380.0,-785.0,0.0);
	glVertex3f(-360.0,-825.0,0.0);
	//FRONT LEG LINE 4
	glVertex3f(-360.0,-825.0,0.0);
	glVertex3f(-362.0,-850.0,0.0);
	//FRONT LEG LINE 5
	glVertex3f(-312.0,-850.0,0.0);
	glVertex3f(-322.0,-830.0,0.0);
	//FRONT LEG LINE 6
	glVertex3f(-322.0,-830.0,0.0);
	glVertex3f(-315.0,-610.0,0.0);
	//FRONT LEG LINE 7
	glVertex3f(-315.0,-610.0,0.0);
	glVertex3f(-308.0,-590.0,0.0);
	//FRONT LEG LINE 8
	glVertex3f(-308.0,-590.0,0.0);
	glVertex3f(-313.0,-350.0,0.0);
	glEnd();
	//FRONT LEG TOE
	glBegin(GL_LINE_LOOP);
	glVertex3f(-370.0,-900.0,0.0);
	glVertex3f(-362.0,-850.0,0.0);
	glVertex3f(-312.0,-850.0,0.0);
	glVertex3f(-304.0,-900.0,0.0);
	glEnd();
    //HORSE BACK 1ST1 TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-840.0,-600.0,0.0);
	glVertex3f(-842.0,-560.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-842.0,-560.0,0.0);
	glVertex3f(-836.0,-530.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-836.0,-530.0,0.0);
	glVertex3f(-838.0,-440.0,0.0);
	glEnd();
	//HORSE BACK 1ST1 TOP OF TOE TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-838.0,-440.0,0.0);
	glVertex3f(-880.0,-360.0,0.0);
	glEnd();
}
//Test phase 1
void phase1(){
	 //SKY
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     glVertex3f(-1000,-1000,0);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(-1000,1000,0);
      glColor3f(0.5,0.5,0.5);
     glVertex3f(1000,1000,0);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(1000,-1000,0);
     glEnd();
      int i;
 char title[]="GRAPHICAL VISUALIZATION OF INDIAN INDEPENDENCE";
 char clgName[]="SRINIVAS SCHOOL OF ENGINEERING";
 char by[]="BY";
 char dept[]="COMPUTER SCIENCE AND ENGINEERING";
 char year[]="2017";
 char rv[]="RITHVIK";
 char rv_usn[]="4ES13CS048";
 char kk[]="KARTHIK";
 char kk_usn[]="4ES14CS046";
 
 glPushMatrix();
 glTranslatef(-2900+y,850,0);
 glScalef(0.4,0.6,0.4);
 glColor3f(0.0,0.0,0.59861);
 for(i=0;i<strlen(title);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,title[i]);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(-800.0,-2700+x,0.0);
 glScalef(0.6,0.6,0.4);
 glColor3f(0.0,0.1,0.5);
 for(i=0;i<strlen(clgName);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,clgName[i]);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(-700,-2600+x,0);
 glScalef(0.4,0.5,0.4);
 glColor3f(0,0,0.059861);
 for(i=0;i<strlen(dept);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,dept[i]);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(0.0,-2800+x,0.0);
 glScalef(0.8,0.5,0.13);
 glColor3f(0,0,0.059861);
 for(i=0;i<strlen(year);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,year[i]);
 glPopMatrix(); 
  glPushMatrix();
 glTranslatef(-1750+x,300,0);
 glScalef(0.2,0.4,0.13);
 glColor3f(0,0,0.059861);
 for(i=0;i<strlen(rv);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,rv[i]);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(-1750+x,200,0);
 glScalef(0.2,0.4,0.16);
 glColor3f(0,0,0.059861);
 for(i=0;i<strlen(rv_usn);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,rv_usn[i]);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(1500-x,300,0);
 glScalef(0.2,0.4,0.13);
 glColor3f(0,0,0.059861);
 for(i=0;i<strlen(kk);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,kk[i]);
 glPopMatrix();  
 glPushMatrix();
 glTranslatef(1500-x,200,0);
 glScalef(0.2,0.4,0.13);
 glColor3f(0,0,0.059861);
 for(i=0;i<strlen(kk_usn);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,kk_usn[i]);
 glPopMatrix();
     glFlush();
}
//CENTRE SMALL PENTAGON
void centreSmallPentagon(){
	//BOTTOM
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-240.0,255.0,0.0);
	glVertex3f(-240.0,275.0,0.0);
	glVertex3f(-210.0,275.0,0.0);
	glVertex3f(-210.0,255.0,0.0);
	glEnd();
	//TOP
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-242.0,275.0,0.0);
	glVertex3f(-242.0,305.0,0.0);
	glVertex3f(-207.0,305.0,0.0);
	glVertex3f(-207.0,275.0,0.0);
	glEnd();	
	//TRI
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-242.0,305.0,0.0);
	glVertex3f(-224.5,325.0,0.0);
	glVertex3f(-207.0,305.0,0.0);
	glEnd();
	//sharp top
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-226.0,325.0,0.0);
	glVertex3f(-225.0,340.0,0.0);
	glVertex3f(-224.0,325.0,0.0);
	glEnd();
}
//CENTRE FINISH
void centreFinish(){
	glColor3f(0.5,0.0,0.0);
	glLineWidth(5.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-250.0,-40.0,0.0);
	glVertex3f(-250.0,170.0,0.0);
	glVertex3f(-200.0,225.0,0.0);
	glVertex3f(-150.0,170.0,0.0);
	glVertex3f(-150.0,-40.0,0.0);
	glEnd();
} 
void rightLargePentagon(){
	//RIGHT PENTAGON STANDS
        //1 OF 1 
        glColor3f(1.0,0.0,0.0);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex3f(-740.0,-200.0,0.0);
        glVertex3f(-740.0,255.0,0.0);
        glEnd();
        //2 OF 1
        glColor3f(1.0,0.0,0.0);
        glBegin(GL_LINES);
        glVertex3f(-740.0,100.0,0.0);
        glVertex3f(-668.0,170.0,0.0);
        glEnd();
        //3 OF 1
        glColor3f(1.0,0.0,0.0);
        glBegin(GL_LINES);
        glVertex3f(-668.0,170.0,0.0);
        glVertex3f(-608.0,100.0,0.0);
        glEnd();
        //4 OF 1
        glColor3f(1.0,0.0,0.0);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex3f(-608.0,255.0,0.0);
        glVertex3f(-608.0,-200.0,0.0);
        glEnd();
        //1 OF 2
        glColor3f(1.0,0.0,0.0);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex3f(-608.0,-200.0,0.0);
        glVertex3f(-608.0,255.0,0.0);
        glEnd();
        //2 OF 2
        glColor3f(1.0,0.0,0.0);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex3f(-608.0,100.0,0.0);
        glVertex3f(-540.0,170.0,0.0);
        glEnd();
        //3 OF 2
        glColor3f(1.0,0.0,0.0);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex3f(-540.0,170.0,0.0);
        glVertex3f(-468.0,100.0,0.0);
        glEnd();
        //4 OF 2
        glColor3f(1.0,0.0,0.0);
        glBegin(GL_LINES);
        glLineWidth(15.0);
        glVertex3f(-469.0,255.0,0.0);
        glVertex3f(-469.0,-210.0,0.0);
        glEnd();
        //1 OF 3
        glColor3f(1.0,0.0,0.0);
        glBegin(GL_LINES);
        glLineWidth(15.0);
        glVertex3f(-469.0,-210.0,0.0);
        glVertex3f(-469.0,255.0,0.0);
        glEnd();
        //2 OF 3
        glColor3f(1.0,0.0,0.0);
        glBegin(GL_LINES);
        glLineWidth(15.0);
        glVertex3f(-469.0,100.0,0.0);
        glVertex3f(-411.0,170.0,0.0);
        glEnd();
        //3 OF 3
        glColor3f(1.0,0.0,0.0);
        glBegin(GL_LINES);
        glLineWidth(15.0);
        glVertex3f(-411.0,170.0,0.0);
        glVertex3f(-370.0,100.0,0.0);
        glEnd();
        //4 OF 3
        glColor3f(1.0,0.0,0.0);
        glBegin(GL_LINES);
        glLineWidth(6.0);
        glVertex3f(-370.0,255.0,0.0);
        glVertex3f(-370.0,-210.0,0.0);
        glEnd();
	    //FILLING CENTRE   
		glBegin(GL_POLYGON);
        glColor3f(1.0,0.0,0.0); 
	    glVertex3f(-600.0,265.8,0.0);
	    glVertex3f(-600.0,600.0,0.0); 
	    glVertex3f(-540.0,600.0,0.0);
	    glVertex3f(-540.0,265.8,0.0);
	    glEnd();
	    //FILLING BOTTOM
	    glBegin(GL_POLYGON);
        glColor3f(1.0,0.0,0.0); 
	    glVertex3f(-742.0,260.0,0.0);
	    glVertex3f(-742.0,400.0,0.0);
	    glVertex3f(-415.0,400.0,0.0);
	    glVertex3f(-415.0,260.0,0.0);
	    glEnd();
	    //FILLING LEFT TRIANGLE
	     glBegin(GL_POLYGON);
        glColor3f(1.0,0.0,0.0); 
	    glVertex3f(-415.0,400.0,0.0);
	    glVertex3f(-540.0,400.0,0.0);
	    glVertex3f(-540.0,600.0,0.0); 
	    glEnd();
	     //FILLING RIGHT TRIANGLE
	     glBegin(GL_POLYGON);
        glColor3f(1.0,0.0,0.0); 
	    glVertex3f(-742.0,400.0,0.0);
	    glVertex3f(-600.0,400.0,0.0);
	    glVertex3f(-600.0,600.0,0.0); 
	    glEnd();
	    //FILL ORANGE BOTTOM
	    glBegin(GL_POLYGON);
        glColor3f(0.8,0.0,0.0); 
	    glVertex3f(-415.0,260.0,0.0);
	    glVertex3f(-415.0,400.0,0.0);
	    glVertex3f(-370.0,400.0,0.0);
	    glVertex3f(-370.0,260.0,0.0);
	    glEnd();
	    //FILL ORANGE TOP
	    glBegin(GL_POLYGON);
        glColor3f(0.8,0.0,0.0); 
	    glVertex3f(-415.0,400.0,0.0);
	    glVertex3f(-370.0,400.0,0.0);
	    glVertex3f(-540.0,600.0,0.0);
	    glEnd();
	    //SHARP TOP FOR SMALL PENTAGON
	    glColor3f(0.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex3f(-571.5,650.0,0.0);
	    glVertex3f(-571.0,700.0,0.0);
	    glVertex3f(-570.5,650.0,0.0);
	    glEnd();
	    //RIGHT SMALL PENTAGON
	    glBegin(GL_POLYGON);
	    glColor3f(1.0,1.0,1.0);
	    glVertex3f(-600.0,600.0,0.0);
	    glVertex3f(-570.0,650.0,0.0);
	    glVertex3f(-540.0,600.0,0.0);
	    glEnd();
        //HORIZONTAL OVER THE PENTAGON STANDS
        glBegin(GL_POLYGON);
        glColor3f(0.5,0.0,0.0); 
	    glVertex3f(-766.0,250.8,0.0);
	    glVertex3f(-766.0,265.0,0.0);
	    glVertex3f(-340.0,265.0,0.0);
	    glVertex3f(-340.0,250.8,0.0);
	    glEnd();
	    //FILLING OF HORIZONTAL OVER THE PENTAGON STANDS
	    //FILLING 1
	    glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex3f(-740.0,100.0,0.0);
	    glVertex3f(-740.0,255.0,0.0);
	    glVertex3f(-668.0,255.0,0.0);
	    glVertex3f(-668.0,170.0,0.0);
	    glEnd();
//	    //FILLING 2
	    glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex3f(-668.0,170.0,0.0);
	    glVertex3f(-668.0,255.0,0.0);
	   glVertex3f(-608.0,255.0,0.0);
	   glVertex3f(-608.0,100.0,0.0);
	    glEnd();
	     //FILLING 3
	    glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex3f(-608.0,100.0,0.0);
	    glVertex3f(-608.0,255.0,0.0);
	    glVertex3f(-540.0,255.0,0.0);
	   glVertex3f(-540.0,170.0,0.0);
	    glEnd();
	     //FILLING 4
	    glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex3f(-540.0,170.0,0.0);
	    glVertex3f(-540.0,255.0,0.0);
	    glVertex3f(-468.0,255.0,0.0);
	    glVertex3f(-468.0,100.0,0.0);
	    glEnd();
	    //FILLING 5
	    glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex3f(-468.0,100.0,0.0);
	    glVertex3f(-468.0,255.0,0.0);
	    glVertex3f(-411.0,255.0,0.0);
	   glVertex3f(-411.0,170.0,0.0);
	    glEnd();
	    //FILLING 6
	    glColor3f(1.0,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex3f(-411.0,170.0,0.0);
	     glVertex3f(-411.0,255.0,0.0);
	    glVertex3f(-370.0,255.0,0.0);
	   glVertex3f(-370.0,100.0,0.0);
	    glEnd();
        //BEHIND THE TOPS
        glColor3f(0.5,0.0,0.0);
        glBegin(GL_POLYGON);
	    glVertex3f(-756.0,-260.0,0.0);
	    glVertex3f(-756.0,-170.0,0.0);
	    glVertex3f(-402.0,-170.0,0.0);
	    glVertex3f(-402.0,-260.0,0.0);
	    glEnd();
} 
//WHITE PENTAGON
void rightPentagon(){
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-310.0,780.0,0.0);
	glVertex3f(-310.0,830.0,0.0);
	glVertex3f(-246.0,830.0,0.0);
	glVertex3f(-246.0,780.0,0.0);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-310.0,830.0,0.0);
	glVertex3f(-278.0,890.0,0.0);
	glVertex3f(-246.0,830.0,0.0);
	glEnd();
	//SHARP TOP
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-280.0,890.0,0.0);
	glVertex3f(-278.0,940.0,0.0);
	glVertex3f(-276.0,890.0,0.0);
	glEnd();
}
void topWhiteOfCentreRightPillar(){
	glColor3f(1.0,1.0,1.0);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2f(-308.0,710.0);
	glVertex2f(-308.0,780.0);
	glEnd();
}
void centreRightPillar(){
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-300.0,-696.0,0.0);
	glVertex3f(-300.0,700.0,0.0);
	glVertex3f(-256.0,700.0,0.0);
	glVertex3f(-256.0,-696.0,0.0);
	glEnd();
	//TOP OF CENTRE RIGHT PILLAR
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-300.0,700.0,0.0);
	glVertex3f(-310.0,710.0,0.0);
	glVertex3f(-246.0,710.0,0.0);
	glVertex3f(-256.0,700.0,0.0);
	glEnd();
	//ORANGE LINES ON CENTRE RIGHT PILLAR
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-300.0,690.0,0.0);
	glVertex3f(-300.0,700.0,0.0);
	glVertex3f(-256.0,700.0,0.0);
	glVertex3f(-256.0,690.0,0.0);
	glEnd();
}
void rightTop(){
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-990.0,-640.0,0.0);
	glVertex3f(-990.0,-500.0,0.0);
	//glVertex3f(-980.0,-530.0,0.0);
	glVertex3f(-940.0,-500.0,0.0);
	//glVertex3f(-940.0,-580.0,0.0);
	glVertex3f(-940.0,-640.0,0.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(-970.0,-640.0,0.0);
	glVertex3f(-970.0,-540.0,0.0);
	glVertex3f(-960.0,-540.0,0.0);
	glVertex3f(-960.0,-640.0,0.0);
	glEnd();
	glPushMatrix();
	glTranslatef(-965.0,-495.0,0.0);
	glColor3f(0.5,0.0,0.0);
	glutSolidSphere(25,100,100);
	glPopMatrix();
	
}
//POINTS OVER RED FORT RIGHT BOTTOM
void pointsOverRightBottom(){
	glPointSize(6.0);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	glVertex3f(-990.0,-650.0,0.0);
	glEnd();
}
//TOP OF RED FORT RIGHT BOTTOM
void topOfRightBottom(){
	glBegin(GL_POLYGON);
    glColor3f(0.2,0.0,0.0); 
	glVertex3f(-1000.0,-639.8,0.0);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-1000.0,-630.0,0.0);
	glColor3f(0.6,0.0,0.0);
	glVertex3f(-787.0,-630.0,0.0);
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-787.0,-639.8,0.0);
	glEnd();
}
//RED FORT RIGHT BOTTOM
void buildBottom(){
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-1000.0,-880.0,0.0);
	glVertex3f(-1000.0,-640.0,0.0);
	glVertex3f(-787.0,-640.0,0.0);
	glVertex3f(-787.0,-880.0,0.0);
	glEnd();
}
 //GREEN GRASS FILLING
void greenGrassFilling(){
  	//GREEN GRASS FILLING RECTANGLE 1
  	glColor3f(0.0,1.0,0.0);
  	glBegin(GL_POLYGON);
  	glVertex3f(-1000.0,-880.0,0.0);
  	glVertex3f(-1000.0,-780.0,0.0);
  	glVertex3f(-433.34,-780.0,0.0);
  	glVertex3f(-433.34,-880.0,0.0);
  	glEnd();
  	//GREEN GRASS FILLING MIDDLE RECTANGLE 2
  	glColor3f(0.0,1.0,0.0);
  	glBegin(GL_POLYGON);
  	glVertex3f(-323.34,-880.0,0.0);
  	glVertex3f(-323.34,-696.0,0.0);
  	glVertex3f(363.32,-696.0,0.0);
  	glVertex3f(363.32,-880.0,0.0);
  	glEnd();
  	//GREEN GRASS FILLING SLANT 1
  	glColor3f(0.0,1.0,0.0);
  	glBegin(GL_POLYGON);
  	glVertex3f(-433.34,-880.0,0.0);
  	glVertex3f(-433.34,-780.0,0.0);
  	glVertex3f(-323.34,-696.0,0.0);
  	glVertex3f(-323.34,-880.0,0.0);
  	glEnd();
  	//GREEN GRASS FILLING SLANT 1
  	glColor3f(0.0,1.0,0.0);
  	glBegin(GL_POLYGON);
  	glVertex3f(363.32,-880.0,0.0);
  	glVertex3f(363.32,-696.0,0.0);
  	glVertex3f(443.32,-802.0,0.0);
  	glVertex3f(443.32,-880.0,0.0);
  	glEnd();
  //GREEN GRASS FILLING RECTANGLE 3
    glColor3f(0.0,1.0,0.0);
  	glBegin(GL_POLYGON);
  	glVertex3f(433.32,-880.0,0.0);
  	glVertex3f(433.32,-802.0,0.0);
  	glVertex3f(1000.0,-802.0,0.0);
  	glVertex3f(1000.0,-880.0,0.0);
  	glEnd();
}
//BASE CENTRE POINTS
void point(){
	glColor3f(0.0,0.0,0.0);
	glLineWidth(10.0);
	glBegin(GL_LINES);
	glVertex3f(-1000,-940,0);
	glVertex3f(-1000,-900,0);
	glEnd();
}
void base(){
	//BOTTOM LINE
	glLineWidth(2.0);
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_LINES);
	glVertex3f(-1000.0,-1000.0,0.0);
	glVertex3f(1000.0,-1000.0,0.0);
	glEnd();
	//BASE TOP
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.0,0.0);
	glVertex3f(-1000.0,-900.0,0.0);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-1000.0,-880.0,0.0);
	glColor3f(0.6,0.0,0.0);
	glVertex3f(1000.0,-880.0,0.0);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(1000.0,-900.0,0.0);
	glEnd();
	//BASE CENTRE
	glColor3f(0.8,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-1000.0,-999,0);
	glVertex3f(-1000.0,-901.9,0.0);
	glVertex3f(1000.0,-901.9,0.0);
	glVertex3f(1000.0,-999.0,0.0);
	glEnd();
}
void  verticalGate(){
	 glLineWidth(2.0);
	 glBegin(GL_LINES);
     glVertex3f(-990.0,-880.0,0.0);
     glVertex3f(-990.0,-690.0,0.0);
     glEnd();
}
void sky(){
     //SKY
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.,0.5);
     glVertex3f(-1000,-700,0);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(-1000,1000,0);
      glColor3f(0.5,0.5,0.5);
     glVertex3f(1000,1000,0);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(1000,-700,0);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.5,0.0);
     glVertex3f(-1000,-1000,0);
     glColor3f(1.0,1.0,1.0);
     glVertex3f(-1000,-700,0);
      glColor3f(0.5,0.5,0.5);
     glVertex3f(1000,-700,0);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(1000,-1000,0);
     glEnd();
 }
 //HORIZONAL GATES
 void horizontalGate(){
    //HORIZONAL GATE LINE1
     glColor3f(1.0,1.0,1.0);
     glBegin(GL_LINES);
     glVertex3f(-1000.0,-770.0,0.0);
     glVertex3f(-433.0,-770.0,0.0);
     glEnd();
     //HORIZONAL GATE LINE 2
     glBegin(GL_LINES);
     glVertex3f(-433.0,-770.0,0.0);
     glVertex3f(-324.0,-666.0,0.0);
     glEnd();
     //HORIZONAL GATE LINE 3
     glBegin(GL_LINES);
     glVertex3f(-324.0,-666.0,0.0);
     glVertex3f(362.32,-666.0,0.0);
     glEnd();
     //HORIZONAL GATE LINE 4
     glBegin(GL_LINES);
     glVertex3f(362.32,-666.0,0.0);
     glVertex3f(453.0,-792.0,0.0);
     glEnd();
     //HORIZONAL GATE LINE 5
     glBegin(GL_LINES);
     glVertex3f(453.0,-792.0,0.0);
     glVertex3f(1000.0,-792.0,0.0);
     glEnd();
}
     void display(){
          glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
          if(flag==0)
          phase1();
           else{
		   if(flag==1){ 
        //SKY
        sky();
        char title[]="PRESENTING INDIA'S FREEDOM STRUGGLE";
 
 glPushMatrix();
 glTranslatef(-500,-1000+cmv1,0);
 glScalef(0.4,0.6,0.4);
 glColor3f(0.0,0.0,0.59861);
 for(i=0;i<strlen(title);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,title[i]);
 glPopMatrix();
        //SMALLL LEFT PENTAGON SHARP TOP
        glColor3f(0.0,0.0,0.0);
	    glBegin(GL_LINES);
	    glVertex3f(581.5,648.5,0.0);
	    glVertex3f(581.5,700.0,0.0);
	    glEnd();
        //CENTRE SMALL PENTAGON
        //CSP 1
        centreSmallPentagon();
        //CSP 2
        glPushMatrix();
        glTranslatef(75.0,0.0,0.0);
        centreSmallPentagon();
        glPopMatrix();
         //CSP 3
        glPushMatrix();
        glTranslatef(150.0,0.0,0.0);
        centreSmallPentagon();
        glPopMatrix();
         //CSP 4
        glPushMatrix();
        glTranslatef(225.0,0.0,0.0);
        centreSmallPentagon();
        glPopMatrix();
         //CSP 5
        glPushMatrix();
        glTranslatef(300.0,0.0,0.0);
        centreSmallPentagon();
        glPopMatrix();
         //CSP 6
        glPushMatrix();
        glTranslatef(375.0,0.0,0.0);
        centreSmallPentagon();
        glPopMatrix();
         //CSP 8
        glPushMatrix();
        glTranslatef(450.0,0.0,0.0);
        centreSmallPentagon();
        glPopMatrix();
        //CENTRE FINISH
        //CF1
        centreFinish();
        //CF2
        glPushMatrix();
        glTranslatef(100.0,0.0,0.0);
        centreFinish();
        glPopMatrix();
        //CF3
        glPushMatrix();
        glTranslatef(200.0,0.0,0.0);
        centreFinish();
        glPopMatrix();
        //CF4
        glPushMatrix();
        glTranslatef(300.0,0.0,0.0);
        centreFinish();
        glPopMatrix();
        //CF5
        glPushMatrix();
        glTranslatef(400.0,0.0,0.0);
        centreFinish();
        glPopMatrix();
        //FILLING OF CFs
        //CF FILLING 1
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(-250.0,170.0,0.0);
  	    glVertex3f(-250.0,250.0,0.0);
  	    glVertex3f(-200.0,250.0,0.0);
  	    glVertex3f(-200.0,225.0,0.0);
  	    glEnd();
  	    //CF FILLING 2
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(-200.0,225.0,0.0);
  	    glVertex3f(-200.0,250.0,0.0);
  	    glVertex3f(-150.0,250.0,0.0);
  	    glVertex3f(-150.0,170.0,0.0);
  	    glEnd();
  	    //CF FILLING 3
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(-150.0,170.0,0.0);
  	    glVertex3f(-150.0,250.0,0.0);
  	    glVertex3f(-100.0,250.0,0.0);
  	    glVertex3f(-100.0,225.0,0.0);
  	    glEnd();
  	    //CF FILLING 4
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(-100.0,225.0,0.0);
  	    glVertex3f(-100.0,250.0,0.0);
  	    glVertex3f(-50.0,250.0,0.0);
  	    glVertex3f(-50.0,170.0,0.0);
  	    glEnd();
  	    //CF FILLING 5
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(-50.0,170.0,0.0);
  	    glVertex3f(-50.0,250.0,0.0);
  	    glVertex3f(0.0,250.0,0.0);
  	    glVertex3f(0.0,225.0,0.0);
  	    glEnd();
  	    //CF FILLING 6
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(0.0,225.0,0.0);
  	    glVertex3f(0.0,250.0,0.0);
  	    glVertex3f(50.0,250.0,0.0);
  	    glVertex3f(50.0,170.0,0.0);
  	    glEnd();
  	     //CF FILLING 7
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(50.0,170.0,0.0);
  	    glVertex3f(50.0,250.0,0.0);
  	    glVertex3f(100.0,250.0,0.0);
  	    glVertex3f(100.0,225.0,0.0);
  	    glEnd();
  	    //CF FILLING 8
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(100.0,225.0,0.0);
  	    glVertex3f(100.0,250.0,0.0);
  	    glVertex3f(150.0,250.0,0.0);
  	    glVertex3f(150.0,170.0,0.0);
  	    glEnd();
  	    //CF FILLING 9
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(150.0,170.0,0.0);
  	    glVertex3f(150.0,250.0,0.0);
  	    glVertex3f(200.0,250.0,0.0);
  	    glVertex3f(200.0,225.0,0.0);
  	    glEnd();
  	    //CF FILLING 10
        glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(200.0,225.0,0.0);
  	    glVertex3f(200.0,250.0,0.0);
  	    glVertex3f(250.0,250.0,0.0);
  	    glVertex3f(250.0,170.0,0.0);
  	    glEnd();
  	    //NAKAL OVERLAPPER 1
        glBegin(GL_LINES);
        glColor3f(0.0,0.0,0.8);
        glVertex3f(-252.0,-40.0,0.0);
        glColor3f(0.5,0.5,0.5);
        glVertex3f(-252.0,250.0,0.0);
        glEnd();
         //NAKAL OVERLAPPER 2
        glBegin(GL_LINES);
        glColor3f(0.0,0.0,0.8);
        glVertex3f(254.0,-40.0,0.0);
        glColor3f(0.5,0.5,0.5);
        glVertex3f(254.0,250.0,0.0);
        glEnd();
         //FINISH SECOND RIGHT SLANT
	    glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(-324.0,-214.0,0.0);
  	    glVertex3f(-324.0,-100.0,0.0);
  	    glVertex3f(-305.0,-76.0,0.0);
  	    glVertex3f(-305.0,-214.0,0.0);
  	    glEnd();
          //FINISH FIRST RIGHT SLANT
	    glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(-348.0,-214.0,0.0);
  	    glVertex3f(-348.0,-76.0,0.0);
  	    glVertex3f(-328.0,-100.0,0.0);
  	    glVertex3f(-328.0,-214.0,0.0);
  	    glEnd();
  	    // //FINISH FIRST CENTRE SLANT
	    glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(-250.0,-234.0,0.0);
  	    glVertex3f(-250.0,-66.0,0.0);
  	    glVertex3f(-215.0,-86.0,0.0);
  	    glVertex3f(-215.0,-234.0,0.0);
  	    glEnd();
          //FINISH SECOND CENTRE SLANT
	    glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(225.0,-234.0,0.0);
  	    glVertex3f(225.0,-86.0,0.0);
  	    glVertex3f(262.0,-66.0,0.0);
  	    glVertex3f(262.0,-234.0,0.0);
  	    glEnd();
  	    // //FINISH FIRST LEFT SLANT
	    glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(315.0,-234.0,0.0);
  	    glVertex3f(315.0,-76.0,0.0);
  	    glVertex3f(340.0,-96.0,0.0);
  	    glVertex3f(340.0,-234.0,0.0);
  	    glEnd();
          //FINISH SECOND LEFT SLANT
	    glBegin(GL_POLYGON);
	    glColor3f(0.5,0.0,0.0);
  	    glVertex3f(344.0,-214.0,0.0);
  	    glVertex3f(344.0,-96.0,0.0);
  	    glVertex3f(374.0,-76.0,0.0);
  	    glVertex3f(374.0,-214.0,0.0);
  	    glEnd();
        rightLargePentagon();
        //FIRST TOP OF RIGHT 1
        glPushMatrix();
        glTranslatef(224.0,380.0,0.0);
        rightTop();
        glPopMatrix();
        //LEFT LARGE PENTAGON
  	    glPushMatrix();
  	    glTranslatef(1152.0,0.0,0.0);
  	    rightLargePentagon();
  	    glPopMatrix();
          //SECOND TOP OF RIGHT 1
          glPushMatrix();
          glTranslatef(284.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //TOP OF RIGHT 1 & 2
          glPushMatrix();
          glTranslatef(344.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //FIRST TOP ONLY OF RIGHT 2
          glPushMatrix();
          glTranslatef(408.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //SECOND TOP ONLY OF RIGHT 2
          glPushMatrix();
          glTranslatef(469.5,380.0,0.0);
          rightTop();
          glPopMatrix();
          //FIRST TOP OF RIGHT 3
          glPushMatrix();
          glTranslatef(525.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //SECOND TOP OF RIGHT 3
          glPushMatrix();
          glTranslatef(588.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //LEFT TOP POLYGON AND SPHERE
          //FIRST TOP OF LEFT 
          glPushMatrix();
          glTranslatef(1372.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //SECOND TOP OF LEFT 
          glPushMatrix();
          glTranslatef(1435.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //3 TOP OF LEFT 
          glPushMatrix();
          glTranslatef(1497.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //FOURTH TOP OF LEFT 
          glPushMatrix();
          glTranslatef(1561.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //5th TOP OF LEFT 
          glPushMatrix();
          glTranslatef(1624.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //6th TOP OF LEFT 
          glPushMatrix();
          glTranslatef(1687.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //7th TOP OF LEFT 
          glPushMatrix();
          glTranslatef(1745.0,380.0,0.0);
          rightTop();
          glPopMatrix();
          //finish right
          glColor3f(0.8,0.0,0.0);
	     glBegin(GL_POLYGON);
  	    glVertex3f(-339.0,-880.0,0.0);
  	    glVertex3f(-339.0,-220.0,0.0);
  	    glVertex3f(-300.0,-220.0,0.0);
  	    glVertex3f(-300.0,-880.0,0.0);
  	    glEnd();
  	    //HORIZONTAL OVER FINISH RIGHT
	    glBegin(GL_POLYGON);
	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(-339.0,-220.0,0.0);
  	    glColor3f(0.8,0.0,0.0);
  	    glVertex3f(-339.0,-214.0,0.0);
  	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(-300.0,-214.0,0.0);
  	    glColor3f(0.8,0.0,0.0);
  	    glVertex3f(-300.0,-220.0,0.0);
  	    glEnd();
  	    //finish left
  	    glColor3f(0.8,0.0,0.0);
	     glBegin(GL_POLYGON);
  	    glVertex3f(265.0,-880.0,0.0);
  	    glVertex3f(265.0,-220.0,0.0);
  	    glVertex3f(367.0,-220.0,0.0);
  	    glVertex3f(367.0,-880.0,0.0);
  	    glEnd();
  	    //HORIZONTAL OVER FINISH RIGHT
	    glBegin(GL_POLYGON);
	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(265.0,-220.0,0.0);
  	    glColor3f(0.8,0.0,0.0);
  	    glVertex3f(265.0,-214.0,0.0);
  	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(367.0,-214.0,0.0);
  	    glColor3f(0.8,0.0,0.0);
  	    glVertex3f(367.0,-220.0,0.0);
  	    glEnd();
  	    //FINAL BOTTOM CENTER HORIZONTAL
  	     glBegin(GL_POLYGON);
	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(-256.0,-50.0,0.0);
  	    glColor3f(0.8,0.0,0.0);
  	    glVertex3f(-256.0,-40.0,0.0);
  	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(265.0,-40.0,0.0);
  	    glColor3f(0.8,0.0,0.0);
  	    glVertex3f(265.0,-50.0,0.0);
  	    glEnd();
  	    //FINAL TOP CENTER HORIZONTAL
  	     glBegin(GL_POLYGON);
	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(-256.0,250.0,0.0);
  	    glColor3f(0.8,0.0,0.0);
  	    glVertex3f(-256.0,255.0,0.0);
  	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(265.0,255.0,0.0);
  	    glColor3f(0.8,0.0,0.0);
  	    glVertex3f(265.0,250.0,0.0);
  	    glEnd();
        //FIRST OF RIGHT 1
		glColor3f(0.5,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-787.0,-880.0,0.0);
  	    glVertex3f(-787.0,-215.0,0.0);
  	    glVertex3f(-624.0,-215.0,0.0);
  	    glVertex3f(-624.0,-880.0,0.0);
  	    glEnd();
  	    //DESIGN 1 FOR FIRST OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-780.0,-880.0,-10.0);
  	    glVertex3f(-780.0,-690.0,-10.0);
  	    glVertex3f(-620.0,-690.0,-10.0);
  	    glVertex3f(-620.0,-880.0,-10.0);
  	    glEnd();
  	    //DESIGN 2 FOR FIRST OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-780.0,-690.0,-10.0);
  	    glVertex3f(-780.0,-480.0,-10.0);
  	    glVertex3f(-630.0,-480.0,-10.0);
  	    glVertex3f(-630.0,-880.0,-10.0);
  	    glEnd();
  	    //TRIANGULAR DESIGN FOR FIRST OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-780.0,-480.0,-10.0);
  	    glVertex3f(-705.0,-380.0,-10.0);
  	    glVertex3f(-630.0,-480.0,-10.0);
  	    glEnd();
	    //SECOND OF RIGHT 1
	    glColor3f(0.6,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-624.0,-880.0,0.0);
  	    glVertex3f(-624.0,-215.0,0.0);
  	    glVertex3f(-483.0,-215.0,0.0);
  	    glVertex3f(-483.0,-880.0,0.0);
  	    glEnd();
  	    //DESIGN 1 FOR SECOND OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-624.0,-880.0,-10.0);
  	    glVertex3f(-624.0,-690.0,-10.0);
  	    glVertex3f(-485.0,-690.0,-10.0);
  	    glVertex3f(-485.0,-880.0,-10.0);
  	    glEnd();
  	    //DESIGN 2 FOR SECOND OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-624.0,-690.0,-10.0);
  	    glVertex3f(-624.0,-480.0,-10.0);
  	    glVertex3f(-485.0,-480.0,-10.0);
  	    glVertex3f(-485.0,-880.0,-10.0);
  	    glEnd();
  	    //TRIANGULAR DESIGN FOR SECOND OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-624.0,-480.0,-10.0);
  	    glVertex3f(-554.5,-380.0,-10.0);
  	    glVertex3f(-485.0,-480.0,-10.0);
  	    glEnd();
  	    //3 OF RIGHT 1
  	    glColor3f(0.5,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-483.0,-880.0,0.0);
  	    glVertex3f(-483.0,-215.0,0.0);
  	    glVertex3f(-339.0,-215.0,0.0);
  	    glVertex3f(-339.0,-880.0,0.0);
  	    glEnd();
  	     //DESIGN 1 FOR 3 OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-480.0,-880.0,10.0);
  	    glVertex3f(-480.0,-690.0,10.0);
  	    glVertex3f(-339.0,-690.0,10.0);
  	    glVertex3f(-339.0,-880.0,10.0);
  	    glEnd();
  	    //DESIGN 2 FOR 3 OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-480.0,-690.0,10.0);
  	    glVertex3f(-480.0,-480.0,10.0);
  	    glVertex3f(-339.0,-480.0,10.0);
  	    glVertex3f(-339.0,-880.0,10.0);
  	    glEnd();
  	    //TRIANGULAR DESIGN FOR 3 OF RIGHT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(-480.0,-480.0,10.0);
  	    glVertex3f(-408.5,-380.0,10.0);
  	    glVertex3f(-339.0,-480.0,10.0);
  	    glEnd();
  	    //LEFT PART
  	     //FIRST OF LEFT 1
		glColor3f(0.5,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(367.0,-880.0,0.0);
  	    glVertex3f(367.0,-215.0,0.0);
  	    glVertex3f(530.0,-215.0,0.0);
  	    glVertex3f(530.0,-880.0,0.0);
  	    glEnd();
  	    //DESIGN 1 FOR FIRST OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(374.0,-880.0,-10.0);
  	    glVertex3f(374.0,-690.0,-10.0);
  	    glVertex3f(524.0,-690.0,-10.0);
  	    glVertex3f(524.0,-880.0,-10.0);
  	    glEnd();
  	    //DESIGN 2 FOR FIRST OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(374.0,-690.0,-10.0);
  	    glVertex3f(374.0,-480.0,-10.0);
  	    glVertex3f(524.0,-480.0,-10.0);
  	    glVertex3f(524.0,-880.0,-10.0);
  	    glEnd();
  	    //TRIANGULAR DESIGN FOR FIRST OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(374.0,-480.0,-10.0);
  	    glVertex3f(449.0,-380.0,-10.0);
  	    glVertex3f(524.0,-480.0,-10.0);
  	    glEnd();
	    //SECOND OF LEFT 1
	    glColor3f(0.6,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(528.0,-880.0,0.0);
  	    glVertex3f(528.0,-215.0,0.0);
  	    glVertex3f(669.0,-215.0,0.0);
  	    glVertex3f(669.0,-880.0,0.0);
  	    glEnd();
  	    //DESIGN 1 FOR SECOND OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(528.0,-880.0,-10.0);
  	    glVertex3f(528.0,-690.0,-10.0);
  	    glVertex3f(667.0,-690.0,-10.0);
  	    glVertex3f(667.0,-880.0,-10.0);
  	    glEnd();
  	    //DESIGN 2 FOR SECOND OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(528.0,-690.0,-10.0);
  	    glVertex3f(528.0,-480.0,-10.0);
  	    glVertex3f(667.0,-480.0,-10.0);
  	    glVertex3f(667.0,-880.0,-10.0);
  	    glEnd();
  	    //TRIANGULAR DESIGN FOR SECOND OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(528.0,-480.0,-10.0);
  	    glVertex3f(598.5,-380.0,-10.0);
  	    glVertex3f(667.0,-480.0,-10.0);
  	    glEnd();
  	    //3 OF LEFT 1
  	    glColor3f(0.5,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(669.0,-880.0,0.0);
  	    glVertex3f(669.0,-215.0,0.0);
  	    glVertex3f(813.0,-215.0,0.0);
  	    glVertex3f(813.0,-880.0,0.0);
  	    glEnd();
  	     //DESIGN 1 FOR 3 OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(669.0,-880.0,10.0);
  	    glVertex3f(669.0,-690.0,10.0);
  	    glVertex3f(810.0,-690.0,10.0);
  	    glVertex3f(810.0,-880.0,10.0);
  	    glEnd();
  	    //DESIGN 2 FOR 3 OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(669.0,-690.0,10.0);
  	    glVertex3f(669.0,-480.0,10.0);
  	    glVertex3f(810.0,-480.0,10.0);
  	    glVertex3f(810.0,-880.0,10.0);
  	    glEnd();
  	    //TRIANGULAR DESIGN FOR 3 OF LEFT 1
  	    glColor3f(0.2,0.0,0.0);
  	    glBegin(GL_POLYGON);
  	    glVertex3f(669.0,-480.0,10.0);
  	    glVertex3f(740.5,-380.0,10.0);
  	    glVertex3f(812.0,-480.0,10.0);
  	    glEnd();
  	    //HORIZONTAL OVER LEFT
  	    glBegin(GL_POLYGON);
  	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(365.0,-215.0,10.0);
  	    glColor3f(0.1,0.1,0.1);
  	    glVertex3f(365.0,-210.0,10.0);
  	    glColor3f(0.6,0.0,0.0);
  	    glVertex3f(817.0,-210.0,10.0);
  	    glColor3f(0.2,0.0,0.0);
  	    glVertex3f(817.0,-215.0,10.0);
  	    glEnd();
          //RED FORT RIGHT BOTTOM
          buildBottom();
          //POINTS OVER RED FORT RIGHT BOTTOM 1
          pointsOverRightBottom();
          //POINTS OVER RED FORT RIGHT BOTTOM 2
          glPushMatrix();
          glTranslatef(65.0,0.0,0.0);
          pointsOverRightBottom();
          glPopMatrix();
          //POINTS OVER RED FORT RIGHT BOTTOM 3
          glPushMatrix();
          glTranslatef(130.0,0.0,0.0);
          pointsOverRightBottom();
          glPopMatrix();
          //POINTS OVER RED FORT RIGHT BOTTOM 4
          glPushMatrix();
          glTranslatef(195.0,0.0,0.0);
          pointsOverRightBottom();
          glPopMatrix();
          //Right TOP 1
          rightTop();
          //Right TOP 2
          glPushMatrix();
          glTranslatef(77.0,0.0,0.0);
          rightTop();
          glPopMatrix();
          //Right TOP 3
          glPushMatrix();
          glTranslatef(154.0,0.0,0.0);
          rightTop();
          glPopMatrix();
          //LEFT TOP 1
          glPushMatrix();
          glTranslatef(1804.0,0.0,0.0);
          rightTop();
          glPopMatrix();
          //LEFT TOP 2
          glPushMatrix();
          glTranslatef(1881.0,0.0,0.0);
          rightTop();
          glPopMatrix();
          //LEFT TOP 3
          glPushMatrix();
          glTranslatef(1958.0,0.0,0.0);
          rightTop();
          glPopMatrix();
          //LEFT BOTTOM OF THE RED FORT
        glPushMatrix();
        glTranslatef(1810.0,0.0,0.0);
        buildBottom();
        glPopMatrix();
        //TOP OF LEFT BOTTOM OF THE RED FORT
          glPushMatrix();
          glTranslatef(1810.0,0.0,0.0);
          topOfRightBottom();
          glPopMatrix();
          //POINTS OVER RED FORT LEFT BOTTOM 1
          glPushMatrix();
          glTranslatef(1815.0,0.0,0.0);
          pointsOverRightBottom();
          glPopMatrix();
          //POINTS OVER RED FORT LEFT BOTTOM 2
          glPushMatrix();
          glTranslatef(1875.0,0.0,0.0);
          pointsOverRightBottom();
          glPopMatrix();
          //POINTS OVER RED FORT LEFT BOTTOM 3
          glPushMatrix();
          glTranslatef(1930.0,0.0,0.0);
          pointsOverRightBottom();
          glPopMatrix();
          //POINTS OVER RED FORT LEFT BOTTOM 4
          glPushMatrix();
          glTranslatef(1990.0,0.0,0.0);
          pointsOverRightBottom();
          glPopMatrix();
          //CENTRE TOP 1
          glPushMatrix();
          glTranslatef(789.0,413.0,0.0);
          rightTop();
          glPopMatrix();
           //CENTRE TOP 2
          glPushMatrix();
          glTranslatef(849.0,413.0,0.0);
          rightTop();
          glPopMatrix();
           //CENTRE TOP 3
          glPushMatrix();
          glTranslatef(909.0,413.0,0.0);
          rightTop();
          glPopMatrix();
           //CENTRE TOP 4
          glPushMatrix();
          glTranslatef(969.0,413.0,0.0);
          rightTop();
          glPopMatrix();
           //CENTRE TOP 5
          glPushMatrix();
          glTranslatef(1029.0,413.0,0.0);
          rightTop();
          glPopMatrix();
           //CENTRE TOP 6
          glPushMatrix();
          glTranslatef(1089.0,413.0,0.0);
          rightTop();
          glPopMatrix();
           //CENTRE TOP 7
          glPushMatrix();
          glTranslatef(1149.0,413.0,0.0);
          rightTop();
          glPopMatrix();
          //HORIZONTAL OVER RIGHT CENTRE BASE
        glBegin(GL_POLYGON);
        glColor3f(0.8,0.0,0.0); 
	    glVertex3f(-791.0,-215.0,10.0);
	    glColor3f(0.2,0.0,0.0); 
	    glVertex3f(-791.0,-208.0,10.0);
	     glColor3f(0.8,0.8,0.8); 
	    glVertex3f(-336.0,-208.0,10.0);
	     glColor3f(0.2,0.0,0.0); 
	    glVertex3f(-336.0,-215.0,10.0);
	    glEnd();
           //TOP OF RED FORT RIGHT BOTTOM
          topOfRightBottom();
          //TOP WHITE ON CENTRE RIGHT PILLAR 1
          topWhiteOfCentreRightPillar();
          //TOP WHITE ON CENTRE RIGHT PILLAR 3
          glPushMatrix();
          glTranslatef(37.0,0.0,0.0);
          topWhiteOfCentreRightPillar();
          glPopMatrix();
          //TOP WHITE ON CENTRE RIGHT PILLAR 2
          glPushMatrix();
          glTranslatef(27.0,0.0,0.0);
          topWhiteOfCentreRightPillar();
          glPopMatrix();
          //TOP WHITE ON CENTRE RIGHT PILLAR 4
          glPushMatrix();
          glTranslatef(61.0,0.0,0.0);
          topWhiteOfCentreRightPillar();
          glPopMatrix();
          //TOP WHITE ON CENTRE LEFT PILLAR 1
          glPushMatrix();
          glTranslatef(566.0,0.0,0.0);
          topWhiteOfCentreRightPillar();
          glPopMatrix();
           //TOP WHITE ON CENTRE LEFT PILLAR 2
          glPushMatrix();
          glTranslatef(600.0,0.0,0.0);
          topWhiteOfCentreRightPillar();
          glPopMatrix();
           //TOP WHITE ON CENTRE LEFT PILLAR 3
          glPushMatrix();
          glTranslatef(590.0,0.0,0.0);
          topWhiteOfCentreRightPillar();
          glPopMatrix();
           //TOP WHITE ON CENTRE LEFT PILLAR 4
          glPushMatrix();
          glTranslatef(625.0,0.0,0.0);
          topWhiteOfCentreRightPillar();
          glPopMatrix();
          //RIGHT PENTAGON
          rightPentagon();
          ////LEFT PENTAGON
          glPushMatrix();
          glTranslatef(566.0,0.0,0.0);
          rightPentagon();
          glPopMatrix();
          //CENTRE RIGHT PILLAR
          centreRightPillar();
          //CENTRE LEFT PILLAR
           glPushMatrix();
          glTranslatef(565.5,0.0,0.0);
          centreRightPillar();
          glPopMatrix();
          //CENTRE BOTTOM
         glColor3f(0.2,0.0,0.0);
	    glBegin(GL_POLYGON);
	    glVertex3f(-256.0,-696.0,0.0);
	    glVertex3f(-256.0,-222.5,0.0);
	    glVertex3f(265.0,-222.5,0.0);
	    glVertex3f(265.0,-696.0,0.0);
	    glEnd();
	     //TOP OF CENTRE BOTTOM
	    glBegin(GL_POLYGON);
	    glColor3f(0.4,0.3,0.0);
	    glVertex3f(-256.0,-222,0.0);
	    glColor3f(1.0,1.0,1.0);
	    glVertex3f(-256.0,-228.0,0.0);
	    glColor3f(0.4,0.3,0.0);
	    glVertex3f(265.0,-228.0,0.0);
	    glColor3f(1.0,1.0,1.0);
	    glVertex3f(265.0,-222,0.0);
	    glEnd();
          //HORIZONAL GATE 1
          horizontalGate();
          //HORIZONAL GATE 2
           glPushMatrix();
           glTranslatef(0.0,40.0,0.0);
           horizontalGate();
           glPopMatrix();
           //HORIZONAL GATE 3
           glPushMatrix();
           glTranslatef(0.0,80.0,0.0);
           horizontalGate();
           glPopMatrix();
           //VERTICAL GATE 1
           verticalGate();
           //VERTICAL GATE 2
           glPushMatrix();
           glTranslatef(183.0,0.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 3
           glPushMatrix();
           glTranslatef(366.0,0.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 4
           glPushMatrix();
           glTranslatef(557.0,0.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 5
           glPushMatrix();
           glTranslatef(666.0,104.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 6
           glPushMatrix();
           glTranslatef(762.5,104.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 7
           glPushMatrix();
           glTranslatef(859.0,104.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 8
           glPushMatrix();
           glTranslatef(1030.5,104.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 9
           glPushMatrix();
           glTranslatef(1137.0,104.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 10
           glPushMatrix();
           glTranslatef(1235.5,104.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 11
           glPushMatrix();
           glTranslatef(1352.32,104.0,0.0);
           verticalGate();
           glPopMatrix();
           //VERTICAL GATE 12
           glPushMatrix();
           glTranslatef(1443.0,-22.0,0.0);
           verticalGate();
           glPopMatrix();
            //VERTICAL GATE 13
           glPushMatrix();
           glTranslatef(1626.0,-22.0,0.0);
           verticalGate();
           glPopMatrix();
            //VERTICAL GATE 14
           glPushMatrix();
           glTranslatef(1809.0,-22.0,0.0);
           verticalGate();
           glPopMatrix();
            //VERTICAL GATE 15
           glPushMatrix();
           glTranslatef(1984.0,-22.0,0.0);
           verticalGate();
           glPopMatrix();
           base();
           //BASE CENTER POINTS LINES
           glColor3f(0.1,0.1,0.1);
           glLineWidth(1.0);
           glBegin(GL_LINES);
           glVertex3f(-1000,-920,0);
           glVertex3f(1000,-920,0);
           glEnd();
           point();
           glPushMatrix();
           glTranslatef(50,0,0);
           point();
           glPopMatrix();
           glPushMatrix();
           glTranslatef(100,0,0);
           point();
           glPopMatrix();
           glPushMatrix();
           glTranslatef(150,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(200,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(250,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(300,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(350,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(400,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(450,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(500,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(550,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(600,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(650,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(700,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(750,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(800,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(850,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(900,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(950,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1000,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1050,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1100,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1150,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1200,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1250,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1300,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1350,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1400,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1450,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1500,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1550,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1600,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1650,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1700,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1750,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1800,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1850,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1900,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(1950,0,0);
           point();
           glPopMatrix();
            glPushMatrix();
           glTranslatef(2000,0,0);
           point();
           glPopMatrix();
          // greenGrass();
           greenGrassFilling();             
         char title1[]="PRESENTING INDIA'S FREEDOM STRUGGLE";
 
 glPushMatrix();
 glTranslatef(-500,-1000+cmv1,0);
 glScalef(0.4,0.6,0.4);
 glColor3f(0.0,0.0,0.59861);
 for(i=0;i<strlen(title);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,title1[i]);
 glPopMatrix();
           
       }
       
     if(flag==2)
{
    //SECOND SCENE SKY
        secondSceneSky();
        char title[]="1857-FIRST WAR OF INDIAN INDEPENDENCE";
        glPushMatrix();
        glLineWidth(2.0);
        glTranslatef(-500,-900+cmv,0);
        glScalef(0.4,0.6,0.4);
        glColor3f(0.0,0.0,0.59861);
        for(i=0;i<strlen(title);i++)
        glutStrokeCharacter(GLUT_STROKE_ROMAN,title[i]);
        glPopMatrix();
        glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-100.0+smv,-300.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-100+smv,-500.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-100.0+smv,-700.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-100+smv,-900.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-500.0+smv,-100.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-500.0+smv,-300.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-500.0+smv,-500.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-500.0+smv,-700.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-500.0+smv,-900.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-900.0+smv,-100.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-900.0+smv,-300.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-900.0+smv,-500.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-900.0+smv,-700.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-900.0+smv,-900.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1300.0+smv,-100.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1300.0+smv,-300.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1300.0+smv,-500.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1300.0+smv,-700.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1300.0+smv,-900.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1600.0+smv,-100.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1600.0+smv,-300.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1600.0+smv,-500.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1600.0+smv,-700.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
      glPushMatrix();
       glScalef(0.5,0.5,0.0);
       glTranslatef(-1600.0+smv,-900.0,0.0);
       glRotatef(60,0,1,0);
      soldier1();
      glPopMatrix();
     //Other Soldier 1
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(300.0+smv,0.0,0.0);
      glRotatef(60,0,1,0);
     soldier1();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(800.0-smv,0.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1000.0-smv,-100.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1000.0-smv,-300.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1000.0-smv,-500.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
      //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1000.0-smv,-700.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1000.0-smv,-900.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1200.0-smv,-100.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1200.0-smv,-300.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1200.0-smv,-500.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1200.0-smv,-700.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1200.0-smv,-900.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1400.0-smv,-100.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1400.0-smv,-300.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1400.0-smv,-500.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1600.0-smv,-100.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1600.0-smv,-300.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1600.0-smv,-500.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1600.0-smv,-700.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1600.0-smv,-900.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1400.0-smv,-700.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1400.0-smv,-900.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1800.0-smv,-100.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1800.0-smv,-300.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1800.0-smv,-500.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1800.0-smv,-700.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(1800.0-smv,-900.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(2000.0-smv,-100.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(2000.0-smv,-300.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(2000.0-smv,-500.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(2000.0-smv,-700.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
     //Other Soldier 2
     glPushMatrix();
     glScalef(0.5,0.5,0.0);
     glTranslatef(2000.0-smv,-900.0,0.0);
      glRotatef(-60,0,1,0);
     soldier2();
     glPopMatrix();
    glFlush();
     // glutSwapBuffers();
  }
  if(flag==3){
  sky();
  char title[]="DANDI MARCH-1930";
 
 glPushMatrix();
 glTranslatef(-500,-1000+up,0);
 glScalef(0.4,0.6,0.4);
 glColor3f(0.0,0.0,0.59861);
 for(i=0;i<strlen(title);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,title[i]);
 glPopMatrix();
  //2nd
glPushMatrix();
glTranslatef(t1-mv,k1-225,0);
glRotatef(theta-z,0,0,1);
glTranslatef(-t1-mv,-k1-225,0);
glColor3f(1.0,0.0,0.0);
d1();
glPopMatrix();
//1st
glPushMatrix();
glTranslatef(t2-mv,k2-225,0);
glRotatef(theta+r1,0,0,1);
glTranslatef(-t2-mv,-k2-225,0);
d();
glPopMatrix();
glPushMatrix();
    glTranslatef(10-hmv1,400,0);
glTranslatef(-10-hmv,20-225,0);
glRotatef(theta+zh1,0,0,1);
glTranslatef(-(-10)-hmv,-20-225,0);
glColor3f(1.0,0.0,0.0);
h2();
glPopMatrix();
glPushMatrix();
	//Gandhi's body
    glPushMatrix();
    glTranslatef(0.0-mv1,-488.0,0.0);
    gandhiBody();
    glPopMatrix();
    if(lhu==40)
    cd=430;
    if(lhu==80)
    cd=470;
    if(lhu>=120)
    cd=510;
    glPushMatrix();
    glRotatef(20.0,0,0,1);
    glTranslatef(10,cd,0);
    glTranslatef(-10-mv,20-225,0);
    glRotatef(theta-zh,0,0,1);
    glTranslatef(-(-10)-mv,-20-225,0);
    glColor3f(1.0,0.0,0.0);
    h1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(325-hmv1,420,0);
    glTranslatef(-10-hmv,20-225,0);
    glRotatef(theta+zh1,0,0,1);
    glTranslatef(-(-10)-hmv,-20-225,0);
    glColor3f(1.0,0.0,0.0);
    hfg2();
   glPopMatrix();
   glPushMatrix();
   glColor3f(0.0,0.0,1.0);
   glTranslatef(300.0-mv1,-400.0,0.0);
   gandhiFollowers();
  glPopMatrix();
  glPushMatrix();
  glTranslatef(300,60,0);
  glTranslatef(t2-mv,k2-225,0);
  glRotatef(theta+r1,0,0,1);
  glTranslatef(-t2-mv,-k2-225,0);
  lgf();
  glPopMatrix();
  glPushMatrix();
glTranslatef(300,60,0);
glTranslatef(t1-mv,k1-225,0);
glRotatef(theta-z,0,0,1);
glTranslatef(-t1-mv,-k1-225,0);
glColor3f(1.0,0.0,0.0);
lfg1();
glPopMatrix();
glPushMatrix();
    glRotatef(20.0,0,0,1);
    glTranslatef(325,cd,0);
    glTranslatef(0,-20,0);
glTranslatef(-10-mv,20-225,0);
glRotatef(theta-zh1,0,0,1);
glTranslatef(-(-10)-mv,-20-225,0);
glColor3f(1.0,0.0,0.0);
hgf1();
glPopMatrix();
  }
  if(flag==4){
  	sky();
  	glPushMatrix();
  	glTranslatef(00.0,-500.0,0.0);
  	salutingSoldier();
  	glPopMatrix();
  	glPushMatrix();
  	glTranslatef(300.0,-500.0,0.0);
  	salutingSoldier();
  	glPopMatrix();
  	glPushMatrix();
  	glTranslatef(600.0,-500.0,0.0);
  	salutingSoldier();
  	glPopMatrix();
  	glPushMatrix();
  	glTranslatef(-300.0,-500.0,0.0);
  	salutingSoldier();
  	glPopMatrix();
  	glPushMatrix();
  	glTranslatef(-600.0,-500.0,0.0);
  	salutingSoldier();
  	glPopMatrix();
  	glPushMatrix();
  	glTranslatef(-900.0,-500.0,0.0);
  	salutingSoldier();
  	glPopMatrix();
  	glPushMatrix();
  	glTranslatef(200.0,900.0-fd,0.0);
  	EnglishFlag();
  	glPopMatrix();
  	glPushMatrix();
  	glTranslatef(200.0,10.0+fu,0.0);
  	IndianFlag();
  	glPopMatrix();
  	glColor3f(0.7,0.7,0.7);
	glPushMatrix();
	glTranslatef(-260.0,0.0,0.0);
	glScalef(2.0,250.5,0.0);
	glutSolidCube(5.0);
	glPopMatrix();
  	glPushMatrix();
  	glTranslatef(-200.0,-100.0,0.0);
  	flagPostBase();
  	glPopMatrix();
  	char title[]=" FINALLY INDIA BECAME FREE FROM BRITISH RULE ON AUGUST-15-1947 ";
 
 glPushMatrix();
 glTranslatef(-900,900,0);
 glScalef(0.3,0.6,0.4);
 glColor3f(0.0,0.0,0.59861);
 for(i=0;i<strlen(title);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,title[i]);
 glPopMatrix();
  }
}
if(flag==5){
	sky();
	char title[]="THANK YOU";
 
 glPushMatrix();
 glLineWidth(2.0);
 glRotatef(0+chmv,0,1,0);
 glTranslatef(-500,-1000+chmv,0);
 glScalef(0.7,0.9,0.9);
 glColor3f(1.0,0.0,0.0);
 for(i=0;i<strlen(title);i++)
 glutStrokeCharacter(GLUT_STROKE_ROMAN,title[i]);
 glPopMatrix();
}
glFlush();
glutSwapBuffers();
}
  
         
          void myinit(){
               glClearColor(1.0,1.0,1.0,1.0);
               glColor3f(1.0,0.0,0.0);
               glShadeModel(GL_SMOOTH);
               glMatrixMode(GL_PROJECTION);
               glLoadIdentity();
               glOrtho(-1000.0,1000.0,-1000.0,1000.0,-1000.0,1000.0);
               }
void myKey(unsigned char key,int x,int y){
	if(key=='E'||key=='e'&& flag==5)
	exit(0);

}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(1350,690);
    glutInitWindowPosition(0,0);
    glutCreateWindow("GRAPHICAL VISUALIZATION OF INDIAN INDEPENDENCE");
    myinit();
    glutDisplayFunc(display);
    glutKeyboardFunc(myKey);
    timer(0);
    glutMainLoop();
    return(0);
}
