#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include <math.h>
#include <Windows.h>
#include <MMSystem.h>
# define PI 3.14159265358979323846


void circle(float a, float b, float r)
{
    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a; GLfloat y=b; GLfloat radius = r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
}

void quad(float a, float b, float c, float d, float e, float f, float g, float h)
{
     glBegin(GL_QUADS);
     glVertex2f(a,b);
     glVertex2f(c,d);
     glVertex2f(e,f);
     glVertex2f(g,h);
     glEnd();
}


void triangle(float a, float b, float c, float d, float e, float f)
{
    glBegin(GL_TRIANGLES);
    glVertex2f(a,b);
    glVertex2f(c,d);
    glVertex2f(e,f);
    glEnd();
}


void line(float a, float b, float c, float d)
{
     glBegin(GL_LINES);
     glVertex2f(a,b);
     glVertex2f(c,d);
     glEnd();
}
void rainySeason();
void winter_start();


void Idle()
{

    glutPostRedisplay();//// marks the current window as needing to be redisplayed

}

void display_rainySeason(int b)
{
   glutDisplayFunc(rainySeason);
}

void display_wintar_start(int b)
{
   glutDisplayFunc(winter_start);
}


void sound()
{
    PlaySound(TEXT("sound.WAV"), NULL, SND_ASYNC);
}



void Backgroun()
{
  glBegin(GL_TRIANGLE_FAN);
  glVertex2f(0.162f, 0.142f);
  glVertex2f(0.207f, 0.189f);
  glVertex2f(0.398f, 0.015f);
  glVertex2f(0.553f, 0.114f);
  glVertex2f(0.776f, -0.017f);
  glVertex2f(0.909f, 0.086f);
  glVertex2f(1.004f, 0.019f);
  glVertex2f(1.004f, 1.003f);
  glVertex2f(-0.998f, 0.999f);
  glVertex2f(-0.998f, 0.039f);
  glVertex2f(-0.798f, 0.177f);
  glVertex2f(-0.647f, 0.047f);
  glVertex2f(-0.247f, 0.394f);
  glVertex2f(-0.098f, 0.379f);
  glEnd();

}

void Snow_Up_the_mountain()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.169f, 0.311f);
    glVertex2f(-0.251f, 0.232f);
    glVertex2f(-0.255f, 0.410f);
    glVertex2f(-0.410f, 0.268f);
    glVertex2f(-0.251f, 0.410f);
    glVertex2f(-0.093f, 0.410f);
    glVertex2f(0.035f, 0.268f);
    glVertex2f(-0.078f, 0.311f);
    glVertex2f(-0.056f, 0.209f);
    glEnd();
}

void Big_Mountain()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.249f, 0.402f);
    glVertex2f(-0.100f, 0.394f);
    glVertex2f(0.351f, -0.028f);
    glVertex2f(-0.762f, -0.025f);
    glEnd();
}

void Mountain_set1()
{
     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(-0.678f, 0.027f);
     glVertex2f(-0.796f, 0.189f);
     glVertex2f(-0.631f, 0.058f);
     glEnd();

     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(0.344f, -0.021f);
     glVertex2f(0.202f, 0.189f);
     glVertex2f(0.447f, -0.017f);
     glEnd();


     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(-0.020f, -0.02f);
     glVertex2f(-0.096f, 0.095f);
     glVertex2f(0.089f, -0.02f);
     glEnd();

     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(0.696f, -0.025f);
     glVertex2f(0.551f, 0.114f);
     glVertex2f(0.784f, -0.017f);
     glEnd();

     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(0.980f, -0.017f);
     glVertex2f(0.902f, 0.09f);
     glVertex2f(0.900f, 0.09f);
     glVertex2f(1.002f, 0.031f);
     glVertex2f(1.002f, -0.017f);
     glEnd();

}
void Mountain_set2()
{
     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(-0.765f, -0.028f);
     glVertex2f(-1.000f, -0.025f);
     glVertex2f(-1.000f, 0.058f);
     glVertex2f(-0.798f, 0.197f);
     glVertex2f(-0.675f, 0.045f);
     glEnd();

     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(0.202f, 0.189f);
     glVertex2f(-0.089f, -0.017f);
     glVertex2f(0.344f, -0.013f);
     glEnd();

     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(0.549f, 0.118f);
     glVertex2f(0.700f, -0.025f);
     glVertex2f(0.447f, -0.021f);
     glVertex2f(0.395f, 0.027f);
     glEnd();

     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(-0.096f, 0.095f);
     glVertex2f(-0.009f, -0.016f);
     glVertex2f(-0.291f, -0.016f);
     glEnd();

     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(0.900f, 0.094f);
     glVertex2f(0.982f, -0.017f);
     glVertex2f(0.551f, -0.114f);
     glEnd();
}

void boat1()
{
            glBegin(GL_LINES);
            glColor3ub(255,127,80);
                glVertex2f(-0.007f, 0.264f);
                glVertex2f(-0.007f, -0.072f);
            glEnd();

            glBegin(GL_LINES);
            glColor3ub	(255,127,80);
                glVertex2f(-0.007f, 0.264f);
                glVertex2f(-0.102f, -0.024f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub	(139,69,19);
                glVertex2f(0.113f, -0.072f);
                glVertex2f(-0.069f, -0.072f);
                glVertex2f(-0.102f, -0.032f);
                glVertex2f(0.136f, -0.032f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub	(255,127,80);
                glVertex2f(-0.007f, -0.008f);
                glVertex2f(0.158f, -0.008f);
                glVertex2f(-0.007f, 0.264f);
            glEnd();
}
void boat2()
{
            glBegin(GL_LINES);
            glColor3ub(255,215,0);
                glVertex2f(-0.007f, 0.234f);
                glVertex2f(-0.007f, -0.102);
            glEnd();

            glBegin(GL_LINES);
            glColor3ub(255,215,0);
                glVertex2f(-0.007f, 0.234f);
                glVertex2f(0.102f, -0.054f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(139,69,19);
            glVertex2f(0.069f, -0.102);
            glVertex2f(-0.113f, -0.102f);
            glVertex2f(-0.136f, -0.062f);
            glVertex2f(0.102f, -0.062f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,215,0);
            glVertex2f(-0.007f, -0.038f);
            glVertex2f(-0.158f, -0.038f);
            glVertex2f(-0.007f, 0.234f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(249,23,0);
            glVertex2f(-0.002f, 0.262f);
            glVertex2f(-0.009f, -0.062f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(249,23,0);
            glVertex2f(-0.004f, 0.226f);
            glVertex2f(0.076f, -0.05f);
            glEnd();
}

GLfloat boatE = 1.2f;
GLfloat boatS = 0.02f;
void boatMove(int value) {
  if(boatE <-1.5)
        boatE = 1.2f;

  boatE -= boatS;
  glutPostRedisplay();
  glutTimerFunc(100, boatMove, 0);
}

GLfloat boat2E = -1.2f;
GLfloat boat2S = 0.02f;
void boatMove2(int value) {
  if(boat2E > 1.5)
        boat2E = -1.2f;

  boat2E += boat2S;
  glutPostRedisplay();
  glutTimerFunc(150, boatMove2, 0);
}

void gash_Under_Mountain()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-1.000f, -0.05f);
    glVertex2f(1.000f, -0.05f);
    glVertex2f(1.000f, -0.009f);
    glVertex2f(-1.00f, -0.009f);
    glEnd();
}

void sun()
{
    circle(1.2,0.0,.09);
}

GLfloat sunXE = 0.0f;
GLfloat sunXS = 0.02f;
GLfloat sunYE = 0;
GLfloat sunYS = 0.02f;
bool Big=false;
void sunMove(int value)
{

  sunXE -= sunXS;

   if(sunYE >= 1.1)
   {
       Big=true;
   }
   if(Big)
   {
       sunYE -= sunYS;
       if(sunYE<=-1)
       {
           sunXE=0.0f;
           sunYE = 0.0f;
           Big=false;
       }
   }

   if(Big==false)
   {
      sunYE += sunYS;
   }
  glutPostRedisplay();
  glutTimerFunc(150, sunMove, 0);
}


void cloud()
{
    circle(.625,.58,.05);
    circle(.7,.6,.08);
    circle(.79,.582,.06);
    circle(.85,.58,.04);

    circle(-.425,.585,.04);
    circle(-.5,.6,.07);
    circle(-.59,.592,.05);
    circle(-.64,.58,.03);
}

GLfloat cloudE = 2.0f;
GLfloat cloudS = 0.02f;
void cloudMove(int value)
{
  if(cloudE < -2.0)
    cloudE = 2.0f;
  cloudE -= cloudS;
  glutPostRedisplay();
  glutTimerFunc(100, cloudMove, 0);
}

void sunCloud()
{
    circle(-.08,.7,.04);
    circle(-.00,.71,.07);
    circle(0.09,.71,.05);
}

void Backgroun_gash_1()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(1.000f, -0.111f);
    glVertex2f(-1.000f, -0.111f);
    glVertex2f(-1.000f, -1.000f);
    glVertex2f(1.000f, -1.000f);
    glEnd();
}

void Backgroun_gash_2()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-1.000f, -0.111f);
    glVertex2f(0.491f, -0.21f);
    glVertex2f(-0.998f, -0.4f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(1.00f, -0.396f);
    glVertex2f(1.00f, -0.696f);
    glVertex2f(0.007f, -0.491f);
    glEnd();

}

void River()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(1.000f, -0.200f);
    glVertex2f(-1.00f, -0.200f);
    glVertex2f(-1.000f, -0.025f);
    glVertex2f(1.00f, -0.025f);
    glEnd();
}

void House_roof()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.531f, -0.077f);
    glVertex2f(-0.909f, -0.077f);
    glVertex2f(-0.933f, -0.231f);
    glVertex2f(-0.502f, -0.231f);
    glEnd();
}

void House_wall()
{
     glBegin(GL_TRIANGLE_FAN);
     glVertex2f(-0.900f, -0.231f);
     glVertex2f(-0.900f, -0.37f);
     glVertex2f(-0.538f, -0.37f);
     glVertex2f(-0.538f, -0.231f);
     glEnd();
}

void House_base()
{
    glBegin(GL_POLYGON);
    glVertex2f(-0.905f, -0.354f);
    glVertex2f(-0.911f, -0.38f);
    glVertex2f(-0.524f, -0.38f);
    glVertex2f(-0.529f, -0.354f);
    glEnd();
}

void House_door_window()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.753f, -0.255f);
    glVertex2f(-0.684f, -0.255f);
    glVertex2f(-0.684f, -0.354f);
    glVertex2f(-0.753f, -0.354f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.853f, -0.259f);
    glVertex2f(-0.853f, -0.318f);
    glVertex2f(-0.787f, -0.318f);
    glVertex2f(-0.787f, -0.259f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.647f, -0.259f);
    glVertex2f(-0.647f, -0.318f);
    glVertex2f(-0.582f, -0.318f);
    glVertex2f(-0.582f, -0.259f);
    glEnd();

}

void leaf1()
{
    circle(0.39, - 0.29,0.1);
}

void leaf2()
{
    circle(0.375, - 0.1,0.18);

}

void leaf3()
{
    circle(0.55,0.0018,0.19);
}

void leaf4()
{
    circle(0.79,0.002,0.16);

}

void leaf5()
{
    circle(0.888,- 0.15,0.13);
}

void Tree()
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.618f, -0.267f);
    glVertex2f(0.573f, -0.243f);
    glVertex2f(0.402f, -0.294f);
    glVertex2f(0.393f, -0.287f);
    glVertex2f(0.529f, -0.223f);
    glVertex2f(0.340f, -0.113f);
    glVertex2f(0.402f, -0.117f);
    glVertex2f(0.422f, -0.136f);
    glVertex2f(0.551f, -0.172f);
    glVertex2f(0.551f, -0.038f);
    glVertex2f(0.562f, -0.045f);
    glVertex2f(0.596f, -0.192f);
    glVertex2f(0.633f, -0.2f);
    glVertex2f(0.689f, -0.184f);
    glVertex2f(0.776f, -0.014f);
    glVertex2f(0.800f, 0.002f);
    glVertex2f(0.751f, -0.164f);
    glVertex2f(0.889f, -0.136f);
    glVertex2f(0.900f, -0.156f);
    glVertex2f(0.684f, -0.259f);
    glVertex2f(0.807f, -0.706f);
    glVertex2f(0.787f, -0.727f);
    glVertex2f(0.762f, -0.75f);
    glVertex2f(0.749f, -0.748f);
    glVertex2f(0.727f, -0.745f);
    glVertex2f(0.711f, -0.739f);
    glEnd();
}

GLfloat treeE1=0.0;
GLfloat treeE2=0.0;
GLfloat treeE3=0.0;
GLfloat treeE4=0.0;
GLfloat treeE5=0.0;

GLfloat treeS1=0.03;
GLfloat treeS2=0.03;
GLfloat treeS3=0.03;
GLfloat treeS4=0.03;
GLfloat treeS5=0.03;
void treeMove(int value)
{
    if(treeE1 < -1.0){
        treeS1 = 0.0f;

        if(treeE2 < -1.0){
        treeS2 = 0.0f;

        if(treeE3 < -1.0){
        treeS3 = 0.0f;

        if(treeE4 < -1.0){
        treeS4 = 0.0f;

        if(treeE5 < -1.20){
        treeS5 = 0.0f;



        }
         treeE5 -= treeS5;

        }
         treeE4 -= treeS4;

        }
         treeE3 -= treeS3;


        }
         treeE2 -= treeS2;
        }
    treeE1 -= treeS1;

	glutPostRedisplay();
	glutTimerFunc(100, treeMove, 0);

}

void Bush1()
{
    circle(-0.916, -0.88,0.18);
}
void Bush2()
{
    circle(-0.7, -0.92,0.12);
}

void Bush3()
{
   circle(-0.54, -0.95,0.09);
}

void Bush4()
{
    circle(-0.42, -0.95,0.09);
}

void Bush5()
{
    circle(-0.23, -0.95,0.16);
}

void Bush6()
{
     circle(-0.05, -0.95,0.09);
}

void Bush7()
{
    circle(0.05, -0.95,0.07);
}

void Bush8()
{
    circle(0.19, -0.95,0.112);
}

void Bush9()
{
    circle(0.3, -0.95,0.07);
}

void Bush10()
{
    circle(0.5, -0.95,0.16);
}

void Bush11()
{
    circle(0.7, -0.95,0.218);
}

void Bush12()
{
    circle(0.928, -0.92,0.255);
}

void bird1()
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249,202,8);
    glVertex2f(-0.576f, 0.663f);
    glVertex2f(-0.596f, 0.663f);
    glVertex2f(-0.573f, 0.679f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242,243,247);
    glVertex2f(-0.553f, 0.758f);
    glVertex2f(-0.571f, 0.794f);
    glVertex2f(-0.549f, 0.778f);
    glVertex2f(-0.536f, 0.711f);
    glVertex2f(-0.540f, 0.683f);
    glVertex2f(-0.549f, 0.687f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(251,251,251);
    glVertex2f(-0.542f, 0.691f);
    glVertex2f(-0.544f, 0.746f);
    glVertex2f(-0.567f, 0.821f);
    glVertex2f(-0.533f, 0.782f);
    glVertex2f(-0.520f, 0.746f);
    glVertex2f(-0.524f, 0.679f);
    glVertex2f(-0.453f, 0.683f);
    glVertex2f(-0.536f, 0.64f);
    glVertex2f(-0.556f, 0.643f);
    glVertex2f(-0.573f, 0.659f);
    glVertex2f(-0.580f, 0.667f);
    glVertex2f(-0.580f, 0.687f);
    glVertex2f(-0.556f, 0.683f);
    glEnd();
}

void bird2()
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249,202,8);
    glVertex2f(-0.776f, 0.463f);
    glVertex2f(-0.796f, 0.463f);
    glVertex2f(-0.773f, 0.479f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(128,128,128);
    glVertex2f(-0.753f, 0.558f);
    glVertex2f(-0.771f, 0.594f);
    glVertex2f(-0.749f, 0.578f);
    glVertex2f(-0.736f, 0.511f);
    glVertex2f(-0.740f, 0.483f);
    glVertex2f(-0.749f, 0.487f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(128,128,128);
    glVertex2f(-0.742f, 0.491f);
    glVertex2f(-0.744f, 0.546f);
    glVertex2f(-0.767f, 0.621f);
    glVertex2f(-0.733f, 0.582f);
    glVertex2f(-0.720f, 0.546f);
    glVertex2f(-0.724f, 0.479f);
    glVertex2f(-0.653f, 0.483f);
    glVertex2f(-0.736f, 0.44f);
    glVertex2f(-0.756f, 0.443f);
    glVertex2f(-0.773f, 0.459f);
    glVertex2f(-0.780f, 0.467f);
    glVertex2f(-0.780f, 0.487f);
    glVertex2f(-0.756f, 0.483f);
    glEnd();
}

GLfloat birdE = 2.0f;
GLfloat birdS = 0.02f;
void birdMove(int value)
{
  if(birdE < -2.0)
    birdE = 2.0f;
  birdE -= birdS;
  glutPostRedisplay();
  glutTimerFunc(90, birdMove, 0);
}


GLfloat flowerE1=0.0;
GLfloat flowerE2=0.0;
GLfloat flowerE3=0.0;
GLfloat flowerE4=0.0;
GLfloat flowerE5=0.0;
GLfloat flowerE6=0.0;
GLfloat flowerE7=0.0;
GLfloat flowerE8=0.0;
GLfloat flowerE9=0.0;
GLfloat flowerE10=0.0;
GLfloat flowerE11=0.0;

GLfloat flowerS1=0.06;
GLfloat flowerS2=0.06;
GLfloat flowerS3=0.06;
GLfloat flowerS4=0.06;
GLfloat flowerS5=0.06;
GLfloat flowerS6=0.06;
GLfloat flowerS7=0.06;
GLfloat flowerS8=0.06;
GLfloat flowerS9=0.06;
GLfloat flowerS10=0.06;
GLfloat flowerS11=0.06;

void flowerMove(int value)
{
    if(flowerE1 < -1.0){
        flowerS1 = 0.0f;

        if(flowerE2 < -1.0){
        flowerS2 = 0.0f;

        if(flowerE3 < -1.0){
        flowerS3 = 0.0f;

        if(flowerE4 < -1.0){
        flowerS4 = 0.0f;

        if(flowerE5 < -1.20){
        flowerS5 = 0.0f;

        if(flowerE6 < -1.20){
        flowerS6 = 0.0f;

        if(flowerE7 < -1.20){
        flowerS7 = 0.0f;

        if(flowerE8 < -1.20){
        flowerS8 = 0.0f;

        if(flowerE9 < -1.20){
        flowerS9 = 0.0f;

        if(flowerE10 < -1.20){
        flowerS10 = 0.0f;

        if(flowerE11 < -1.20){
        flowerS11 = 0.0f;

        }
        flowerE11-=flowerS11;

        }
        flowerE10-=flowerS10;
        }
        flowerE9-=flowerS9;
        }
        flowerE8-=flowerS8;
        }

        flowerE7-=flowerS7;
        }
        flowerE6-=flowerS6;

        }
         flowerE5-=flowerS5;

        }
        flowerE4-=flowerS4;

        }
        flowerE3-=flowerS3;


        }
        flowerE2-=flowerS2;
        }
    flowerE1-=flowerS1;

	glutPostRedisplay();
	glutTimerFunc(100, flowerMove, 0);

}
void Flower1()
{
        glColor3ub(253, 183, 244);
        //Flower petal left
        circle(-0.78, -0.87,0.018);
        //Flower petal right
        circle(-0.725, -0.87,0.018);
        //Flower petal down
        circle(-0.7525, -0.9,0.018);
        //Flower petal up
        circle(-0.7525, -0.84,0.018);

        //Flower center
        glColor3ub(251, 22, 28);
        circle(-0.7525, -0.87,0.014);
}
    //Flower
void Flower2()
{
        glColor3ub(250, 193, 41);
        //Flower petal left
        circle(-0.64, -0.9,0.018);
        //Flower petal right
        circle(-0.585, -0.9,0.018);
        //Flower petal down
        circle(-0.6125, -0.93,0.018);
        //Flower petal up
        circle(-0.6125, -0.87,0.018);
        //Flower center
        glColor3ub(251, 22, 28);
        circle(-0.6125, -0.9,0.014);
}
    //Flower3
void Flower3()
{
        glColor3ub(251, 22, 28);
        //Flower petal left
        circle(-0.53, -0.945,0.018);
        //Flower petal right
        circle(-0.475, -0.945,0.018);
        //Flower petal down
        circle(-0.5025, -0.975,0.018);
        //Flower petal up
        circle(-0.5025, -0.915,0.018);
        //Flower center
        glColor3ub(255, 241, 8);
        circle(-0.5025, -0.945,0.014);
}

    //Flower4
void Flower4()
{
        glColor3ub(251, 22, 28);
        //Flower petal left
        circle(-0.425, -0.93,0.018);
        //Flower petal right
        circle(-0.37, -0.93,0.018);
        //Flower petal down
        circle(-0.3975, -0.96,0.018);
        //Flower petal up
        circle(-0.3975, -0.9,0.018);
        //Flower center
        glColor3ub(255, 241, 8);
        circle(-0.3975, -0.93,0.014);
}

    //Flower5
void Flower5()
{
        glColor3ub(253, 183, 244);
        //Flower petal left
        circle(-0.3, -0.9475,0.018);
        //Flower petal right
        circle(-0.245, -0.9475,0.018);
        //Flower petal down
        circle(-0.2725, -0.975,0.018);
        //Flower petal up
        circle(-0.2725, -0.92,0.018);
        //Flower center
        glColor3ub(251, 22, 28);
        circle(-0.2725, -0.9475,0.014);
}

    //Flower6
void Flower6()
{
        glColor3ub(253, 183, 244);
        //Flower petal left
        circle(-0.2, -0.87,0.018);
        //Flower petal right
        circle(-0.145, -0.87,0.018);
        //Flower petal down
        circle(-0.1725, -0.9,0.018);
        //Flower petal up
        circle(-0.1725, -0.84,0.018);
        //Flower center
        glColor3ub(251 , 22, 28);
        circle(-0.1725, -0.87,0.014);
}
//Flower7
void Flower7()
{
        glColor3ub(251, 22, 28);
        //Flower petal left
        circle(-0.09, -0.92,0.018);
        //Flower petal right
        circle(-0.035, -0.92,0.018);
        //Flower petal down
        circle(-0.0625, -0.95,0.018);
        //Flower petal up
        circle(-0.0625, -0.89,0.018);
        //Flower center
        glColor3ub(255, 241, 8);
        circle(-0.0625, -0.92,0.014);
}
    //Flower8
void Flower8()
{
        glColor3ub(251, 22, 28);
        //Flower petal left
        circle(0.0325, -0.94,0.018);
        //Flower petal right
        circle(0.0875, -0.94,0.018);
        //Flower petal down
        circle(0.06, -0.97,0.018);
        //Flower petal up
        circle(0.06, -0.91,0.018);
        //Flower center
        glColor3ub(255, 241, 8);
        circle(0.06, -0.94,0.014);

}
    //Flower9
void Flower9()
{
        glColor3ub(251, 22, 28);
        //Flower petal left
        circle(0.145, -0.91,0.018);
        //Flower petal right
        circle(0.2, -0.91,0.018);
        //Flower petal down
        circle(0.1725, -0.94,0.018);
        //Flower petal up
        circle(0.1725, -0.88,0.018);
        //Flower center
        glColor3ub(255, 241, 8);
        circle(0.1725, -0.91,0.014);

}
//Flower10
void Flower10()
{
        glColor3ub(251, 22, 28);
        //Flower petal left
        circle(0.2725, -0.94,0.018);
        //Flower petal right
        circle(0.3275, -0.94,0.018);
        //Flower petal down
        circle(0.3, -0.97,0.018);
        //Flower petal up
        circle(0.3, -0.91,0.018);
        //Flower center
        glColor3ub(255, 241, 8);
        circle(0.3, -0.94,0.014);

}
    //Flower11
void Flower11()
{
        glColor3ub(251, 22, 28);
        //Flower petal left
        circle(0.395, -0.94,0.018);
        //Flower petal right
        circle(0.45, -0.94,0.018);
        //Flower petal down
        circle(0.4225, -0.97,0.018);
        //Flower petal up
        circle(0.4225, -0.91,0.018);
        //Flower center
        glColor3ub(255, 241, 8);
        circle(0.4225, -0.94,0.014);
    }

GLfloat wSpeed=0.0f;

void windmill()
{
//pillar
    glColor3ub(160,82,45);
    quad(-.01,0,-.03,-.35,.03,-.35,.01,0);

    glPushMatrix();
    glRotatef(wSpeed,0.0,0.0,0.1);
    //glColor3ub(247, 5, 5);
    glColor3ub	(244,164,96);
    quad(0,0,0,.2,-.1,.2,0,0);
    quad(0,0,0,-.2,.1,-.2,0,0);
    quad(0,0,.2,0,.2,.1,0,0);
    quad(0,0,-.2,0,-.2,-.1,0,0);

    glPopMatrix();
    wSpeed-=0.15f;
    //center
    glColor3ub(252, 252, 252);
    circle(0.0,0.0,.015);
}

void windmill_in_rainlyseason()
{
//pillar
    glColor3ub(160,82,45);
    quad(-.01,0,-.03,-.35,.03,-.35,.01,0);

    glPushMatrix();
    glRotatef(wSpeed,0.0,0.0,0.1);
    //glColor3ub(247, 5, 5);
    glColor3ub	(244,164,96);
    quad(0,0,0,.2,-.1,.2,0,0);
    quad(0,0,0,-.2,.1,-.2,0,0);
    quad(0,0,.2,0,.2,.1,0,0);
    quad(0,0,-.2,0,-.2,-.1,0,0);

    glPopMatrix();
    wSpeed-=0.30f;
    //center
    glColor3ub(252, 252, 252);
    circle(0.0,0.0,.015);
}


GLfloat rainCloudE = 3.5f;
GLfloat rainCloudS = 0.02f;
void rainCloudMove(int value) {
    if(rainCloudE < -0.0)
        rainCloudE = 1.0f;
    rainCloudE -= rainCloudS;
	glutPostRedisplay();
	glutTimerFunc(100, rainCloudMove, 0);
}

GLfloat rainCloudUpE=0.0;
GLfloat rainCloudUpS=0.03;
void rainCloudUp(int value)
{
    if(rainCloudUpE > 1.0)
    {
      rainCloudUpS = 0.0f;
    }
    rainCloudUpE += rainCloudUpS;

	glutPostRedisplay();
	glutTimerFunc(100, rainCloudUp, 0);

}

void rainCloud(){
    glColor3ub(176, 181, 188);
    circle(-0.916, 0.92,0.12);
    circle(-0.7, 0.92,0.16);
    circle(-0.48, 0.95,0.16);
    circle(-0.23, 0.95,0.16);
    circle(0.115, 0.95,0.112);
    circle(-0.025, 0.95,0.07);
    circle(0.225, 0.95,0.07);
    circle(0.5, 0.92,0.235);
    circle(0.928, 0.95,0.218);

    circle(-1.916, 0.92,0.12);
    circle(-1.7, 0.92,0.16);
    circle(-1.48, 0.95,0.16);
    circle(-1.23, 0.95,0.16);
    circle(1.115, 0.95,0.112);
    circle(-1.025, 0.95,0.07);
    circle(1.225, 0.95,0.07);
    circle(1.5, 0.92,0.235);
    circle(1.928, 0.95,0.218);

}

GLfloat rainE=2.50f;
GLfloat rainSpeed=0.1f;
void rainMove(int value){

 if(rainE < -1.0)
 rainE = .50f;
 rainE -= rainSpeed;
 glutPostRedisplay();
 glutTimerFunc(100, rainMove, 0);

}


GLfloat rainDownE=0.0;
GLfloat rainDownS=0.03;
void rainDown(int value)
{
    if(rainDownE < -5.0)
    {
      rainDownS = 0.0f;
    }
    rainDownE -= rainDownS;

	glutPostRedisplay();
	glutTimerFunc(1, rainDown, 0);

}
void rain()
{

              glBegin(GL_LINES);

    glVertex2f(.85,1.9);glVertex2f(.8,1.8);
    glVertex2f(.55,1.9);glVertex2f(.5,1.8);
    glVertex2f(.25,1.9);glVertex2f(.2,1.8);
            glVertex2f(-.05,1.9);glVertex2f(-.1,1.8);
            glVertex2f(-.35,1.9);glVertex2f(-.4,1.8);
            glVertex2f(-.65,1.9);glVertex2f(-.7,1.8);
            glVertex2f(-.95,1.9);glVertex2f(-1.0,1.8);

     glVertex2f(1.0,1.6);glVertex2f(.95,1.5);
    glVertex2f(.7,1.6);glVertex2f(.65,1.5);
    glVertex2f(.4,1.6);glVertex2f(.35,1.5);
    glVertex2f(.1,1.6);glVertex2f(.05,1.5);
            glVertex2f(-.2,1.6);glVertex2f(-.25,1.5);
            glVertex2f(-.5,1.6);glVertex2f(-.55,1.5);
            glVertex2f(-.8,1.6);glVertex2f(-.85,1.5);


    glVertex2f(.85,1.3);glVertex2f(.8,1.2);
    glVertex2f(.55,1.3);glVertex2f(.5,1.2);
    glVertex2f(.25,1.3);glVertex2f(.2,1.2);
             glVertex2f(-.05,1.3);glVertex2f(-.1,1.2);
            glVertex2f(-.35,1.3);glVertex2f(-.4,1.2);
            glVertex2f(-.65,1.3);glVertex2f(-.7,1.2);
            glVertex2f(-.95,1.3);glVertex2f(-1.0,1.2);

    glVertex2f(1.0,1.0);glVertex2f(.95,.9);
    glVertex2f(.7,1.0);glVertex2f(.65,0.9);
    glVertex2f(.4,1.0);glVertex2f(.35,0.9);
    glVertex2f(.1,1.0);glVertex2f(.05,0.9);
                 glVertex2f(-.2,1.0);glVertex2f(-.25,.9);
                 glVertex2f(-.5,1.0);glVertex2f(-.55,0.9);
                 glVertex2f(-.8,1.0);glVertex2f(-.85,0.9);



    glVertex2f(.85,.7);glVertex2f(.8,.6);
    glVertex2f(.55,.7);glVertex2f(.5,0.6);
    glVertex2f(.25,.7);glVertex2f(.2,0.6);
              glVertex2f(-.05,.7);glVertex2f(-.1,.6);
            glVertex2f(-.35,.7);glVertex2f(-.4,.6);
            glVertex2f(-.65,.7);glVertex2f(-.7,.6);
            glVertex2f(-.95,.7);glVertex2f(-1.0,.6);

    glVertex2f(1.0,.4);glVertex2f(.95,.3);
    glVertex2f(.7,.4);glVertex2f(.65,0.3);
    glVertex2f(.4,.4);glVertex2f(.35,0.3);
    glVertex2f(.1,.4);glVertex2f(.05,0.3);
                 glVertex2f(-.2,.4);glVertex2f(-.25,.3);
                 glVertex2f(-.5,.4);glVertex2f(-.55,0.3);
                 glVertex2f(-.8,.40);glVertex2f(-.85,0.3);

    glVertex2f(.85,.1);glVertex2f(.8,0.0);
    glVertex2f(.55,.1);glVertex2f(.5,0.0);
    glVertex2f(.25,.1);glVertex2f(.2,0.0);
              glVertex2f(-.05,.1);glVertex2f(-.1,.0);
            glVertex2f(-.35,.1);glVertex2f(-.4,.0);
            glVertex2f(-.65,.1);glVertex2f(-.7,.0);
            glVertex2f(-.95,.1);glVertex2f(-1.0,.0);


    glVertex2f(1.0,-.2);glVertex2f(.95,-.3);
    glVertex2f(.7,-.2);glVertex2f(.65,-0.3);
    glVertex2f(.4,-.2);glVertex2f(.35,-0.3);
    glVertex2f(.1,-.2);glVertex2f(.05,-0.3);
                 glVertex2f(-.2,-.2);glVertex2f(-.25,-.3);
                 glVertex2f(-.5,-.2);glVertex2f(-.55,-.3);
                 glVertex2f(-.8,-.2);glVertex2f(-.85,-.3);

    glVertex2f(.85,-.5);glVertex2f(.8,-.6);
    glVertex2f(.55,-.5);glVertex2f(.5,-.6);
    glVertex2f(.25,-.5);glVertex2f(.2,-.6);
              glVertex2f(-.05,-.5);glVertex2f(-.1,-.6);
            glVertex2f(-.35,-.5);glVertex2f(-.4,-.6);
            glVertex2f(-.65,-.5);glVertex2f(-.7,-.6);
            glVertex2f(-.95,-.5);glVertex2f(-1.0,-.6);

    glVertex2f(1.0,-.8);glVertex2f(.95,-.9);
    glVertex2f(.7,-.8);glVertex2f(.65,-0.9);
    glVertex2f(.4,-.8);glVertex2f(.35,-0.9);
    glVertex2f(.1,-.8);glVertex2f(.05,-0.9);
                 glVertex2f(-.2,-.8);glVertex2f(-.25,-.9);
                 glVertex2f(-.5,-.8);glVertex2f(-.55,-.9);
                 glVertex2f(-.8,-.8);glVertex2f(-.85,-.9);

    glVertex2f(.85,-1.1);glVertex2f(.8,-1.2);
    glVertex2f(.55,-1.1);glVertex2f(.5,-1.2);
    glVertex2f(.25,-1.1);glVertex2f(.2,-1.2);
              glVertex2f(-.05,-1.1);glVertex2f(-.1,-1.2);
            glVertex2f(-.35,-1.1);glVertex2f(-.4,-1.2);
            glVertex2f(-.65,-1.1);glVertex2f(-.7,-1.2);
            glVertex2f(-.95,-1.1);glVertex2f(-1.0,-1.2);

    glVertex2f(1.0,-1.4);glVertex2f(.95,-1.5);
    glVertex2f(.7,-1.4);glVertex2f(.65,-1.5);
    glVertex2f(.4,-1.4);glVertex2f(.35,-1.5);
    glVertex2f(.1,-1.4);glVertex2f(.05,-1.5);
                 glVertex2f(-.2,-1.4);glVertex2f(-.25,-1.5);
                 glVertex2f(-.5,-1.4);glVertex2f(-.55,-1.5);
                 glVertex2f(-.8,-1.4);glVertex2f(-.85,-1.5);


        glEnd();

}


GLfloat snowE=3.0f;
GLfloat snowS=0.0105f;
void snowMove(int value)
{
    if(snowE < -1.50)
        snowE = 1.0f;
    snowE -= snowS;
	glutPostRedisplay();
    glutTimerFunc(100, snowMove, 0);
}

GLfloat snowE2=3.0f;
GLfloat snowS2=0.0105f;
void snowMove2(int value)
{
    if(snowE2 < -1.50)
        snowE2 = 1.0f;
    snowE2 -= snowS2;
	glutPostRedisplay();
    glutTimerFunc(100, snowMove2, 0);
}

void snowball()
{
    circle(-1.5,.95,.01);
    circle(-.95,.75,.01);
    circle(-.65,0.55,.01);
    circle(-.35,0.46,.01);
    circle(-.05,0.648,.01);
    circle(.25,.83,.01);
    circle(.55,0.8,.01);
    circle(.75,0.35,.01);
    circle(1.,0.26,.01);
    circle(-.45,0.148,.01);

}


void snowball2()
{
    circle(-1.5,.95,.01);
    circle(-.95,.75,.01);
    circle(-.65,0.55,.01);
    circle(-.35,0.46,.01);
    circle(-.05,0.648,.01);
    circle(.25,.83,.01);
    circle(.55,0.8,.01);
    circle(.75,0.35,.01);
    circle(1.,0.26,.01);
    circle(-.45,0.148,.01);

}

GLfloat longGashE=-1.0;
GLfloat longGashS=0.03;
void longGashUp(int value)
{
    if(longGashE > 0.0)
    {
      longGashS = 0.0f;
    }
    longGashE += longGashS;

	glutPostRedisplay();
	glutTimerFunc(100, longGashUp, 0);

}

GLfloat longGashE2=0.0;
GLfloat longGashS2=0.03;
void longGashDown(int value)
{
    if(longGashE2 < -2.0)
    {
      longGashS2 = 0.0f;
    }
    longGashE2 -= longGashS2;

	glutPostRedisplay();
	glutTimerFunc(300, longGashDown, 0);

}

void longGash()
{
    //glTranslated(0.0f,-2.0,0.0f);
    glColor3ub(68, 173, 47);
    triangle(-.5,-1.0,-.45,-1.0,-.35,-.65);


    triangle(-.5,-1.0,-.45,-1.0,-.6,-.65);

    triangle(-.2,-1.0,-.15,-1.0,-.35,-.65);
    triangle(-.2,-1.0,-.15,-1.0,-.0,-.65);

    triangle(-.45,-1.0,-.4,-1.0,-.2,-.65);

    triangle(.15,-1.0,.2,-1.0,.35,-.65);
    triangle(.15,-1.0,.2,-1.0,.05,-.65);

    triangle(.45,-1.0,.5,-1.0,.35,-.65);

    triangle(.55,-1.0,.6,-1.0,.55,-.65);
    triangle(.6,-1.0,.65,-1.0,.8,-.65);

    triangle(.85,-1.0,.9,-1.0,1.0,-.65);

    glLineWidth(2);

    glColor3ub(68, 173, 47);
    line(-.5,-1.0,-.43,-.65);
    line(-.3,-1.0,-.25,-.65);
    line(-.15,-1.0,-.1,-.65);
    line(.0,-1.0,.1,-.65);

    line(.25,-1.0,.2,-.6);
    line(.28,-1.0,.32,-.65);
    line(.35,-1.0,.4,-.65);
    line(.45,-1.0,.58,-.62);
    line(.53,-1.0,.5,-.65);
    line(.6,-1.0,.7,-.65);
    line(.75,-1.0,.85,-.65);

///////////white flower

    glColor3ub(239, 245, 237);
    glTranslated(.032,.0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.5,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.45,-.7);
    glVertex2f(-.43,-.55);
    glEnd();


    glTranslated(.187,.02,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.5,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.45,-.7);
    glVertex2f(-.43,-.55);
    glEnd();

    glTranslated(.15,.0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.5,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.45,-.7);
    glVertex2f(-.45,-.55);
    glEnd();

    glTranslated(.2,.0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.5,-.7);
    glVertex2f(-.486,-.73);
    glVertex2f(-.46,-.7);
    glVertex2f(-.44,-.55);
    glEnd();

    glTranslated(.12,.04,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.5,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.46,-.7);
    glVertex2f(-.52,-.55);
    glEnd();

    glTranslated(.11,.0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.5,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.46,-.7);
    glVertex2f(-.46,-.55);
    glEnd();

    glTranslated(.07,-.05,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.5,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.46,-.7);
    glVertex2f(-.46,-.58);
    glEnd();

    glTranslated(.115,.02,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.5,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.46,-.7);
    glVertex2f(-.5,-.58);
    glEnd();

    glTranslated(.058,.02,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.48,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.44,-.7);
    glVertex2f(-.4,-.55);
    glEnd();

    glTranslated(.132,.02,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.48,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.44,-.7);
    glVertex2f(-.4,-.57);
    glEnd();

    glTranslated(.148,.0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-.48,-.7);
    glVertex2f(-.48,-.73);
    glVertex2f(-.44,-.7);
    glVertex2f(-.4,-.55);
    glEnd();

    glLoadIdentity();
}

GLfloat mountainSnowE=-1;
GLfloat mountainSnowS=1;
void mountainSnowMove(int value)
{
    if(mountainSnowE == 0)
    {
      mountainSnowS = 0.0f;
    }
    mountainSnowE += mountainSnowS;

	glutPostRedisplay();
	glutTimerFunc(1, mountainSnowMove, 0);

}

void mountainSnow()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(-0.798f, 0.197f);
            glVertex2f(-0.935f, 0.05f);
            glVertex2f(-0.85f, 0.07f);
            glVertex2f(-0.78f, 0.02f);
            glVertex2f(-0.73f, 0.1f);
            glVertex2f(-0.65f, 0.08f);
            glEnd();


glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(-0.249f, 0.402f);
            glVertex2f(-0.49f, 0.2);
            glVertex2f(-0.3f, 0.27);
            glVertex2f(-0.22f, 0.21);
            glVertex2f(-0.16f, 0.26);
            glVertex2f(-0.09f, 0.19);
            glVertex2f(-0.05f, 0.23);
            glVertex2f(0.13f, 0.18f);
            glVertex2f(-0.100f, 0.394f);
            glEnd();


glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(-0.169f, 0.311f);
            glVertex2f(-0.251f, 0.232f);
            glVertex2f(-0.255f, 0.410f);
            glVertex2f(-0.410f, 0.268f);
            glVertex2f(-0.251f, 0.410f);
            glVertex2f(-0.093f, 0.410f);
            glVertex2f(0.035f, 0.268f);
            glVertex2f(-0.078f, 0.311f);
            glVertex2f(-0.056f, 0.209f);
            glEnd();

glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(0.202f, 0.189f);
            glVertex2f(0.01f, 0.05f);
            glVertex2f(0.13f, 0.08);
            glVertex2f(0.18f, 0.06);
            glVertex2f(0.23f, 0.09);
            glVertex2f(0.3f, 0.05);
            glVertex2f(0.31f, 0.08);
            glVertex2f(0.355f, 0.06);
            glEnd();

glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(-0.096f, 0.095f);
            glVertex2f(-0.23f, 0.02f);
            glVertex2f(-0.13f, 0.05f);
            glVertex2f(-0.05f, 0.02f);
            glVertex2f(-0.038f, 0.03f);
            glVertex2f(0.02f, 0.02f);
            glEnd();

glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(0.549f, 0.118f);
            glVertex2f(0.42, 0.045f);
            glVertex2f(0.51, 0.06f);
            glVertex2f(0.645f, 0.025f);
            glVertex2f(0.66, 0.04f);
            glVertex2f(0.7, 0.03f);

            glEnd();

glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(0.900f, 0.094f);
            glVertex2f(0.800f, 0.035f);
            glVertex2f(0.89f, 0.05f);
            glVertex2f(0.945f, 0.036f);
            glVertex2f(0.96f, 0.06f);


            glEnd();


}

GLfloat houseSnowE=-1;
GLfloat houseSnowS=1;
void houseSnowMove(int value)
{
    if(houseSnowE == 0)
    {
      houseSnowS = 0.0f;
    }
    houseSnowE += houseSnowS;

	glutPostRedisplay();
	glutTimerFunc(1, houseSnowMove, 0);

}

void houseSnow()
{
    glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255, 255);
            glVertex2f(-0.531f, -0.077f);
            glVertex2f(-0.909f, -0.077f);
            glVertex2f(-0.933f, -0.231f);
 glVertex2f(-0.502f, -0.231f);
 glEnd();
 glColor3ub(255,255,255);
 quad(-0.933f, -0.231f, -0.929f, -0.32f, -0.925f, -0.231f, -0.933f, -0.231f  );
    quad(-0.91f, -0.231f, -0.916f, -0.35f, -0.922f, -0.231f, -0.91f, -0.231f  );
    quad(-0.91f, -0.231f, -0.905f, -0.3f, -0.9f, -0.231f, -0.91f, -0.231f  );
    quad(-0.9f, -0.231f, -0.897f, -0.29f, -0.894f, -0.231f, -0.9f, -0.231f  );
    quad(-0.894f, -0.231f, -0.889f, -0.35f, -0.884f, -0.231f, -0.894f, -0.231f );
    quad(-0.884f, -0.231f, -0.88f, -0.28f, -0.876f, -0.231f, -0.884f, -0.231f );
    quad(-0.876f, -0.231f, -0.87f, -0.26f, -0.864f, -0.231f, -0.876f, -0.231f );
    quad(-0.864f, -0.231f, -0.86f, -0.29f, -0.856f, -0.231f, -0.864f, -0.231f );
    quad(-0.856f, -0.231f, -0.853f, -0.32f, -0.85f, -0.231f, -0.856f, -0.231f );
    quad(-0.85f, -0.231f, -0.845f, -0.34f, -0.84f, -0.231f, -0.85f, -0.231f );
    quad(-0.84f, -0.231f, -0.837f, -0.28f, -0.834f, -0.231f, -0.84f, -0.231f );
    quad(-0.834f, -0.231f, -0.828f, -0.3f, -0.822f, -0.231f, -0.834f, -0.231f );
    quad(-0.834f, -0.231f, -0.829f, -0.3f, -0.824f, -0.231f, -0.834f, -0.231f );
    quad(-0.824f, -0.231f, -0.82f, -0.29f, -0.816f, -0.231f, -0.824f, -0.231f );
    quad(-0.816f, -0.231f, -0.812f, -0.32f, -0.808f, -0.231f, -0.816f, -0.231f );
    quad(-0.808f, -0.231f, -0.803f, -0.3f, -0.798f, -0.231f, -0.808f, -0.231f );
    quad(-0.798f, -0.231f, -0.795f, -0.27f, -0.793f, -0.231f, -0.798f, -0.231f );
    quad(-0.793f, -0.231f, -0.788f, -0.31f, -0.784f, -0.231f, -0.793f, -0.231f );
    quad(-0.784f, -0.231f, -0.78f, -0.29f, -0.776f, -0.231f, -0.784f, -0.231f );
    quad(-0.776f, -0.231f, -0.771f, -0.28f, -0.767f, -0.231f, -0.776f, -0.231f );
    quad(-0.767f, -0.231f, -0.764f, -0.3f, -0.76f, -0.231f, -0.767f, -0.231f );
    quad(-0.76f, -0.231f, -0.754f, -0.28f, -0.749f, -0.231f, -0.76f, -0.231f );

    quad(-0.684f, -0.231f, -0.678f, -0.33f, -0.672f, -0.231f, -0.684f, -0.231f );
    quad(-0.672f, -0.231f, -0.67f, -0.34f, -0.668f, -0.231f, -0.672f, -0.231f );
    quad(-0.668f, -0.231f, -0.663f, -0.3f, -0.657f, -0.231f, -0.668f, -0.231f );
    quad(-0.657f, -0.231f, -0.654f, -0.29f, -0.651f, -0.231f, -0.657f, -0.231f );
    quad(-0.651f, -0.231f, -0.646f, -0.27f, -0.641f, -0.231f, -0.651f, -0.231f );
    quad(-0.641f, -0.231f, -0.638f, -0.29f, -0.635f, -0.231f, -0.641f, -0.231f );
    quad(-0.635f, -0.231f, -0.631f, -0.31f, -0.628f, -0.231f, -0.635f, -0.231f );
    quad(-0.628f, -0.231f, -0.623f, -0.28f, -0.619f, -0.231f, -0.628f, -0.231f );
    quad(-0.619f, -0.231f, -0.613f, -0.29f, -0.61f, -0.231f, -0.619f, -0.231f );
    quad(-0.61f, -0.231f, -0.608f, -0.32f, -0.606f, -0.231f, -0.61f, -0.231f );
    quad(-0.606f, -0.231f, -0.601f, -0.28f, -0.596f, -0.231f, -0.606f, -0.231f );
    quad(-0.596f, -0.231f, -0.593f, -0.26f, -0.59f, -0.231f, -0.596f, -0.231f );
    quad(-0.59f, -0.231f, -0.584f, -0.32f, -0.578f, -0.231f, -0.59f, -0.231f );
    quad(-0.578f, -0.231f, -0.574f, -0.28f, -0.569f, -0.231f, -0.578f, -0.231f );
    quad(-0.569f, -0.231f, -0.566f, -0.3f, -0.56f, -0.231f, -0.569f, -0.231f );
    quad(-0.56f, -0.231f, -0.555f, -0.29f, -0.55f, -0.231f, -0.56f, -0.231f );
    quad(-0.55f, -0.231f, -0.543f, -0.33f, -0.54f, -0.231f, -0.55f, -0.231f );
    quad(-0.54f, -0.231f, -0.536f, -0.27f, -0.532f, -0.231f, -0.54f, -0.231f );
    quad(-0.532f, -0.231f, -0.529f, -0.31f, -0.526f, -0.231f, -0.532f, -0.231f );
    quad(-0.526f, -0.231f, -0.522f, -0.28f, -0.519f, -0.231f, -0.526f, -0.231f );
    quad(-0.519f, -0.231f, -0.513f, -0.32f, -0.509f, -0.231f, -0.513f, -0.231f );
    quad(-0.509f, -0.231f, -0.505f, -0.33f, -0.502f, -0.231f, -0.509f, -0.231f );
}

GLfloat treeSnowE=-1;
GLfloat treeSnowS=1;
void treeSnowMove(int value)
{
    if(treeSnowE == 0)
    {
      treeSnowS = 0.0f;
    }
    treeSnowE += treeSnowS;

	glutPostRedisplay();
	glutTimerFunc(1, treeSnowMove, 0);

}

void treeSnow()
{
glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(0.340f, -0.113f);
            glVertex2f(0.402f, -0.117f);
            glVertex2f(0.52f, -0.155f);
            glVertex2f(0.5f, -0.17f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(0.776f, -0.014f);
            glVertex2f(0.68f, -0.16f);
            glVertex2f(0.74f, -0.13f);
            glVertex2f(0.73f, -0.12f);
            glVertex2f(0.800f, 0.002f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(0.889f, -0.136f);
            glVertex2f(0.78f, -0.155f);
            glVertex2f(0.84f, -0.17f);
            glVertex2f(0.86f, -0.165f);
            glVertex2f(0.88f, -0.159f);
            glVertex2f(0.900f, -0.156f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(0.551f, -0.038f);
            glVertex2f(0.55f, -0.15f);
            glVertex2f(0.58f, -0.12f);
            glVertex2f(0.562f, -0.045f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255,255,255);
            glVertex2f(0.393f, -0.287f);
            glVertex2f(0.5, -0.235);
            glVertex2f(0.55, -0.275f);
            glVertex2f(0.5, -0.28);
            glVertex2f(0.402f, -0.294f);

            glEnd();
}






void summer()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    //Put your display here
    glColor3ub	(0,191,255);
    Backgroun();

    glPushMatrix();
    glTranslatef(sunXE,sunYE,0.0);
    glColor3ub(255,99,71);
    sun();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(cloudE, 0.0f,0.0f);
    glColor3ub(242,243,247);
    cloud();
    sunCloud();
    glPopMatrix();
    glLoadIdentity();

    glColor3ub(26,78,91);
    Mountain_set1();

    glColor3ub(75,150,172);
    Big_Mountain();

    glColor3ub(255,255,255);
    Snow_Up_the_mountain();

    glColor3ub(58,116,136);
    Mountain_set2();

    glColor3ub(140,209,54);
    gash_Under_Mountain();


    glPushMatrix();
    glTranslatef(birdE, 0.0f,0.0f);
    bird1();
    bird2();
    glPopMatrix();
    glLoadIdentity();

    glColor3ub(44,155,208);
    River();

    //Boat

    glPushMatrix();
    glTranslatef(boatE, 0.0f,0.0f);
    boat1();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(boat2E, 0.0f,0.0f);
    boat2();
    glPopMatrix();
    glLoadIdentity();

    //background grass
    glColor3ub(50,205,50);
    Backgroun_gash_1();

    glColor3ub(0,255,0);
    Backgroun_gash_2();



    // House ROOF
    glColor3ub(0,128,128);
    House_roof();

    //House Wall
    glColor3ub(30,144,255);
    House_wall();


    //House Base
    glColor3ub(0,0,128);
    House_base();

    glColor3ub(210,105,30);
    House_door_window();



    //tree


    //Tree leaf2
    glColor3ub(40, 137, 40);
    leaf2();

    //Tree leaf5
    glColor3ub(29,71,35);
    leaf5();


    //Tree leaf4
    glColor3ub(40,137,40);
    leaf4();

    //Tree leaf1
    glColor3ub(95, 166, 46);
    leaf1();

    //Tree leaf3
    glColor3ub(106,183,53);
    leaf3();

    glColor3ub(68,26,10);
    Tree();




    //Bush1
    glColor3ub(30, 71, 15);
    Bush1();

    //Bush2
    glColor3ub(60, 161, 21);
    Bush2();


    //Bush4
    glColor3ub(44, 128, 14);
    Bush4();

    //Bush3
    glColor3ub(60, 161, 21);
    Bush3();

    //Bush6
    glColor3ub(60, 161, 21);
    Bush6();

    //Bush5
    glColor3ub(44, 128, 14);
    Bush5();

    //Bush8
    glColor3ub(30, 71, 15);
    Bush8();

    //Bush7
    glColor3ub(60, 161, 21);
    Bush7();

    //Bush9
    glColor3ub(60, 161, 21);
    Bush9();


    //Bush12
    glColor3ub(30, 71, 15);
    Bush12();

    //Bush11
    glColor3ub(44, 128, 14);
    Bush11();

    //Bush10
    glColor3ub(60, 161, 21);
    Bush10();


    //Flowers
    Flower1();
    Flower2();
    Flower3();
    Flower4();
    Flower5();
    Flower6();
    Flower7();
    Flower8();
    Flower9();
    Flower10();
    Flower11();


    glTranslated(-0.8,0.275,0);
    windmill();
    glLoadIdentity();

    windmill();
    glLoadIdentity();

    glutTimerFunc(20500,display_rainySeason,0);
    Idle();
    glFlush ();
}




void rainySeason()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3ub(211,211,211);
    Backgroun();

    glPushMatrix();
    glTranslatef(rainCloudE, rainCloudUpE,0.0f);
    rainCloud();
    glPopMatrix();
    glLoadIdentity();



    glColor3ub(26,78,91);
    Mountain_set1();

    glColor3ub(75,150,172);
    Big_Mountain();

    glColor3ub(255,255,255);
    Snow_Up_the_mountain();

    glColor3ub(58,116,136);
    Mountain_set2();

    glColor3ub(140,209,54);
    gash_Under_Mountain();


    glPushMatrix();
    glTranslatef(birdE, 0.0f,0.0f);
    bird1();
    bird2();
    glPopMatrix();
    glLoadIdentity();

    glColor3ub(44,155,208);
    River();

    //Boat

    glPushMatrix();
    glTranslatef(boatE, 0.0f,0.0f);
    boat1();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(boat2E, 0.0f,0.0f);
    boat2();
    glPopMatrix();
    glLoadIdentity();


    //background grass
    glColor3ub(35,190,35);
    Backgroun_gash_1();

    glColor3ub(0,240,0);
    Backgroun_gash_2();



    // House ROOF
    glColor3ub(0,128,128);
    House_roof();

    //House Wall
    glColor3ub(30,144,255);
    House_wall();


    //House Base
    glColor3ub(0,0,128);
    House_base();

    glColor3ub(210,105,30);
    House_door_window();




    glPushMatrix();
    glTranslatef(0.0f, longGashE,0.0f);
    longGash();
    glPopMatrix();
    glLoadIdentity();
    //tree


    //Tree leaf2
    glColor3ub(40, 137, 40);
    leaf2();

    //Tree leaf5
    glColor3ub(29,71,35);
    leaf5();


    //Tree leaf4
    glColor3ub(40,137,40);
    leaf4();

    //Tree leaf1
    glColor3ub(95, 166, 46);
    leaf1();

    //Tree leaf3
    glColor3ub(106,183,53);
    leaf3();

    glColor3ub(68,26,10);
    Tree();


    //Bush1
    glColor3ub(30, 71, 15);
    Bush1();

    //Bush2
    glColor3ub(60, 161, 21);
    Bush2();


    //Bush4
    glColor3ub(44, 128, 14);
    Bush4();

    //Bush3
    glColor3ub(60, 161, 21);
    Bush3();

    //Bush6
    glColor3ub(60, 161, 21);
    Bush6();

    //Bush5
    glColor3ub(44, 128, 14);
    Bush5();

    //Bush8
    glColor3ub(30, 71, 15);
    Bush8();

    //Bush7
    glColor3ub(60, 161, 21);
    Bush7();

    //Bush9
    glColor3ub(60, 161, 21);
    Bush9();


    //Bush12
    glColor3ub(30, 71, 15);
    Bush12();

    //Bush11
    glColor3ub(44, 128, 14);
    Bush11();

    //Bush10
    glColor3ub(60, 161, 21);
    Bush10();


    //Flowers
    Flower1();
    Flower2();
    Flower3();
    Flower4();
    Flower5();
    Flower6();
    Flower7();
    Flower8();
    Flower9();
    Flower10();
    Flower11();


    glTranslated(-0.8,0.275,0);
    windmill_in_rainlyseason();
    glLoadIdentity();

    windmill_in_rainlyseason();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(rainDownE,rainE,0.0f);
    glColor3ub(255, 255, 255);
    glLineWidth(2);

    rain();
    glPopMatrix();
    glLoadIdentity();

    glutTimerFunc(40000,display_wintar_start,0);
    Idle();
    glFlush ();

}

void winter_start()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3ub(173,216,230);
    Backgroun();


    glColor3ub(26,78,91);
    Mountain_set1();

    glColor3ub(75,150,172);
    Big_Mountain();

    glColor3ub(255,255,255);
    Snow_Up_the_mountain();

    glColor3ub(58,116,136);
    Mountain_set2();

    glPushMatrix();
    glTranslatef(0.0f, mountainSnowE,0.0f);
    mountainSnow();
    glPopMatrix();
    glLoadIdentity();

    glColor3ub(189,183,107);
    gash_Under_Mountain();


    glPushMatrix();
    glTranslatef(birdE, 0.0f,0.0f);
    bird1();
    bird2();
    glPopMatrix();
    glLoadIdentity();

    glColor3ub(176,224,230);
    River();

    //Boat

    glPushMatrix();
    glTranslatef(boatE, 0.0f,0.0f);
    boat1();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(boat2E, 0.0f,0.0f);
    boat2();
    glPopMatrix();
    glLoadIdentity();

    //background grass
    glColor3ub(189,183,107);
    Backgroun_gash_1();

    glColor3ub(240,230,140);
    Backgroun_gash_2();



    // House ROOF
    glColor3ub(0,128,128);
    House_roof();

    //House Wall
    glColor3ub(30,144,255);
    House_wall();


    //House Base
    glColor3ub(0,0,128);
    House_base();

    glColor3ub(210,105,30);
    House_door_window();


    glPushMatrix();
    glTranslatef(0.0f, longGashE2,0.0f);
    longGash();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f, houseSnowE,0.0f);
    houseSnow();
    glPopMatrix();
    glLoadIdentity();
    //tree

    //Tree leaf2
    glPushMatrix();
    glTranslatef(0.0f,treeE4,0.0f);
    glColor3ub(107,142,35);
    leaf2();
    glPopMatrix();
    glLoadIdentity();

    //Tree leaf5
    glPushMatrix();
    glTranslatef(0.0f,treeE2,0.0f);
    glColor3ub(85,107,47);
    leaf5();
    glPopMatrix();
    glLoadIdentity();


    //Tree leaf4
    glPushMatrix();
    glTranslatef(0.0f,treeE3,0.0f);
    glColor3ub(107,142,35);
    leaf4();
    glPopMatrix();
    glLoadIdentity();

    //Tree leaf1
    glPushMatrix();
    glTranslatef(0.0f,treeE1,0.0f);
    glColor3ub(154,205,50);
    leaf1();
    glPopMatrix();
    glLoadIdentity();

    //Tree leaf3
    glPushMatrix();
    glTranslatef(0.0f,treeE5,0.0f);
    glColor3ub(154,205,50);
    leaf3();
    glPopMatrix();
    glLoadIdentity();

    glColor3ub(68,26,10);
    Tree();

    glPushMatrix();
    glTranslatef(0.0f, treeSnowE,0.0f);
    treeSnow();
    glPopMatrix();
    glLoadIdentity();


    //Bush1
    glColor3ub(85,107,47);
    Bush1();

    //Bush2
    glColor3ub(154,205,50);
    Bush2();


    //Bush4
    glColor3ub	(107,142,35);
    Bush4();

    //Bush3
    glColor3ub	(154,205,50);
    Bush3();

    //Bush6
    glColor3ub	(154,205,50);
    Bush6();

    //Bush5
    glColor3ub	(107,142,35);
    Bush5();

    //Bush8
    glColor3ub(85,107,47);
    Bush8();

    //Bush7
    glColor3ub	(154,205,50);
    Bush7();

    //Bush9
    glColor3ub	(154,205,50);
    Bush9();


    //Bush12
    glColor3ub(85,107,47);
    Bush12();

    //Bush11
    glColor3ub	(107,142,35);
    Bush11();

    //Bush10
    glColor3ub	(154,205,50);
    Bush10();


    //Flowers

    glPushMatrix();
    glTranslatef(0.0f,flowerE1,0.0f);
    Flower2();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(0.0f,flowerE2,0.0f);
    Flower5();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,flowerE3,0.0f);
    Flower8();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,flowerE4,0.0f);
    Flower1();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,flowerE5,0.0f);
    Flower7();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,flowerE6,0.0f);
    Flower3();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,flowerE7,0.0f);
    Flower4();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,flowerE8,0.0f);
    Flower9();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,flowerE9,0.0f);
    Flower10();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,flowerE10,0.0f);
    Flower11();
    glPopMatrix();
    glLoadIdentity();

     glPushMatrix();
    glTranslatef(0.0f,flowerE11,0.0f);
    Flower6();
    glPopMatrix();
    glLoadIdentity();



    glTranslated(-0.8,0.275,0);
    windmill();
    glLoadIdentity();

    windmill();

    glPushMatrix();
    glTranslated(0.0f,snowE,0.0f);
    glColor3ub(255, 255, 255);
    snowball();
    glTranslated(0.2,-0.5,0);snowball();
    glTranslated(-0.1,-0.45,0);snowball();
    glTranslated(0.0,-0.5,0);snowball();
    glTranslated(0.2,-0.5,0);snowball();
    glTranslated(-0.1,-0.5,0);snowball();
    glLoadIdentity();
    glTranslated(0.2,1.0,0);snowball();
    glTranslated(0.2,.2,0);snowball();
    glTranslated(-0.1,0.3,0);snowball();
    glTranslated(0.2,.4,0);snowball();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,snowE2,0.0f);
    glColor3ub(255, 255, 255);
    snowball2();
    glTranslated(0.2,-0.5,0);snowball2();
    glTranslated(-0.1,-0.45,0);snowball2();
    glTranslated(0.0,-0.5,0);snowball2();
    glTranslated(0.2,-0.5,0);snowball2();
    glTranslated(-0.1,-0.5,0);snowball2();
    glLoadIdentity();
    glTranslated(0.2,1.0,0);snowball2();
    glTranslated(0.2,.2,0);snowball2();
    glTranslated(-0.1,0.3,0);snowball2();
    glTranslated(0.2,.4,0);snowball2();
    glLoadIdentity();

    glFlush ();
}

void SpecialInput(int key, int x, int y)
{
switch(key)
  {
   case GLUT_KEY_UP:

   break;
   case GLUT_KEY_DOWN:


   break;
   case GLUT_KEY_LEFT:
    boatE=0.15f;
    boat2E=0.10f;

break;
case GLUT_KEY_RIGHT:
    boatE=0.01f;
    boat2E=0.015f;


break;
}
glutPostRedisplay();
}


void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1240.0, 0.0, 697.5);
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1240, 697.5);
  glutInitWindowPosition (100, 150);
  glutCreateWindow ("Season Change");

  glutDisplayFunc(summer);
  sound();
  glutTimerFunc(10, boatMove, 0);
  glutTimerFunc(10, boatMove2, 0);
  glutTimerFunc(100, cloudMove, 0);
  glutTimerFunc(150, sunMove, 0);
  glutTimerFunc(150, birdMove, 0);
  glutTimerFunc(23000, rainCloudMove, 0);
  glutTimerFunc(37000, rainMove, 0);
  glutTimerFunc(50500, rainDown, 0);
  glutTimerFunc(52500, longGashUp, 0);
  glutTimerFunc(53000, rainCloudUp, 0);
  glutTimerFunc(60000, snowMove, 0);
  glutTimerFunc(70000, snowMove2, 0);//61000
  glutTimerFunc(65000, flowerMove, 0);//63000
  glutTimerFunc(65000, longGashDown, 0);//63000
  glutTimerFunc(65000, treeMove, 0);//64000
  glutTimerFunc(78000, houseSnowMove, 0);
  glutTimerFunc(85000, treeSnowMove, 0);
  glutTimerFunc(78000, mountainSnowMove, 0);

  myInit ();
  glutIdleFunc(Idle);
  glutMainLoop();
}
