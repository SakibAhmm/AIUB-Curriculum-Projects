#include <windows.h> // for MS Windows
#define PI 3.141516
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
//#include <GL/glut.h>

void handleKeypress(unsigned char key, int x, int y);

// DAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAY
void update(int n);
void khar1 (float translateX, float translateY, float scaleX, float scaleY);
void pole3(float translateX, float translateY, float scaleX, float scaleY);
void bird1(float translateX, float translateY, float scaleX, float scaleY);
void grass2(float translateX, float translateY, float scaleX, float scaleY);
void circle(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2);
void cloud1();
void bush1();
void grass1();
float birdWing=0.6;
float bird = -3.7,bird2= -3.9;
float cloud =-1.2,cloud2=0.3;
//--------------------------------------------------

//NIGHTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT

void updateNight(int n);
void kharNight1 (float translateX, float translateY, float scaleX, float scaleY);
void poleNight3(float translateX, float translateY, float scaleX, float scaleY);
void grassNight2(float translateX, float translateY, float scaleX, float scaleY);
void circleNight(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2);
void cloudNightNight1();
void bushNight1();
void grassNight1();
float cloudNight =-1.2, cloudNight2=0.3;
void nightView();
//-----------------------------------------------------

//RAINNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN

void updateRain3(int n);
void kharRain1 (float translateX, float translateY, float scaleX, float scaleY);
void poleRain3(float translateX, float translateY, float scaleX, float scaleY);
void grassRain2(float translateX, float translateY, float scaleX, float scaleY);
void circleRain(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2);
void cloudRain1();
void bushRain1();
void grassRain1();
void updateRain1(int n);
void updateRain2(int value);
float cloudRain =-1.2, cloudRain2=0.3;

GLfloat positionRain1 = 0.0f;
GLfloat speedRain1 = 0.5f;

void rainView();
//------------------------------------------------------


//FLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOD

void updateFlood3(int n);
void kharFlood1 (float translateX, float translateY, float scaleX, float scaleY);
void poleFlood3(float translateX, float translateY, float scaleX, float scaleY);
void grassFlood2(float translateX, float translateY, float scaleX, float scaleY);
void circleFlood(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2);
void cloudFlood1();
void bushFlood1();
void grassFlood1();
void updateFlood1(int n);
void updateFlood2(int value);
float cloudFlood =-1.2, cloudFlood2=0.3;

GLfloat positionFlood1 = 0.0f;
GLfloat speedFlood1 = 0.5f;

void floodView();
//-----------------------------------------------------------------

//FINAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAALLLLLLLLLLLLLLLLLLLLL

void circleFinal(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2);
void updateFinalheli(int n);
void updateFinal(int n);
void boat();
void setSpin(float x, float y, float z);
void reset();
void reshape(int w,int h);
void spinDisplay(void);
void spinDisplayReverse(void);
void mouse(int button,int state,int x,int y);
void kharFinal1 (float translateX, float translateY, float scaleX, float scaleY);
void poleFinal(float translateX, float translateY, float scaleX, float scaleY);
void helicopter(float translateX, float translateY, float scaleX, float scaleY);
void birdFinal(float translateX, float translateY, float scaleX, float scaleY);
void grassFinal2(float translateX, float translateY, float scaleX, float scaleY);
void circleFinal(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2);
void clouldFinal2();
void bushFinal();
void grassFinal1();

static GLfloat spin = 0.0;
static GLfloat spin_speed = 5.6;
float spin_x = 0;
float spin_y = 1;
float spin_z = 0;
float cloudFinal =-1.2,cloudFinal2=0.3;


float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = -1.0;

float heli = -9.0;

void finalView();

//--------------------------------------------------------------------------------------


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(.5);
    // Draw a Red 1x1 Square centered at origin

    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
    glColor3ub(189, 234, 255); // Saddle Brown (Sky colour)

    glVertex2f(-1.0f, 0.3f); // x, y
    glVertex2f(1.0f, 0.3f);
    glColor3ub(122, 178, 255);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);

    glEnd();

    glColor3ub(229, 227, 246); //(1st Cloud)
    circle(0.8, 0.75, 0.052, 2);
    circle(0.74, 0.721, 0.03, 2);
    circle(0.85, 0.72, 0.03, 2);
    glColor3ub(204, 225, 245); //(1st Cloud shade)
    circle(0.8, 0.75, 0.042, 2);
    circle(0.74, 0.721, 0.025, 2);
    circle(0.85, 0.72, 0.025, 2);

    glColor3ub(229, 227, 246); // 2nd Cloud
    circle(-0.9, 0.82, 0.03, 2);
    circle(-0.83, 0.84, 0.05, 2);
    circle(-0.765, 0.823, 0.03, 2);
    glColor3ub(204, 225, 245); //(2nd cloud shade)
    circle(-0.88, 0.82, 0.02, 2);
    circle(-0.83, 0.84, 0.04, 2);
    circle(-0.784, 0.823, 0.02, 2);

    /*glColor3ub ( 229,227,246); //(Mid cloud )
    circle(0.3,0.9,0.05,2);
    circle(0.21,0.87,0.04,2);
    circle(0.36,0.87,0.04,2);
    circle(0.28,0.86,0.046,2);
    circle(0.23,0.9,0.025,2);
    circle(0.35,0.9,0.025,2);
    circle(0.4,0.87,0.025,2);
    circle(0.33,0.86,0.025,2);

    glColor3ub ( 204,225,245); //(Mid cloud shade)
    circle(0.3,0.9,0.043,2);
    circle(0.21,0.87,0.033,2);
    circle(0.36,0.87,0.033,2);
    circle(0.28,0.86,0.04,2);
    circle(0.23,0.9,0.02,2);
    circle(0.35,0.9,0.01,2);
    circle(0.4,0.87,0.01,2);
    circle(0.33,0.86,0.01,2);
    */
    glPushMatrix();
    glScaled(1.5, 1.5, 0.0);
    glTranslatef(0.0, -0.5, 0.0);

    cloud1();
    glPopMatrix(); // cloud1

    glPushMatrix();
    glScaled(1.52, 1.52, 0.0);
    glTranslatef(-0.4, -0.3, 0.0);

    cloud1();
    glPopMatrix(); // cloud2

    glPushMatrix();
    glScaled(1.1, 1.5, 0.0);
    glTranslatef(cloud, -0.45, 0.0);

    cloud1();
    glPopMatrix(); // cloud3

    glPushMatrix();
    glScaled(1.17, 1.17, 0.0);
    glTranslatef(cloud2, -0.1, 0.0);

    cloud1();
    glPopMatrix(); // cloud1-2

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad
    glColor3ub(231, 230, 244); // Saddle Brown (Sky Triangle 1st)

    glVertex2f(-1.0, 0.82); // x, y
    glVertex2f(-0.6, 0.8);
    glVertex2f(-1.0, 0.78);

    glEnd();

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad
    glColor3ub(231, 230, 244); // Saddle Brown (Sky triangle 2nd )

    glVertex2f(1.0, 0.72); // x, y
    glVertex2f(0.6, 0.7);
    glVertex2f(1.0, 0.68);

    glEnd();

    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(1, 120, 124); // Yellow (Mountain)

    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);

    glVertex2f(0.95f, 0.35f);
    glVertex2f(0.9f, 0.357f);
    glVertex2f(0.869f, 0.381f);
    glVertex2f(0.8f, 0.35f);
    glVertex2f(0.771f, 0.348f);
    glVertex2f(0.7f, 0.355f);
    glVertex2f(0.671f, 0.358f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.55f, 0.39f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.4f, 0.39f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.2f, 0.413f);
    glVertex2f(0.1f, 0.389f);
    glVertex2f(0.0f, 0.42f);
    glVertex2f(-0.1f, 0.44f);
    glVertex2f(-0.124f, 0.428f);
    glVertex2f(-0.161f, 0.38f);
    glVertex2f(-0.2f, 0.36f);
    glVertex2f(-0.223f, 0.361f);
    glVertex2f(-0.25f, 0.4f);
    glVertex2f(-0.254f, 0.45f);
    glVertex2f(-0.28f, 0.493f);
    glVertex2f(-0.32f, 0.518f);
    glVertex2f(-0.361f, 0.48f);
    glVertex2f(-0.368f, 0.45f);

    glVertex2f(-0.4f, 0.44f);
    glVertex2f(-0.5f, 0.455f);
    glVertex2f(-0.534f, 0.444f);
    glVertex2f(-0.6f, 0.49f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.7f, 0.48f);
    glVertex2f(-0.74f, 0.43f);
    glVertex2f(-0.8f, 0.42f);
    glVertex2f(-0.818f, 0.422f);
    glVertex2f(-0.9f, 0.45f);

    glVertex2f(-0.95f, 0.418f);
    glVertex2f(-1.0f, 0.4f);

    glEnd();

    glBegin(GL_POLYGON);       // These vertices form a closed polygon
    glColor3ub(151, 190, 190); // Yellow (Mountain)

    glVertex2f(-1.00f, 0.28f);
    glVertex2f(1.00f, 0.28f);
    glColor3ub(0, 104, 105); // Yellow (Mountain)
    glVertex2f(0.95f, 0.33f);
    glVertex2f(0.90f, 0.337f);
    glVertex2f(0.869f, 0.361f);
    glVertex2f(0.80f, 0.33f);
    glVertex2f(0.771f, 0.328f);
    glVertex2f(0.70f, 0.335f);
    glVertex2f(0.671f, 0.338f);
    glVertex2f(0.60f, 0.33f);
    glVertex2f(0.55f, 0.37f);
    glVertex2f(0.50f, 0.38f);
    glVertex2f(0.40f, 0.37f);
    glVertex2f(0.30f, 0.38f);
    glVertex2f(0.20f, 0.393f);
    glVertex2f(0.10f, 0.369f);
    glVertex2f(0.00f, 0.40);
    glVertex2f(-0.10f, 0.42f);
    glVertex2f(-0.124f, 0.408f);
    glVertex2f(-0.161f, 0.36f);
    glVertex2f(-0.20f, 0.34f);
    glVertex2f(-0.223f, 0.341f);
    glVertex2f(-0.25f, 0.38f);
    glVertex2f(-0.254f, 0.43f);
    glVertex2f(-0.28f, 0.473f);
    glVertex2f(-0.32f, 0.498f);
    glVertex2f(-0.361f, 0.46f);
    glVertex2f(-0.368f, 0.43f);
    glVertex2f(-0.40f, 0.42f);
    glVertex2f(-0.50f, 0.435f);
    glVertex2f(-0.534f, 0.424f);
    glVertex2f(-0.60f, 0.47f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.70f, 0.46f);
    glVertex2f(-0.74f, 0.41f);
    glVertex2f(-0.80f, 0.40);
    glVertex2f(-0.818f, 0.402f);
    glVertex2f(-0.90f, 0.43f);
    glVertex2f(-0.95f, 0.398f);
    glVertex2f(-1.00f, 0.38f);

    glEnd();

    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(114, 106, 72); // Yellow (Upper Land EverBrown)
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();

    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(94, 126, 2); // Yellow (upper land Green up shade)

    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, 0.29f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(0.0f, 0.29f);

    glVertex2f(0.6f, 0.3f);
    glVertex2f(1.0f, 0.29f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 138, 1);
    glVertex2f(0.82, 0.284); // (Middle Land halka green Right 5th)
    glVertex2f(0.615, 0.0);
    glVertex2f(1.0, -0.11);
    glVertex2f(1.0, 0.282);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 138, 1);
    glVertex2f(0.31, 0.284); // (Middle Land halka green 4th)
    glVertex2f(0.09, 0.11);
    glVertex2f(0.6, 0.0);
    glVertex2f(0.8, 0.282);
    glEnd();

    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad
    glColor3ub(118, 159, 4); // Saddle Brown (Middle Triangle Field 1st)

    glVertex2f(-0.77, 0.282); // x, y
    glVertex2f(-0.516, 0.21);
    glVertex2f(-0.35, 0.283);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(159, 167, 2);
    glVertex2f(-0.48, 0.22); // (Middle Land halka green 3rd)
    glVertex2f(0.07, 0.12);
    glVertex2f(0.3, 0.293);
    glVertex2f(-0.3, 0.294);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(159, 167, 2);
    glVertex2f(-1.0, 0.01); // (Middle Land Halka green 2nd))
    glVertex2f(-0.52, 0.202);
    glVertex2f(-0.8, 0.28);
    glVertex2f(-1.0, 0.28);
    glEnd();

    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(142, 191, 11); // Yellow (Middle Land yellow green Main 1st)

    glVertex2f(-1.0f, -0.49f);
    glVertex2f(-0.9f, -0.48f);

    glVertex2f(0.05f, 0.1f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();

    // grass2(-11.1,-6.9,0.09,0.09);
    grass2(-11.10, -6.90, 0.09, 0.09);
    grass2(-11.10, -6.00, 0.09, 0.09);

    grass2(-10.40, -6.90, 0.09, 0.09);
    grass2(-10.40, -6.00, 0.09, 0.09);

    grass2(-9.70, -6.90, 0.09, 0.09);
    grass2(-9.70, -6.00, 0.09, 0.09);

    grass2(-9.00, -6.90, 0.09, 0.09);
    grass2(-9.00, -6.00, 0.09, 0.09);
    grass2(-9.00, -5.10, 0.09, 0.09);

    grass2(-8.30, -6.90, 0.09, 0.09);
    grass2(-8.30, -6.00, 0.09, 0.09);
    grass2(-8.30, -5.10, 0.09, 0.09);

    grass2(-7.60, -6.90, 0.09, 0.09);
    grass2(-7.60, -6.00, 0.09, 0.09);
    grass2(-7.60, -5.10, 0.09, 0.09);

    grass2(-6.90, -6.90, 0.09, 0.09);
    grass2(-6.90, -6.00, 0.09, 0.09);
    grass2(-6.90, -5.10, 0.09, 0.09);
    grass2(-6.90, -4.20, 0.09, 0.09);

    grass2(-6.20, -6.90, 0.09, 0.09);
    grass2(-6.20, -6.00, 0.09, 0.09);
    grass2(-6.20, -5.10, 0.09, 0.09);
    grass2(-6.20, -4.20, 0.09, 0.09);

    grass2(-5.50, -6.90, 0.09, 0.09);
    grass2(-5.50, -6.00, 0.09, 0.09);
    grass2(-5.50, -5.10, 0.09, 0.09);
    grass2(-5.50, -4.20, 0.09, 0.09);
    grass2(-5.50, -3.30, 0.09, 0.09);

    grass2(-4.80, -6.90, 0.09, 0.09);
    grass2(-4.80, -6.00, 0.09, 0.09);
    grass2(-4.80, -5.10, 0.09, 0.09);
    grass2(-4.80, -4.20, 0.09, 0.09);
    grass2(-4.80, -3.30, 0.09, 0.09);
    grass2(-4.80, -2.40, 0.09, 0.09);

    grass2(-4.10, -6.90, 0.09, 0.09);
    grass2(-4.10, -6.00, 0.09, 0.09);
    grass2(-4.10, -5.10, 0.09, 0.09);
    grass2(-4.10, -4.20, 0.09, 0.09);
    grass2(-4.10, -3.30, 0.09, 0.09);
    grass2(-4.10, -2.40, 0.09, 0.09);

    grass2(-3.40, -6.90, 0.09, 0.09);
    grass2(-3.40, -6.00, 0.09, 0.09);
    grass2(-3.40, -5.10, 0.09, 0.09);
    grass2(-3.40, -4.20, 0.09, 0.09);
    grass2(-3.40, -3.30, 0.09, 0.09);
    grass2(-3.40, -2.40, 0.09, 0.09);
    grass2(-3.40, -1.50, 0.09, 0.09);

    grass2(-2.70, -6.90, 0.09, 0.09);
    grass2(-2.70, -6.00, 0.09, 0.09);
    grass2(-2.70, -5.10, 0.09, 0.09);
    grass2(-2.70, -4.20, 0.09, 0.09);
    grass2(-2.70, -3.30, 0.09, 0.09);
    grass2(-2.70, -2.40, 0.09, 0.09);
    grass2(-2.70, -1.50, 0.09, 0.09);

    grass2(-2.00, -6.90, 0.09, 0.09);
    grass2(-2.00, -6.00, 0.09, 0.09);
    grass2(-2.00, -5.10, 0.09, 0.09);
    grass2(-2.00, -4.20, 0.09, 0.09);
    grass2(-2.00, -3.30, 0.09, 0.09);
    grass2(-2.00, -2.40, 0.09, 0.09);
    grass2(-2.00, -1.50, 0.09, 0.09);
    grass2(-2.00, -0.60, 0.09, 0.09);

    grass2(-1.30, -6.90, 0.09, 0.09);
    grass2(-1.30, -6.00, 0.09, 0.09);
    grass2(-1.30, -5.10, 0.09, 0.09);
    grass2(-1.30, -4.20, 0.09, 0.09);
    grass2(-1.30, -3.30, 0.09, 0.09);
    grass2(-1.30, -2.40, 0.09, 0.09);
    grass2(-1.30, -1.50, 0.09, 0.09);
    grass2(-1.30, -0.60, 0.09, 0.09);

    grass2(-0.60, -6.90, 0.09, 0.09);
    grass2(-0.60, -6.00, 0.09, 0.09);
    grass2(-0.60, -5.10, 0.09, 0.09);
    grass2(-0.60, -4.20, 0.09, 0.09);
    grass2(-0.60, -3.30, 0.09, 0.09);
    grass2(-0.60, -2.40, 0.09, 0.09);
    grass2(-0.60, -1.50, 0.09, 0.09);
    grass2(-0.60, -0.60, 0.09, 0.09);

    grass2(0.10, -6.90, 0.09, 0.09);
    grass2(0.10, -6.00, 0.09, 0.09);
    grass2(0.10, -5.10, 0.09, 0.09);
    grass2(0.10, -4.20, 0.09, 0.09);
    grass2(0.10, -3.30, 0.09, 0.09);
    grass2(0.10, -2.40, 0.09, 0.09);
    grass2(0.10, -1.50, 0.09, 0.09);
    grass2(0.10, -0.60, 0.09, 0.09);
    grass2(0.10, 0.30, 0.09, 0.09);

    grass2(0.80, -6.90, 0.09, 0.09);
    grass2(0.80, -6.00, 0.09, 0.09);
    grass2(0.80, -5.10, 0.09, 0.09);
    grass2(0.80, -4.20, 0.09, 0.09);
    grass2(0.80, -3.30, 0.09, 0.09);
    grass2(0.80, -2.40, 0.09, 0.09);
    grass2(0.80, -1.50, 0.09, 0.09);
    grass2(0.80, -0.60, 0.09, 0.09);
    grass2(0.80, 0.30, 0.09, 0.09);

    grass2(1.50, 0.30, 0.09, 0.09);
    grass2(1.50, -6.90, 0.09, 0.09);
    grass2(1.50, -6.00, 0.09, 0.09);
    grass2(1.50, -5.10, 0.09, 0.09);
    grass2(1.50, -4.20, 0.09, 0.09);
    grass2(1.50, -3.30, 0.09, 0.09);
    grass2(1.50, -2.40, 0.09, 0.09);
    grass2(1.50, -1.50, 0.09, 0.09);
    grass2(1.50, -0.60, 0.09, 0.09);

    grass2(2.20, -6.90, 0.09, 0.09);
    grass2(2.20, -6.00, 0.09, 0.09);
    grass2(2.20, -5.10, 0.09, 0.09);
    grass2(2.20, -4.20, 0.09, 0.09);
    grass2(2.20, -3.30, 0.09, 0.09);
    grass2(2.20, -2.40, 0.09, 0.09);
    grass2(2.20, -1.50, 0.09, 0.09);
    grass2(2.20, -0.60, 0.09, 0.09);
    grass2(2.90, -6.90, 0.09, 0.09);
    grass2(2.90, -6.00, 0.09, 0.09);
    grass2(2.90, -5.10, 0.09, 0.09);
    grass2(2.90, -4.20, 0.09, 0.09);
    grass2(2.90, -3.30, 0.09, 0.09);
    grass2(2.90, -2.40, 0.09, 0.09);
    grass2(2.90, -1.50, 0.09, 0.09);
    grass2(2.90, -0.60, 0.09, 0.09);
    grass2(3.60, -6.90, 0.09, 0.09);
    grass2(3.60, -6.00, 0.09, 0.09);
    grass2(3.60, -5.10, 0.09, 0.09);
    grass2(3.60, -4.20, 0.09, 0.09);
    grass2(3.60, -3.30, 0.09, 0.09);
    grass2(3.60, -2.40, 0.09, 0.09);
    grass2(3.60, -1.50, 0.09, 0.09);
    grass2(3.60, -0.60, 0.09, 0.09);
    grass2(4.30, -6.90, 0.09, 0.09);
    grass2(4.30, -6.00, 0.09, 0.09);
    grass2(4.30, -5.10, 0.09, 0.09);
    grass2(4.30, -4.20, 0.09, 0.09);
    grass2(4.30, -3.30, 0.09, 0.09);
    grass2(4.30, -2.40, 0.09, 0.09);
    grass2(4.30, -1.50, 0.09, 0.09);
    grass2(4.30, -0.60, 0.09, 0.09);
    grass2(5.00, -6.90, 0.09, 0.09);
    grass2(5.00, -6.00, 0.09, 0.09);
    grass2(5.00, -5.10, 0.09, 0.09);
    grass2(5.00, -4.20, 0.09, 0.09);
    grass2(5.00, -3.30, 0.09, 0.09);
    grass2(5.00, -2.40, 0.09, 0.09);
    grass2(5.00, -1.50, 0.09, 0.09);
    grass2(5.00, -0.60, 0.09, 0.09);
    grass2(5.70, -6.90, 0.09, 0.09);
    grass2(5.70, -6.00, 0.09, 0.09);
    grass2(5.70, -5.10, 0.09, 0.09);
    grass2(5.70, -4.20, 0.09, 0.09);
    grass2(5.70, -3.30, 0.09, 0.09);
    grass2(5.70, -2.40, 0.09, 0.09);
    grass2(5.70, -1.50, 0.09, 0.09);
    grass2(5.70, -0.60, 0.09, 0.09);
    grass2(6.40, -6.90, 0.09, 0.09);
    grass2(6.40, -6.00, 0.09, 0.09);
    grass2(6.40, -5.10, 0.09, 0.09);
    grass2(6.40, -4.20, 0.09, 0.09);
    grass2(6.40, -3.30, 0.09, 0.09);
    grass2(6.40, -2.40, 0.09, 0.09);
    grass2(6.40, -1.50, 0.09, 0.09);
    grass2(6.40, -0.60, 0.09, 0.09);
    grass2(7.10, -6.90, 0.09, 0.09);
    grass2(7.10, -6.00, 0.09, 0.09);
    grass2(7.10, -5.10, 0.09, 0.09);
    grass2(7.10, -4.20, 0.09, 0.09);
    grass2(7.10, -3.30, 0.09, 0.09);
    grass2(7.10, -2.40, 0.09, 0.09);
    grass2(7.10, -1.50, 0.09, 0.09);
    grass2(7.10, -0.60, 0.09, 0.09);
    grass2(7.80, -6.90, 0.09, 0.09);
    grass2(7.80, -6.00, 0.09, 0.09);
    grass2(7.80, -5.10, 0.09, 0.09);
    grass2(7.80, -4.20, 0.09, 0.09);
    grass2(7.80, -3.30, 0.09, 0.09);
    grass2(7.80, -2.40, 0.09, 0.09);
    grass2(7.80, -1.50, 0.09, 0.09);

    grass2(8.50, -6.90, 0.09, 0.09);
    grass2(8.50, -6.00, 0.09, 0.09);
    grass2(8.50, -5.10, 0.09, 0.09);
    grass2(8.50, -4.20, 0.09, 0.09);
    grass2(8.50, -3.30, 0.09, 0.09);
    grass2(8.50, -2.40, 0.09, 0.09);
    grass2(8.50, -1.50, 0.09, 0.09);

    grass2(9.20, -6.90, 0.09, 0.09);
    grass2(9.20, -6.00, 0.09, 0.09);
    grass2(9.20, -5.10, 0.09, 0.09);
    grass2(9.20, -4.20, 0.09, 0.09);
    grass2(9.20, -3.30, 0.09, 0.09);
    grass2(9.20, -2.40, 0.09, 0.09);
    grass2(9.20, -1.50, 0.09, 0.09);

    grass2(9.90, -6.90, 0.09, 0.09);
    grass2(9.90, -6.00, 0.09, 0.09);
    grass2(9.90, -5.10, 0.09, 0.09);
    grass2(9.90, -4.20, 0.09, 0.09);
    grass2(9.90, -3.30, 0.09, 0.09);
    grass2(9.90, -2.40, 0.09, 0.09);
    grass2(9.90, -1.50, 0.09, 0.09);

    grass2(10.60, -6.90, 0.09, 0.09);
    grass2(10.60, -6.00, 0.09, 0.09);
    grass2(10.60, -5.10, 0.09, 0.09);
    grass2(10.60, -4.20, 0.09, 0.09);
    grass2(10.60, -3.30, 0.09, 0.09);
    grass2(10.60, -2.40, 0.09, 0.09);

    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(82, 75, 55); // Yellow (Land Brown  polygon 1st)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.62f);
    glVertex2f(0.95f, -0.63f);
    glVertex2f(0.9f, -0.65f);
    glVertex2f(0.8f, -0.62f);
    glVertex2f(0.7f, -0.61f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.5f, -0.61f);
    glVertex2f(0.45f, -0.58f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.3f, -0.68f);
    glVertex2f(0.2f, -0.65f);
    glVertex2f(0.1f, -0.65f);
    glVertex2f(0.0f, -0.62f);
    glVertex2f(-0.1f, -0.64f);
    glVertex2f(-0.2f, -0.59f);
    glVertex2f(-0.25f, -0.598f);
    glVertex2f(-0.3f, -0.58f);
    glVertex2f(-0.4f, -0.57f);
    glVertex2f(-0.5f, -0.585f);
    glVertex2f(-0.55f, -0.58f);
    glVertex2f(-0.6f, -0.59f);
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.8f, -0.59f);
    glVertex2f(-0.85f, -0.61f);
    glVertex2f(-0.9f, -0.62f);
    glVertex2f(-0.95f, -0.61f);
    glVertex2f(-1.0f, -0.57f);

    glEnd();

    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(76, 152, 173); // Yellow (Water-land polygon )
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.67f);
    glVertex2f(0.95f, -0.65f);
    glVertex2f(0.9f, -0.67f);
    glVertex2f(0.8f, -0.64f);
    glVertex2f(0.7f, -0.65f);
    glVertex2f(0.6f, -0.62f);
    glVertex2f(0.5f, -0.65f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.4f, -0.67f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.0f, -0.67f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.64f);
    glVertex2f(-0.25f, -0.62f);
    glVertex2f(-0.3f, -0.64f);
    glVertex2f(-0.4f, -0.63f);
    glVertex2f(-0.5f, -0.61f);
    glVertex2f(-0.55f, -0.63f);
    glVertex2f(-0.6f, -0.63f);
    glVertex2f(-0.7f, -0.65f);
    glVertex2f(-0.8f, -0.66f);
    glVertex2f(-0.85f, -0.67f);
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.95f, -0.638f);
    glVertex2f(-1.0f, -0.6f);

    glEnd();

    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(81, 110, 57); // Yellow (Land Green polygon 2nd)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.72f);
    glVertex2f(0.95f, -0.7f);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.8f, -0.69f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.6f, -0.68f);
    glVertex2f(0.5f, -0.7f);
    glVertex2f(0.45f, -0.68f);
    glVertex2f(0.4f, -0.72f);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.2f, -0.72f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.0f, -0.72f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.69f);
    glVertex2f(-0.25f, -0.67f);
    glVertex2f(-0.3f, -0.69f);
    glVertex2f(-0.4f, -0.68f);
    glVertex2f(-0.5f, -0.66f);
    glVertex2f(-0.55f, -0.665f);
    glVertex2f(-0.6f, -0.689f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.8f, -0.71f);
    glVertex2f(-0.85f, -0.72f);
    glVertex2f(-0.9f, -0.7f);
    glVertex2f(-0.95f, -0.688f);
    glVertex2f(-1.0f, -0.65f);

    glEnd();

    glBegin(GL_TRIANGLES);  // Each set of 4 vertices form a quad
    glColor3ub(86, 62, 27); // Saddle Brown (Chader oikhnaei Triangle ta)

    glVertex2f(0.37, -0.6); // x, y
    glVertex2f(0.13, -0.6);
    glVertex2f(0.3, -0.41);

    glEnd();

    glBegin(GL_QUADS);      // Each set of 4 vertices form a quad
    glColor3ub(86, 62, 27); // Saddle Brown (House er Ekdom Middle Quad)

    glVertex2f(0.34f, -0.5f); // x, y
    glVertex2f(0.34f, -0.714f);
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.45f, -0.5f);

    glEnd();
    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(166, 121, 47); // Yellow (Bashar majhe ekta polygon draw)
    glVertex2f(0.2f, -0.53f);
    glVertex2f(0.2f, -0.713f);
    glVertex2f(0.34f, -0.711f);
    glVertex2f(0.34f, -0.53f);
    glVertex2f(0.30f, -0.52f);
    glVertex2f(0.22f, -0.53f);
    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 1st)

    glVertex2f(0.16f, -0.7f); // x, y
    glVertex2f(0.16f, -0.77f);
    glVertex2f(0.166f, -0.77f);
    glVertex2f(0.166f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche Stick 2nd)

    glVertex2f(0.18f, -0.7f); // x, y
    glVertex2f(0.18f, -0.75f);
    glVertex2f(0.186f, -0.75f);
    glVertex2f(0.186f, -0.7f);

    glEnd();

    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(207, 156, 77); // Saddle Brown (House er Left Side er Quad)

    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.16f, -0.7f);
    glVertex2f(0.2f, -0.71f);
    glVertex2f(0.2f, -0.53f);

    glEnd();

    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(166, 121, 47); // Saddle Brown (House er Door er Right er Quad)

    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.66f, -0.69f);
    glVertex2f(0.66f, -0.5f);

    glEnd();
    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad)

    glVertex2f(0.24f, -0.41f); // x, y
    glVertex2f(0.12f, -0.56f);
    glVertex2f(0.16f, -0.59f);
    glVertex2f(0.3f, -0.41f);

    glEnd();
    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Ektu Kom Brown (house chad er ta)

    glVertex2f(0.25f, -0.3f);  // x, y
    glVertex2f(0.32f, -0.51f); // x, y

    glVertex2f(0.69f, -0.51f); // x, y
    glVertex2f(0.58f, -0.3f);  // x, y
    glEnd();

    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad
    glColor3ub(121, 88, 38); // Saddle Brown (Chader oikhnaei Triangle ta)

    glVertex2f(0.25f, -0.3f); // x, y
    glVertex2f(0.24f, -0.41f);
    glVertex2f(0.29f, -0.41f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 1st)

    glVertex2f(0.13f, -0.55f); // x, y
    glVertex2f(0.11f, -0.57f);
    glVertex2f(0.15f, -0.57f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 2nd)

    glVertex2f(0.15f, -0.57f); // x, y
    glVertex2f(0.12f, -0.58f);
    glVertex2f(0.16f, -0.59f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 3rd)

    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.18f, -0.566f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown ((Chader Left side er Quad E Triangle 4th)

    glVertex2f(0.16f, -0.59f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.16f, -0.55f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 1st)

    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.33f, -0.53f);
    glVertex2f(0.35f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 2nd)

    glVertex2f(0.35f, -0.5f); // x, y
    glVertex2f(0.4f, -0.53f);
    glVertex2f(0.45f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 3rd)

    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.43f, -0.53f);
    glVertex2f(0.5f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 4th)

    glVertex2f(0.5f, -0.5f); // x, y
    glVertex2f(0.55, -0.53f);
    glVertex2f(0.6f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 5th)

    glVertex2f(0.6f, -0.5f); // x, y
    glVertex2f(0.65, -0.54f);
    glVertex2f(0.68f, -0.5f);

    glEnd();

    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(59, 79, 40); // Yellow (House Shadow)

    glVertex2f(0.18f, -0.73f);
    glVertex2f(0.13f, -0.77f);
    glVertex2f(0.3f, -0.8f);
    glVertex2f(0.72f, -0.83f);
    glVertex2f(0.7f, -0.71f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 3rd)

    glVertex2f(0.2f, -0.71f); // x, y
    glVertex2f(0.2f, -0.77f);
    glVertex2f(0.205f, -0.77f);
    glVertex2f(0.205f, -0.71f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 9th)

    glVertex2f(0.62f, -0.69f); // x, y
    glVertex2f(0.62f, -0.75f);
    glVertex2f(0.627f, -0.75f);
    glVertex2f(0.627f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 8th)

    glVertex2f(0.58f, -0.69f); // x, y
    glVertex2f(0.58f, -0.75f);
    glVertex2f(0.587f, -0.75f);
    glVertex2f(0.587f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 7th)

    glVertex2f(0.54f, -0.69f); // x, y
    glVertex2f(0.54f, -0.75f);
    glVertex2f(0.547f, -0.75f);
    glVertex2f(0.547f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 6th)

    glVertex2f(0.50f, -0.69f); // x, y
    glVertex2f(0.50f, -0.75f);
    glVertex2f(0.507f, -0.75f);
    glVertex2f(0.507f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 5th)

    glVertex2f(0.47f, -0.69f); // x, y
    glVertex2f(0.47f, -0.75f);
    glVertex2f(0.477f, -0.75f);
    glVertex2f(0.477f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 10th)

    glVertex2f(0.64f, -0.69f); // x, y
    glVertex2f(0.64f, -0.77f);
    glVertex2f(0.647f, -0.77f);
    glVertex2f(0.647f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House Ladder 1st)

    glVertex2f(0.36f, -0.7f); // x, y
    glVertex2f(0.37f, -0.8f);
    glVertex2f(0.380f, -0.8f);
    glVertex2f(0.370f, -0.7f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House Ladder 2nd)

    glVertex2f(0.43f, -0.7f); // x, y
    glVertex2f(0.44f, -0.8f);
    glVertex2f(0.450f, -0.8f);
    glVertex2f(0.440f, -0.7f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.365, -0.72); // (house ladder mid stick 1st)
    glVertex2f(0.365, -0.73);
    glVertex2f(0.44, -0.72);
    glVertex2f(0.44, -0.71);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.365, -0.75); // (house ladder mid stick 2nd)
    glVertex2f(0.365, -0.76);
    glVertex2f(0.44, -0.75);
    glVertex2f(0.44, -0.74);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.368, -0.78); // (house ladder mid stick 3rd)
    glVertex2f(0.369, -0.79);
    glVertex2f(0.44, -0.78);
    glVertex2f(0.44, -0.77);
    glEnd();

    glColor3ub(38, 80, 0); //(Main Tree Darkleaf 1st )

    circle(0.8, -0.44, 0.055, 2);
    circle(0.85, -0.52, 0.05, 2);
    circle(0.75, -0.52, 0.05, 2);

    glColor3ub(55, 119, 0); //(Leaf Dark Green 3th)
    circle(0.74, -0.26, 0.055, 2);
    circle(0.78, -0.2, 0.06, 2);
    circle(0.83, -0.25, 0.06, 2);
    circle(0.8, -0.34, 0.06, 2);

    glColor3ub(48, 98, 0); //(Leaf Dark Green Shade 3th)
    circle(0.73, -0.27, 0.055, 2);
    circle(0.77, -0.21, 0.06, 2);
    circle(0.82, -0.26, 0.06, 2);
    circle(0.79, -0.35, 0.06, 2);

    glColor3ub(103, 159, 26); //(Leaf  Green 2nd)
    circle(0.71, -0.44, 0.055, 2);
    circle(0.7, -0.38, 0.055, 2);
    circle(0.72, -0.34, 0.055, 2);
    circle(0.75, -0.4, 0.045, 2);

    glColor3ub(94, 144, 29); //(Lead Shade green 2nd)
    circle(0.7, -0.45, 0.055, 2);
    circle(0.69, -0.39, 0.055, 2);
    circle(0.71, -0.35, 0.055, 2);
    circle(0.74, -0.41, 0.045, 2);

    glColor3ub(77, 131, 11); //(Leaf Dark Green 4th)
    circle(0.9, -0.32, 0.055, 2);
    circle(0.915, -0.38, 0.06, 2);
    circle(0.91, -0.42, 0.05, 2);
    circle(0.88, -0.44, 0.055, 2);
    circle(0.86, -0.4, 0.055, 2);

    glColor3ub(89, 150, 17); //(Leaf Dark Green Shade 4th)
    circle(0.89, -0.33, 0.055, 2);
    circle(0.905, -0.39, 0.06, 2);
    circle(0.9, -0.43, 0.05, 2);
    circle(0.87, -0.45, 0.055, 2);
    circle(0.85, -0.41, 0.055, 2);

    glColor3ub(139, 95, 60); // Yellow (Main tree)
    glBegin(GL_POLYGON);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glVertex2f(0.808, -0.84);
    glVertex2f(0.8, -0.84);
    glVertex2f(0.79, -0.85);
    glVertex2f(0.778, -0.8525);
    glVertex2f(0.775, -0.85);
    glVertex2f(0.775, -0.8275);
    glVertex2f(0.779, -0.8);
    glVertex2f(0.784, -0.7625);
    glVertex2f(0.79, -0.7175);
    glVertex2f(0.792, -0.685);
    glVertex2f(0.793, -0.66);
    glVertex2f(0.793, -0.635);
    glVertex2f(0.79, -0.605);
    glVertex2f(0.788, -0.58);
    glVertex2f(0.783, -0.5675);
    glVertex2f(0.779, -0.5375);
    glVertex2f(0.774, -0.5125);
    glVertex2f(0.765, -0.48);
    glVertex2f(0.762, -0.47);
    glVertex2f(0.77, -0.455);
    glVertex2f(0.785, -0.4975);
    glVertex2f(0.791, -0.5);
    glVertex2f(0.798, -0.495);
    glVertex2f(0.804, -0.485);
    glVertex2f(0.805, -0.47);
    glVertex2f(0.808, -0.4375);
    glVertex2f(0.808, -0.43);
    glVertex2f(0.821, -0.44);
    glVertex2f(0.819, -0.465);
    glVertex2f(0.818, -0.485);
    glVertex2f(0.818, -0.52);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.819, -0.5475);
    glVertex2f(0.823, -0.5475);
    glVertex2f(0.827, -0.5325);
    glVertex2f(0.829, -0.5125);
    glVertex2f(0.835, -0.48);
    glVertex2f(0.836, -0.4725);
    glVertex2f(0.846, -0.4875);
    glVertex2f(0.842, -0.5425);
    glVertex2f(0.835, -0.5725);
    glVertex2f(0.833, -0.6025);
    glVertex2f(0.832, -0.6475);
    glVertex2f(0.832, -0.665);
    glVertex2f(0.833, -0.695);
    glVertex2f(0.837, -0.7225);
    glVertex2f(0.841, -0.755);
    glVertex2f(0.85, -0.795);
    glVertex2f(0.858, -0.8325);
    glVertex2f(0.86, -0.845);
    glVertex2f(0.853, -0.8475);
    glVertex2f(0.843, -0.84);
    glVertex2f(0.84, -0.835);
    glVertex2f(0.836, -0.84);
    glVertex2f(0.833, -0.855);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);

    glEnd();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-1.004, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.9, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.65, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.55, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.35, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.25, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.15, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.0, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.2, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.4, -1.7, 0.0);

    bush1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.7, -1.7, 0.0);

    bush1();
    glPopMatrix();

    bird1(bird, 2.2, 0.25, 0.25);
    bird1(bird2, 2.0, 0.25, 0.25);

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.34f); // x, y
    glVertex2f(0.6f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.33f);  // x, y
    glVertex2f(0.379, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.34f); // x, y
    glVertex2f(0.1f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.33f);    // x, y
    glVertex2f(-0.179f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.34f); // x, y
    glVertex2f(-0.4f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.33f);   // x, y
    glVertex2f(-0.679f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.34f); // x, y
    glVertex2f(-1.3f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.34f); // x, y
    glVertex2f(1.2f, 0.32f);   // x, y

    glEnd();

    //2nd wire

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.35f); // x, y
    glVertex2f(0.6f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.34f);  // x, y
    glVertex2f(0.379, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.35f); // x, y
    glVertex2f(0.1f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.34f);    // x, y
    glVertex2f(-0.179f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.35f); // x, y
    glVertex2f(-0.4f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.34f);   // x, y
    glVertex2f(-0.679f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.35f); // x, y
    glVertex2f(-1.3f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.35f); // x, y
    glVertex2f(1.2f, 0.33f);   // x, y

    glEnd();


    pole3(0.0, 0.0, 1.0, 1.0);
    pole3(-0.52, 0.0, 1.0, 1.0);
    pole3(-1.08, 0.0, 1.0, 1.0);
    pole3(-1.57, 0.0, 1.0, 1.0);


    khar1(0.3, 0.0, 1.0, 1.0);




    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv); // Initialize GLUT

    //glutInitDisplayMode(GLUT_RGB | GLUT_MULTISAMPLE);
    glutCreateWindow("OpenGL Setup"); // Create a window with the given title
    glutInitWindowSize(800, 800);     // Set the window's initial width & height
    glutDisplayFunc(display);         // Register display callback handler for window re-paint
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, updateNight, 0);
        glutTimerFunc(100, updateRain3, 0);
        glutTimerFunc(100, updateRain1, 0);
     glutTimerFunc(100, updateRain2, 0);
        glutTimerFunc(100, updateFlood3, 0);
        glutTimerFunc(100, updateFlood1, 0);
     glutTimerFunc(100, updateFlood2, 0);
     glutTimerFunc(100, updateFinalheli, 0);
    glutTimerFunc(100, updateFinal, 0);
    glutKeyboardFunc(handleKeypress);
//    glutMouseFunc(mouse);
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}



//--------------------------------------------------------------------------------------------ALL FUNCTION DECLARATION--------------------------------------------------------------------
void handleKeypress(unsigned char key, int x, int y) {
switch (key) {

case 'd':
    glutDisplayFunc(display);
break;

case 'n':
    glutDisplayFunc(nightView);
break;

case 'r':
    glutDisplayFunc(rainView);
break;

case 'f':
    glutDisplayFunc(floodView);
break;

case 'x':
    glutDisplayFunc(finalView);
break;


glutPostRedisplay();
}}


//------------------------------DAAAAAAAAAAAAAAAAAYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY--------------------------------------

void update(int n)
{
    if (bird >= 4.7){

        bird = -3.7;
        glutDisplayFunc(nightView);
    }

    bird += 0.01;

    if (birdWing >= 0.9){
        birdWing = 0.5;
    }
    birdWing += 0.05;

    if (bird2 >= 4.7)
        bird2 = -3.7;
    bird2 += 0.01;

    if (cloud >=0.8 ) {
          cloud =-1.2;
    }
    cloud += 0.001;

    if (cloud2 >=0.7 ) {
          cloud2 =-1.2;
    }
    cloud2 += 0.001;



    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

void khar1 (float translateX, float translateY, float scaleX, float scaleY) {

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);

     glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(154,129,35); // Yellow (Khar)

    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.28f, -0.62f);
    glVertex2f(-0.283f, -0.68f);
    glVertex2f(-0.32f, -0.76f);
    glVertex2f(-0.324f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.27f, -0.6f);

    glEnd();



    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(134,111,28); // Yellow (khar shade)

    glVertex2f(-0.255f, -0.57f);
    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.24f, -0.834f);
    glVertex2f(-0.19f, -0.82f);
    glVertex2f(-0.2f, -0.77f);
    glVertex2f(-0.22f, -0.7f);

    glVertex2f(-0.23f, -0.65f);
    glVertex2f(-0.232f, -0.6f);
    glVertex2f(-0.25f, -0.588f);
    glEnd();

    glPopMatrix();
}

void pole3(float translateX, float translateY, float scaleX, float scaleY)
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.29);
    glVertex2f(0.89, 0.38);
    glVertex2f(0.885, 0.38);
    glVertex2f(0.885, 0.29);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.885, 0.333);
    glVertex2f(0.88, 0.35);
    glVertex2f(0.879, 0.34);
    glVertex2f(0.885, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.333);
    glVertex2f(0.895, 0.35);
    glVertex2f(0.896, 0.34);
    glVertex2f(0.89, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.88, 0.36);
    glVertex2f(0.873, 0.36);
    glVertex2f(0.873, 0.35);
    glVertex2f(0.88, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.895, 0.36);
    glVertex2f(0.902, 0.36);
    glVertex2f(0.902, 0.35);
    glVertex2f(0.895, 0.35);
    glEnd();
    glPopMatrix();
}

void bird1(float translateX, float translateY, float scaleX, float scaleY)
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_POLYGON); // (bird body)
    glColor3ub(0, 0, 0);
    glVertex2f(-0.5, 0.75);
    glVertex2f(-0.47, 0.72);
    glVertex2f(-0.5, 0.718);
    glVertex2f(-0.42, 0.7);
    glVertex2f(-0.365, 0.7172);
    glVertex2f(-0.34, 0.75);
    glVertex2f(-0.31, 0.73);
    glVertex2f(-0.328, 0.76);
    glVertex2f(-0.338, 0.765);

    glVertex2f(-0.48, 0.74);
    glVertex2f(-0.5, 0.75);
    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird Hand)

    glVertex2f(-0.42f, 0.75f); // x, y
    glVertex2f(-0.38f, 0.74f);
    glVertex2f(-0.40f, birdWing);

    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird tail)

    glVertex2f(-0.5, 0.718); // x, y
    glVertex2f(-0.53f, 0.71f);
    glVertex2f(-0.5f, 0.75f);

    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird Tail 2nd)

    glVertex2f(-0.5, 0.718); // x, y
    glVertex2f(-0.53f, 0.76f);
    glVertex2f(-0.5f, 0.75f);

    glEnd();
    glPopMatrix();
}

GLfloat position = 0.0f;
GLfloat speed = 6.0f;

void grass2(float translateX, float translateY, float scaleX, float scaleY)
{
    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(99, 149, 57);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);
    glEnd();
    glPopMatrix();
}

void circle(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2)
{
    int i;

    // GLfloat p1=0.8f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;  //(First cloud)
    int tringle2 = 40;

    tp2 = tp2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    // glColor3ub ( 229,227,246);

    glVertex2f(p1, q1);
    for (i = 0; i <= tringle2; i++)
    {
        glVertex2f(
            p1 + (r1 * cos(i * tp2 / tringle2)),
            q1 + (r1 * sin(i * tp2 / tringle2)));
    }

    glEnd();
}
void cloud1()
{
    glColor3ub(229, 227, 246); //(Mid cloud )
    circle(0.3, 0.9, 0.05, 2);
    circle(0.21, 0.87, 0.04, 2);
    circle(0.36, 0.87, 0.04, 2);
    circle(0.28, 0.86, 0.046, 2);
    circle(0.23, 0.9, 0.025, 2);
    circle(0.35, 0.9, 0.025, 2);
    circle(0.4, 0.87, 0.025, 2);
    circle(0.33, 0.86, 0.025, 2);

    glColor3ub(204, 225, 245); //(Mid cloud shade)
    circle(0.3, 0.9, 0.043, 2);
    circle(0.21, 0.87, 0.033, 2);
    circle(0.36, 0.87, 0.033, 2);
    circle(0.28, 0.86, 0.04, 2);
    circle(0.23, 0.9, 0.02, 2);
    circle(0.35, 0.9, 0.01, 2);
    circle(0.4, 0.87, 0.01, 2);
    circle(0.33, 0.86, 0.01, 2);
}

void bush1()
{
    glColor3ub(96, 138, 58); //( Bush )
    circle(0.3, 0.9, 0.05, 2);
    circle(0.21, 0.87, 0.04, 2);
    circle(0.36, 0.87, 0.04, 2);
    circle(0.28, 0.86, 0.046, 2);
    circle(0.23, 0.9, 0.025, 2);
    circle(0.35, 0.9, 0.025, 2);
    circle(0.4, 0.87, 0.025, 2);
    circle(0.33, 0.86, 0.025, 2);

    glColor3ub(46, 90, 14); //(Bush shade)
    circle(0.3, 0.9, 0.043, 2);
    circle(0.21, 0.87, 0.033, 2);
    circle(0.36, 0.87, 0.033, 2);
    circle(0.28, 0.86, 0.04, 2);
    circle(0.23, 0.9, 0.02, 2);
    circle(0.35, 0.9, 0.01, 2);
    circle(0.4, 0.87, 0.01, 2);
    circle(0.33, 0.86, 0.01, 2);
}

void grass1()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(99, 149, 57);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);

    glEnd();
}

//---------------------------------------------------DAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAY EEEEEEEEEEEEEEEEEEENNNNNNNDDDDDDDDDDDSSSSSSSSSSSS-------------------------------------------



//---------------------------------------------------NIGHTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT---------------------------------------------

void updateNight(int n)
{
    if (cloudNight >=0.8 ) {
          cloudNight =-1.2;
    }
    cloudNight += 0.001;

    if (cloudNight2 >=0.7 ) {
          cloudNight2 =-1.2;
    }
    cloudNight2 += 0.001;



    glutPostRedisplay();
    glutTimerFunc(20, updateNight, 0);
}

void kharNight1 (float translateX, float translateY, float scaleX, float scaleY) {   //khor code

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);

    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(88, 70, 15); // Yellow (Khar)

    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.28f, -0.62f);
    glVertex2f(-0.283f, -0.68f);
    glVertex2f(-0.32f, -0.76f);
    glVertex2f(-0.324f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.27f, -0.6f);

    glEnd();


    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(74, 58, 10); // Yellow (khar shade)
    glVertex2f(-0.255f, -0.57f);
    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.24f, -0.834f);
    glVertex2f(-0.19f, -0.82f);
    glVertex2f(-0.2f, -0.77f);
    glVertex2f(-0.22f, -0.7f);
    glVertex2f(-0.23f, -0.65f);
    glVertex2f(-0.232f, -0.6f);
    glVertex2f(-0.25f, -0.588f);
    glEnd();

    glPopMatrix();
}

void poleNight3(float translateX, float translateY, float scaleX, float scaleY)  // pole code
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.29);
    glVertex2f(0.89, 0.38);
    glVertex2f(0.885, 0.38);
    glVertex2f(0.885, 0.29);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.885, 0.333);
    glVertex2f(0.88, 0.35);
    glVertex2f(0.879, 0.34);
    glVertex2f(0.885, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.333);
    glVertex2f(0.895, 0.35);
    glVertex2f(0.896, 0.34);
    glVertex2f(0.89, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.88, 0.36);
    glVertex2f(0.873, 0.36);
    glVertex2f(0.873, 0.35);
    glVertex2f(0.88, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.895, 0.36);
    glVertex2f(0.902, 0.36);
    glVertex2f(0.902, 0.35);
    glVertex2f(0.895, 0.35);
    glEnd();
    glPopMatrix();
}


//GLfloat position = 0.0f;
//GLfloat speed = 6.0f;

void grassNight2(float translateX, float translateY, float scaleX, float scaleY) //grass code
{
    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(52, 84, 30);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);
    glEnd();
    glPopMatrix();
}

void circleNight(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2)
{
    int i;

    // GLfloat p1=0.8f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;  //(First cloudNight)
    int tringle2 = 40;

    tp2 = tp2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    // glColor3ub ( 229,227,246);

    glVertex2f(p1, q1);
    for (i = 0; i <= tringle2; i++)
    {
        glVertex2f(
            p1 + (r1 * cos(i * tp2 / tringle2)),
            q1 + (r1 * sin(i * tp2 / tringle2)));
    }

    glEnd();
}
void cloudNightNight1()
{
    glColor3ub(140, 139, 152); //(Mid cloudNight )   --- cloudNight code shade
    circleNight(0.3, 0.9, 0.05, 2);
    circleNight(0.21, 0.87, 0.04, 2);
    circleNight(0.36, 0.87, 0.04, 2);
    circleNight(0.28, 0.86, 0.046, 2);
    circleNight(0.23, 0.9, 0.025, 2);
    circleNight(0.35, 0.9, 0.025, 2);
    circleNight(0.4, 0.87, 0.025, 2);
    circleNight(0.33, 0.86, 0.025, 2);

    glColor3ub(123, 138, 152); //(Mid cloudNight shade)  --- cloudNight code body
    circleNight(0.3, 0.9, 0.043, 2);
    circleNight(0.21, 0.87, 0.033, 2);
    circleNight(0.36, 0.87, 0.033, 2);
    circleNight(0.28, 0.86, 0.04, 2);
    circleNight(0.23, 0.9, 0.02, 2);
    circleNight(0.35, 0.9, 0.01, 2);
    circleNight(0.4, 0.87, 0.01, 2);
    circleNight(0.33, 0.86, 0.01, 2);
}

void bushNight1()
{
    glColor3ub(30, 60, 8); //( Bush ) -- bush code shade
    circleNight(0.3, 0.9, 0.05, 2);
    circleNight(0.21, 0.87, 0.04, 2);
    circleNight(0.36, 0.87, 0.04, 2);
    circleNight(0.28, 0.86, 0.046, 2);
    circleNight(0.23, 0.9, 0.025, 2);
    circleNight(0.35, 0.9, 0.025, 2);
    circleNight(0.4, 0.87, 0.025, 2);
    circleNight(0.33, 0.86, 0.025, 2);

    glColor3ub(22, 53, 5); //(Bush shade)  -- bush code body
    circleNight(0.3, 0.9, 0.043, 2);
    circleNight(0.21, 0.87, 0.033, 2);
    circleNight(0.36, 0.87, 0.033, 2);
    circleNight(0.28, 0.86, 0.04, 2);
    circleNight(0.23, 0.9, 0.02, 2);
    circleNight(0.35, 0.9, 0.01, 2);
    circleNight(0.4, 0.87, 0.01, 2);
    circleNight(0.33, 0.86, 0.01, 2);
}

void grassNight1()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(79, 129, 37);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);
    glEnd();
}

void nightView(){

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(.5);
    // Draw a Red 1x1 Square centered at origin

    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad -- sky code down up shade
    glColor3ub(35, 35, 35); // Saddle Brown (Sky colour)
    glVertex2f(-1.0f, 0.3f); // x, y
    glVertex2f(1.0f, 0.3f);

    glColor3ub(35, 35, 35);     //sky code up down shade
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();


    glColor3ub(140, 139, 152); //(1st cloudNight) --cloudNight code shade
    circleNight(0.8, 0.75, 0.052, 2);
    circleNight(0.74, 0.721, 0.03, 2);
    circleNight(0.85, 0.72, 0.03, 2);
    glColor3ub(123, 138, 152); //(1st cloudNight shade) -- cloudNight code
    circleNight(0.8, 0.75, 0.042, 2);
    circleNight(0.74, 0.721, 0.025, 2);
    circleNight(0.85, 0.72, 0.025, 2);

    glColor3ub(140, 139, 152); // 2nd cloudNight
    circleNight(-0.9, 0.82, 0.03, 2);
    circleNight(-0.83, 0.84, 0.05, 2);
    circleNight(-0.765, 0.823, 0.03, 2);
    glColor3ub(123, 138, 152); //(2nd cloudNight shade)
    circleNight(-0.88, 0.82, 0.02, 2);
    circleNight(-0.83, 0.84, 0.04, 2);
    circleNight(-0.784, 0.823, 0.02, 2);


    glColor3ub(255, 255, 255); // moon code white
    circleNight(0.68, 0.72, 0.05, 2.5);
    glColor3ub(35, 35, 35); //moon code black
    circleNight(0.66, 0.73, 0.05, 2.5);

    /*glColor3ub ( 229,227,246); //(Mid cloudNight )
    circleNight(0.3,0.9,0.05,2);
    circleNight(0.21,0.87,0.04,2);
    circleNight(0.36,0.87,0.04,2);
    circleNight(0.28,0.86,0.046,2);
    circleNight(0.23,0.9,0.025,2);
    circleNight(0.35,0.9,0.025,2);
    circleNight(0.4,0.87,0.025,2);
    circleNight(0.33,0.86,0.025,2);

    glColor3ub ( 204,225,245); //(Mid cloudNight shade)
    circleNight(0.3,0.9,0.043,2);
    circleNight(0.21,0.87,0.033,2);
    circleNight(0.36,0.87,0.033,2);
    circleNight(0.28,0.86,0.04,2);
    circleNight(0.23,0.9,0.02,2);
    circleNight(0.35,0.9,0.01,2);
    circleNight(0.4,0.87,0.01,2);
    circleNight(0.33,0.86,0.01,2);
    */

    glPushMatrix();
    glScaled(1.5, 1.5, 0.0);
    glTranslatef(0.0, -0.5, 0.0);

    cloudNightNight1();
    glPopMatrix(); // cloudNightNight1

    glPushMatrix();
    glScaled(1.52, 1.52, 0.0);
    glTranslatef(-0.4, -0.3, 0.0);

    cloudNightNight1();
    glPopMatrix(); // cloudNight2

    glPushMatrix();
    glScaled(1.1, 1.5, 0.0);
    glTranslatef(cloudNight, -0.45, 0.0);

    cloudNightNight1();
    glPopMatrix(); // cloudNight3

    glPushMatrix();
    glScaled(1.17, 1.17, 0.0);
    glTranslatef(cloudNight2, -0.1, 0.0);

    cloudNightNight1();
    glPopMatrix(); // cloudNightNight1-2

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad    --cloudNight code triangle
    glColor3ub(142, 141, 151); // Saddle Brown (Sky Triangle 1st)
    glVertex2f(-1.0, 0.82); // x, y
    glVertex2f(-0.6, 0.8);
    glVertex2f(-1.0, 0.78);
    glEnd();

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad   --cloudNight code triangle
    glColor3ub(142, 141, 151); // Saddle Brown (Sky triangle 2nd )
    glVertex2f(1.0, 0.72); // x, y
    glVertex2f(0.6, 0.7);
    glVertex2f(1.0, 0.68);
    glEnd();


    glBegin(GL_POLYGON);     // These vertices form a closed polygon -- mountain code shade
    glColor3ub(1, 74, 77); // Yellow (Mountain)
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.95f, 0.35f);
    glVertex2f(0.9f, 0.357f);
    glVertex2f(0.869f, 0.381f);
    glVertex2f(0.8f, 0.35f);
    glVertex2f(0.771f, 0.348f);
    glVertex2f(0.7f, 0.355f);
    glVertex2f(0.671f, 0.358f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.55f, 0.39f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.4f, 0.39f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.2f, 0.413f);
    glVertex2f(0.1f, 0.389f);
    glVertex2f(0.0f, 0.42f);
    glVertex2f(-0.1f, 0.44f);
    glVertex2f(-0.124f, 0.428f);
    glVertex2f(-0.161f, 0.38f);
    glVertex2f(-0.2f, 0.36f);
    glVertex2f(-0.223f, 0.361f);
    glVertex2f(-0.25f, 0.4f);
    glVertex2f(-0.254f, 0.45f);
    glVertex2f(-0.28f, 0.493f);
    glVertex2f(-0.32f, 0.518f);
    glVertex2f(-0.361f, 0.48f);
    glVertex2f(-0.368f, 0.45f);
    glVertex2f(-0.4f, 0.44f);
    glVertex2f(-0.5f, 0.455f);
    glVertex2f(-0.534f, 0.444f);
    glVertex2f(-0.6f, 0.49f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.7f, 0.48f);
    glVertex2f(-0.74f, 0.43f);
    glVertex2f(-0.8f, 0.42f);
    glVertex2f(-0.818f, 0.422f);
    glVertex2f(-0.9f, 0.45f);
    glVertex2f(-0.95f, 0.418f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();



    glBegin(GL_POLYGON);       // These vertices form a closed polygon -- Mountain Code
    glColor3ub(1, 1, 1); // Yellow (Mountain)

    glVertex2f(-1.00f, 0.28f);
    glVertex2f(1.00f, 0.28f);
    glColor3ub(0, 104, 105); // Yellow (Mountain)
    glVertex2f(0.95f, 0.33f);
    glVertex2f(0.90f, 0.337f);
    glVertex2f(0.869f, 0.361f);
    glVertex2f(0.80f, 0.33f);
    glVertex2f(0.771f, 0.328f);
    glVertex2f(0.70f, 0.335f);
    glVertex2f(0.671f, 0.338f);
    glVertex2f(0.60f, 0.33f);
    glVertex2f(0.55f, 0.37f);
    glVertex2f(0.50f, 0.38f);
    glVertex2f(0.40f, 0.37f);
    glVertex2f(0.30f, 0.38f);
    glVertex2f(0.20f, 0.393f);
    glVertex2f(0.10f, 0.369f);
    glVertex2f(0.00f, 0.40);
    glVertex2f(-0.10f, 0.42f);
    glVertex2f(-0.124f, 0.408f);
    glVertex2f(-0.161f, 0.36f);
    glVertex2f(-0.20f, 0.34f);
    glVertex2f(-0.223f, 0.341f);
    glVertex2f(-0.25f, 0.38f);
    glVertex2f(-0.254f, 0.43f);
    glVertex2f(-0.28f, 0.473f);
    glVertex2f(-0.32f, 0.498f);
    glVertex2f(-0.361f, 0.46f);
    glVertex2f(-0.368f, 0.43f);
    glVertex2f(-0.40f, 0.42f);
    glVertex2f(-0.50f, 0.435f);
    glVertex2f(-0.534f, 0.424f);
    glVertex2f(-0.60f, 0.47f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.70f, 0.46f);
    glVertex2f(-0.74f, 0.41f);
    glVertex2f(-0.80f, 0.40);
    glVertex2f(-0.818f, 0.402f);
    glVertex2f(-0.90f, 0.43f);
    glVertex2f(-0.95f, 0.398f);
    glVertex2f(-1.00f, 0.38f);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(60, 54, 30); // Yellow (Upper Land EverBrown) -- land code big gray
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();


    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(56, 78, 1); // Yellow (upper land Green up shade)    pole behind code
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, 0.29f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(0.0f, 0.29f);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(1.0f, 0.29f);
    glEnd();



    glBegin(GL_QUADS);      //land code most right
    glColor3ub(51, 77, 1);
    glVertex2f(0.82, 0.284); // (Middle Land halka green Right 5th)
    glVertex2f(0.615, 0.0);
    glVertex2f(1.0, -0.11);
    glVertex2f(1.0, 0.282);
    glEnd();

    glBegin(GL_QUADS);      //land code most right left
    glColor3ub(51, 77, 1);
    glVertex2f(0.31, 0.284); // (Middle Land halka green 4th)
    glVertex2f(0.09, 0.11);
    glVertex2f(0.6, 0.0);
    glVertex2f(0.8, 0.282);
    glEnd();


    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad  -- land code the smallest
    glColor3ub(63, 97, 3); // Saddle Brown (Middle Triangle Field 1st)
    glVertex2f(-0.77, 0.282); // x, y
    glVertex2f(-0.516, 0.21);
    glVertex2f(-0.35, 0.283);
    glEnd();


    glBegin(GL_QUADS);      //land code middle yellowish green
    glColor3ub(63, 97, 1);
    glVertex2f(-0.48, 0.22); // (Middle Land halka green 3rd)
    glVertex2f(0.07, 0.12);
    glVertex2f(0.3, 0.293);
    glVertex2f(-0.3, 0.294);
    glEnd();


    glBegin(GL_QUADS);      //land code yellowish green left
    glColor3ub(91, 97, 1);
    glVertex2f(-1.0, 0.01); // (Middle Land Halka green 2nd))
    glVertex2f(-0.52, 0.202);
    glVertex2f(-0.8, 0.28);
    glVertex2f(-1.0, 0.28);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- land code main big light green
    glColor3ub(79, 114, 8); // Yellow (Middle Land yellow green Main 1st)
    glVertex2f(-1.0f, -0.49f);
    glVertex2f(-0.9f, -0.48f);
    glVertex2f(0.05f, 0.1f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();


    // grassNight2(-11.1,-6.9,0.09,0.09);
    grassNight2(-11.10, -6.90, 0.09, 0.09);
    grassNight2(-11.10, -6.00, 0.09, 0.09);

    grassNight2(-10.40, -6.90, 0.09, 0.09);
    grassNight2(-10.40, -6.00, 0.09, 0.09);

    grassNight2(-9.70, -6.90, 0.09, 0.09);
    grassNight2(-9.70, -6.00, 0.09, 0.09);

    grassNight2(-9.00, -6.90, 0.09, 0.09);
    grassNight2(-9.00, -6.00, 0.09, 0.09);
    grassNight2(-9.00, -5.10, 0.09, 0.09);

    grassNight2(-8.30, -6.90, 0.09, 0.09);
    grassNight2(-8.30, -6.00, 0.09, 0.09);
    grassNight2(-8.30, -5.10, 0.09, 0.09);

    grassNight2(-7.60, -6.90, 0.09, 0.09);
    grassNight2(-7.60, -6.00, 0.09, 0.09);
    grassNight2(-7.60, -5.10, 0.09, 0.09);

    grassNight2(-6.90, -6.90, 0.09, 0.09);
    grassNight2(-6.90, -6.00, 0.09, 0.09);
    grassNight2(-6.90, -5.10, 0.09, 0.09);
    grassNight2(-6.90, -4.20, 0.09, 0.09);

    grassNight2(-6.20, -6.90, 0.09, 0.09);
    grassNight2(-6.20, -6.00, 0.09, 0.09);
    grassNight2(-6.20, -5.10, 0.09, 0.09);
    grassNight2(-6.20, -4.20, 0.09, 0.09);

    grassNight2(-5.50, -6.90, 0.09, 0.09);
    grassNight2(-5.50, -6.00, 0.09, 0.09);
    grassNight2(-5.50, -5.10, 0.09, 0.09);
    grassNight2(-5.50, -4.20, 0.09, 0.09);
    grassNight2(-5.50, -3.30, 0.09, 0.09);

    grassNight2(-4.80, -6.90, 0.09, 0.09);
    grassNight2(-4.80, -6.00, 0.09, 0.09);
    grassNight2(-4.80, -5.10, 0.09, 0.09);
    grassNight2(-4.80, -4.20, 0.09, 0.09);
    grassNight2(-4.80, -3.30, 0.09, 0.09);
    grassNight2(-4.80, -2.40, 0.09, 0.09);

    grassNight2(-4.10, -6.90, 0.09, 0.09);
    grassNight2(-4.10, -6.00, 0.09, 0.09);
    grassNight2(-4.10, -5.10, 0.09, 0.09);
    grassNight2(-4.10, -4.20, 0.09, 0.09);
    grassNight2(-4.10, -3.30, 0.09, 0.09);
    grassNight2(-4.10, -2.40, 0.09, 0.09);

    grassNight2(-3.40, -6.90, 0.09, 0.09);
    grassNight2(-3.40, -6.00, 0.09, 0.09);
    grassNight2(-3.40, -5.10, 0.09, 0.09);
    grassNight2(-3.40, -4.20, 0.09, 0.09);
    grassNight2(-3.40, -3.30, 0.09, 0.09);
    grassNight2(-3.40, -2.40, 0.09, 0.09);
    grassNight2(-3.40, -1.50, 0.09, 0.09);

    grassNight2(-2.70, -6.90, 0.09, 0.09);
    grassNight2(-2.70, -6.00, 0.09, 0.09);
    grassNight2(-2.70, -5.10, 0.09, 0.09);
    grassNight2(-2.70, -4.20, 0.09, 0.09);
    grassNight2(-2.70, -3.30, 0.09, 0.09);
    grassNight2(-2.70, -2.40, 0.09, 0.09);
    grassNight2(-2.70, -1.50, 0.09, 0.09);

    grassNight2(-2.00, -6.90, 0.09, 0.09);
    grassNight2(-2.00, -6.00, 0.09, 0.09);
    grassNight2(-2.00, -5.10, 0.09, 0.09);
    grassNight2(-2.00, -4.20, 0.09, 0.09);
    grassNight2(-2.00, -3.30, 0.09, 0.09);
    grassNight2(-2.00, -2.40, 0.09, 0.09);
    grassNight2(-2.00, -1.50, 0.09, 0.09);
    grassNight2(-2.00, -0.60, 0.09, 0.09);

    grassNight2(-1.30, -6.90, 0.09, 0.09);
    grassNight2(-1.30, -6.00, 0.09, 0.09);
    grassNight2(-1.30, -5.10, 0.09, 0.09);
    grassNight2(-1.30, -4.20, 0.09, 0.09);
    grassNight2(-1.30, -3.30, 0.09, 0.09);
    grassNight2(-1.30, -2.40, 0.09, 0.09);
    grassNight2(-1.30, -1.50, 0.09, 0.09);
    grassNight2(-1.30, -0.60, 0.09, 0.09);

    grassNight2(-0.60, -6.90, 0.09, 0.09);
    grassNight2(-0.60, -6.00, 0.09, 0.09);
    grassNight2(-0.60, -5.10, 0.09, 0.09);
    grassNight2(-0.60, -4.20, 0.09, 0.09);
    grassNight2(-0.60, -3.30, 0.09, 0.09);
    grassNight2(-0.60, -2.40, 0.09, 0.09);
    grassNight2(-0.60, -1.50, 0.09, 0.09);
    grassNight2(-0.60, -0.60, 0.09, 0.09);

    grassNight2(0.10, -6.90, 0.09, 0.09);
    grassNight2(0.10, -6.00, 0.09, 0.09);
    grassNight2(0.10, -5.10, 0.09, 0.09);
    grassNight2(0.10, -4.20, 0.09, 0.09);
    grassNight2(0.10, -3.30, 0.09, 0.09);
    grassNight2(0.10, -2.40, 0.09, 0.09);
    grassNight2(0.10, -1.50, 0.09, 0.09);
    grassNight2(0.10, -0.60, 0.09, 0.09);
    grassNight2(0.10, 0.30, 0.09, 0.09);

    grassNight2(0.80, -6.90, 0.09, 0.09);
    grassNight2(0.80, -6.00, 0.09, 0.09);
    grassNight2(0.80, -5.10, 0.09, 0.09);
    grassNight2(0.80, -4.20, 0.09, 0.09);
    grassNight2(0.80, -3.30, 0.09, 0.09);
    grassNight2(0.80, -2.40, 0.09, 0.09);
    grassNight2(0.80, -1.50, 0.09, 0.09);
    grassNight2(0.80, -0.60, 0.09, 0.09);
    grassNight2(0.80, 0.30, 0.09, 0.09);

    grassNight2(1.50, 0.30, 0.09, 0.09);
    grassNight2(1.50, -6.90, 0.09, 0.09);
    grassNight2(1.50, -6.00, 0.09, 0.09);
    grassNight2(1.50, -5.10, 0.09, 0.09);
    grassNight2(1.50, -4.20, 0.09, 0.09);
    grassNight2(1.50, -3.30, 0.09, 0.09);
    grassNight2(1.50, -2.40, 0.09, 0.09);
    grassNight2(1.50, -1.50, 0.09, 0.09);
    grassNight2(1.50, -0.60, 0.09, 0.09);

    grassNight2(2.20, -6.90, 0.09, 0.09);
    grassNight2(2.20, -6.00, 0.09, 0.09);
    grassNight2(2.20, -5.10, 0.09, 0.09);
    grassNight2(2.20, -4.20, 0.09, 0.09);
    grassNight2(2.20, -3.30, 0.09, 0.09);
    grassNight2(2.20, -2.40, 0.09, 0.09);
    grassNight2(2.20, -1.50, 0.09, 0.09);
    grassNight2(2.20, -0.60, 0.09, 0.09);
    grassNight2(2.90, -6.90, 0.09, 0.09);
    grassNight2(2.90, -6.00, 0.09, 0.09);
    grassNight2(2.90, -5.10, 0.09, 0.09);
    grassNight2(2.90, -4.20, 0.09, 0.09);
    grassNight2(2.90, -3.30, 0.09, 0.09);
    grassNight2(2.90, -2.40, 0.09, 0.09);
    grassNight2(2.90, -1.50, 0.09, 0.09);
    grassNight2(2.90, -0.60, 0.09, 0.09);
    grassNight2(3.60, -6.90, 0.09, 0.09);
    grassNight2(3.60, -6.00, 0.09, 0.09);
    grassNight2(3.60, -5.10, 0.09, 0.09);
    grassNight2(3.60, -4.20, 0.09, 0.09);
    grassNight2(3.60, -3.30, 0.09, 0.09);
    grassNight2(3.60, -2.40, 0.09, 0.09);
    grassNight2(3.60, -1.50, 0.09, 0.09);
    grassNight2(3.60, -0.60, 0.09, 0.09);
    grassNight2(4.30, -6.90, 0.09, 0.09);
    grassNight2(4.30, -6.00, 0.09, 0.09);
    grassNight2(4.30, -5.10, 0.09, 0.09);
    grassNight2(4.30, -4.20, 0.09, 0.09);
    grassNight2(4.30, -3.30, 0.09, 0.09);
    grassNight2(4.30, -2.40, 0.09, 0.09);
    grassNight2(4.30, -1.50, 0.09, 0.09);
    grassNight2(4.30, -0.60, 0.09, 0.09);
    grassNight2(5.00, -6.90, 0.09, 0.09);
    grassNight2(5.00, -6.00, 0.09, 0.09);
    grassNight2(5.00, -5.10, 0.09, 0.09);
    grassNight2(5.00, -4.20, 0.09, 0.09);
    grassNight2(5.00, -3.30, 0.09, 0.09);
    grassNight2(5.00, -2.40, 0.09, 0.09);
    grassNight2(5.00, -1.50, 0.09, 0.09);
    grassNight2(5.00, -0.60, 0.09, 0.09);
    grassNight2(5.70, -6.90, 0.09, 0.09);
    grassNight2(5.70, -6.00, 0.09, 0.09);
    grassNight2(5.70, -5.10, 0.09, 0.09);
    grassNight2(5.70, -4.20, 0.09, 0.09);
    grassNight2(5.70, -3.30, 0.09, 0.09);
    grassNight2(5.70, -2.40, 0.09, 0.09);
    grassNight2(5.70, -1.50, 0.09, 0.09);
    grassNight2(5.70, -0.60, 0.09, 0.09);
    grassNight2(6.40, -6.90, 0.09, 0.09);
    grassNight2(6.40, -6.00, 0.09, 0.09);
    grassNight2(6.40, -5.10, 0.09, 0.09);
    grassNight2(6.40, -4.20, 0.09, 0.09);
    grassNight2(6.40, -3.30, 0.09, 0.09);
    grassNight2(6.40, -2.40, 0.09, 0.09);
    grassNight2(6.40, -1.50, 0.09, 0.09);
    grassNight2(6.40, -0.60, 0.09, 0.09);
    grassNight2(7.10, -6.90, 0.09, 0.09);
    grassNight2(7.10, -6.00, 0.09, 0.09);
    grassNight2(7.10, -5.10, 0.09, 0.09);
    grassNight2(7.10, -4.20, 0.09, 0.09);
    grassNight2(7.10, -3.30, 0.09, 0.09);
    grassNight2(7.10, -2.40, 0.09, 0.09);
    grassNight2(7.10, -1.50, 0.09, 0.09);
    grassNight2(7.10, -0.60, 0.09, 0.09);
    grassNight2(7.80, -6.90, 0.09, 0.09);
    grassNight2(7.80, -6.00, 0.09, 0.09);
    grassNight2(7.80, -5.10, 0.09, 0.09);
    grassNight2(7.80, -4.20, 0.09, 0.09);
    grassNight2(7.80, -3.30, 0.09, 0.09);
    grassNight2(7.80, -2.40, 0.09, 0.09);
    grassNight2(7.80, -1.50, 0.09, 0.09);

    grassNight2(8.50, -6.90, 0.09, 0.09);
    grassNight2(8.50, -6.00, 0.09, 0.09);
    grassNight2(8.50, -5.10, 0.09, 0.09);
    grassNight2(8.50, -4.20, 0.09, 0.09);
    grassNight2(8.50, -3.30, 0.09, 0.09);
    grassNight2(8.50, -2.40, 0.09, 0.09);
    grassNight2(8.50, -1.50, 0.09, 0.09);

    grassNight2(9.20, -6.90, 0.09, 0.09);
    grassNight2(9.20, -6.00, 0.09, 0.09);
    grassNight2(9.20, -5.10, 0.09, 0.09);
    grassNight2(9.20, -4.20, 0.09, 0.09);
    grassNight2(9.20, -3.30, 0.09, 0.09);
    grassNight2(9.20, -2.40, 0.09, 0.09);
    grassNight2(9.20, -1.50, 0.09, 0.09);

    grassNight2(9.90, -6.90, 0.09, 0.09);
    grassNight2(9.90, -6.00, 0.09, 0.09);
    grassNight2(9.90, -5.10, 0.09, 0.09);
    grassNight2(9.90, -4.20, 0.09, 0.09);
    grassNight2(9.90, -3.30, 0.09, 0.09);
    grassNight2(9.90, -2.40, 0.09, 0.09);
    grassNight2(9.90, -1.50, 0.09, 0.09);

    grassNight2(10.60, -6.90, 0.09, 0.09);
    grassNight2(10.60, -6.00, 0.09, 0.09);
    grassNight2(10.60, -5.10, 0.09, 0.09);
    grassNight2(10.60, -4.20, 0.09, 0.09);
    grassNight2(10.60, -3.30, 0.09, 0.09);
    grassNight2(10.60, -2.40, 0.09, 0.09);


    glBegin(GL_POLYGON);    // These vertices form a closed polygon  -- river code upper side
    glColor3ub(47, 43, 29); // Yellow (Land Brown  polygon 1st)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.62f);
    glVertex2f(0.95f, -0.63f);
    glVertex2f(0.9f, -0.65f);
    glVertex2f(0.8f, -0.62f);
    glVertex2f(0.7f, -0.61f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.5f, -0.61f);
    glVertex2f(0.45f, -0.58f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.3f, -0.68f);
    glVertex2f(0.2f, -0.65f);
    glVertex2f(0.1f, -0.65f);
    glVertex2f(0.0f, -0.62f);
    glVertex2f(-0.1f, -0.64f);
    glVertex2f(-0.2f, -0.59f);
    glVertex2f(-0.25f, -0.598f);
    glVertex2f(-0.3f, -0.58f);
    glVertex2f(-0.4f, -0.57f);
    glVertex2f(-0.5f, -0.585f);
    glVertex2f(-0.55f, -0.58f);
    glVertex2f(-0.6f, -0.59f);
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.8f, -0.59f);
    glVertex2f(-0.85f, -0.61f);
    glVertex2f(-0.9f, -0.62f);
    glVertex2f(-0.95f, -0.61f);
    glVertex2f(-1.0f, -0.57f);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- river code water
    glColor3ub(33, 86, 101); // Yellow (Water-land polygon )
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.67f);
    glVertex2f(0.95f, -0.65f);
    glVertex2f(0.9f, -0.67f);
    glVertex2f(0.8f, -0.64f);
    glVertex2f(0.7f, -0.65f);
    glVertex2f(0.6f, -0.62f);
    glVertex2f(0.5f, -0.65f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.4f, -0.67f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.0f, -0.67f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.64f);
    glVertex2f(-0.25f, -0.62f);
    glVertex2f(-0.3f, -0.64f);
    glVertex2f(-0.4f, -0.63f);
    glVertex2f(-0.5f, -0.61f);
    glVertex2f(-0.55f, -0.63f);
    glVertex2f(-0.6f, -0.63f);
    glVertex2f(-0.7f, -0.65f);
    glVertex2f(-0.8f, -0.66f);
    glVertex2f(-0.85f, -0.67f);
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.95f, -0.638f);
    glVertex2f(-1.0f, -0.6f);
    glEnd();



    glBegin(GL_POLYGON);     // These vertices form a closed polygon    ---- land code home side bigger green
    glColor3ub(37, 57, 30); // Yellow (Land Green polygon 2nd)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.72f);
    glVertex2f(0.95f, -0.7f);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.8f, -0.69f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.6f, -0.68f);
    glVertex2f(0.5f, -0.7f);
    glVertex2f(0.45f, -0.68f);
    glVertex2f(0.4f, -0.72f);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.2f, -0.72f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.0f, -0.72f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.69f);
    glVertex2f(-0.25f, -0.67f);
    glVertex2f(-0.3f, -0.69f);
    glVertex2f(-0.4f, -0.68f);
    glVertex2f(-0.5f, -0.66f);
    glVertex2f(-0.55f, -0.665f);
    glVertex2f(-0.6f, -0.689f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.8f, -0.71f);
    glVertex2f(-0.85f, -0.72f);
    glVertex2f(-0.9f, -0.7f);
    glVertex2f(-0.95f, -0.688f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();


    glBegin(GL_TRIANGLES);  // Each set of 4 vertices form a quad   -- home code upper big roof down left choco
    glColor3ub(50, 33, 15); // Saddle Brown (Chader oikhnaei Triangle ta)
    glVertex2f(0.37, -0.6); // x, y
    glVertex2f(0.13, -0.6);
    glVertex2f(0.3, -0.41);
    glEnd();


    glBegin(GL_QUADS);      // Each set of 4 vertices form a quad   -- home code door
    glColor3ub(50, 33, 15); // Saddle Brown (House er Ekdom Middle Quad)
    glVertex2f(0.34f, -0.5f); // x, y
    glVertex2f(0.34f, -0.714f);
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.45f, -0.5f);
    glEnd();


    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- home code left door
    glColor3ub(96, 65, 25); // Yellow (Bashar majhe ekta polygon draw)
    glVertex2f(0.2f, -0.53f);
    glVertex2f(0.2f, -0.713f);
    glVertex2f(0.34f, -0.711f);
    glVertex2f(0.34f, -0.53f);
    glVertex2f(0.30f, -0.52f);
    glVertex2f(0.22f, -0.53f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad  -- home code stick
    glColor3ub(97, 40, 7); // Saddle Brown (House er niche stick 1st)
    glVertex2f(0.16f, -0.7f); // x, y
    glVertex2f(0.16f, -0.77f);
    glVertex2f(0.166f, -0.77f);
    glVertex2f(0.166f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad  -- home code stick
    glColor3ub(97, 40, 7); // Saddle Brown (House er niche Stick 2nd)
    glVertex2f(0.18f, -0.7f); // x, y
    glVertex2f(0.18f, -0.75f);
    glVertex2f(0.186f, -0.75f);
    glVertex2f(0.186f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code door left left quad
    glColor3ub(125, 89, 5); // Saddle Brown (House er Left Side er Quad)
    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.16f, -0.7f);
    glVertex2f(0.2f, -0.71f);
    glVertex2f(0.2f, -0.53f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code door right quad
    glColor3ub(96, 65, 25); // Saddle Brown (House er Door er Right er Quad)
    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.66f, -0.69f);
    glVertex2f(0.66f, -0.5f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code left side roof
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad)
    glVertex2f(0.24f, -0.41f); // x, y
    glVertex2f(0.12f, -0.56f);
    glVertex2f(0.16f, -0.59f);
    glVertex2f(0.3f, -0.41f);
    glEnd();

    //bulb code
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2f(0.32f, -0.5f);
    glVertex2f(0.32f, -0.55f);
    glEnd();
    glColor3ub(200, 200, 200);
    circleNight(0.32, -0.55, 0.01, 2.5);


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad     --home code main roof
    glColor3ub(103, 75, 42); // Ektu Kom Brown (house chad er ta)
    glVertex2f(0.25f, -0.3f);  // x, y
    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.69f, -0.51f); // x, y
    glVertex2f(0.58f, -0.3f);  // x, y
    glEnd();


    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad  -- home code left roof up triangle
    glColor3ub(73, 53, 23); // Saddle Brown (Chader oikhnaei Triangle ta)
    glVertex2f(0.25f, -0.3f); // x, y
    glVertex2f(0.24f, -0.41f);
    glVertex2f(0.29f, -0.41f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 1st)
    glVertex2f(0.13f, -0.55f); // x, y
    glVertex2f(0.11f, -0.57f);
    glVertex2f(0.15f, -0.57f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 2nd)
    glVertex2f(0.15f, -0.57f); // x, y
    glVertex2f(0.12f, -0.58f);
    glVertex2f(0.16f, -0.59f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 3rd)
    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.18f, -0.566f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown ((Chader Left side er Quad E Triangle 4th)
    glVertex2f(0.16f, -0.59f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.16f, -0.55f);
    glEnd();



    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 1st)
    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.33f, -0.53f);
    glVertex2f(0.35f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 2nd)
    glVertex2f(0.35f, -0.5f); // x, y
    glVertex2f(0.4f, -0.53f);
    glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 3rd)
    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.43f, -0.53f);
    glVertex2f(0.5f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 4th)
    glVertex2f(0.5f, -0.5f); // x, y
    glVertex2f(0.55, -0.53f);
    glVertex2f(0.6f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 5th)
    glVertex2f(0.6f, -0.5f); // x, y
    glVertex2f(0.65, -0.54f);
    glVertex2f(0.68f, -0.5f);
    glEnd();


    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(31, 45, 20); // Yellow (House Shadow)
    glVertex2f(0.18f, -0.73f);
    glVertex2f(0.13f, -0.77f);
    glVertex2f(0.3f, -0.8f);
    glVertex2f(0.72f, -0.83f);
    glVertex2f(0.7f, -0.71f);
    glEnd();


    //home sticks starts
    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 3rd)
    glVertex2f(0.2f, -0.71f); // x, y
    glVertex2f(0.2f, -0.77f);
    glVertex2f(0.205f, -0.77f);
    glVertex2f(0.205f, -0.71f);
    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 9th)
    glVertex2f(0.62f, -0.69f); // x, y
    glVertex2f(0.62f, -0.75f);
    glVertex2f(0.627f, -0.75f);
    glVertex2f(0.627f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 8th)
    glVertex2f(0.58f, -0.69f); // x, y
    glVertex2f(0.58f, -0.75f);
    glVertex2f(0.587f, -0.75f);
    glVertex2f(0.587f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 7th)
    glVertex2f(0.54f, -0.69f); // x, y
    glVertex2f(0.54f, -0.75f);
    glVertex2f(0.547f, -0.75f);
    glVertex2f(0.547f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 6th)
    glVertex2f(0.50f, -0.69f); // x, y
    glVertex2f(0.50f, -0.75f);
    glVertex2f(0.507f, -0.75f);
    glVertex2f(0.507f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 5th)
    glVertex2f(0.47f, -0.69f); // x, y
    glVertex2f(0.47f, -0.75f);
    glVertex2f(0.477f, -0.75f);
    glVertex2f(0.477f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 10th)
    glVertex2f(0.64f, -0.69f); // x, y
    glVertex2f(0.64f, -0.77f);
    glVertex2f(0.647f, -0.77f);
    glVertex2f(0.647f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House Ladder 1st)
    glVertex2f(0.36f, -0.7f); // x, y
    glVertex2f(0.37f, -0.8f);
    glVertex2f(0.380f, -0.8f);
    glVertex2f(0.370f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House Ladder 2nd)
    glVertex2f(0.43f, -0.7f); // x, y
    glVertex2f(0.44f, -0.8f);
    glVertex2f(0.450f, -0.8f);
    glVertex2f(0.440f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);          //-- home code stick
    glColor3ub(67, 30, 5);
    glVertex2f(0.365, -0.72); // (house ladder mid stick 1st)
    glVertex2f(0.365, -0.73);
    glVertex2f(0.44, -0.72);
    glVertex2f(0.44, -0.71);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 30, 5);
    glVertex2f(0.365, -0.75); // (house ladder mid stick 2nd) -- home code stick
    glVertex2f(0.365, -0.76);
    glVertex2f(0.44, -0.75);
    glVertex2f(0.44, -0.74);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 30, 5);
    glVertex2f(0.368, -0.78); // (house ladder mid stick 3rd) -- home code stick
    glVertex2f(0.369, -0.79);
    glVertex2f(0.44, -0.78);
    glVertex2f(0.44, -0.77);
    glEnd();
//home stick ends


//leaf code starts
    glColor3ub(10, 45, 0); //(Main Tree Darkleaf 1st)   --- tree code down leaf
    circleNight(0.8, -0.44, 0.055, 2);
    circleNight(0.85, -0.52, 0.05, 2);
    circleNight(0.75, -0.52, 0.05, 2);

    glColor3ub(30, 63, 0); //(Leaf Dark Green 3th)  --- tree code upper leaf shade
    circleNight(0.74, -0.26, 0.055, 2);
    circleNight(0.78, -0.2, 0.06, 2);
    circleNight(0.83, -0.25, 0.06, 2);
    circleNight(0.8, -0.34, 0.06, 2);

    glColor3ub(25, 55, 0); //(Leaf Dark Green Shade 3th)    --- tree code upper leaf
    circleNight(0.73, -0.27, 0.055, 2);
    circleNight(0.77, -0.21, 0.06, 2);
    circleNight(0.82, -0.26, 0.06, 2);
    circleNight(0.79, -0.35, 0.06, 2);

    glColor3ub(55, 91, 15); //(Leaf  Green 2nd)   --- tree code left leaf shade
    circleNight(0.71, -0.44, 0.055, 2);
    circleNight(0.7, -0.38, 0.055, 2);
    circleNight(0.72, -0.34, 0.055, 2);
    circleNight(0.75, -0.4, 0.045, 2);

    glColor3ub(56, 80, 15); //(Lead Shade green 2nd)   --- tree code left  leaf
    circleNight(0.7, -0.45, 0.055, 2);
    circleNight(0.69, -0.39, 0.055, 2);
    circleNight(0.71, -0.35, 0.055, 2);
    circleNight(0.74, -0.41, 0.045, 2);

    glColor3ub(44, 72, 5); //(Leaf Dark Green 4th)    --- tree code right leaf shade
    circleNight(0.9, -0.32, 0.055, 2);
    circleNight(0.915, -0.38, 0.06, 2);
    circleNight(0.91, -0.42, 0.05, 2);
    circleNight(0.88, -0.44, 0.055, 2);
    circleNight(0.86, -0.4, 0.055, 2);

    glColor3ub(52, 85, 5); //(Leaf Dark Green Shade 4th)  --- tree code right leaf
    circleNight(0.89, -0.33, 0.055, 2);
    circleNight(0.905, -0.39, 0.06, 2);
    circleNight(0.9, -0.43, 0.05, 2);
    circleNight(0.87, -0.45, 0.055, 2);
    circleNight(0.85, -0.41, 0.055, 2);
//tree leaf code ends


    glColor3ub(77, 57, 32); // Yellow (Main tree)   -- tree code body
    glBegin(GL_POLYGON);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glVertex2f(0.808, -0.84);
    glVertex2f(0.8, -0.84);
    glVertex2f(0.79, -0.85);
    glVertex2f(0.778, -0.8525);
    glVertex2f(0.775, -0.85);
    glVertex2f(0.775, -0.8275);
    glVertex2f(0.779, -0.8);
    glVertex2f(0.784, -0.7625);
    glVertex2f(0.79, -0.7175);
    glVertex2f(0.792, -0.685);
    glVertex2f(0.793, -0.66);
    glVertex2f(0.793, -0.635);
    glVertex2f(0.79, -0.605);
    glVertex2f(0.788, -0.58);
    glVertex2f(0.783, -0.5675);
    glVertex2f(0.779, -0.5375);
    glVertex2f(0.774, -0.5125);
    glVertex2f(0.765, -0.48);
    glVertex2f(0.762, -0.47);
    glVertex2f(0.77, -0.455);
    glVertex2f(0.785, -0.4975);
    glVertex2f(0.791, -0.5);
    glVertex2f(0.798, -0.495);
    glVertex2f(0.804, -0.485);
    glVertex2f(0.805, -0.47);
    glVertex2f(0.808, -0.4375);
    glVertex2f(0.808, -0.43);
    glVertex2f(0.821, -0.44);
    glVertex2f(0.819, -0.465);
    glVertex2f(0.818, -0.485);
    glVertex2f(0.818, -0.52);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.819, -0.5475);
    glVertex2f(0.823, -0.5475);
    glVertex2f(0.827, -0.5325);
    glVertex2f(0.829, -0.5125);
    glVertex2f(0.835, -0.48);
    glVertex2f(0.836, -0.4725);
    glVertex2f(0.846, -0.4875);
    glVertex2f(0.842, -0.5425);
    glVertex2f(0.835, -0.5725);
    glVertex2f(0.833, -0.6025);
    glVertex2f(0.832, -0.6475);
    glVertex2f(0.832, -0.665);
    glVertex2f(0.833, -0.695);
    glVertex2f(0.837, -0.7225);
    glVertex2f(0.841, -0.755);
    glVertex2f(0.85, -0.795);
    glVertex2f(0.858, -0.8325);
    glVertex2f(0.86, -0.845);
    glVertex2f(0.853, -0.8475);
    glVertex2f(0.843, -0.84);
    glVertex2f(0.84, -0.835);
    glVertex2f(0.836, -0.84);
    glVertex2f(0.833, -0.855);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glEnd();


    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-1.004, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.9, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.65, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.55, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.35, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.25, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.15, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.0, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.2, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.4, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.7, -1.7, 0.0);

    bushNight1();
    glPopMatrix();

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.34f); // x, y
    glVertex2f(0.6f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.33f);  // x, y
    glVertex2f(0.379, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.34f); // x, y
    glVertex2f(0.1f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.33f);    // x, y
    glVertex2f(-0.179f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.34f); // x, y
    glVertex2f(-0.4f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.33f);   // x, y
    glVertex2f(-0.679f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.34f); // x, y
    glVertex2f(-1.3f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.34f); // x, y
    glVertex2f(1.2f, 0.32f);   // x, y

    glEnd();

    //2nd wire

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.35f); // x, y
    glVertex2f(0.6f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.34f);  // x, y
    glVertex2f(0.379, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.35f); // x, y
    glVertex2f(0.1f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.34f);    // x, y
    glVertex2f(-0.179f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.35f); // x, y
    glVertex2f(-0.4f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.34f);   // x, y
    glVertex2f(-0.679f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.35f); // x, y
    glVertex2f(-1.3f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.35f); // x, y
    glVertex2f(1.2f, 0.33f);   // x, y

    glEnd();


    poleNight3(0.0, 0.0, 1.0, 1.0);
    poleNight3(-0.52, 0.0, 1.0, 1.0);
    poleNight3(-1.08, 0.0, 1.0, 1.0);
    poleNight3(-1.57, 0.0, 1.0, 1.0);


    kharNight1(0.3, 0.0, 1.0, 1.0);




    glFlush(); // Render now



}


//----------------------------------------------ENDSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS------------------------------------------------------



//------------------------------------------------RAINNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN---------------------------------------------------------------------


void updateRain3(int n)
{
    if (cloudRain >=0.8 ) {
          cloudRain =-1.2;
    }
    cloudRain += 0.001;

    if (cloudRain2 >=0.7 ) {
          cloudRain2 =-1.2;
    }
    cloudRain2 += 0.001;



    glutPostRedisplay();
    glutTimerFunc(20, updateRain3, 0);
}

void kharRain1 (float translateX, float translateY, float scaleX, float scaleY) {   //khor code

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);

    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(88, 70, 15); // Yellow (Khar)

    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.28f, -0.62f);
    glVertex2f(-0.283f, -0.68f);
    glVertex2f(-0.32f, -0.76f);
    glVertex2f(-0.324f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.27f, -0.6f);

    glEnd();


    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(74, 58, 10); // Yellow (khar shade)
    glVertex2f(-0.255f, -0.57f);
    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.24f, -0.834f);
    glVertex2f(-0.19f, -0.82f);
    glVertex2f(-0.2f, -0.77f);
    glVertex2f(-0.22f, -0.7f);
    glVertex2f(-0.23f, -0.65f);
    glVertex2f(-0.232f, -0.6f);
    glVertex2f(-0.25f, -0.588f);
    glEnd();

    glPopMatrix();
}

void poleRain3(float translateX, float translateY, float scaleX, float scaleY)  // pole code
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.29);
    glVertex2f(0.89, 0.38);
    glVertex2f(0.885, 0.38);
    glVertex2f(0.885, 0.29);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.885, 0.333);
    glVertex2f(0.88, 0.35);
    glVertex2f(0.879, 0.34);
    glVertex2f(0.885, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.333);
    glVertex2f(0.895, 0.35);
    glVertex2f(0.896, 0.34);
    glVertex2f(0.89, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.88, 0.36);
    glVertex2f(0.873, 0.36);
    glVertex2f(0.873, 0.35);
    glVertex2f(0.88, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.895, 0.36);
    glVertex2f(0.902, 0.36);
    glVertex2f(0.902, 0.35);
    glVertex2f(0.895, 0.35);
    glEnd();
    glPopMatrix();
}



GLfloat speedRain = 6.0f;

void grassRain2(float translateX, float translateY, float scaleX, float scaleY) //grass code
{
    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(52, 84, 30);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);
    glEnd();
    glPopMatrix();
}

void circleRain(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2)
{
    int i;

    // GLfloat p1=0.8f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;  //(First cloudRain)
    int tringle2 = 40;

    tp2 = tp2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    // glColor3ub ( 229,227,246);

    glVertex2f(p1, q1);
    for (i = 0; i <= tringle2; i++)
    {
        glVertex2f(
            p1 + (r1 * cos(i * tp2 / tringle2)),
            q1 + (r1 * sin(i * tp2 / tringle2)));
    }

    glEnd();
}
void cloudRain1()
{
    glColor3ub(84, 83, 91); //(Mid cloudRain )   --- cloudRain code shade
    circleRain(0.3, 0.9, 0.05, 2);
    circleRain(0.21, 0.87, 0.04, 2);
    circleRain(0.36, 0.87, 0.04, 2);
    circleRain(0.28, 0.86, 0.046, 2);
    circleRain(0.23, 0.9, 0.025, 2);
    circleRain(0.35, 0.9, 0.025, 2);
    circleRain(0.4, 0.87, 0.025, 2);
    circleRain(0.33, 0.86, 0.025, 2);

    glColor3ub(49, 55, 61); //(Mid cloudRain shade)  --- cloudRain code body
    circleRain(0.3, 0.9, 0.043, 2);
    circleRain(0.21, 0.87, 0.033, 2);
    circleRain(0.36, 0.87, 0.033, 2);
    circleRain(0.28, 0.86, 0.04, 2);
    circleRain(0.23, 0.9, 0.02, 2);
    circleRain(0.35, 0.9, 0.01, 2);
    circleRain(0.4, 0.87, 0.01, 2);
    circleRain(0.33, 0.86, 0.01, 2);
}

void bushRain1()
{
    glColor3ub(30, 60, 8); //( Bush ) -- bush code shade
    circleRain(0.3, 0.9, 0.05, 2);
    circleRain(0.21, 0.87, 0.04, 2);
    circleRain(0.36, 0.87, 0.04, 2);
    circleRain(0.28, 0.86, 0.046, 2);
    circleRain(0.23, 0.9, 0.025, 2);
    circleRain(0.35, 0.9, 0.025, 2);
    circleRain(0.4, 0.87, 0.025, 2);
    circleRain(0.33, 0.86, 0.025, 2);

    glColor3ub(22, 53, 5); //(Bush shade)  -- bush code body
    circleRain(0.3, 0.9, 0.043, 2);
    circleRain(0.21, 0.87, 0.033, 2);
    circleRain(0.36, 0.87, 0.033, 2);
    circleRain(0.28, 0.86, 0.04, 2);
    circleRain(0.23, 0.9, 0.02, 2);
    circleRain(0.35, 0.9, 0.01, 2);
    circleRain(0.4, 0.87, 0.01, 2);
    circleRain(0.33, 0.86, 0.01, 2);
}

void grassRain1()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(79, 129, 37);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);
    glEnd();
}


void updateRain2(int value) {

    if(positionRain1 <=-0.7)
        positionRain1 = 1.0f;

    positionRain1 -= speedRain1;

glutPostRedisplay();

glutTimerFunc(90, updateRain2, 0);
}



void updateRain1(int n)
{


    if (cloudRain >=0.8 ) {
          cloudRain =-1.2;
    }
    cloudRain += 0.004;

    if (cloudRain2 >=0.7 ) {
          cloudRain2 =-1.2;
    }
    cloudRain2 += 0.007;
    glutPostRedisplay();
    glutTimerFunc(20, updateRain1, 0);
}


void rainView(){

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(.5);
    // Draw a Red 1x1 Square centered at origin

    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad -- sky code down up shade
    glColor3ub(35, 35, 35); // Saddle Brown (Sky colour)
    glVertex2f(-1.0f, 0.3f); // x, y
    glVertex2f(1.0f, 0.3f);

    glColor3ub(35, 35, 35);     //sky code up down shade
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();


    glColor3ub(84, 83, 91); //(1st cloudRain) --cloudRain code shade
    circleRain(0.8, 0.75, 0.052, 2);
    circleRain(0.74, 0.721, 0.03, 2);
    circleRain(0.85, 0.72, 0.03, 2);
    glColor3ub(49, 55, 61); //(1st cloudRain shade) -- cloudRain code
    circleRain(0.8, 0.75, 0.042, 2);
    circleRain(0.74, 0.721, 0.025, 2);
    circleRain(0.85, 0.72, 0.025, 2);

    glColor3ub(84, 83, 91); // 2nd cloudRain
    circleRain(-0.9, 0.82, 0.03, 2);
    circleRain(-0.83, 0.84, 0.05, 2);
    circleRain(-0.765, 0.823, 0.03, 2);
    glColor3ub(49, 55, 61); //(2nd cloudRain shade)
    circleRain(-0.88, 0.82, 0.02, 2);
    circleRain(-0.83, 0.84, 0.04, 2);
    circleRain(-0.784, 0.823, 0.02, 2);


    glColor3ub(255, 255, 255); // moon code white
    circleRain(0.68, 0.72, 0.05, 2.5);
    glColor3ub(35, 35, 35); //moon code black
    circleRain(0.66, 0.73, 0.05, 2.5);

    /*glColor3ub ( 229,227,246); //(Mid cloudRain )
    circleRain(0.3,0.9,0.05,2);
    circleRain(0.21,0.87,0.04,2);
    circleRain(0.36,0.87,0.04,2);
    circleRain(0.28,0.86,0.046,2);
    circleRain(0.23,0.9,0.025,2);
    circleRain(0.35,0.9,0.025,2);
    circleRain(0.4,0.87,0.025,2);
    circleRain(0.33,0.86,0.025,2);

    glColor3ub ( 204,225,245); //(Mid cloudRain shade)
    circleRain(0.3,0.9,0.043,2);
    circleRain(0.21,0.87,0.033,2);
    circleRain(0.36,0.87,0.033,2);
    circleRain(0.28,0.86,0.04,2);
    circleRain(0.23,0.9,0.02,2);
    circleRain(0.35,0.9,0.01,2);
    circleRain(0.4,0.87,0.01,2);
    circleRain(0.33,0.86,0.01,2);
    */

    glPushMatrix();
    glScaled(1.5, 1.5, 0.0);
    glTranslatef(0.0, -0.5, 0.0);
    cloudRain1();
    glPopMatrix(); // cloudRain1

    glPushMatrix();
    glScaled(1.52, 1.52, 0.0);
    glTranslatef(-0.4, -0.3, 0.0);
    cloudRain1();
    glPopMatrix(); // cloudRain2

    glPushMatrix();
    glScaled(1.1, 1.5, 0.0);
    glTranslatef(cloudRain, -0.45, 0.0);
    cloudRain1();
    glPopMatrix(); // cloudRain3

    glPushMatrix();
    glScaled(1.17, 1.17, 0.0);
    glTranslatef(cloudRain2, -0.1, 0.0);
    cloudRain1();
    glPopMatrix(); // cloudRain1-2

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad    --cloudRain code triangle
    glColor3ub(142, 141, 151); // Saddle Brown (Sky Triangle 1st)
    glVertex2f(-1.0, 0.82); // x, y
    glVertex2f(-0.6, 0.8);
    glVertex2f(-1.0, 0.78);
    glEnd();

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad   --cloudRain code triangle
    glColor3ub(142, 141, 151); // Saddle Brown (Sky triangle 2nd )
    glVertex2f(1.0, 0.72); // x, y
    glVertex2f(0.6, 0.7);
    glVertex2f(1.0, 0.68);
    glEnd();


    glBegin(GL_POLYGON);     // These vertices form a closed polygon -- mountain code shade
    glColor3ub(1, 74, 77); // Yellow (Mountain)
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.95f, 0.35f);
    glVertex2f(0.9f, 0.357f);
    glVertex2f(0.869f, 0.381f);
    glVertex2f(0.8f, 0.35f);
    glVertex2f(0.771f, 0.348f);
    glVertex2f(0.7f, 0.355f);
    glVertex2f(0.671f, 0.358f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.55f, 0.39f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.4f, 0.39f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.2f, 0.413f);
    glVertex2f(0.1f, 0.389f);
    glVertex2f(0.0f, 0.42f);
    glVertex2f(-0.1f, 0.44f);
    glVertex2f(-0.124f, 0.428f);
    glVertex2f(-0.161f, 0.38f);
    glVertex2f(-0.2f, 0.36f);
    glVertex2f(-0.223f, 0.361f);
    glVertex2f(-0.25f, 0.4f);
    glVertex2f(-0.254f, 0.45f);
    glVertex2f(-0.28f, 0.493f);
    glVertex2f(-0.32f, 0.518f);
    glVertex2f(-0.361f, 0.48f);
    glVertex2f(-0.368f, 0.45f);
    glVertex2f(-0.4f, 0.44f);
    glVertex2f(-0.5f, 0.455f);
    glVertex2f(-0.534f, 0.444f);
    glVertex2f(-0.6f, 0.49f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.7f, 0.48f);
    glVertex2f(-0.74f, 0.43f);
    glVertex2f(-0.8f, 0.42f);
    glVertex2f(-0.818f, 0.422f);
    glVertex2f(-0.9f, 0.45f);
    glVertex2f(-0.95f, 0.418f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();



    glBegin(GL_POLYGON);       // These vertices form a closed polygon -- Mountain Code
    glColor3ub(1, 1, 1); // Yellow (Mountain)

    glVertex2f(-1.00f, 0.28f);
    glVertex2f(1.00f, 0.28f);
    glColor3ub(0, 104, 105); // Yellow (Mountain)
    glVertex2f(0.95f, 0.33f);
    glVertex2f(0.90f, 0.337f);
    glVertex2f(0.869f, 0.361f);
    glVertex2f(0.80f, 0.33f);
    glVertex2f(0.771f, 0.328f);
    glVertex2f(0.70f, 0.335f);
    glVertex2f(0.671f, 0.338f);
    glVertex2f(0.60f, 0.33f);
    glVertex2f(0.55f, 0.37f);
    glVertex2f(0.50f, 0.38f);
    glVertex2f(0.40f, 0.37f);
    glVertex2f(0.30f, 0.38f);
    glVertex2f(0.20f, 0.393f);
    glVertex2f(0.10f, 0.369f);
    glVertex2f(0.00f, 0.40);
    glVertex2f(-0.10f, 0.42f);
    glVertex2f(-0.124f, 0.408f);
    glVertex2f(-0.161f, 0.36f);
    glVertex2f(-0.20f, 0.34f);
    glVertex2f(-0.223f, 0.341f);
    glVertex2f(-0.25f, 0.38f);
    glVertex2f(-0.254f, 0.43f);
    glVertex2f(-0.28f, 0.473f);
    glVertex2f(-0.32f, 0.498f);
    glVertex2f(-0.361f, 0.46f);
    glVertex2f(-0.368f, 0.43f);
    glVertex2f(-0.40f, 0.42f);
    glVertex2f(-0.50f, 0.435f);
    glVertex2f(-0.534f, 0.424f);
    glVertex2f(-0.60f, 0.47f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.70f, 0.46f);
    glVertex2f(-0.74f, 0.41f);
    glVertex2f(-0.80f, 0.40);
    glVertex2f(-0.818f, 0.402f);
    glVertex2f(-0.90f, 0.43f);
    glVertex2f(-0.95f, 0.398f);
    glVertex2f(-1.00f, 0.38f);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(60, 54, 30); // Yellow (Upper Land EverBrown) -- land code big gray
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();


    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(56, 78, 1); // Yellow (upper land Green up shade)    pole behind code
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, 0.29f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(0.0f, 0.29f);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(1.0f, 0.29f);
    glEnd();



    glBegin(GL_QUADS);      //land code most right
    glColor3ub(51, 77, 1);
    glVertex2f(0.82, 0.284); // (Middle Land halka green Right 5th)
    glVertex2f(0.615, 0.0);
    glVertex2f(1.0, -0.11);
    glVertex2f(1.0, 0.282);
    glEnd();

    glBegin(GL_QUADS);      //land code most right left
    glColor3ub(51, 77, 1);
    glVertex2f(0.31, 0.284); // (Middle Land halka green 4th)
    glVertex2f(0.09, 0.11);
    glVertex2f(0.6, 0.0);
    glVertex2f(0.8, 0.282);
    glEnd();


    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad  -- land code the smallest
    glColor3ub(63, 97, 3); // Saddle Brown (Middle Triangle Field 1st)
    glVertex2f(-0.77, 0.282); // x, y
    glVertex2f(-0.516, 0.21);
    glVertex2f(-0.35, 0.283);
    glEnd();


    glBegin(GL_QUADS);      //land code middle yellowish green
    glColor3ub(63, 97, 1);
    glVertex2f(-0.48, 0.22); // (Middle Land halka green 3rd)
    glVertex2f(0.07, 0.12);
    glVertex2f(0.3, 0.293);
    glVertex2f(-0.3, 0.294);
    glEnd();


    glBegin(GL_QUADS);      //land code yellowish green left
    glColor3ub(91, 97, 1);
    glVertex2f(-1.0, 0.01); // (Middle Land Halka green 2nd))
    glVertex2f(-0.52, 0.202);
    glVertex2f(-0.8, 0.28);
    glVertex2f(-1.0, 0.28);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- land code main big light green
    glColor3ub(79, 114, 8); // Yellow (Middle Land yellow green Main 1st)
    glVertex2f(-1.0f, -0.49f);
    glVertex2f(-0.9f, -0.48f);
    glVertex2f(0.05f, 0.1f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();


    // grassRain2(-11.1,-6.9,0.09,0.09);
    grassRain2(-11.10, -6.90, 0.09, 0.09);
    grassRain2(-11.10, -6.00, 0.09, 0.09);

    grassRain2(-10.40, -6.90, 0.09, 0.09);
    grassRain2(-10.40, -6.00, 0.09, 0.09);

    grassRain2(-9.70, -6.90, 0.09, 0.09);
    grassRain2(-9.70, -6.00, 0.09, 0.09);

    grassRain2(-9.00, -6.90, 0.09, 0.09);
    grassRain2(-9.00, -6.00, 0.09, 0.09);
    grassRain2(-9.00, -5.10, 0.09, 0.09);

    grassRain2(-8.30, -6.90, 0.09, 0.09);
    grassRain2(-8.30, -6.00, 0.09, 0.09);
    grassRain2(-8.30, -5.10, 0.09, 0.09);

    grassRain2(-7.60, -6.90, 0.09, 0.09);
    grassRain2(-7.60, -6.00, 0.09, 0.09);
    grassRain2(-7.60, -5.10, 0.09, 0.09);

    grassRain2(-6.90, -6.90, 0.09, 0.09);
    grassRain2(-6.90, -6.00, 0.09, 0.09);
    grassRain2(-6.90, -5.10, 0.09, 0.09);
    grassRain2(-6.90, -4.20, 0.09, 0.09);

    grassRain2(-6.20, -6.90, 0.09, 0.09);
    grassRain2(-6.20, -6.00, 0.09, 0.09);
    grassRain2(-6.20, -5.10, 0.09, 0.09);
    grassRain2(-6.20, -4.20, 0.09, 0.09);

    grassRain2(-5.50, -6.90, 0.09, 0.09);
    grassRain2(-5.50, -6.00, 0.09, 0.09);
    grassRain2(-5.50, -5.10, 0.09, 0.09);
    grassRain2(-5.50, -4.20, 0.09, 0.09);
    grassRain2(-5.50, -3.30, 0.09, 0.09);

    grassRain2(-4.80, -6.90, 0.09, 0.09);
    grassRain2(-4.80, -6.00, 0.09, 0.09);
    grassRain2(-4.80, -5.10, 0.09, 0.09);
    grassRain2(-4.80, -4.20, 0.09, 0.09);
    grassRain2(-4.80, -3.30, 0.09, 0.09);
    grassRain2(-4.80, -2.40, 0.09, 0.09);

    grassRain2(-4.10, -6.90, 0.09, 0.09);
    grassRain2(-4.10, -6.00, 0.09, 0.09);
    grassRain2(-4.10, -5.10, 0.09, 0.09);
    grassRain2(-4.10, -4.20, 0.09, 0.09);
    grassRain2(-4.10, -3.30, 0.09, 0.09);
    grassRain2(-4.10, -2.40, 0.09, 0.09);

    grassRain2(-3.40, -6.90, 0.09, 0.09);
    grassRain2(-3.40, -6.00, 0.09, 0.09);
    grassRain2(-3.40, -5.10, 0.09, 0.09);
    grassRain2(-3.40, -4.20, 0.09, 0.09);
    grassRain2(-3.40, -3.30, 0.09, 0.09);
    grassRain2(-3.40, -2.40, 0.09, 0.09);
    grassRain2(-3.40, -1.50, 0.09, 0.09);

    grassRain2(-2.70, -6.90, 0.09, 0.09);
    grassRain2(-2.70, -6.00, 0.09, 0.09);
    grassRain2(-2.70, -5.10, 0.09, 0.09);
    grassRain2(-2.70, -4.20, 0.09, 0.09);
    grassRain2(-2.70, -3.30, 0.09, 0.09);
    grassRain2(-2.70, -2.40, 0.09, 0.09);
    grassRain2(-2.70, -1.50, 0.09, 0.09);

    grassRain2(-2.00, -6.90, 0.09, 0.09);
    grassRain2(-2.00, -6.00, 0.09, 0.09);
    grassRain2(-2.00, -5.10, 0.09, 0.09);
    grassRain2(-2.00, -4.20, 0.09, 0.09);
    grassRain2(-2.00, -3.30, 0.09, 0.09);
    grassRain2(-2.00, -2.40, 0.09, 0.09);
    grassRain2(-2.00, -1.50, 0.09, 0.09);
    grassRain2(-2.00, -0.60, 0.09, 0.09);

    grassRain2(-1.30, -6.90, 0.09, 0.09);
    grassRain2(-1.30, -6.00, 0.09, 0.09);
    grassRain2(-1.30, -5.10, 0.09, 0.09);
    grassRain2(-1.30, -4.20, 0.09, 0.09);
    grassRain2(-1.30, -3.30, 0.09, 0.09);
    grassRain2(-1.30, -2.40, 0.09, 0.09);
    grassRain2(-1.30, -1.50, 0.09, 0.09);
    grassRain2(-1.30, -0.60, 0.09, 0.09);

    grassRain2(-0.60, -6.90, 0.09, 0.09);
    grassRain2(-0.60, -6.00, 0.09, 0.09);
    grassRain2(-0.60, -5.10, 0.09, 0.09);
    grassRain2(-0.60, -4.20, 0.09, 0.09);
    grassRain2(-0.60, -3.30, 0.09, 0.09);
    grassRain2(-0.60, -2.40, 0.09, 0.09);
    grassRain2(-0.60, -1.50, 0.09, 0.09);
    grassRain2(-0.60, -0.60, 0.09, 0.09);

    grassRain2(0.10, -6.90, 0.09, 0.09);
    grassRain2(0.10, -6.00, 0.09, 0.09);
    grassRain2(0.10, -5.10, 0.09, 0.09);
    grassRain2(0.10, -4.20, 0.09, 0.09);
    grassRain2(0.10, -3.30, 0.09, 0.09);
    grassRain2(0.10, -2.40, 0.09, 0.09);
    grassRain2(0.10, -1.50, 0.09, 0.09);
    grassRain2(0.10, -0.60, 0.09, 0.09);
    grassRain2(0.10, 0.30, 0.09, 0.09);

    grassRain2(0.80, -6.90, 0.09, 0.09);
    grassRain2(0.80, -6.00, 0.09, 0.09);
    grassRain2(0.80, -5.10, 0.09, 0.09);
    grassRain2(0.80, -4.20, 0.09, 0.09);
    grassRain2(0.80, -3.30, 0.09, 0.09);
    grassRain2(0.80, -2.40, 0.09, 0.09);
    grassRain2(0.80, -1.50, 0.09, 0.09);
    grassRain2(0.80, -0.60, 0.09, 0.09);
    grassRain2(0.80, 0.30, 0.09, 0.09);

    grassRain2(1.50, 0.30, 0.09, 0.09);
    grassRain2(1.50, -6.90, 0.09, 0.09);
    grassRain2(1.50, -6.00, 0.09, 0.09);
    grassRain2(1.50, -5.10, 0.09, 0.09);
    grassRain2(1.50, -4.20, 0.09, 0.09);
    grassRain2(1.50, -3.30, 0.09, 0.09);
    grassRain2(1.50, -2.40, 0.09, 0.09);
    grassRain2(1.50, -1.50, 0.09, 0.09);
    grassRain2(1.50, -0.60, 0.09, 0.09);

    grassRain2(2.20, -6.90, 0.09, 0.09);
    grassRain2(2.20, -6.00, 0.09, 0.09);
    grassRain2(2.20, -5.10, 0.09, 0.09);
    grassRain2(2.20, -4.20, 0.09, 0.09);
    grassRain2(2.20, -3.30, 0.09, 0.09);
    grassRain2(2.20, -2.40, 0.09, 0.09);
    grassRain2(2.20, -1.50, 0.09, 0.09);
    grassRain2(2.20, -0.60, 0.09, 0.09);
    grassRain2(2.90, -6.90, 0.09, 0.09);
    grassRain2(2.90, -6.00, 0.09, 0.09);
    grassRain2(2.90, -5.10, 0.09, 0.09);
    grassRain2(2.90, -4.20, 0.09, 0.09);
    grassRain2(2.90, -3.30, 0.09, 0.09);
    grassRain2(2.90, -2.40, 0.09, 0.09);
    grassRain2(2.90, -1.50, 0.09, 0.09);
    grassRain2(2.90, -0.60, 0.09, 0.09);
    grassRain2(3.60, -6.90, 0.09, 0.09);
    grassRain2(3.60, -6.00, 0.09, 0.09);
    grassRain2(3.60, -5.10, 0.09, 0.09);
    grassRain2(3.60, -4.20, 0.09, 0.09);
    grassRain2(3.60, -3.30, 0.09, 0.09);
    grassRain2(3.60, -2.40, 0.09, 0.09);
    grassRain2(3.60, -1.50, 0.09, 0.09);
    grassRain2(3.60, -0.60, 0.09, 0.09);
    grassRain2(4.30, -6.90, 0.09, 0.09);
    grassRain2(4.30, -6.00, 0.09, 0.09);
    grassRain2(4.30, -5.10, 0.09, 0.09);
    grassRain2(4.30, -4.20, 0.09, 0.09);
    grassRain2(4.30, -3.30, 0.09, 0.09);
    grassRain2(4.30, -2.40, 0.09, 0.09);
    grassRain2(4.30, -1.50, 0.09, 0.09);
    grassRain2(4.30, -0.60, 0.09, 0.09);
    grassRain2(5.00, -6.90, 0.09, 0.09);
    grassRain2(5.00, -6.00, 0.09, 0.09);
    grassRain2(5.00, -5.10, 0.09, 0.09);
    grassRain2(5.00, -4.20, 0.09, 0.09);
    grassRain2(5.00, -3.30, 0.09, 0.09);
    grassRain2(5.00, -2.40, 0.09, 0.09);
    grassRain2(5.00, -1.50, 0.09, 0.09);
    grassRain2(5.00, -0.60, 0.09, 0.09);
    grassRain2(5.70, -6.90, 0.09, 0.09);
    grassRain2(5.70, -6.00, 0.09, 0.09);
    grassRain2(5.70, -5.10, 0.09, 0.09);
    grassRain2(5.70, -4.20, 0.09, 0.09);
    grassRain2(5.70, -3.30, 0.09, 0.09);
    grassRain2(5.70, -2.40, 0.09, 0.09);
    grassRain2(5.70, -1.50, 0.09, 0.09);
    grassRain2(5.70, -0.60, 0.09, 0.09);
    grassRain2(6.40, -6.90, 0.09, 0.09);
    grassRain2(6.40, -6.00, 0.09, 0.09);
    grassRain2(6.40, -5.10, 0.09, 0.09);
    grassRain2(6.40, -4.20, 0.09, 0.09);
    grassRain2(6.40, -3.30, 0.09, 0.09);
    grassRain2(6.40, -2.40, 0.09, 0.09);
    grassRain2(6.40, -1.50, 0.09, 0.09);
    grassRain2(6.40, -0.60, 0.09, 0.09);
    grassRain2(7.10, -6.90, 0.09, 0.09);
    grassRain2(7.10, -6.00, 0.09, 0.09);
    grassRain2(7.10, -5.10, 0.09, 0.09);
    grassRain2(7.10, -4.20, 0.09, 0.09);
    grassRain2(7.10, -3.30, 0.09, 0.09);
    grassRain2(7.10, -2.40, 0.09, 0.09);
    grassRain2(7.10, -1.50, 0.09, 0.09);
    grassRain2(7.10, -0.60, 0.09, 0.09);
    grassRain2(7.80, -6.90, 0.09, 0.09);
    grassRain2(7.80, -6.00, 0.09, 0.09);
    grassRain2(7.80, -5.10, 0.09, 0.09);
    grassRain2(7.80, -4.20, 0.09, 0.09);
    grassRain2(7.80, -3.30, 0.09, 0.09);
    grassRain2(7.80, -2.40, 0.09, 0.09);
    grassRain2(7.80, -1.50, 0.09, 0.09);

    grassRain2(8.50, -6.90, 0.09, 0.09);
    grassRain2(8.50, -6.00, 0.09, 0.09);
    grassRain2(8.50, -5.10, 0.09, 0.09);
    grassRain2(8.50, -4.20, 0.09, 0.09);
    grassRain2(8.50, -3.30, 0.09, 0.09);
    grassRain2(8.50, -2.40, 0.09, 0.09);
    grassRain2(8.50, -1.50, 0.09, 0.09);

    grassRain2(9.20, -6.90, 0.09, 0.09);
    grassRain2(9.20, -6.00, 0.09, 0.09);
    grassRain2(9.20, -5.10, 0.09, 0.09);
    grassRain2(9.20, -4.20, 0.09, 0.09);
    grassRain2(9.20, -3.30, 0.09, 0.09);
    grassRain2(9.20, -2.40, 0.09, 0.09);
    grassRain2(9.20, -1.50, 0.09, 0.09);

    grassRain2(9.90, -6.90, 0.09, 0.09);
    grassRain2(9.90, -6.00, 0.09, 0.09);
    grassRain2(9.90, -5.10, 0.09, 0.09);
    grassRain2(9.90, -4.20, 0.09, 0.09);
    grassRain2(9.90, -3.30, 0.09, 0.09);
    grassRain2(9.90, -2.40, 0.09, 0.09);
    grassRain2(9.90, -1.50, 0.09, 0.09);

    grassRain2(10.60, -6.90, 0.09, 0.09);
    grassRain2(10.60, -6.00, 0.09, 0.09);
    grassRain2(10.60, -5.10, 0.09, 0.09);
    grassRain2(10.60, -4.20, 0.09, 0.09);
    grassRain2(10.60, -3.30, 0.09, 0.09);
    grassRain2(10.60, -2.40, 0.09, 0.09);


    glBegin(GL_POLYGON);    // These vertices form a closed polygon  -- river code upper side
    glColor3ub(47, 43, 29); // Yellow (Land Brown  polygon 1st)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.62f);
    glVertex2f(0.95f, -0.63f);
    glVertex2f(0.9f, -0.65f);
    glVertex2f(0.8f, -0.62f);
    glVertex2f(0.7f, -0.61f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.5f, -0.61f);
    glVertex2f(0.45f, -0.58f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.3f, -0.68f);
    glVertex2f(0.2f, -0.65f);
    glVertex2f(0.1f, -0.65f);
    glVertex2f(0.0f, -0.62f);
    glVertex2f(-0.1f, -0.64f);
    glVertex2f(-0.2f, -0.59f);
    glVertex2f(-0.25f, -0.598f);
    glVertex2f(-0.3f, -0.58f);
    glVertex2f(-0.4f, -0.57f);
    glVertex2f(-0.5f, -0.585f);
    glVertex2f(-0.55f, -0.58f);
    glVertex2f(-0.6f, -0.59f);
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.8f, -0.59f);
    glVertex2f(-0.85f, -0.61f);
    glVertex2f(-0.9f, -0.62f);
    glVertex2f(-0.95f, -0.61f);
    glVertex2f(-1.0f, -0.57f);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- river code water
    glColor3ub(33, 86, 101); // Yellow (Water-land polygon )
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.67f);
    glVertex2f(0.95f, -0.65f);
    glVertex2f(0.9f, -0.67f);
    glVertex2f(0.8f, -0.64f);
    glVertex2f(0.7f, -0.65f);
    glVertex2f(0.6f, -0.62f);
    glVertex2f(0.5f, -0.65f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.4f, -0.67f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.0f, -0.67f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.64f);
    glVertex2f(-0.25f, -0.62f);
    glVertex2f(-0.3f, -0.64f);
    glVertex2f(-0.4f, -0.63f);
    glVertex2f(-0.5f, -0.61f);
    glVertex2f(-0.55f, -0.63f);
    glVertex2f(-0.6f, -0.63f);
    glVertex2f(-0.7f, -0.65f);
    glVertex2f(-0.8f, -0.66f);
    glVertex2f(-0.85f, -0.67f);
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.95f, -0.638f);
    glVertex2f(-1.0f, -0.6f);
    glEnd();



    glBegin(GL_POLYGON);     // These vertices form a closed polygon    ---- land code home side bigger green
    glColor3ub(37, 57, 30); // Yellow (Land Green polygon 2nd)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.72f);
    glVertex2f(0.95f, -0.7f);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.8f, -0.69f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.6f, -0.68f);
    glVertex2f(0.5f, -0.7f);
    glVertex2f(0.45f, -0.68f);
    glVertex2f(0.4f, -0.72f);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.2f, -0.72f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.0f, -0.72f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.69f);
    glVertex2f(-0.25f, -0.67f);
    glVertex2f(-0.3f, -0.69f);
    glVertex2f(-0.4f, -0.68f);
    glVertex2f(-0.5f, -0.66f);
    glVertex2f(-0.55f, -0.665f);
    glVertex2f(-0.6f, -0.689f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.8f, -0.71f);
    glVertex2f(-0.85f, -0.72f);
    glVertex2f(-0.9f, -0.7f);
    glVertex2f(-0.95f, -0.688f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();


    glBegin(GL_TRIANGLES);  // Each set of 4 vertices form a quad   -- home code upper big roof down left choco
    glColor3ub(50, 33, 15); // Saddle Brown (Chader oikhnaei Triangle ta)
    glVertex2f(0.37, -0.6); // x, y
    glVertex2f(0.13, -0.6);
    glVertex2f(0.3, -0.41);
    glEnd();


    glBegin(GL_QUADS);      // Each set of 4 vertices form a quad   -- home code door
    glColor3ub(50, 33, 15); // Saddle Brown (House er Ekdom Middle Quad)
    glVertex2f(0.34f, -0.5f); // x, y
    glVertex2f(0.34f, -0.714f);
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.45f, -0.5f);
    glEnd();


    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- home code left door
    glColor3ub(96, 65, 25); // Yellow (Bashar majhe ekta polygon draw)
    glVertex2f(0.2f, -0.53f);
    glVertex2f(0.2f, -0.713f);
    glVertex2f(0.34f, -0.711f);
    glVertex2f(0.34f, -0.53f);
    glVertex2f(0.30f, -0.52f);
    glVertex2f(0.22f, -0.53f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad  -- home code stick
    glColor3ub(97, 40, 7); // Saddle Brown (House er niche stick 1st)
    glVertex2f(0.16f, -0.7f); // x, y
    glVertex2f(0.16f, -0.77f);
    glVertex2f(0.166f, -0.77f);
    glVertex2f(0.166f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad  -- home code stick
    glColor3ub(97, 40, 7); // Saddle Brown (House er niche Stick 2nd)
    glVertex2f(0.18f, -0.7f); // x, y
    glVertex2f(0.18f, -0.75f);
    glVertex2f(0.186f, -0.75f);
    glVertex2f(0.186f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code door left left quad
    glColor3ub(125, 89, 5); // Saddle Brown (House er Left Side er Quad)
    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.16f, -0.7f);
    glVertex2f(0.2f, -0.71f);
    glVertex2f(0.2f, -0.53f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code door right quad
    glColor3ub(96, 65, 25); // Saddle Brown (House er Door er Right er Quad)
    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.66f, -0.69f);
    glVertex2f(0.66f, -0.5f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code left side roof
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad)
    glVertex2f(0.24f, -0.41f); // x, y
    glVertex2f(0.12f, -0.56f);
    glVertex2f(0.16f, -0.59f);
    glVertex2f(0.3f, -0.41f);
    glEnd();

    //bulb code
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2f(0.32f, -0.5f);
    glVertex2f(0.32f, -0.55f);
    glEnd();
    glColor3ub(200, 200, 200);
    circleRain(0.32, -0.55, 0.01, 2.5);


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad     --home code main roof
    glColor3ub(103, 75, 42); // Ektu Kom Brown (house chad er ta)
    glVertex2f(0.25f, -0.3f);  // x, y
    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.69f, -0.51f); // x, y
    glVertex2f(0.58f, -0.3f);  // x, y
    glEnd();


    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad  -- home code left roof up triangle
    glColor3ub(73, 53, 23); // Saddle Brown (Chader oikhnaei Triangle ta)
    glVertex2f(0.25f, -0.3f); // x, y
    glVertex2f(0.24f, -0.41f);
    glVertex2f(0.29f, -0.41f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 1st)
    glVertex2f(0.13f, -0.55f); // x, y
    glVertex2f(0.11f, -0.57f);
    glVertex2f(0.15f, -0.57f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 2nd)
    glVertex2f(0.15f, -0.57f); // x, y
    glVertex2f(0.12f, -0.58f);
    glVertex2f(0.16f, -0.59f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 3rd)
    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.18f, -0.566f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown ((Chader Left side er Quad E Triangle 4th)
    glVertex2f(0.16f, -0.59f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.16f, -0.55f);
    glEnd();



    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 1st)
    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.33f, -0.53f);
    glVertex2f(0.35f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 2nd)
    glVertex2f(0.35f, -0.5f); // x, y
    glVertex2f(0.4f, -0.53f);
    glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 3rd)
    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.43f, -0.53f);
    glVertex2f(0.5f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 4th)
    glVertex2f(0.5f, -0.5f); // x, y
    glVertex2f(0.55, -0.53f);
    glVertex2f(0.6f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 5th)
    glVertex2f(0.6f, -0.5f); // x, y
    glVertex2f(0.65, -0.54f);
    glVertex2f(0.68f, -0.5f);
    glEnd();


    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(31, 45, 20); // Yellow (House Shadow)
    glVertex2f(0.18f, -0.73f);
    glVertex2f(0.13f, -0.77f);
    glVertex2f(0.3f, -0.8f);
    glVertex2f(0.72f, -0.83f);
    glVertex2f(0.7f, -0.71f);
    glEnd();


    //home sticks starts
    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 3rd)
    glVertex2f(0.2f, -0.71f); // x, y
    glVertex2f(0.2f, -0.77f);
    glVertex2f(0.205f, -0.77f);
    glVertex2f(0.205f, -0.71f);
    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 9th)
    glVertex2f(0.62f, -0.69f); // x, y
    glVertex2f(0.62f, -0.75f);
    glVertex2f(0.627f, -0.75f);
    glVertex2f(0.627f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 8th)
    glVertex2f(0.58f, -0.69f); // x, y
    glVertex2f(0.58f, -0.75f);
    glVertex2f(0.587f, -0.75f);
    glVertex2f(0.587f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 7th)
    glVertex2f(0.54f, -0.69f); // x, y
    glVertex2f(0.54f, -0.75f);
    glVertex2f(0.547f, -0.75f);
    glVertex2f(0.547f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 6th)
    glVertex2f(0.50f, -0.69f); // x, y
    glVertex2f(0.50f, -0.75f);
    glVertex2f(0.507f, -0.75f);
    glVertex2f(0.507f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 5th)
    glVertex2f(0.47f, -0.69f); // x, y
    glVertex2f(0.47f, -0.75f);
    glVertex2f(0.477f, -0.75f);
    glVertex2f(0.477f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 10th)
    glVertex2f(0.64f, -0.69f); // x, y
    glVertex2f(0.64f, -0.77f);
    glVertex2f(0.647f, -0.77f);
    glVertex2f(0.647f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House Ladder 1st)
    glVertex2f(0.36f, -0.7f); // x, y
    glVertex2f(0.37f, -0.8f);
    glVertex2f(0.380f, -0.8f);
    glVertex2f(0.370f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House Ladder 2nd)
    glVertex2f(0.43f, -0.7f); // x, y
    glVertex2f(0.44f, -0.8f);
    glVertex2f(0.450f, -0.8f);
    glVertex2f(0.440f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);          //-- home code stick
    glColor3ub(67, 30, 5);
    glVertex2f(0.365, -0.72); // (house ladder mid stick 1st)
    glVertex2f(0.365, -0.73);
    glVertex2f(0.44, -0.72);
    glVertex2f(0.44, -0.71);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 30, 5);
    glVertex2f(0.365, -0.75); // (house ladder mid stick 2nd) -- home code stick
    glVertex2f(0.365, -0.76);
    glVertex2f(0.44, -0.75);
    glVertex2f(0.44, -0.74);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 30, 5);
    glVertex2f(0.368, -0.78); // (house ladder mid stick 3rd) -- home code stick
    glVertex2f(0.369, -0.79);
    glVertex2f(0.44, -0.78);
    glVertex2f(0.44, -0.77);
    glEnd();
//home stick ends


//leaf code starts
    glColor3ub(10, 45, 0); //(Main Tree Darkleaf 1st)   --- tree code down leaf
    circleRain(0.8, -0.44, 0.055, 2);
    circleRain(0.85, -0.52, 0.05, 2);
    circleRain(0.75, -0.52, 0.05, 2);

    glColor3ub(30, 63, 0); //(Leaf Dark Green 3th)  --- tree code upper leaf shade
    circleRain(0.74, -0.26, 0.055, 2);
    circleRain(0.78, -0.2, 0.06, 2);
    circleRain(0.83, -0.25, 0.06, 2);
    circleRain(0.8, -0.34, 0.06, 2);

    glColor3ub(25, 55, 0); //(Leaf Dark Green Shade 3th)    --- tree code upper leaf
    circleRain(0.73, -0.27, 0.055, 2);
    circleRain(0.77, -0.21, 0.06, 2);
    circleRain(0.82, -0.26, 0.06, 2);
    circleRain(0.79, -0.35, 0.06, 2);

    glColor3ub(55, 91, 15); //(Leaf  Green 2nd)   --- tree code left leaf shade
    circleRain(0.71, -0.44, 0.055, 2);
    circleRain(0.7, -0.38, 0.055, 2);
    circleRain(0.72, -0.34, 0.055, 2);
    circleRain(0.75, -0.4, 0.045, 2);

    glColor3ub(56, 80, 15); //(Lead Shade green 2nd)   --- tree code left  leaf
    circleRain(0.7, -0.45, 0.055, 2);
    circleRain(0.69, -0.39, 0.055, 2);
    circleRain(0.71, -0.35, 0.055, 2);
    circleRain(0.74, -0.41, 0.045, 2);

    glColor3ub(44, 72, 5); //(Leaf Dark Green 4th)    --- tree code right leaf shade
    circleRain(0.9, -0.32, 0.055, 2);
    circleRain(0.915, -0.38, 0.06, 2);
    circleRain(0.91, -0.42, 0.05, 2);
    circleRain(0.88, -0.44, 0.055, 2);
    circleRain(0.86, -0.4, 0.055, 2);

    glColor3ub(52, 85, 5); //(Leaf Dark Green Shade 4th)  --- tree code right leaf
    circleRain(0.89, -0.33, 0.055, 2);
    circleRain(0.905, -0.39, 0.06, 2);
    circleRain(0.9, -0.43, 0.05, 2);
    circleRain(0.87, -0.45, 0.055, 2);
    circleRain(0.85, -0.41, 0.055, 2);
//tree leaf code ends


    glColor3ub(77, 57, 32); // Yellow (Main tree)   -- tree code body
    glBegin(GL_POLYGON);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glVertex2f(0.808, -0.84);
    glVertex2f(0.8, -0.84);
    glVertex2f(0.79, -0.85);
    glVertex2f(0.778, -0.8525);
    glVertex2f(0.775, -0.85);
    glVertex2f(0.775, -0.8275);
    glVertex2f(0.779, -0.8);
    glVertex2f(0.784, -0.7625);
    glVertex2f(0.79, -0.7175);
    glVertex2f(0.792, -0.685);
    glVertex2f(0.793, -0.66);
    glVertex2f(0.793, -0.635);
    glVertex2f(0.79, -0.605);
    glVertex2f(0.788, -0.58);
    glVertex2f(0.783, -0.5675);
    glVertex2f(0.779, -0.5375);
    glVertex2f(0.774, -0.5125);
    glVertex2f(0.765, -0.48);
    glVertex2f(0.762, -0.47);
    glVertex2f(0.77, -0.455);
    glVertex2f(0.785, -0.4975);
    glVertex2f(0.791, -0.5);
    glVertex2f(0.798, -0.495);
    glVertex2f(0.804, -0.485);
    glVertex2f(0.805, -0.47);
    glVertex2f(0.808, -0.4375);
    glVertex2f(0.808, -0.43);
    glVertex2f(0.821, -0.44);
    glVertex2f(0.819, -0.465);
    glVertex2f(0.818, -0.485);
    glVertex2f(0.818, -0.52);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.819, -0.5475);
    glVertex2f(0.823, -0.5475);
    glVertex2f(0.827, -0.5325);
    glVertex2f(0.829, -0.5125);
    glVertex2f(0.835, -0.48);
    glVertex2f(0.836, -0.4725);
    glVertex2f(0.846, -0.4875);
    glVertex2f(0.842, -0.5425);
    glVertex2f(0.835, -0.5725);
    glVertex2f(0.833, -0.6025);
    glVertex2f(0.832, -0.6475);
    glVertex2f(0.832, -0.665);
    glVertex2f(0.833, -0.695);
    glVertex2f(0.837, -0.7225);
    glVertex2f(0.841, -0.755);
    glVertex2f(0.85, -0.795);
    glVertex2f(0.858, -0.8325);
    glVertex2f(0.86, -0.845);
    glVertex2f(0.853, -0.8475);
    glVertex2f(0.843, -0.84);
    glVertex2f(0.84, -0.835);
    glVertex2f(0.836, -0.84);
    glVertex2f(0.833, -0.855);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glEnd();


    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-1.004, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.9, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.65, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.55, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.35, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.25, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.15, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.0, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.2, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.4, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.7, -1.7, 0.0);

    bushRain1();
    glPopMatrix();

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.34f); // x, y
    glVertex2f(0.6f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.33f);  // x, y
    glVertex2f(0.379, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.34f); // x, y
    glVertex2f(0.1f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.33f);    // x, y
    glVertex2f(-0.179f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.34f); // x, y
    glVertex2f(-0.4f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.33f);   // x, y
    glVertex2f(-0.679f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.34f); // x, y
    glVertex2f(-1.3f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.34f); // x, y
    glVertex2f(1.2f, 0.32f);   // x, y

    glEnd();

    //2nd wire

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.35f); // x, y
    glVertex2f(0.6f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.34f);  // x, y
    glVertex2f(0.379, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.35f); // x, y
    glVertex2f(0.1f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.34f);    // x, y
    glVertex2f(-0.179f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.35f); // x, y
    glVertex2f(-0.4f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.34f);   // x, y
    glVertex2f(-0.679f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.35f); // x, y
    glVertex2f(-1.3f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.35f); // x, y
    glVertex2f(1.2f, 0.33f);   // x, y

    glEnd();


    poleRain3(0.0, 0.0, 1.0, 1.0);
    poleRain3(-0.52, 0.0, 1.0, 1.0);
    poleRain3(-1.08, 0.0, 1.0, 1.0);
    poleRain3(-1.57, 0.0, 1.0, 1.0);


    kharRain1(0.3, 0.0, 1.0, 1.0);

        glPushMatrix();//rainnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn;

    glTranslatef(positionRain1,positionRain1, 0.0f);
   glBegin(GL_LINES);
       glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.9f, 0.9f);
      glVertex2f(-0.925f, 0.875f);

      glVertex2f( -0.9f,  0.85f);
      glVertex2f(-0.925f,  0.825f);

      glVertex2f( -0.8f,  0.85f);
      glVertex2f(-0.825f,  0.825f);

      glVertex2f( -0.85f,  0.7f);
      glVertex2f(-0.875f,  0.675f);

      glVertex2f( -0.8f,  0.4f);
      glVertex2f(-0.825f,  0.375f);

       glVertex2f( -0.85f,  0.35f);
      glVertex2f(-0.875f,  0.325f);

       glVertex2f( -0.9f,  0.55f);
      glVertex2f(-0.925f,  0.525f);

       glVertex2f( -0.7f,  0.75f);
      glVertex2f(-0.725f,  0.725f);

       glVertex2f( -0.4f,  0.2f);
      glVertex2f(-0.415f,  0.185f);

       glVertex2f( -0.45f,  0.4f);
      glVertex2f(-0.465f,  0.385f);

       glVertex2f( -0.4f,  0.6f);
      glVertex2f(-0.415f,  0.585f);

       glVertex2f( -0.1f,  0.9f);
      glVertex2f(-0.115f,  0.885f);

       glVertex2f( -0.15f,  0.4f);
      glVertex2f(-0.165f,  0.385f);

       glVertex2f( -0.5f,  0.2f);
      glVertex2f(-0.515f,  0.185f);

       glVertex2f( -0.5f,  0.3f);
      glVertex2f(-0.515f,  0.285f);

       glVertex2f( -0.5f,  0.4f);
      glVertex2f(-0.515f,  0.385f);

       glVertex2f( -0.8f,  0.9f);
      glVertex2f(-0.815f,  0.885f);

       glVertex2f( -0.7f,  0.4f);
      glVertex2f(-0.715f,  0.385f);

       glVertex2f( -0.7f,  0.5f);
      glVertex2f(-0.715f,  0.485f);

       glVertex2f( -0.9f,  0.1f);
      glVertex2f(-0.915f,  0.085f);

       glVertex2f( -0.9f,  0.2f);
      glVertex2f(-0.915f,  0.185f);

       glVertex2f( -0.9f,  0.3f);
      glVertex2f(-0.915f,  0.285f);

       glVertex2f( -0.9f,  0.4f);
      glVertex2f(-0.915f,  0.385f);

       glVertex2f( -0.5f,  0.5f);
      glVertex2f(-0.515f,  0.485f);

      glVertex2f( -0.9f,  0.85f);
      glVertex2f(-0.925f,  0.825f);

      glVertex2f( -0.8f,  0.85f);
      glVertex2f(-0.825f,  0.825f);

      glVertex2f( -0.85f,  0.7f);
      glVertex2f(-0.875f,  0.675f);

      glVertex2f( -0.8f,  0.4f);
      glVertex2f(-0.825f,  0.375f);

       glVertex2f( -0.85f,  0.35f);
      glVertex2f(-0.875f,  0.325f);

       glVertex2f( -0.9f,  0.55f);
      glVertex2f(-0.925f,  0.525f);

       glVertex2f( -0.7f,  0.75f);
      glVertex2f(-0.725f,  0.725f);

       glVertex2f( -0.4f,  0.2f);
      glVertex2f(-0.415f,  0.185f);

       glVertex2f( -0.45f,  0.4f);
      glVertex2f(-0.465f,  0.385f);

       glVertex2f( -0.4f,  0.6f);
      glVertex2f(-0.415f,  0.585f);

       glVertex2f( -0.1f,  0.9f);
      glVertex2f(-0.115f,  0.885f);

       glVertex2f( -0.15f,  0.4f);
      glVertex2f(-0.165f,  0.385f);


             glVertex2f( -0.5f,  0.1f);
      glVertex2f(-0.485f,  0.115f);

       glVertex2f( -0.2f,  0.8f);
      glVertex2f(-0.215f,  0.785f);

       glVertex2f(- 0.3f,  0.4f);
      glVertex2f(-0.285f,  0.415f);

       glVertex2f( -0.6f,  0.52f);
      glVertex2f(-0.615f,  0.505f);

       glVertex2f( -0.5f,  0.8f);
      glVertex2f(-0.485f,  0.815f);

       glVertex2f( -0.2f,  0.7f);
      glVertex2f(-0.215f,  0.685f);

       glVertex2f( -0.1f,  0.2f);
      glVertex2f(-0.115f,  0.185f);

      glVertex2f( -0.7f,  0.5f);
      glVertex2f(-0.685f,  0.485f);

      glVertex2f( -0.6f,  0.6f);
      glVertex2f(-0.615f,  0.585f);

      glVertex2f( -0.4f,  0.75f);
      glVertex2f(-0.415f,  0.765f);

      glVertex2f( -.5f,  0.8f);
      glVertex2f(-0.515f,  0.785f);

      glVertex2f( -0.5f,  0.9f);
      glVertex2f(-0.515f,  0.885f);

      glVertex2f( -0.2f,  0.7f);
      glVertex2f(-0.215f,  0.685f);

             glVertex2f( -0.1f,  0.4f);
      glVertex2f(-0.085f,  0.415f);

       glVertex2f( -0.2f,  0.43f);
      glVertex2f(-0.215f,  0.415f);

       glVertex2f( -0.3f,  0.37f);
      glVertex2f(-0.285f,  0.385f);

       glVertex2f( -0.4f,  0.4f);
      glVertex2f(-0.415f,  0.385f);

       glVertex2f( -0.5f,  0.4f);
      glVertex2f(-0.485f,  0.415f);

       glVertex2f( -0.6f,  0.37f);
      glVertex2f(-0.585f,  0.385f);

       glVertex2f(- 0.7f,  0.43f);
      glVertex2f(-0.715f,  0.415f);

      glVertex2f( -0.67f,  0.5f);
      glVertex2f(-0.685f,  0.485f);

      glVertex2f( -0.8f,  0.2f);
      glVertex2f(-0.785f,  0.215f);

      glVertex2f( -0.9f,  0.15f);
      glVertex2f(-0.915f,  0.135f);

      glVertex2f( -1.0f,  0.1f);
      glVertex2f(-0.985f,  0.115f);

      glVertex2f( -0.5f,  0.9f);
      glVertex2f(-0.515f,  0.885f);

      glVertex2f( -0.1f,  0.7f);
      glVertex2f(-0.115f,  0.685f);

       glVertex2f( 0.05f,  0.2f);
      glVertex2f(0.020f,  0.185f);

       glVertex2f( -0.0f,  0.3f);
      glVertex2f(-0.015f,  0.285f);

       glVertex2f( -0.1f,  0.4f);
      glVertex2f(-0.115f,  0.385f);

       glVertex2f( -0.19f,  0.9f);
      glVertex2f(-0.205f,  0.885f);

       glVertex2f( -0.27f,  0.4f);
      glVertex2f(-0.285f,  0.385f);

       glVertex2f( -0.24f,  0.2f);
      glVertex2f(-0.255f,  0.185f);

       glVertex2f( -0.52f,  0.9f);
      glVertex2f(-0.535f,  0.885f);

       glVertex2f( -0.5f,  0.2f);
      glVertex2f(-0.515f,  0.185f);

       glVertex2f( -0.5f,  0.3f);
      glVertex2f(-0.515f,  0.285f);

       glVertex2f( -0.5f,  0.1f);
      glVertex2f(-0.515f,  0.085f);

       glVertex2f( -0.9f,  0.5f);
      glVertex2f(-0.915f,  0.485f);

       glVertex2f( -0.1f,  0.4f);
      glVertex2f(-0.085f,  0.415f);

       glVertex2f( -0.2f,  0.4f);
      glVertex2f(-0.185f,  0.415f);

       glVertex2f( -0.3f,  0.4f);
      glVertex2f(-0.285f,  0.415f);

       glVertex2f( -0.4f,  0.4f);
      glVertex2f(-0.385f,  0.415f);

       glVertex2f( -0.5f,  0.4f);
      glVertex2f(-0.485f,  0.415f);

       glVertex2f( -0.6f,  0.4f);
      glVertex2f(-0.585f,  0.415f);




//4th axis;
       glVertex2f( 0.1f,  -0.4f);
      glVertex2f(0.085f,  -0.415f);

       glVertex2f( 0.2f,  -0.4f);
      glVertex2f(0.185f,  -0.415f);

       glVertex2f( 0.3f,  -0.4f);
      glVertex2f(0.285f,  -0.415f);

       glVertex2f( 0.4f,  -0.4f);
      glVertex2f(0.385f,  -0.415f);

       glVertex2f( 0.5f,  -0.4f);
      glVertex2f(0.485f,  -0.415f);

       glVertex2f( 0.6f,  -0.4f);
      glVertex2f(0.585f,  -0.415f);

       glVertex2f( 0.7f,  -0.4f);
      glVertex2f(0.685f,  -0.415f);

      glVertex2f( 0.7f,  -0.5f);
      glVertex2f(0.685f,  -0.515f);

      glVertex2f( 0.8f,  -0.2f);
      glVertex2f(0.785f,  -0.215f);

      glVertex2f( 0.9f,  -0.15f);
      glVertex2f(0.885f,  -0.165f);

      glVertex2f( 1.0f,  -0.1f);
      glVertex2f(0.985f,  -0.115f);

      glVertex2f( 0.5f,  -0.9f);
      glVertex2f(0.485f,  -0.915f);

      glVertex2f( 0.1f,  -0.7f);
      glVertex2f(0.085f,  -0.715f);

      glVertex2f( 0.1f,  -0.640f);
      glVertex2f(0.085f,  -0.655f);

      glVertex2f( 0.2f,  -0.9f);
      glVertex2f(0.185f,  -0.915f);

      glVertex2f( 0.75f,  -0.8f);
      glVertex2f(0.735f,  -0.815f);

      glVertex2f( 0.87f,  -0.4f);
      glVertex2f(0.855f,  -0.415f);

      glVertex2f( 0.9f,  -0.9f);
      glVertex2f(0.885f,  -0.915f);

      glVertex2f( 0.8f,  -0.8f);
      glVertex2f(0.785f,  -0.815f);

      glVertex2f( 1.0f,  -0.4f);
      glVertex2f(0.985f,  -0.415f);

      glVertex2f( 1.0f,  -0.7f);
      glVertex2f(0.985f,  -0.715f);

      glVertex2f( 0.9f,  -0.4f);
      glVertex2f(0.885f,  -0.415f);

      glVertex2f( 0.7f,  -0.6f);
      glVertex2f(0.685f,  -0.615f);

      glVertex2f( 0.3f,  -0.1f);
      glVertex2f(0.285f,  -0.115f);

      glVertex2f( 0.1f,  -0.1f);
      glVertex2f(0.085f,  -0.115f);

      glVertex2f( 0.2f,  -0.2f);
      glVertex2f(0.185f,  -0.215f);

      glVertex2f( 0.3f,  -0.3f);
      glVertex2f(0.285f,  -0.315f);

      glVertex2f( 0.4f,  -0.4f);
      glVertex2f(0.385f,  -0.415f);

      glVertex2f( 0.5f,  -0.5f);
      glVertex2f(0.485f,  -0.515f);

      glVertex2f( 0.6f,  -0.6f);
      glVertex2f(0.585f,  -0.615f);

      glVertex2f( 0.7f,  -0.7f);
      glVertex2f(0.685f,  -0.715f);

      glVertex2f( 0.8f,  -0.8f);
      glVertex2f(0.785f,  -0.815f);

      glVertex2f( 0.9f,  -0.9f);
      glVertex2f(0.885f,  -0.915f);

      glVertex2f( 0.4f,  -0.7f);
      glVertex2f(0.385f,  -0.715f);

      glVertex2f( 0.5f,  -0.7f);
      glVertex2f(0.485f,  -0.715f);

      glVertex2f( 0.65f,  -0.9f);
      glVertex2f(0.635f,  -0.915f);

      glVertex2f( 0.75f,  -0.7f);
      glVertex2f(0.735f,  -0.715f);

      glVertex2f( 0.5f,  -0.1f);
      glVertex2f(0.485f,  -0.115f);

      glVertex2f( 1.2f,  -0.1f);
      glVertex2f(1.185f,  -0.115f);

      glVertex2f( 0.5f,  -0.6f);
      glVertex2f(0.485f,  -0.615f);

      glVertex2f( 0.3f,  -0.1f);
      glVertex2f(0.285f,  -0.115f);

      glVertex2f( 0.3f,  -0.5f);
      glVertex2f(0.285f,  -0.515f);

      glVertex2f( 0.3f,  -0.8f);
      glVertex2f(0.285f,  -0.815f);

      glVertex2f( 0.4f,  -0.15f);
      glVertex2f(0.385f,  -0.165f);

      glVertex2f( 0.4f,  -0.35f);
      glVertex2f(0.385f,  -0.365f);

      glVertex2f( 0.4f,  -0.55f);
      glVertex2f(0.385f,  -0.565f);

      glVertex2f( 0.5f,  -0.1f);
      glVertex2f(0.485f,  -0.115f);

      glVertex2f( 0.6f,  -0.4f);
      glVertex2f(0.585f,  -0.415f);

      glVertex2f( 0.7f,  -0.4f);
      glVertex2f(0.685f,  -0.415f);

      glVertex2f( 0.2f,  -0.3f);
      glVertex2f(0.185f,  -0.315f);

      glVertex2f( 0.2f,  -0.35f);
      glVertex2f(0.185f,  -0.365f);

      glVertex2f( 0.2f,  -0.4f);
      glVertex2f(0.185f,  -0.415f);

      glVertex2f( 0.2f,  -0.5f);
      glVertex2f(0.185f,  -0.515f);

      glVertex2f( 0.2f,  -0.6f);
      glVertex2f(0.185f,  -0.615f);

      glVertex2f( 0.2f,  -0.7f);
      glVertex2f(0.185f,  -0.715f);

      glVertex2f( 0.2f,  -0.8f);
      glVertex2f(0.185f,  -0.815f);

      glVertex2f( 0.2f,  -1.0f);
      glVertex2f(0.185f,  -1.015f);

      glVertex2f( 0.3f,  -0.7f);
      glVertex2f(0.285f,  -0.715f);

      glVertex2f( 0.3f,  -0.8f);
      glVertex2f(0.285f,  -0.815f);

      glVertex2f( 0.3f,  -1.0f);
      glVertex2f(0.285f,  -1.015f);

      glVertex2f( 0.3f,  -0.6f);
      glVertex2f(0.285f,  -0.615f);

      glVertex2f( 0.5f,  -0.7f);
      glVertex2f(0.485f,  -0.715f);

      glVertex2f( 0.4f,  -0.8f);
      glVertex2f(0.385f,  -0.815f);

      glVertex2f( 0.6f,  -0.1f);
      glVertex2f(0.585f,  -0.115f);

      glVertex2f( 0.7f,  -0.1f);
      glVertex2f(0.685f,  -0.115f);

      glVertex2f( 0.7f,  -0.2f);
      glVertex2f(0.685f,  -0.215f);

      glVertex2f( 0.8f,  -0.5f);
      glVertex2f(0.785f,  -0.515f);

      glVertex2f( 0.1f,  -0.2f);
      glVertex2f(0.085f,  -0.215f);

      glVertex2f( 0.1f,  -0.3f);
      glVertex2f(0.085f,  -0.315f);

      glVertex2f( 0.1f,  -0.5f);
      glVertex2f(0.085f,  -0.515f);

      glVertex2f( 0.1f,  -0.8f);
      glVertex2f(0.085f,  -0.815f);

      glVertex2f( 0.1f,  -0.9f);
      glVertex2f(0.085f,  -0.915f);

      glVertex2f( 0.3f,  -0.2f);
      glVertex2f(0.285f,  -0.215f);

      glVertex2f( 0.3f,  -0.9f);
      glVertex2f(0.285f,  -0.915f);

      glVertex2f( 0.4f,  -0.3f);
      glVertex2f(0.385f,  -0.315f);

      glVertex2f( 0.5f,  -0.2f);
      glVertex2f(0.485f,  -0.215f);

      glVertex2f( 0.5f,  -0.3f);
      glVertex2f(0.485f,  -0.315f);

      glVertex2f( 0.5f,  -0.4f);
      glVertex2f(0.485f,  -0.415f);

      glVertex2f( 0.6f,  -0.2f);
      glVertex2f(0.585f,  -0.215f);

      glVertex2f( 0.6f,  -0.3f);
      glVertex2f(0.585f,  -0.315f);

      glVertex2f( 0.6f,  -0.5f);
      glVertex2f(0.585f,  -0.515f);

      glVertex2f( 0.6f,  -0.7f);
      glVertex2f(0.585f,  -0.715f);

      glVertex2f( 0.6f,  -0.8f);
      glVertex2f(0.585f,  -0.815f);

      glVertex2f( 0.75f,  -0.45f);
      glVertex2f(0.735f,  -0.465f);

      glVertex2f( 0.15f,  -0.1f);
      glVertex2f(0.135f,  -0.115f);

      glVertex2f( 0.15f,  -0.5f);
      glVertex2f(0.135f,  -0.515f);

      glVertex2f( 0.55f,  -0.7f);
      glVertex2f(0.535f,  -0.715f);

      glVertex2f( 0.55f,  -0.9f);
      glVertex2f(0.535f,  -0.915f);

      glVertex2f( 0.25f,  -0.15f);
      glVertex2f(0.235f,  -0.165f);

      glVertex2f( 0.25f,  -0.65f);
      glVertex2f(0.235f,  -0.665f);

      glVertex2f( 0.95f,  -0.55f);
      glVertex2f(0.935f,  -0.565f);

      glVertex2f( 0.75f,  -0.35f);
      glVertex2f(0.735f,  -0.365f);

      glVertex2f( 0.83f,  -0.1f);
      glVertex2f(0.815f,  -0.115f);

      glVertex2f( 0.75f,  -0.95f);
      glVertex2f(0.735f,  -0.965f);

      glVertex2f( 0.55f,  -0.1f);
      glVertex2f(0.535f,  -0.115f);

      glVertex2f( 0.95f,  -0.5f);
      glVertex2f(0.935f,  -0.515f);

      glVertex2f( 0.815f,  -0.7f);
      glVertex2f(0.8f,  -0.715f);

      glVertex2f( 0.915f,  -0.7f);
      glVertex2f(0.9f,  -0.715f);

      glVertex2f( 0.8f,  -0.7f);
      glVertex2f(0.785f,  -0.715f);

      glVertex2f( 0.85f,  -0.95f);
      glVertex2f(0.835f,  -0.965f);



      //1st;

       glVertex2f( 0.1f,  0.4f);
      glVertex2f(0.085f,  0.385f);

       glVertex2f( 0.2f,  0.4f);
      glVertex2f(0.215f,  0.415f);

       glVertex2f( 0.3f,  0.4f);
      glVertex2f(0.285f,  0.385f);

       glVertex2f( 0.4f,  0.4f);
      glVertex2f(0.415f,  0.415f);

       glVertex2f( 0.5f,  0.4f);
      glVertex2f(0.485f,  0.385f);

       glVertex2f( 0.6f,  0.4f);
      glVertex2f(0.585f,  0.385f);

       glVertex2f( 0.7f,  0.4f);
      glVertex2f(0.715f,  0.415f);

      glVertex2f( 0.7f,  0.5f);
      glVertex2f(0.685f,  0.485f);

      glVertex2f( 0.8f,  0.2f);
      glVertex2f(0.785f,  0.185f);

      glVertex2f( 0.9f,  0.15f);
      glVertex2f(0.915f,  0.165f);

      glVertex2f( 1.0f,  0.1f);
      glVertex2f(0.985f,  0.085f);

      glVertex2f( 0.5f,  0.9f);
      glVertex2f(0.515f,  0.915f);

      glVertex2f( 0.1f,  0.7f);
      glVertex2f(0.115f,  0.715f);

      glVertex2f( 0.115f,  0.640f);
      glVertex2f(0.1f,  0.625f);

      glVertex2f( 0.2f,  0.9f);
      glVertex2f(0.215f, 0.915f);

      glVertex2f( 0.75f,  0.8f);
      glVertex2f(0.735f,  0.785f);

      glVertex2f( 0.87f,  0.4f);
      glVertex2f(0.885f,  0.415f);

      glVertex2f( 0.9f,  0.9f);
      glVertex2f(0.915f,  0.915f);

      glVertex2f( 0.8f,  0.8f);
      glVertex2f(0.815f,  0.815f);

      glVertex2f( 1.0f,  0.4f);
      glVertex2f(0.985f,  0.385f);

      glVertex2f( 1.0f,  0.7f);
      glVertex2f(0.985f,  0.685f);

      glVertex2f( 0.9f,  0.4f);
      glVertex2f(0.885f,  0.385f);

      glVertex2f( 0.7f,  0.6f);
      glVertex2f(0.715f,  0.615f);

      glVertex2f( 0.35f,  0.1f);
      glVertex2f(0.365f,  0.115f);

      glVertex2f( 0.15f,  0.15f);
      glVertex2f(0.115f,  0.115f);

      glVertex2f( 0.2f,  0.2f);
      glVertex2f(0.215f,  0.215f);

      glVertex2f( 0.3f,  0.3f);
      glVertex2f(0.285f,  0.285f);

      glVertex2f( 0.4f,  0.4f);
      glVertex2f(0.385f,  0.385f);

      glVertex2f( 0.5f,  0.5f);
      glVertex2f(0.485f,  0.485f);

      glVertex2f( 0.6f,  0.6f);
      glVertex2f(0.615f, 0.615f);

      glVertex2f( 0.7f,  0.7f);
      glVertex2f(0.685f,  0.685f);

      glVertex2f( 0.8f,  0.8f);
      glVertex2f(0.815f,  0.815f);

      glVertex2f( 0.9f,  0.95f);
      glVertex2f(0.885f,  0.935f);

      glVertex2f( 0.45f,  0.7f);
      glVertex2f(0.465f,  0.715f);

      glVertex2f( 0.5f,  0.7f);
      glVertex2f(0.515f,  0.715f);

      glVertex2f( 0.65f,  0.9f);
      glVertex2f(0.665f,  0.915f);

      glVertex2f( 0.75f,  0.7f);
      glVertex2f(0.765f,  0.715f);

      glVertex2f( 0.5f,  0.1f);
      glVertex2f(0.515f,  0.115f);

      glVertex2f( 1.1f,  0.1f);
      glVertex2f(1.085f,  0.085f);

      glVertex2f( 0.5f,  0.6f);
      glVertex2f(0.515f,  0.615f);

      glVertex2f( 0.3f,  0.1f);
      glVertex2f(0.315f,  0.115f);

      glVertex2f( 0.35f,  0.5f);
      glVertex2f(0.365f,  0.515f);

      glVertex2f( 0.3f,  0.8f);
      glVertex2f(0.315f,  0.815f);

      glVertex2f( 0.45f,  0.15f);
      glVertex2f(0.465f,  0.165f);

      glVertex2f( 0.4f,  0.35f);
      glVertex2f(0.415f,  0.365f);

      glVertex2f( 0.4f,  0.55f);
      glVertex2f(0.385f,  0.535f);

      glVertex2f( 0.5f,  0.1f);
      glVertex2f(0.485f,  0.085f);

      glVertex2f( 0.6f,  0.4f);
      glVertex2f(0.585f,  0.415f);

      glVertex2f( 0.7f,  0.4f);
      glVertex2f(0.715f,  0.415f);

      glVertex2f( 0.2f,  0.3f);
      glVertex2f(0.215f,  0.315f);

      glVertex2f( 0.2f,  0.35f);
      glVertex2f(0.215f,  0.365f);

      glVertex2f( 0.2f,  0.4f);
      glVertex2f(0.185f,  0.385f);

      glVertex2f( 0.2f,  0.5f);
      glVertex2f(0.215f,  0.515f);

      glVertex2f( 0.25f,  0.6f);
      glVertex2f(0.265f,  0.615f);

      glVertex2f( 0.25f,  0.7f);
      glVertex2f(0.265f,  0.715f);

      glVertex2f( 0.2f,  0.8f);
      glVertex2f(0.215f,  0.815f);

      glVertex2f( 0.2f,  1.0f);
      glVertex2f(0.215f,  1.015f);

      glVertex2f( 0.3f,  0.7f);
      glVertex2f(0.315f,  0.715f);

      glVertex2f( 0.35f,  0.8f);
      glVertex2f(0.365f,  0.815f);

      glVertex2f( 0.3f,  1.0f);
      glVertex2f(0.315f,  1.015f);

      glVertex2f( 0.33f,  0.6f);
      glVertex2f(0.355f,  0.615f);

      glVertex2f( 0.5f,  0.7f);
      glVertex2f(0.485f,  0.685f);

      glVertex2f( 0.4f,  0.8f);
      glVertex2f(0.385f,  0.785f);

      glVertex2f( 0.6f,  0.1f);
      glVertex2f(0.585f,  0.085f);

      glVertex2f( 0.7f,  0.1f);
      glVertex2f(0.685f,  0.085f);

      glVertex2f( 0.7f,  0.2f);
      glVertex2f(0.685f,  0.215f);

      glVertex2f( 0.8f,  0.5f);
      glVertex2f(0.815f,  0.515f);

      glVertex2f( 0.1f,  0.2f);
      glVertex2f(0.085f,  0.185f);

      glVertex2f( 0.1f,  0.3f);
      glVertex2f(0.115f,  0.315f);

      glVertex2f( 0.1f,  0.5f);
      glVertex2f(0.085f,  0.485f);

      glVertex2f( 0.1f,  0.8f);
      glVertex2f(0.115f,  0.815f);

      glVertex2f( 0.1f,  0.9f);
      glVertex2f(0.085f,  0.885f);

      glVertex2f( 0.3f,  0.2f);
      glVertex2f(0.315f,  0.215f);

      glVertex2f( 0.3f,  0.9f);
      glVertex2f(0.285f,  0.885f);

      glVertex2f( 0.4f,  0.35f);
      glVertex2f(0.385f,  0.335f);

      glVertex2f( 0.5f,  0.2f);
      glVertex2f(0.515f,  0.215f);

      glVertex2f( 0.5f,  0.3f);
      glVertex2f(0.485f,  0.285f);

      glVertex2f( 0.5f,  0.43f);
      glVertex2f(0.485f,  0.415f);

      glVertex2f( 0.6f,  0.23f);
      glVertex2f(0.585f,  0.215f);

      glVertex2f( 0.6f,  0.3f);
      glVertex2f(0.615f,  0.315f);

      glVertex2f( 0.6f,  0.53f);
      glVertex2f(0.585f,  0.515f);

      glVertex2f( 0.6f,  0.7f);
      glVertex2f(0.585f,  0.685f);

      glVertex2f( 0.6f,  0.8f);
      glVertex2f(0.615f,  0.815f);

      glVertex2f( 0.75f,  0.45f);
      glVertex2f(0.765f,  0.465f);

      glVertex2f( 0.15f,  0.15f);
      glVertex2f(0.135f,  0.135f);

      glVertex2f( 0.15f,  0.53f);
      glVertex2f(0.135f,  0.515f);

      glVertex2f( 0.55f,  0.7f);
      glVertex2f(0.565f,  0.715f);

      glVertex2f( 0.52f,  0.9f);
      glVertex2f(0.535f,  0.915f);

      glVertex2f( 0.25f,  0.15f);
      glVertex2f(0.235f,  0.135f);

      glVertex2f( 0.25f,  0.65f);
      glVertex2f(0.265f,  0.665f);

      glVertex2f( 0.95f,  0.55f);
      glVertex2f(0.965f,  0.565f);

      glVertex2f( 0.75f,  0.35f);
      glVertex2f(0.735f,  0.335f);

      glVertex2f( 0.83f,  0.1f);
      glVertex2f(0.855f,  0.115f);

      glVertex2f( 0.75f,  0.95f);
      glVertex2f(0.735f,  0.935f);

      glVertex2f( 0.55f,  0.1f);
      glVertex2f(0.565f,  0.115f);

      glVertex2f( 0.95f,  0.53f);
      glVertex2f(0.935f,  0.515f);

      glVertex2f( 0.815f,  0.7f);
      glVertex2f(0.8f,  0.685f);

      glVertex2f( 0.915f,  0.73f);
      glVertex2f(0.9f,  0.715f);

      glVertex2f( 0.82f,  0.7f);
      glVertex2f(0.835f,  0.715f);

      glVertex2f( 0.85f,  0.95f);
      glVertex2f(0.865f,  0.965f);

        glVertex2f( 0.85f,  1.0f);
      glVertex2f(0.865f,  1.015f);

        glVertex2f( 0.75f,  0.95f);
      glVertex2f(0.765f,  0.965f);

        glVertex2f( 1.0f,  0.95f);
      glVertex2f(1.015f,  0.965f);

        glVertex2f( 1.0f,  1.0f);
      glVertex2f(1.015f,  1.015f);

        glVertex2f( 0.85f,  0.0f);
      glVertex2f(0.865f,  0.015f);

        glVertex2f( 0.1f,  0.0f);
      glVertex2f(0.115f,  0.015f);

        glVertex2f( 0.25f,  0.0f);
      glVertex2f(0.265f,  0.015f);

        glVertex2f( 0.4f,  0.0f);
      glVertex2f(0.415f,  0.015f);

        glVertex2f( 0.55f,  0.0f);
      glVertex2f(0.565f,  0.015f);



      //3rd;

      glVertex2f( -0.1f,  -0.4f);
      glVertex2f(-0.085f,  -0.385f);

       glVertex2f( -0.2f,  -0.4f);
      glVertex2f(-0.215f,  -0.415f);

       glVertex2f( -0.3f,  -0.4f);
      glVertex2f(-0.285f,  -0.385f);

       glVertex2f( -0.4f,  -0.4f);
      glVertex2f(-0.415f,  -0.415f);

       glVertex2f( -0.5f,  -0.4f);
      glVertex2f(-0.485f,  -0.385f);

       glVertex2f( -0.6f,  -0.4f);
      glVertex2f(-0.585f,  -0.385f);

       glVertex2f( -0.7f,  -0.4f);
      glVertex2f(-0.715f,  -0.415f);

      glVertex2f( -0.7f,  -0.5f);
      glVertex2f(-0.685f,  -0.485f);

      glVertex2f( -0.8f,  -0.2f);
      glVertex2f(-0.785f,  -0.185f);

      glVertex2f( -0.9f,  -0.15f);
      glVertex2f(-0.915f,  -0.165f);

      glVertex2f( -1.0f,  -0.1f);
      glVertex2f(-0.985f,  -0.085f);

      glVertex2f( -0.5f,  -0.9f);
      glVertex2f(-0.515f,  -0.915f);

      glVertex2f( -0.1f,  -0.7f);
      glVertex2f(-0.115f,  -0.715f);

      glVertex2f( -0.115f,  -0.640f);
      glVertex2f(-0.1f,  -0.625f);

      glVertex2f( -0.2f,  -0.9f);
      glVertex2f(-0.215f, -0.915f);

      glVertex2f( -0.75f,  -0.8f);
      glVertex2f(-0.735f,  -0.785f);

      glVertex2f( -0.87f,  -0.4f);
      glVertex2f(-0.885f,  -0.415f);

      glVertex2f( -0.9f,  -0.9f);
      glVertex2f(-0.915f,  -0.915f);

      glVertex2f( -0.8f,  -0.8f);
      glVertex2f(-0.815f,  -0.815f);

      glVertex2f( -1.0f,  -0.4f);
      glVertex2f(-0.985f,  -0.385f);

      glVertex2f( -1.0f,  -0.7f);
      glVertex2f(-0.985f,  -0.685f);

      glVertex2f( -0.9f,  -0.4f);
      glVertex2f(-0.885f,  -0.385f);

      glVertex2f( -0.7f,  -0.6f);
      glVertex2f(-0.715f,  -0.615f);

      glVertex2f( -0.35f,  -0.1f);
      glVertex2f(-0.365f,  -0.115f);

      glVertex2f( -0.15f,  -0.15f);
      glVertex2f(-0.115f,  -0.115f);

      glVertex2f( -0.2f,  -0.2f);
      glVertex2f(-0.215f,  -0.215f);

      glVertex2f( -0.3f,  -0.3f);
      glVertex2f(-0.285f,  -0.285f);

      glVertex2f( -0.4f,  -0.4f);
      glVertex2f(-0.385f,  -0.385f);

      glVertex2f( -0.5f,  -0.5f);
      glVertex2f(-0.485f,  -0.485f);

      glVertex2f( -0.6f,  -0.6f);
      glVertex2f(-0.615f, -0.615f);

      glVertex2f( -0.7f,  -0.7f);
      glVertex2f(-0.685f,  -0.685f);

      glVertex2f( -0.8f,  -0.8f);
      glVertex2f(-0.815f,  -0.815f);

      glVertex2f( -0.9f,  -0.95f);
      glVertex2f(-0.885f,  -0.935f);

      glVertex2f( -0.45f,  -0.7f);
      glVertex2f(-0.465f,  -0.715f);

      glVertex2f( -0.5f,  -0.7f);
      glVertex2f(-0.515f,  -0.715f);

      glVertex2f( -0.65f,  -0.9f);
      glVertex2f(-0.665f,  -0.915f);

      glVertex2f( -0.75f,  -0.7f);
      glVertex2f(-0.765f,  -0.715f);

      glVertex2f( -0.5f,  -0.1f);
      glVertex2f(-0.515f,  -0.115f);

      glVertex2f( -1.1f,  -0.1f);
      glVertex2f(-1.085f,  -0.085f);

      glVertex2f( -0.5f,  -0.6f);
      glVertex2f(-0.515f,  -0.615f);

      glVertex2f( -0.3f,  -0.1f);
      glVertex2f(-0.315f,  -0.115f);

      glVertex2f( -0.35f,  -0.5f);
      glVertex2f(-0.365f,  -0.515f);

      glVertex2f( -0.3f,  -0.8f);
      glVertex2f(-0.315f,  -0.815f);

      glVertex2f( -0.45f,  -0.15f);
      glVertex2f(-0.465f,  -0.165f);

      glVertex2f( -0.4f,  -0.35f);
      glVertex2f(-0.415f,  -0.365f);

      glVertex2f( -0.4f,  -0.55f);
      glVertex2f(-0.385f,  -0.535f);

      glVertex2f( -0.5f,  -0.1f);
      glVertex2f(-0.485f,  -0.085f);

      glVertex2f( -0.6f,  -0.4f);
      glVertex2f(-0.585f,  -0.415f);

      glVertex2f( -0.7f,  -0.4f);
      glVertex2f(-0.715f,  -0.415f);

      glVertex2f( -0.2f,  -0.3f);
      glVertex2f(-0.215f,  -0.315f);

      glVertex2f( -0.2f,  -0.35f);
      glVertex2f(-0.215f,  -0.365f);

      glVertex2f( -0.2f,  -0.4f);
      glVertex2f(-0.185f,  -0.385f);

      glVertex2f( -0.2f,  -0.5f);
      glVertex2f(-0.215f,  -0.515f);

      glVertex2f( -0.25f,  -0.6f);
      glVertex2f(-0.265f,  -0.615f);

      glVertex2f(- 0.25f,  -0.7f);
      glVertex2f(-0.265f,  -0.715f);

      glVertex2f( -0.2f,  -0.8f);
      glVertex2f(-0.215f,  -0.815f);

      glVertex2f(- 0.2f,  -1.0f);
      glVertex2f(-0.215f,  -1.015f);

      glVertex2f( -0.3f,  -0.7f);
      glVertex2f(-0.315f,  -0.715f);

      glVertex2f(- 0.35f,  -0.8f);
      glVertex2f(-0.365f,  -0.815f);

      glVertex2f( -0.3f,  -1.0f);
      glVertex2f(-0.315f,  -1.015f);

      glVertex2f( -0.33f,  -0.6f);
      glVertex2f(-0.355f,  -0.615f);

      glVertex2f( -0.5f,  -0.7f);
      glVertex2f(-0.485f,  -0.685f);

      glVertex2f( -0.4f,  -0.8f);
      glVertex2f(-0.385f,  -0.785f);

      glVertex2f( -0.6f,  -0.1f);
      glVertex2f(-0.585f,  -0.085f);

      glVertex2f(- 0.7f,  -0.1f);
      glVertex2f(-0.685f,  -0.085f);

      glVertex2f( -0.7f, - 0.2f);
      glVertex2f(-0.685f,  -0.215f);

      glVertex2f( -0.8f,  -0.5f);
      glVertex2f(-0.815f,  -0.515f);

      glVertex2f( -0.1f, - 0.2f);
      glVertex2f(-0.085f,  -0.185f);

      glVertex2f( -0.1f,  -0.3f);
      glVertex2f(-0.115f,  -0.315f);

      glVertex2f( -0.1f,  -0.5f);
      glVertex2f(-0.085f,  -0.485f);

      glVertex2f( -0.1f,  -0.8f);
      glVertex2f(-0.115f,  -0.815f);

      glVertex2f( -0.1f,  -0.9f);
      glVertex2f(-0.085f,  -0.885f);

      glVertex2f( -0.3f,  -0.2f);
      glVertex2f(-0.315f,  -0.215f);

      glVertex2f( -0.3f,  -0.9f);
      glVertex2f(-0.285f,  -0.885f);

      glVertex2f( -0.4f,  -0.35f);
      glVertex2f(-0.385f,  -0.335f);

      glVertex2f( -0.5f,  -0.2f);
      glVertex2f(-0.515f,  -0.215f);

      glVertex2f( -0.5f,  -0.3f);
      glVertex2f(-0.485f, - 0.285f);

      glVertex2f( -0.5f,  -0.43f);
      glVertex2f(-0.485f,  -0.415f);

      glVertex2f( -0.6f,  -0.23f);
      glVertex2f(-0.585f,  -0.215f);

      glVertex2f( -0.6f,  -0.3f);
      glVertex2f(-0.615f,  -0.315f);

      glVertex2f( -0.6f,-0.53f);
      glVertex2f(-0.585f,  -0.515f);

      glVertex2f( -0.6f,  -0.7f);
      glVertex2f(-0.585f,  -0.685f);

      glVertex2f(- 0.6f,  -0.8f);
      glVertex2f(-0.615f,  -0.815f);

      glVertex2f( -0.75f,  -0.45f);
      glVertex2f(-0.765f,  -0.465f);

      glVertex2f( -0.15f,  -0.15f);
      glVertex2f(-0.135f, - 0.135f);

      glVertex2f( -0.15f,  -0.53f);
      glVertex2f(-0.135f,  -0.515f);

      glVertex2f( -0.55f,  -0.7f);
      glVertex2f(-0.565f,  -0.715f);

      glVertex2f( -0.52f,  -0.9f);
      glVertex2f(-0.535f,  -0.915f);

      glVertex2f( -0.25f,  -0.15f);
      glVertex2f(-0.235f,  -0.135f);

      glVertex2f( -0.25f,  -0.65f);
      glVertex2f(-0.265f,  -0.665f);

      glVertex2f( -0.95f,  -0.55f);
      glVertex2f(-0.965f,  -0.565f);

      glVertex2f( -0.75f,  -0.35f);
      glVertex2f(-0.735f,  -0.335f);

      glVertex2f( -0.83f,  -0.1f);
      glVertex2f(-0.855f,  -0.115f);

      glVertex2f( -0.75f,  -0.95f);
      glVertex2f(-0.735f,  -0.935f);

      glVertex2f( -0.55f,  -0.1f);
      glVertex2f(-0.565f,  -0.115f);

      glVertex2f( -0.95f, - 0.53f);
      glVertex2f(-0.935f,  -0.515f);

      glVertex2f( -0.815f,  -0.7f);
      glVertex2f(-0.8f,  -0.685f);

      glVertex2f( -0.915f,  -0.73f);
      glVertex2f(-0.9f,  -0.715f);

      glVertex2f( -0.82f,  -0.7f);
      glVertex2f(-0.835f,  -0.715f);

      glVertex2f( -0.85f,  -0.95f);
      glVertex2f(-0.865f,  -0.965f);

        glVertex2f( -0.85f,  -1.0f);
      glVertex2f(-0.865f,  -1.015f);

        glVertex2f( -0.75f,  -0.95f);
      glVertex2f(-0.765f,  -0.965f);

        glVertex2f( -1.0f,  -0.95f);
      glVertex2f(-1.015f,  -0.965f);

        glVertex2f( -1.0f,  -1.0f);
      glVertex2f(-1.015f,  -1.015f);

        glVertex2f( -0.85f,  0.0f);
      glVertex2f(-0.865f,  -0.015f);

        glVertex2f( -0.1f,  0.0f);
      glVertex2f(-0.115f,  -0.015f);

        glVertex2f( -0.25f,  0.0f);
      glVertex2f(-0.265f,  -0.015f);

        glVertex2f( -0.4f,  0.0f);
      glVertex2f(-0.415f,  -0.015f);

        glVertex2f( -0.55f,  0.0f);
      glVertex2f(-0.565f,  -0.015f);



   glEnd();

   glPopMatrix();


    glFlush(); // Render now

}

//--------------------------------------------ENDSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS------------------------------------------------------------------


//------------------------------------------FLOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOODD



void updateFlood3(int n)
{
    if (cloudFlood >=0.8 ) {
          cloudFlood =-1.2;
    }
    cloudFlood += 0.001;

    if (cloudFlood2 >=0.7 ) {
          cloudFlood2 =-1.2;
    }
    cloudFlood2 += 0.001;



    glutPostRedisplay();
    glutTimerFunc(20, updateFlood3, 0);
}

void kharFlood1 (float translateX, float translateY, float scaleX, float scaleY) {   //khor code

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);

    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(88, 70, 15); // Yellow (Khar)

    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.28f, -0.62f);
    glVertex2f(-0.283f, -0.68f);
    glVertex2f(-0.32f, -0.76f);
    glVertex2f(-0.324f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.27f, -0.6f);

    glEnd();


    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(74, 58, 10); // Yellow (khar shade)
    glVertex2f(-0.255f, -0.57f);
    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.24f, -0.834f);
    glVertex2f(-0.19f, -0.82f);
    glVertex2f(-0.2f, -0.77f);
    glVertex2f(-0.22f, -0.7f);
    glVertex2f(-0.23f, -0.65f);
    glVertex2f(-0.232f, -0.6f);
    glVertex2f(-0.25f, -0.588f);
    glEnd();

    glPopMatrix();
}

void poleFlood3(float translateX, float translateY, float scaleX, float scaleY)  // pole code
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.29);
    glVertex2f(0.89, 0.38);
    glVertex2f(0.885, 0.38);
    glVertex2f(0.885, 0.29);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.885, 0.333);
    glVertex2f(0.88, 0.35);
    glVertex2f(0.879, 0.34);
    glVertex2f(0.885, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.333);
    glVertex2f(0.895, 0.35);
    glVertex2f(0.896, 0.34);
    glVertex2f(0.89, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.88, 0.36);
    glVertex2f(0.873, 0.36);
    glVertex2f(0.873, 0.35);
    glVertex2f(0.88, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.895, 0.36);
    glVertex2f(0.902, 0.36);
    glVertex2f(0.902, 0.35);
    glVertex2f(0.895, 0.35);
    glEnd();
    glPopMatrix();
}


//GLfloat position = 0.0f;
//GLfloat speedRain = 6.0f;

void grassFlood2(float translateX, float translateY, float scaleX, float scaleY) //grass code
{
    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(52, 84, 30);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);
    glEnd();
    glPopMatrix();
}

void circleFlood(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2)
{
    int i;

    // GLfloat p1=0.8f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;  //(First cloudFlood)
    int tringle2 = 40;

    tp2 = tp2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    // glColor3ub ( 229,227,246);

    glVertex2f(p1, q1);
    for (i = 0; i <= tringle2; i++)
    {
        glVertex2f(
            p1 + (r1 * cos(i * tp2 / tringle2)),
            q1 + (r1 * sin(i * tp2 / tringle2)));
    }

    glEnd();
}
void cloudFlood1()
{
    glColor3ub(84, 83, 91); //(Mid cloudFlood )   --- cloudFlood code shade
    circleFlood(0.3, 0.9, 0.05, 2);
    circleFlood(0.21, 0.87, 0.04, 2);
    circleFlood(0.36, 0.87, 0.04, 2);
    circleFlood(0.28, 0.86, 0.046, 2);
    circleFlood(0.23, 0.9, 0.025, 2);
    circleFlood(0.35, 0.9, 0.025, 2);
    circleFlood(0.4, 0.87, 0.025, 2);
    circleFlood(0.33, 0.86, 0.025, 2);

    glColor3ub(49, 55, 61); //(Mid cloudFlood shade)  --- cloudFlood code body
    circleFlood(0.3, 0.9, 0.043, 2);
    circleFlood(0.21, 0.87, 0.033, 2);
    circleFlood(0.36, 0.87, 0.033, 2);
    circleFlood(0.28, 0.86, 0.04, 2);
    circleFlood(0.23, 0.9, 0.02, 2);
    circleFlood(0.35, 0.9, 0.01, 2);
    circleFlood(0.4, 0.87, 0.01, 2);
    circleFlood(0.33, 0.86, 0.01, 2);
}

void bushFlood1()
{
    glColor3ub(30, 60, 8); //( Bush ) -- bush code shade
    circleFlood(0.3, 0.9, 0.05, 2);
    circleFlood(0.21, 0.87, 0.04, 2);
    circleFlood(0.36, 0.87, 0.04, 2);
    circleFlood(0.28, 0.86, 0.046, 2);
    circleFlood(0.23, 0.9, 0.025, 2);
    circleFlood(0.35, 0.9, 0.025, 2);
    circleFlood(0.4, 0.87, 0.025, 2);
    circleFlood(0.33, 0.86, 0.025, 2);

    glColor3ub(22, 53, 5); //(Bush shade)  -- bush code body
    circleFlood(0.3, 0.9, 0.043, 2);
    circleFlood(0.21, 0.87, 0.033, 2);
    circleFlood(0.36, 0.87, 0.033, 2);
    circleFlood(0.28, 0.86, 0.04, 2);
    circleFlood(0.23, 0.9, 0.02, 2);
    circleFlood(0.35, 0.9, 0.01, 2);
    circleFlood(0.4, 0.87, 0.01, 2);
    circleFlood(0.33, 0.86, 0.01, 2);
}

void grassFlood1()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(79, 129, 37);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);
    glEnd();
}


void updateFlood2(int value) {

    if(positionFlood1 <=-0.7)
        positionFlood1 = 1.0f;

    positionFlood1 -= speedFlood1;

glutPostRedisplay();

glutTimerFunc(90, updateFlood2, 0);
}



void updateFlood1(int n)
{


    if (cloudFlood >=0.8 ) {
          cloudFlood =-1.2;
    }
    cloudFlood += 0.004;

    if (cloudFlood2 >=0.7 ) {
          cloudFlood2 =-1.2;
    }
    cloudFlood2 += 0.007;
    glutPostRedisplay();
    glutTimerFunc(20, updateFlood1, 0);
}


void floodView(){
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(.5);
    // Draw a Red 1x1 Square centered at origin

    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad -- sky code down up shade
    glColor3ub(35, 35, 35); // Saddle Brown (Sky colour)
    glVertex2f(-1.0f, 0.3f); // x, y
    glVertex2f(1.0f, 0.3f);

    glColor3ub(35, 35, 35);     //sky code up down shade
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();


    glColor3ub(255, 255, 255); // moon code white
    circleFlood(0.68, 0.72, 0.05, 2.5);
    glColor3ub(35, 35, 35); //moon code black
    circleFlood(0.66, 0.73, 0.05, 2.5);

    glColor3ub(84, 83, 91); //(1st cloudFlood) --cloudFlood code shade
    circleFlood(0.765, 0.73, 0.052, 2);
    circleFlood(0.705, 0.691, 0.03, 2);
    circleFlood(0.815, 0.70, 0.03, 2);
    glColor3ub(49, 55, 61); //(1st cloudFlood shade) -- cloudFlood code
    circleFlood(0.765, 0.73, 0.042, 2);
    circleFlood(0.705, 0.691, 0.025, 2);
    circleFlood(0.815, 0.70, 0.025, 2);

        glColor3ub(84, 83, 91); //(1st cloudFlood) --cloudFlood code shade
    circleFlood(-0.865, 0.68, 0.052, 2);
    circleFlood(-0.805, 0.641, 0.03, 2);
    circleFlood(-0.915, 0.65, 0.03, 2);
    glColor3ub(49, 55, 61); //(1st cloudFlood shade) -- cloudFlood code
    circleFlood(-0.865, 0.68, 0.042, 2);
    circleFlood(-0.805, 0.641, 0.025, 2);
    circleFlood(-0.915, 0.65, 0.025, 2);


    glColor3ub(84, 83, 91); //(1st cloudFlood) --cloudFlood code shade  --------
    circleFlood(-0.365, 0.58, 0.052, 2);
    circleFlood(-0.305, 0.541, 0.03, 2);
    circleFlood(-0.415, 0.55, 0.03, 2);
    glColor3ub(49, 55, 61); //(1st cloudFlood shade) -- cloudFlood code
    circleFlood(-0.365, 0.58, 0.042, 2);
    circleFlood(-0.305, 0.541, 0.025, 2);
    circleFlood(-0.415, 0.55, 0.025, 2);


    glColor3ub(84, 83, 91); // 2nd cloudFlood
    circleFlood(-0.5, 0.52, 0.03, 2);
    circleFlood(-0.43, 0.54, 0.05, 2);
    circleFlood(-0.365, 0.523, 0.03, 2);
    glColor3ub(49, 55, 61); //(2nd cloudFlood shade)
    circleFlood(-0.48, 0.52, 0.02, 2);
    circleFlood(-0.43, 0.54, 0.04, 2);
    circleFlood(-0.384, 0.523, 0.02, 2);


    glColor3ub(84, 83, 91); //(1st cloudFlood) --cloudFlood code shade    this oneeeeeee
    circleFlood(-0.765, 0.68, 0.052, 2);
    circleFlood(-0.705, 0.641, 0.03, 2);
    circleFlood(-0.815, 0.65, 0.03, 2);
    glColor3ub(49, 55, 61); //(1st cloudFlood shade) -- cloudFlood code
    circleFlood(-0.765, 0.68, 0.042, 2);
    circleFlood(-0.705, 0.641, 0.025, 2);
    circleFlood(-0.815, 0.65, 0.025, 2);


    glColor3ub(84, 83, 91); // 2nd cloudFlood
    circleFlood(-0.9, 0.82, 0.03, 2);
    circleFlood(-0.83, 0.84, 0.05, 2);
    circleFlood(-0.765, 0.823, 0.03, 2);
    glColor3ub(49, 55, 61); //(2nd cloudFlood shade)
    circleFlood(-0.88, 0.82, 0.02, 2);
    circleFlood(-0.83, 0.84, 0.04, 2);
    circleFlood(-0.784, 0.823, 0.02, 2);

    glColor3ub(84, 83, 91); // 2nd cloudFlood
    circleFlood(0.7, 0.82, 0.03, 2);
    circleFlood(0.63, 0.84, 0.05, 2);
    circleFlood(0.565, 0.823, 0.03, 2);
    glColor3ub(49, 55, 61); //(2nd cloudFlood shade)
    circleFlood(0.68, 0.82, 0.02, 2);
    circleFlood(0.63, 0.84, 0.04, 2);
    circleFlood(0.584, 0.823, 0.02, 2);

    glColor3ub(84, 83, 91); // 2nd cloudFlood
    circleFlood(-0.8, 0.82, 0.03, 2);
    circleFlood(-0.73, 0.84, 0.05, 2);
    circleFlood(-0.665, 0.823, 0.03, 2);
    glColor3ub(49, 55, 61); //(2nd cloudFlood shade)
    circleFlood(-0.78, 0.82, 0.02, 2);
    circleFlood(-0.73, 0.84, 0.04, 2);
    circleFlood(-0.684, 0.823, 0.02, 2);

    glColor3ub(84, 83, 91); // 2nd cloudFlood
    circleFlood(0.6, 0.82, 0.03, 2);
    circleFlood(0.53, 0.84, 0.05, 2);
    circleFlood(0.465, 0.823, 0.03, 2);
    glColor3ub(49, 55, 61); //(2nd cloudFlood shade)
    circleFlood(0.58, 0.82, 0.02, 2);
    circleFlood(0.53, 0.84, 0.04, 2);
    circleFlood(0.484, 0.823, 0.02, 2);


    glColor3ub(84, 83, 91); // 2nd cloudFlood
    circleFlood(-0.5, 0.92, 0.03, 2);
    circleFlood(-0.43, 0.94, 0.05, 2);
    circleFlood(-0.365, 0.923, 0.03, 2);
    glColor3ub(49, 55, 61); //(2nd cloudFlood shade)
    circleFlood(-0.48, 0.92, 0.02, 2);
    circleFlood(-0.43, 0.94, 0.04, 2);
    circleFlood(-0.384, 0.923, 0.02, 2);


    glColor3ub(84, 83, 91); //(1st cloudFlood) --cloudFlood code shade
    circleFlood(-0.765, 0.89, 0.052, 2);
    circleFlood(-0.705, 0.851, 0.03, 2);
    circleFlood(-0.815, 0.861, 0.03, 2);
    glColor3ub(49, 55, 61); //(1st cloudFlood shade) -- cloudFlood code
    circleFlood(-0.765, 0.89, 0.042, 2);
    circleFlood(-0.705, 0.851, 0.025, 2);
    circleFlood(-0.815, 0.861, 0.025, 2);


        glColor3ub(84, 83, 91); //(1st cloudFlood) --cloudFlood code shade  --------
    circleFlood(0.065, 0.58, 0.052, 2);
    circleFlood(0.005, 0.541, 0.03, 2);
    circleFlood(0.115, 0.55, 0.03, 2);
    glColor3ub(49, 55, 61); //(1st cloudFlood shade) -- cloudFlood code
    circleFlood(0.065, 0.58, 0.042, 2);
    circleFlood(0.005, 0.541, 0.025, 2);
    circleFlood(0.115, 0.55, 0.025, 2);


    glColor3ub(84, 83, 91); // 2nd cloudFlood
    circleFlood(-0.1, 0.52, 0.03, 2);
    circleFlood(-0.03, 0.54, 0.05, 2);
    circleFlood(0.065, 0.523, 0.03, 2);
    glColor3ub(49, 55, 61); //(2nd cloudFlood shade)
    circleFlood(-0.08, 0.52, 0.02, 2);
    circleFlood(-0.03, 0.54, 0.04, 2);
    circleFlood(0.084, 0.523, 0.02, 2);



    /*glColor3ub ( 229,227,246); //(Mid cloudFlood )
    circleFlood(0.3,0.9,0.05,2);
    circleFlood(0.21,0.87,0.04,2);
    circleFlood(0.36,0.87,0.04,2);
    circleFlood(0.28,0.86,0.046,2);
    circleFlood(0.23,0.9,0.025,2);
    circleFlood(0.35,0.9,0.025,2);
    circleFlood(0.4,0.87,0.025,2);
    circleFlood(0.33,0.86,0.025,2);

    glColor3ub ( 204,225,245); //(Mid cloudFlood shade)
    circleFlood(0.3,0.9,0.043,2);
    circleFlood(0.21,0.87,0.033,2);
    circleFlood(0.36,0.87,0.033,2);
    circleFlood(0.28,0.86,0.04,2);
    circleFlood(0.23,0.9,0.02,2);
    circleFlood(0.35,0.9,0.01,2);
    circleFlood(0.4,0.87,0.01,2);
    circleFlood(0.33,0.86,0.01,2);
    */

    glPushMatrix();
    glScaled(1.5, 1.5, 0.0);
    glTranslatef(0.0, -0.5, 0.0);
    cloudFlood1();
    glPopMatrix(); // cloudFlood1

glPushMatrix();
    glScaled(1.5, 1.5, 0.0);
    glTranslatef(0.0, -0.5, 0.0);
    cloudFlood1();
    glPopMatrix(); // cloudFlood1

    glPushMatrix();
    glScaled(1.52, 1.52, 0.0);
    glTranslatef(-0.4, -0.3, 0.0);
    cloudFlood1();
    glPopMatrix(); // cloudFlood2

    glPushMatrix();
    glScaled(1.1, 1.5, 0.0);
    glTranslatef(cloudFlood, -0.45, 0.0);
    cloudFlood1();
    glPopMatrix(); // cloudFlood3

    glPushMatrix();
    glScaled(1.17, 1.17, 0.0);
    glTranslatef(cloudFlood2, -0.1, 0.0);
    cloudFlood1();
    glPopMatrix(); // cloudFlood1-2


    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad    --cloudFlood code triangle
    glColor3ub(142, 141, 151); // Saddle Brown (Sky Triangle 1st)
    glVertex2f(-1.0, 0.82); // x, y
    glVertex2f(-0.6, 0.8);
    glVertex2f(-1.0, 0.78);
    glEnd();

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad   --cloudFlood code triangle
    glColor3ub(142, 141, 151); // Saddle Brown (Sky triangle 2nd )
    glVertex2f(1.0, 0.72); // x, y
    glVertex2f(0.6, 0.7);
    glVertex2f(1.0, 0.68);
    glEnd();


    glBegin(GL_POLYGON);     // These vertices form a closed polygon -- mountain code shade
    glColor3ub(1, 74, 77); // Yellow (Mountain)
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.95f, 0.35f);
    glVertex2f(0.9f, 0.357f);
    glVertex2f(0.869f, 0.381f);
    glVertex2f(0.8f, 0.35f);
    glVertex2f(0.771f, 0.348f);
    glVertex2f(0.7f, 0.355f);
    glVertex2f(0.671f, 0.358f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.55f, 0.39f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.4f, 0.39f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.2f, 0.413f);
    glVertex2f(0.1f, 0.389f);
    glVertex2f(0.0f, 0.42f);
    glVertex2f(-0.1f, 0.44f);
    glVertex2f(-0.124f, 0.428f);
    glVertex2f(-0.161f, 0.38f);
    glVertex2f(-0.2f, 0.36f);
    glVertex2f(-0.223f, 0.361f);
    glVertex2f(-0.25f, 0.4f);
    glVertex2f(-0.254f, 0.45f);
    glVertex2f(-0.28f, 0.493f);
    glVertex2f(-0.32f, 0.518f);
    glVertex2f(-0.361f, 0.48f);
    glVertex2f(-0.368f, 0.45f);
    glVertex2f(-0.4f, 0.44f);
    glVertex2f(-0.5f, 0.455f);
    glVertex2f(-0.534f, 0.444f);
    glVertex2f(-0.6f, 0.49f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.7f, 0.48f);
    glVertex2f(-0.74f, 0.43f);
    glVertex2f(-0.8f, 0.42f);
    glVertex2f(-0.818f, 0.422f);
    glVertex2f(-0.9f, 0.45f);
    glVertex2f(-0.95f, 0.418f);
    glVertex2f(-1.0f, 0.4f);
    glEnd();



    glBegin(GL_POLYGON);       // These vertices form a closed polygon -- Mountain Code
    glColor3ub(1, 1, 1); // Yellow (Mountain)

    glVertex2f(-1.00f, 0.28f);
    glVertex2f(1.00f, 0.28f);
    glColor3ub(0, 104, 105); // Yellow (Mountain)
    glVertex2f(0.95f, 0.33f);
    glVertex2f(0.90f, 0.337f);
    glVertex2f(0.869f, 0.361f);
    glVertex2f(0.80f, 0.33f);
    glVertex2f(0.771f, 0.328f);
    glVertex2f(0.70f, 0.335f);
    glVertex2f(0.671f, 0.338f);
    glVertex2f(0.60f, 0.33f);
    glVertex2f(0.55f, 0.37f);
    glVertex2f(0.50f, 0.38f);
    glVertex2f(0.40f, 0.37f);
    glVertex2f(0.30f, 0.38f);
    glVertex2f(0.20f, 0.393f);
    glVertex2f(0.10f, 0.369f);
    glVertex2f(0.00f, 0.40);
    glVertex2f(-0.10f, 0.42f);
    glVertex2f(-0.124f, 0.408f);
    glVertex2f(-0.161f, 0.36f);
    glVertex2f(-0.20f, 0.34f);
    glVertex2f(-0.223f, 0.341f);
    glVertex2f(-0.25f, 0.38f);
    glVertex2f(-0.254f, 0.43f);
    glVertex2f(-0.28f, 0.473f);
    glVertex2f(-0.32f, 0.498f);
    glVertex2f(-0.361f, 0.46f);
    glVertex2f(-0.368f, 0.43f);
    glVertex2f(-0.40f, 0.42f);
    glVertex2f(-0.50f, 0.435f);
    glVertex2f(-0.534f, 0.424f);
    glVertex2f(-0.60f, 0.47f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.70f, 0.46f);
    glVertex2f(-0.74f, 0.41f);
    glVertex2f(-0.80f, 0.40);
    glVertex2f(-0.818f, 0.402f);
    glVertex2f(-0.90f, 0.43f);
    glVertex2f(-0.95f, 0.398f);
    glVertex2f(-1.00f, 0.38f);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(33, 86, 101); // Yellow (Upper Land EverBrown) -- land code big gray
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();


    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(56, 78, 1); // Yellow (upper land Green up shade)    pole behind code
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, 0.29f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(0.0f, 0.29f);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(1.0f, 0.29f);
    glEnd();



    glBegin(GL_QUADS);      //land code most right
    glColor3ub(51, 77, 1);
    glVertex2f(0.82, 0.284); // (Middle Land halka green Right 5th)
    glVertex2f(0.615, 0.0);
    glVertex2f(1.0, -0.11);
    glVertex2f(1.0, 0.282);
    glEnd();

    glBegin(GL_QUADS);      //land code most right left
    glColor3ub(51, 77, 1);
    glVertex2f(0.31, 0.284); // (Middle Land halka green 4th)
    glVertex2f(0.09, 0.11);
    glVertex2f(0.6, 0.0);
    glVertex2f(0.8, 0.282);
    glEnd();


    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad  -- land code the smallest
    glColor3ub(63, 97, 3); // Saddle Brown (Middle Triangle Field 1st)
    glVertex2f(-0.77, 0.282); // x, y
    glVertex2f(-0.516, 0.21);
    glVertex2f(-0.35, 0.283);
    glEnd();


    glBegin(GL_QUADS);      //land code middle yellowish green
    glColor3ub(63, 97, 1);
    glVertex2f(-0.48, 0.22); // (Middle Land halka green 3rd)
    glVertex2f(0.07, 0.12);
    glVertex2f(0.3, 0.293);
    glVertex2f(-0.3, 0.294);
    glEnd();


    glBegin(GL_QUADS);      //land code yellowish green left
    glColor3ub(91, 97, 1);
    glVertex2f(-1.0, 0.01); // (Middle Land Halka green 2nd))
    glVertex2f(-0.52, 0.202);
    glVertex2f(-0.8, 0.28);
    glVertex2f(-1.0, 0.28);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- land code main big light green
    glColor3ub(79, 114, 8); // Yellow (Middle Land yellow green Main 1st)
    glVertex2f(-1.0f, -0.49f);
    glVertex2f(-0.9f, -0.48f);
    glVertex2f(0.05f, 0.1f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();


    // grassFlood2(-11.1,-6.9,0.09,0.09);
    grassFlood2(-11.10, -6.90, 0.09, 0.09);
    grassFlood2(-11.10, -6.00, 0.09, 0.09);

    grassFlood2(-10.40, -6.90, 0.09, 0.09);
    grassFlood2(-10.40, -6.00, 0.09, 0.09);

    grassFlood2(-9.70, -6.90, 0.09, 0.09);
    grassFlood2(-9.70, -6.00, 0.09, 0.09);

    grassFlood2(-9.00, -6.90, 0.09, 0.09);
    grassFlood2(-9.00, -6.00, 0.09, 0.09);
    grassFlood2(-9.00, -5.10, 0.09, 0.09);

    grassFlood2(-8.30, -6.90, 0.09, 0.09);
    grassFlood2(-8.30, -6.00, 0.09, 0.09);
    grassFlood2(-8.30, -5.10, 0.09, 0.09);

    grassFlood2(-7.60, -6.90, 0.09, 0.09);
    grassFlood2(-7.60, -6.00, 0.09, 0.09);
    grassFlood2(-7.60, -5.10, 0.09, 0.09);

    grassFlood2(-6.90, -6.90, 0.09, 0.09);
    grassFlood2(-6.90, -6.00, 0.09, 0.09);
    grassFlood2(-6.90, -5.10, 0.09, 0.09);
    grassFlood2(-6.90, -4.20, 0.09, 0.09);

    grassFlood2(-6.20, -6.90, 0.09, 0.09);
    grassFlood2(-6.20, -6.00, 0.09, 0.09);
    grassFlood2(-6.20, -5.10, 0.09, 0.09);
    grassFlood2(-6.20, -4.20, 0.09, 0.09);

    grassFlood2(-5.50, -6.90, 0.09, 0.09);
    grassFlood2(-5.50, -6.00, 0.09, 0.09);
    grassFlood2(-5.50, -5.10, 0.09, 0.09);
    grassFlood2(-5.50, -4.20, 0.09, 0.09);
    grassFlood2(-5.50, -3.30, 0.09, 0.09);

    grassFlood2(-4.80, -6.90, 0.09, 0.09);
    grassFlood2(-4.80, -6.00, 0.09, 0.09);
    grassFlood2(-4.80, -5.10, 0.09, 0.09);
    grassFlood2(-4.80, -4.20, 0.09, 0.09);
    grassFlood2(-4.80, -3.30, 0.09, 0.09);
    grassFlood2(-4.80, -2.40, 0.09, 0.09);

    grassFlood2(-4.10, -6.90, 0.09, 0.09);
    grassFlood2(-4.10, -6.00, 0.09, 0.09);
    grassFlood2(-4.10, -5.10, 0.09, 0.09);
    grassFlood2(-4.10, -4.20, 0.09, 0.09);
    grassFlood2(-4.10, -3.30, 0.09, 0.09);
    grassFlood2(-4.10, -2.40, 0.09, 0.09);

    grassFlood2(-3.40, -6.90, 0.09, 0.09);
    grassFlood2(-3.40, -6.00, 0.09, 0.09);
    grassFlood2(-3.40, -5.10, 0.09, 0.09);
    grassFlood2(-3.40, -4.20, 0.09, 0.09);
    grassFlood2(-3.40, -3.30, 0.09, 0.09);
    grassFlood2(-3.40, -2.40, 0.09, 0.09);
    grassFlood2(-3.40, -1.50, 0.09, 0.09);

    grassFlood2(-2.70, -6.90, 0.09, 0.09);
    grassFlood2(-2.70, -6.00, 0.09, 0.09);
    grassFlood2(-2.70, -5.10, 0.09, 0.09);
    grassFlood2(-2.70, -4.20, 0.09, 0.09);
    grassFlood2(-2.70, -3.30, 0.09, 0.09);
    grassFlood2(-2.70, -2.40, 0.09, 0.09);
    grassFlood2(-2.70, -1.50, 0.09, 0.09);

    grassFlood2(-2.00, -6.90, 0.09, 0.09);
    grassFlood2(-2.00, -6.00, 0.09, 0.09);
    grassFlood2(-2.00, -5.10, 0.09, 0.09);
    grassFlood2(-2.00, -4.20, 0.09, 0.09);
    grassFlood2(-2.00, -3.30, 0.09, 0.09);
    grassFlood2(-2.00, -2.40, 0.09, 0.09);
    grassFlood2(-2.00, -1.50, 0.09, 0.09);
    grassFlood2(-2.00, -0.60, 0.09, 0.09);

    grassFlood2(-1.30, -6.90, 0.09, 0.09);
    grassFlood2(-1.30, -6.00, 0.09, 0.09);
    grassFlood2(-1.30, -5.10, 0.09, 0.09);
    grassFlood2(-1.30, -4.20, 0.09, 0.09);
    grassFlood2(-1.30, -3.30, 0.09, 0.09);
    grassFlood2(-1.30, -2.40, 0.09, 0.09);
    grassFlood2(-1.30, -1.50, 0.09, 0.09);
    grassFlood2(-1.30, -0.60, 0.09, 0.09);

    grassFlood2(-0.60, -6.90, 0.09, 0.09);
    grassFlood2(-0.60, -6.00, 0.09, 0.09);
    grassFlood2(-0.60, -5.10, 0.09, 0.09);
    grassFlood2(-0.60, -4.20, 0.09, 0.09);
    grassFlood2(-0.60, -3.30, 0.09, 0.09);
    grassFlood2(-0.60, -2.40, 0.09, 0.09);
    grassFlood2(-0.60, -1.50, 0.09, 0.09);
    grassFlood2(-0.60, -0.60, 0.09, 0.09);

    grassFlood2(0.10, -6.90, 0.09, 0.09);
    grassFlood2(0.10, -6.00, 0.09, 0.09);
    grassFlood2(0.10, -5.10, 0.09, 0.09);
    grassFlood2(0.10, -4.20, 0.09, 0.09);
    grassFlood2(0.10, -3.30, 0.09, 0.09);
    grassFlood2(0.10, -2.40, 0.09, 0.09);
    grassFlood2(0.10, -1.50, 0.09, 0.09);
    grassFlood2(0.10, -0.60, 0.09, 0.09);
    grassFlood2(0.10, 0.30, 0.09, 0.09);

    grassFlood2(0.80, -6.90, 0.09, 0.09);
    grassFlood2(0.80, -6.00, 0.09, 0.09);
    grassFlood2(0.80, -5.10, 0.09, 0.09);
    grassFlood2(0.80, -4.20, 0.09, 0.09);
    grassFlood2(0.80, -3.30, 0.09, 0.09);
    grassFlood2(0.80, -2.40, 0.09, 0.09);
    grassFlood2(0.80, -1.50, 0.09, 0.09);
    grassFlood2(0.80, -0.60, 0.09, 0.09);
    grassFlood2(0.80, 0.30, 0.09, 0.09);

    grassFlood2(1.50, 0.30, 0.09, 0.09);
    grassFlood2(1.50, -6.90, 0.09, 0.09);
    grassFlood2(1.50, -6.00, 0.09, 0.09);
    grassFlood2(1.50, -5.10, 0.09, 0.09);
    grassFlood2(1.50, -4.20, 0.09, 0.09);
    grassFlood2(1.50, -3.30, 0.09, 0.09);
    grassFlood2(1.50, -2.40, 0.09, 0.09);
    grassFlood2(1.50, -1.50, 0.09, 0.09);
    grassFlood2(1.50, -0.60, 0.09, 0.09);

    grassFlood2(2.20, -6.90, 0.09, 0.09);
    grassFlood2(2.20, -6.00, 0.09, 0.09);
    grassFlood2(2.20, -5.10, 0.09, 0.09);
    grassFlood2(2.20, -4.20, 0.09, 0.09);
    grassFlood2(2.20, -3.30, 0.09, 0.09);
    grassFlood2(2.20, -2.40, 0.09, 0.09);
    grassFlood2(2.20, -1.50, 0.09, 0.09);
    grassFlood2(2.20, -0.60, 0.09, 0.09);
    grassFlood2(2.90, -6.90, 0.09, 0.09);
    grassFlood2(2.90, -6.00, 0.09, 0.09);
    grassFlood2(2.90, -5.10, 0.09, 0.09);
    grassFlood2(2.90, -4.20, 0.09, 0.09);
    grassFlood2(2.90, -3.30, 0.09, 0.09);
    grassFlood2(2.90, -2.40, 0.09, 0.09);
    grassFlood2(2.90, -1.50, 0.09, 0.09);
    grassFlood2(2.90, -0.60, 0.09, 0.09);
    grassFlood2(3.60, -6.90, 0.09, 0.09);
    grassFlood2(3.60, -6.00, 0.09, 0.09);
    grassFlood2(3.60, -5.10, 0.09, 0.09);
    grassFlood2(3.60, -4.20, 0.09, 0.09);
    grassFlood2(3.60, -3.30, 0.09, 0.09);
    grassFlood2(3.60, -2.40, 0.09, 0.09);
    grassFlood2(3.60, -1.50, 0.09, 0.09);
    grassFlood2(3.60, -0.60, 0.09, 0.09);
    grassFlood2(4.30, -6.90, 0.09, 0.09);
    grassFlood2(4.30, -6.00, 0.09, 0.09);
    grassFlood2(4.30, -5.10, 0.09, 0.09);
    grassFlood2(4.30, -4.20, 0.09, 0.09);
    grassFlood2(4.30, -3.30, 0.09, 0.09);
    grassFlood2(4.30, -2.40, 0.09, 0.09);
    grassFlood2(4.30, -1.50, 0.09, 0.09);
    grassFlood2(4.30, -0.60, 0.09, 0.09);
    grassFlood2(5.00, -6.90, 0.09, 0.09);
    grassFlood2(5.00, -6.00, 0.09, 0.09);
    grassFlood2(5.00, -5.10, 0.09, 0.09);
    grassFlood2(5.00, -4.20, 0.09, 0.09);
    grassFlood2(5.00, -3.30, 0.09, 0.09);
    grassFlood2(5.00, -2.40, 0.09, 0.09);
    grassFlood2(5.00, -1.50, 0.09, 0.09);
    grassFlood2(5.00, -0.60, 0.09, 0.09);
    grassFlood2(5.70, -6.90, 0.09, 0.09);
    grassFlood2(5.70, -6.00, 0.09, 0.09);
    grassFlood2(5.70, -5.10, 0.09, 0.09);
    grassFlood2(5.70, -4.20, 0.09, 0.09);
    grassFlood2(5.70, -3.30, 0.09, 0.09);
    grassFlood2(5.70, -2.40, 0.09, 0.09);
    grassFlood2(5.70, -1.50, 0.09, 0.09);
    grassFlood2(5.70, -0.60, 0.09, 0.09);
    grassFlood2(6.40, -6.90, 0.09, 0.09);
    grassFlood2(6.40, -6.00, 0.09, 0.09);
    grassFlood2(6.40, -5.10, 0.09, 0.09);
    grassFlood2(6.40, -4.20, 0.09, 0.09);
    grassFlood2(6.40, -3.30, 0.09, 0.09);
    grassFlood2(6.40, -2.40, 0.09, 0.09);
    grassFlood2(6.40, -1.50, 0.09, 0.09);
    grassFlood2(6.40, -0.60, 0.09, 0.09);
    grassFlood2(7.10, -6.90, 0.09, 0.09);
    grassFlood2(7.10, -6.00, 0.09, 0.09);
    grassFlood2(7.10, -5.10, 0.09, 0.09);
    grassFlood2(7.10, -4.20, 0.09, 0.09);
    grassFlood2(7.10, -3.30, 0.09, 0.09);
    grassFlood2(7.10, -2.40, 0.09, 0.09);
    grassFlood2(7.10, -1.50, 0.09, 0.09);
    grassFlood2(7.10, -0.60, 0.09, 0.09);
    grassFlood2(7.80, -6.90, 0.09, 0.09);
    grassFlood2(7.80, -6.00, 0.09, 0.09);
    grassFlood2(7.80, -5.10, 0.09, 0.09);
    grassFlood2(7.80, -4.20, 0.09, 0.09);
    grassFlood2(7.80, -3.30, 0.09, 0.09);
    grassFlood2(7.80, -2.40, 0.09, 0.09);
    grassFlood2(7.80, -1.50, 0.09, 0.09);

    grassFlood2(8.50, -6.90, 0.09, 0.09);
    grassFlood2(8.50, -6.00, 0.09, 0.09);
    grassFlood2(8.50, -5.10, 0.09, 0.09);
    grassFlood2(8.50, -4.20, 0.09, 0.09);
    grassFlood2(8.50, -3.30, 0.09, 0.09);
    grassFlood2(8.50, -2.40, 0.09, 0.09);
    grassFlood2(8.50, -1.50, 0.09, 0.09);

    grassFlood2(9.20, -6.90, 0.09, 0.09);
    grassFlood2(9.20, -6.00, 0.09, 0.09);
    grassFlood2(9.20, -5.10, 0.09, 0.09);
    grassFlood2(9.20, -4.20, 0.09, 0.09);
    grassFlood2(9.20, -3.30, 0.09, 0.09);
    grassFlood2(9.20, -2.40, 0.09, 0.09);
    grassFlood2(9.20, -1.50, 0.09, 0.09);

    grassFlood2(9.90, -6.90, 0.09, 0.09);
    grassFlood2(9.90, -6.00, 0.09, 0.09);
    grassFlood2(9.90, -5.10, 0.09, 0.09);
    grassFlood2(9.90, -4.20, 0.09, 0.09);
    grassFlood2(9.90, -3.30, 0.09, 0.09);
    grassFlood2(9.90, -2.40, 0.09, 0.09);
    grassFlood2(9.90, -1.50, 0.09, 0.09);

    grassFlood2(10.60, -6.90, 0.09, 0.09);
    grassFlood2(10.60, -6.00, 0.09, 0.09);
    grassFlood2(10.60, -5.10, 0.09, 0.09);
    grassFlood2(10.60, -4.20, 0.09, 0.09);
    grassFlood2(10.60, -3.30, 0.09, 0.09);
    grassFlood2(10.60, -2.40, 0.09, 0.09);


    glBegin(GL_POLYGON);    // These vertices form a closed polygon  -- river code upper side
    glColor3ub(47, 43, 29); // Yellow (Land Brown  polygon 1st)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.62f);
    glVertex2f(0.95f, -0.63f);
    glVertex2f(0.9f, -0.65f);
    glVertex2f(0.8f, -0.62f);
    glVertex2f(0.7f, -0.61f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.5f, -0.61f);
    glVertex2f(0.45f, -0.58f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.3f, -0.68f);
    glVertex2f(0.2f, -0.65f);
    glVertex2f(0.1f, -0.65f);
    glVertex2f(0.0f, -0.62f);
    glVertex2f(-0.1f, -0.64f);
    glVertex2f(-0.2f, -0.59f);
    glVertex2f(-0.25f, -0.598f);
    glVertex2f(-0.3f, -0.58f);
    glVertex2f(-0.4f, -0.57f);
    glVertex2f(-0.5f, -0.585f);
    glVertex2f(-0.55f, -0.58f);
    glVertex2f(-0.6f, -0.59f);
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.8f, -0.59f);
    glVertex2f(-0.85f, -0.61f);
    glVertex2f(-0.9f, -0.62f);
    glVertex2f(-0.95f, -0.61f);
    glVertex2f(-1.0f, -0.57f);
    glEnd();



    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- river code water
    glColor3ub(33, 86, 101); // Yellow (Water-land polygon )
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.67f);
    glVertex2f(0.95f, -0.65f);
    glVertex2f(0.9f, -0.67f);
    glVertex2f(0.8f, -0.64f);
    glVertex2f(0.7f, -0.65f);
    glVertex2f(0.6f, -0.62f);
    glVertex2f(0.5f, -0.65f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.4f, -0.67f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.0f, -0.67f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.64f);
    glVertex2f(-0.25f, -0.62f);
    glVertex2f(-0.3f, -0.64f);
    glVertex2f(-0.4f, -0.63f);
    glVertex2f(-0.5f, -0.61f);
    glVertex2f(-0.55f, -0.63f);
    glVertex2f(-0.6f, -0.63f);
    glVertex2f(-0.7f, -0.65f);
    glVertex2f(-0.8f, -0.66f);
    glVertex2f(-0.85f, -0.67f);
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.95f, -0.638f);
    glVertex2f(-1.0f, -0.6f);
    glEnd();



    glBegin(GL_POLYGON);     // These vertices form a closed polygon    ---- land code home side bigger green
    glColor3ub(37, 57, 30); // Yellow (Land Green polygon 2nd)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.72f);
    glVertex2f(0.95f, -0.7f);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.8f, -0.69f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.6f, -0.68f);
    glVertex2f(0.5f, -0.7f);
    glVertex2f(0.45f, -0.68f);
    glVertex2f(0.4f, -0.72f);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.2f, -0.72f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.0f, -0.72f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.69f);
    glVertex2f(-0.25f, -0.67f);
    glVertex2f(-0.3f, -0.69f);
    glVertex2f(-0.4f, -0.68f);
    glVertex2f(-0.5f, -0.66f);
    glVertex2f(-0.55f, -0.665f);
    glVertex2f(-0.6f, -0.689f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.8f, -0.71f);
    glVertex2f(-0.85f, -0.72f);
    glVertex2f(-0.9f, -0.7f);
    glVertex2f(-0.95f, -0.688f);
    glVertex2f(-1.0f, -0.65f);
    glEnd();


    glBegin(GL_TRIANGLES);  // Each set of 4 vertices form a quad   -- home code upper big roof down left choco
    glColor3ub(50, 33, 15); // Saddle Brown (Chader oikhnaei Triangle ta)
    glVertex2f(0.37, -0.6); // x, y
    glVertex2f(0.13, -0.6);
    glVertex2f(0.3, -0.41);
    glEnd();


    glBegin(GL_QUADS);      // Each set of 4 vertices form a quad   -- home code door
    glColor3ub(50, 33, 15); // Saddle Brown (House er Ekdom Middle Quad)
    glVertex2f(0.34f, -0.5f); // x, y
    glVertex2f(0.34f, -0.714f);
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.45f, -0.5f);
    glEnd();


    glBegin(GL_POLYGON);      // These vertices form a closed polygon   -- home code left door
    glColor3ub(76, 45, 15); // Yellow (Bashar majhe ekta polygon draw)
    glVertex2f(0.2f, -0.53f);
    glVertex2f(0.2f, -0.713f);
    glVertex2f(0.34f, -0.711f);
    glVertex2f(0.34f, -0.53f);
    glVertex2f(0.30f, -0.52f);
    glVertex2f(0.22f, -0.53f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad  -- home code stick
    glColor3ub(97, 40, 7); // Saddle Brown (House er niche stick 1st)
    glVertex2f(0.16f, -0.7f); // x, y
    glVertex2f(0.16f, -0.77f);
    glVertex2f(0.166f, -0.77f);
    glVertex2f(0.166f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad  -- home code stick
    glColor3ub(97, 40, 7); // Saddle Brown (House er niche Stick 2nd)
    glVertex2f(0.18f, -0.7f); // x, y
    glVertex2f(0.18f, -0.75f);
    glVertex2f(0.186f, -0.75f);
    glVertex2f(0.186f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code door left left quad
    glColor3ub(125, 89, 5); // Saddle Brown (House er Left Side er Quad)
    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.16f, -0.7f);
    glVertex2f(0.2f, -0.71f);
    glVertex2f(0.2f, -0.53f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code door right quad
    glColor3ub(96, 65, 25); // Saddle Brown (House er Door er Right er Quad)
    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.66f, -0.69f);
    glVertex2f(0.66f, -0.5f);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad -- home code left side roof
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad)
    glVertex2f(0.24f, -0.41f); // x, y
    glVertex2f(0.12f, -0.56f);
    glVertex2f(0.16f, -0.59f);
    glVertex2f(0.3f, -0.41f);
    glEnd();

    //bulb code
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2f(0.32f, -0.5f);
    glVertex2f(0.32f, -0.55f);
    glEnd();
    glColor3ub(0, 0, 0);
    circleFlood(0.32, -0.55, 0.01, 2.5);


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad     --home code main roof
    glColor3ub(103, 75, 42); // Ektu Kom Brown (house chad er ta)
    glVertex2f(0.25f, -0.3f);  // x, y
    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.69f, -0.51f); // x, y
    glVertex2f(0.58f, -0.3f);  // x, y
    glEnd();


    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad  -- home code left roof up triangle
    glColor3ub(73, 53, 23); // Saddle Brown (Chader oikhnaei Triangle ta)
    glVertex2f(0.25f, -0.3f); // x, y
    glVertex2f(0.24f, -0.41f);
    glVertex2f(0.29f, -0.41f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 1st)
    glVertex2f(0.13f, -0.55f); // x, y
    glVertex2f(0.11f, -0.57f);
    glVertex2f(0.15f, -0.57f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 2nd)
    glVertex2f(0.15f, -0.57f); // x, y
    glVertex2f(0.12f, -0.58f);
    glVertex2f(0.16f, -0.59f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown (Chader Left side er Quad E Triangle 3rd)
    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.18f, -0.566f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code left roof small triangles
    glColor3ub(133, 95, 15); // Saddle Brown ((Chader Left side er Quad E Triangle 4th)
    glVertex2f(0.16f, -0.59f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.16f, -0.55f);
    glEnd();



    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 1st)
    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.33f, -0.53f);
    glVertex2f(0.35f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 2nd)
    glVertex2f(0.35f, -0.5f); // x, y
    glVertex2f(0.4f, -0.53f);
    glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 3rd)
    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.43f, -0.53f);
    glVertex2f(0.5f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 4th)
    glVertex2f(0.5f, -0.5f); // x, y
    glVertex2f(0.55, -0.53f);
    glVertex2f(0.6f, -0.5f);
    glEnd();


    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad -- home code main roof small triangles
    glColor3ub(103, 75, 42); // Saddle Brown ( Main Chad er Quad E Triangle 5th)
    glVertex2f(0.6f, -0.5f); // x, y
    glVertex2f(0.65, -0.54f);
    glVertex2f(0.68f, -0.5f);
    glEnd();


    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(31, 45, 20); // Yellow (House Shadow)
    glVertex2f(0.18f, -0.73f);
    glVertex2f(0.13f, -0.77f);
    glVertex2f(0.3f, -0.8f);
    glVertex2f(0.72f, -0.83f);
    glVertex2f(0.7f, -0.71f);
    glEnd();


    //home sticks starts
    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 3rd)
    glVertex2f(0.2f, -0.71f); // x, y
    glVertex2f(0.2f, -0.77f);
    glVertex2f(0.205f, -0.77f);
    glVertex2f(0.205f, -0.71f);
    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 9th)
    glVertex2f(0.62f, -0.69f); // x, y
    glVertex2f(0.62f, -0.75f);
    glVertex2f(0.627f, -0.75f);
    glVertex2f(0.627f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 8th)
    glVertex2f(0.58f, -0.69f); // x, y
    glVertex2f(0.58f, -0.75f);
    glVertex2f(0.587f, -0.75f);
    glVertex2f(0.587f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 7th)
    glVertex2f(0.54f, -0.69f); // x, y
    glVertex2f(0.54f, -0.75f);
    glVertex2f(0.547f, -0.75f);
    glVertex2f(0.547f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 6th)
    glVertex2f(0.50f, -0.69f); // x, y
    glVertex2f(0.50f, -0.75f);
    glVertex2f(0.507f, -0.75f);
    glVertex2f(0.507f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 5th)
    glVertex2f(0.47f, -0.69f); // x, y
    glVertex2f(0.47f, -0.75f);
    glVertex2f(0.477f, -0.75f);
    glVertex2f(0.477f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House er niche stick 10th)
    glVertex2f(0.64f, -0.69f); // x, y
    glVertex2f(0.64f, -0.77f);
    glVertex2f(0.647f, -0.77f);
    glVertex2f(0.647f, -0.69f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House Ladder 1st)
    glVertex2f(0.36f, -0.7f); // x, y
    glVertex2f(0.37f, -0.8f);
    glVertex2f(0.380f, -0.8f);
    glVertex2f(0.370f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(67, 30, 5); // Saddle Brown (House Ladder 2nd)
    glVertex2f(0.43f, -0.7f); // x, y
    glVertex2f(0.44f, -0.8f);
    glVertex2f(0.450f, -0.8f);
    glVertex2f(0.440f, -0.7f);
    glEnd();


    glBegin(GL_QUADS);          //-- home code stick
    glColor3ub(67, 30, 5);
    glVertex2f(0.365, -0.72); // (house ladder mid stick 1st)
    glVertex2f(0.365, -0.73);
    glVertex2f(0.44, -0.72);
    glVertex2f(0.44, -0.71);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 30, 5);
    glVertex2f(0.365, -0.75); // (house ladder mid stick 2nd) -- home code stick
    glVertex2f(0.365, -0.76);
    glVertex2f(0.44, -0.75);
    glVertex2f(0.44, -0.74);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67, 30, 5);
    glVertex2f(0.368, -0.78); // (house ladder mid stick 3rd) -- home code stick
    glVertex2f(0.369, -0.79);
    glVertex2f(0.44, -0.78);
    glVertex2f(0.44, -0.77);
    glEnd();
//home stick ends


//leaf code starts
    glColor3ub(10, 45, 0); //(Main Tree Darkleaf 1st)   --- tree code down leaf
    circleFlood(0.8, -0.44, 0.055, 2);
    circleFlood(0.85, -0.52, 0.05, 2);
    circleFlood(0.75, -0.52, 0.05, 2);

    glColor3ub(30, 63, 0); //(Leaf Dark Green 3th)  --- tree code upper leaf shade
    circleFlood(0.74, -0.26, 0.055, 2);
    circleFlood(0.78, -0.2, 0.06, 2);
    circleFlood(0.83, -0.25, 0.06, 2);
    circleFlood(0.8, -0.34, 0.06, 2);

    glColor3ub(25, 55, 0); //(Leaf Dark Green Shade 3th)    --- tree code upper leaf
    circleFlood(0.73, -0.27, 0.055, 2);
    circleFlood(0.77, -0.21, 0.06, 2);
    circleFlood(0.82, -0.26, 0.06, 2);
    circleFlood(0.79, -0.35, 0.06, 2);

    glColor3ub(55, 91, 15); //(Leaf  Green 2nd)   --- tree code left leaf shade
    circleFlood(0.71, -0.44, 0.055, 2);
    circleFlood(0.7, -0.38, 0.055, 2);
    circleFlood(0.72, -0.34, 0.055, 2);
    circleFlood(0.75, -0.4, 0.045, 2);

    glColor3ub(56, 80, 15); //(Lead Shade green 2nd)   --- tree code left  leaf
    circleFlood(0.7, -0.45, 0.055, 2);
    circleFlood(0.69, -0.39, 0.055, 2);
    circleFlood(0.71, -0.35, 0.055, 2);
    circleFlood(0.74, -0.41, 0.045, 2);

    glColor3ub(44, 72, 5); //(Leaf Dark Green 4th)    --- tree code right leaf shade
    circleFlood(0.9, -0.32, 0.055, 2);
    circleFlood(0.915, -0.38, 0.06, 2);
    circleFlood(0.91, -0.42, 0.05, 2);
    circleFlood(0.88, -0.44, 0.055, 2);
    circleFlood(0.86, -0.4, 0.055, 2);

    glColor3ub(52, 85, 5); //(Leaf Dark Green Shade 4th)  --- tree code right leaf
    circleFlood(0.89, -0.33, 0.055, 2);
    circleFlood(0.905, -0.39, 0.06, 2);
    circleFlood(0.9, -0.43, 0.05, 2);
    circleFlood(0.87, -0.45, 0.055, 2);
    circleFlood(0.85, -0.41, 0.055, 2);
//tree leaf code ends


    glColor3ub(77, 57, 32); // Yellow (Main tree)   -- tree code body
    glBegin(GL_POLYGON);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glVertex2f(0.808, -0.84);
    glVertex2f(0.8, -0.84);
    glVertex2f(0.79, -0.85);
    glVertex2f(0.778, -0.8525);
    glVertex2f(0.775, -0.85);
    glVertex2f(0.775, -0.8275);
    glVertex2f(0.779, -0.8);
    glVertex2f(0.784, -0.7625);
    glVertex2f(0.79, -0.7175);
    glVertex2f(0.792, -0.685);
    glVertex2f(0.793, -0.66);
    glVertex2f(0.793, -0.635);
    glVertex2f(0.79, -0.605);
    glVertex2f(0.788, -0.58);
    glVertex2f(0.783, -0.5675);
    glVertex2f(0.779, -0.5375);
    glVertex2f(0.774, -0.5125);
    glVertex2f(0.765, -0.48);
    glVertex2f(0.762, -0.47);
    glVertex2f(0.77, -0.455);
    glVertex2f(0.785, -0.4975);
    glVertex2f(0.791, -0.5);
    glVertex2f(0.798, -0.495);
    glVertex2f(0.804, -0.485);
    glVertex2f(0.805, -0.47);
    glVertex2f(0.808, -0.4375);
    glVertex2f(0.808, -0.43);
    glVertex2f(0.821, -0.44);
    glVertex2f(0.819, -0.465);
    glVertex2f(0.818, -0.485);
    glVertex2f(0.818, -0.52);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.819, -0.5475);
    glVertex2f(0.823, -0.5475);
    glVertex2f(0.827, -0.5325);
    glVertex2f(0.829, -0.5125);
    glVertex2f(0.835, -0.48);
    glVertex2f(0.836, -0.4725);
    glVertex2f(0.846, -0.4875);
    glVertex2f(0.842, -0.5425);
    glVertex2f(0.835, -0.5725);
    glVertex2f(0.833, -0.6025);
    glVertex2f(0.832, -0.6475);
    glVertex2f(0.832, -0.665);
    glVertex2f(0.833, -0.695);
    glVertex2f(0.837, -0.7225);
    glVertex2f(0.841, -0.755);
    glVertex2f(0.85, -0.795);
    glVertex2f(0.858, -0.8325);
    glVertex2f(0.86, -0.845);
    glVertex2f(0.853, -0.8475);
    glVertex2f(0.843, -0.84);
    glVertex2f(0.84, -0.835);
    glVertex2f(0.836, -0.84);
    glVertex2f(0.833, -0.855);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glEnd();


    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-1.004, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.9, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.65, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.55, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.35, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.25, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.15, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.0, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.2, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.4, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.7, -1.7, 0.0);

    bushFlood1();
    glPopMatrix();

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.34f); // x, y
    glVertex2f(0.6f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.33f);  // x, y
    glVertex2f(0.379, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.34f); // x, y
    glVertex2f(0.1f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.33f);    // x, y
    glVertex2f(-0.179f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.34f); // x, y
    glVertex2f(-0.4f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.33f);   // x, y
    glVertex2f(-0.679f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.34f); // x, y
    glVertex2f(-1.3f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.34f); // x, y
    glVertex2f(1.2f, 0.32f);   // x, y

    glEnd();

    //2nd wire

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.35f); // x, y
    glVertex2f(0.6f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.34f);  // x, y
    glVertex2f(0.379, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.35f); // x, y
    glVertex2f(0.1f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.34f);    // x, y
    glVertex2f(-0.179f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.35f); // x, y
    glVertex2f(-0.4f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.34f);   // x, y
    glVertex2f(-0.679f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.35f); // x, y
    glVertex2f(-1.3f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.35f); // x, y
    glVertex2f(1.2f, 0.33f);   // x, y

    glEnd();


    poleFlood3(0.0, 0.0, 1.0, 1.0);
    poleFlood3(-0.52, 0.0, 1.0, 1.0);
    poleFlood3(-1.08, 0.0, 1.0, 1.0);
    poleFlood3(-1.57, 0.0, 1.0, 1.0);


    kharFlood1(0.3, 0.0, 1.0, 1.0);

        glPushMatrix();//rainnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn;

    glTranslatef(positionFlood1,positionFlood1, 0.0f);
   glBegin(GL_LINES);
       glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.9f, 0.9f);
      glVertex2f(-0.925f, 0.875f);

      glVertex2f( -0.9f,  0.85f);
      glVertex2f(-0.925f,  0.825f);

      glVertex2f( -0.8f,  0.85f);
      glVertex2f(-0.825f,  0.825f);

      glVertex2f( -0.85f,  0.7f);
      glVertex2f(-0.875f,  0.675f);

      glVertex2f( -0.8f,  0.4f);
      glVertex2f(-0.825f,  0.375f);

       glVertex2f( -0.85f,  0.35f);
      glVertex2f(-0.875f,  0.325f);

       glVertex2f( -0.9f,  0.55f);
      glVertex2f(-0.925f,  0.525f);

       glVertex2f( -0.7f,  0.75f);
      glVertex2f(-0.725f,  0.725f);

       glVertex2f( -0.4f,  0.2f);
      glVertex2f(-0.415f,  0.185f);

       glVertex2f( -0.45f,  0.4f);
      glVertex2f(-0.465f,  0.385f);

       glVertex2f( -0.4f,  0.6f);
      glVertex2f(-0.415f,  0.585f);

       glVertex2f( -0.1f,  0.9f);
      glVertex2f(-0.115f,  0.885f);

       glVertex2f( -0.15f,  0.4f);
      glVertex2f(-0.165f,  0.385f);

       glVertex2f( -0.5f,  0.2f);
      glVertex2f(-0.515f,  0.185f);

       glVertex2f( -0.5f,  0.3f);
      glVertex2f(-0.515f,  0.285f);

       glVertex2f( -0.5f,  0.4f);
      glVertex2f(-0.515f,  0.385f);

       glVertex2f( -0.8f,  0.9f);
      glVertex2f(-0.815f,  0.885f);

       glVertex2f( -0.7f,  0.4f);
      glVertex2f(-0.715f,  0.385f);

       glVertex2f( -0.7f,  0.5f);
      glVertex2f(-0.715f,  0.485f);

       glVertex2f( -0.9f,  0.1f);
      glVertex2f(-0.915f,  0.085f);

       glVertex2f( -0.9f,  0.2f);
      glVertex2f(-0.915f,  0.185f);

       glVertex2f( -0.9f,  0.3f);
      glVertex2f(-0.915f,  0.285f);

       glVertex2f( -0.9f,  0.4f);
      glVertex2f(-0.915f,  0.385f);

       glVertex2f( -0.5f,  0.5f);
      glVertex2f(-0.515f,  0.485f);

      glVertex2f( -0.9f,  0.85f);
      glVertex2f(-0.925f,  0.825f);

      glVertex2f( -0.8f,  0.85f);
      glVertex2f(-0.825f,  0.825f);

      glVertex2f( -0.85f,  0.7f);
      glVertex2f(-0.875f,  0.675f);

      glVertex2f( -0.8f,  0.4f);
      glVertex2f(-0.825f,  0.375f);

       glVertex2f( -0.85f,  0.35f);
      glVertex2f(-0.875f,  0.325f);

       glVertex2f( -0.9f,  0.55f);
      glVertex2f(-0.925f,  0.525f);

       glVertex2f( -0.7f,  0.75f);
      glVertex2f(-0.725f,  0.725f);

       glVertex2f( -0.4f,  0.2f);
      glVertex2f(-0.415f,  0.185f);

       glVertex2f( -0.45f,  0.4f);
      glVertex2f(-0.465f,  0.385f);

       glVertex2f( -0.4f,  0.6f);
      glVertex2f(-0.415f,  0.585f);

       glVertex2f( -0.1f,  0.9f);
      glVertex2f(-0.115f,  0.885f);

       glVertex2f( -0.15f,  0.4f);
      glVertex2f(-0.165f,  0.385f);


             glVertex2f( -0.5f,  0.1f);
      glVertex2f(-0.485f,  0.115f);

       glVertex2f( -0.2f,  0.8f);
      glVertex2f(-0.215f,  0.785f);

       glVertex2f(- 0.3f,  0.4f);
      glVertex2f(-0.285f,  0.415f);

       glVertex2f( -0.6f,  0.52f);
      glVertex2f(-0.615f,  0.505f);

       glVertex2f( -0.5f,  0.8f);
      glVertex2f(-0.485f,  0.815f);

       glVertex2f( -0.2f,  0.7f);
      glVertex2f(-0.215f,  0.685f);

       glVertex2f( -0.1f,  0.2f);
      glVertex2f(-0.115f,  0.185f);

      glVertex2f( -0.7f,  0.5f);
      glVertex2f(-0.685f,  0.485f);

      glVertex2f( -0.6f,  0.6f);
      glVertex2f(-0.615f,  0.585f);

      glVertex2f( -0.4f,  0.75f);
      glVertex2f(-0.415f,  0.765f);

      glVertex2f( -.5f,  0.8f);
      glVertex2f(-0.515f,  0.785f);

      glVertex2f( -0.5f,  0.9f);
      glVertex2f(-0.515f,  0.885f);

      glVertex2f( -0.2f,  0.7f);
      glVertex2f(-0.215f,  0.685f);

             glVertex2f( -0.1f,  0.4f);
      glVertex2f(-0.085f,  0.415f);

       glVertex2f( -0.2f,  0.43f);
      glVertex2f(-0.215f,  0.415f);

       glVertex2f( -0.3f,  0.37f);
      glVertex2f(-0.285f,  0.385f);

       glVertex2f( -0.4f,  0.4f);
      glVertex2f(-0.415f,  0.385f);

       glVertex2f( -0.5f,  0.4f);
      glVertex2f(-0.485f,  0.415f);

       glVertex2f( -0.6f,  0.37f);
      glVertex2f(-0.585f,  0.385f);

       glVertex2f(- 0.7f,  0.43f);
      glVertex2f(-0.715f,  0.415f);

      glVertex2f( -0.67f,  0.5f);
      glVertex2f(-0.685f,  0.485f);

      glVertex2f( -0.8f,  0.2f);
      glVertex2f(-0.785f,  0.215f);

      glVertex2f( -0.9f,  0.15f);
      glVertex2f(-0.915f,  0.135f);

      glVertex2f( -1.0f,  0.1f);
      glVertex2f(-0.985f,  0.115f);

      glVertex2f( -0.5f,  0.9f);
      glVertex2f(-0.515f,  0.885f);

      glVertex2f( -0.1f,  0.7f);
      glVertex2f(-0.115f,  0.685f);

       glVertex2f( 0.05f,  0.2f);
      glVertex2f(0.020f,  0.185f);

       glVertex2f( -0.0f,  0.3f);
      glVertex2f(-0.015f,  0.285f);

       glVertex2f( -0.1f,  0.4f);
      glVertex2f(-0.115f,  0.385f);

       glVertex2f( -0.19f,  0.9f);
      glVertex2f(-0.205f,  0.885f);

       glVertex2f( -0.27f,  0.4f);
      glVertex2f(-0.285f,  0.385f);

       glVertex2f( -0.24f,  0.2f);
      glVertex2f(-0.255f,  0.185f);

       glVertex2f( -0.52f,  0.9f);
      glVertex2f(-0.535f,  0.885f);

       glVertex2f( -0.5f,  0.2f);
      glVertex2f(-0.515f,  0.185f);

       glVertex2f( -0.5f,  0.3f);
      glVertex2f(-0.515f,  0.285f);

       glVertex2f( -0.5f,  0.1f);
      glVertex2f(-0.515f,  0.085f);

       glVertex2f( -0.9f,  0.5f);
      glVertex2f(-0.915f,  0.485f);

       glVertex2f( -0.1f,  0.4f);
      glVertex2f(-0.085f,  0.415f);

       glVertex2f( -0.2f,  0.4f);
      glVertex2f(-0.185f,  0.415f);

       glVertex2f( -0.3f,  0.4f);
      glVertex2f(-0.285f,  0.415f);

       glVertex2f( -0.4f,  0.4f);
      glVertex2f(-0.385f,  0.415f);

       glVertex2f( -0.5f,  0.4f);
      glVertex2f(-0.485f,  0.415f);

       glVertex2f( -0.6f,  0.4f);
      glVertex2f(-0.585f,  0.415f);




//4th axis;
       glVertex2f( 0.1f,  -0.4f);
      glVertex2f(0.085f,  -0.415f);

       glVertex2f( 0.2f,  -0.4f);
      glVertex2f(0.185f,  -0.415f);

       glVertex2f( 0.3f,  -0.4f);
      glVertex2f(0.285f,  -0.415f);

       glVertex2f( 0.4f,  -0.4f);
      glVertex2f(0.385f,  -0.415f);

       glVertex2f( 0.5f,  -0.4f);
      glVertex2f(0.485f,  -0.415f);

       glVertex2f( 0.6f,  -0.4f);
      glVertex2f(0.585f,  -0.415f);

       glVertex2f( 0.7f,  -0.4f);
      glVertex2f(0.685f,  -0.415f);

      glVertex2f( 0.7f,  -0.5f);
      glVertex2f(0.685f,  -0.515f);

      glVertex2f( 0.8f,  -0.2f);
      glVertex2f(0.785f,  -0.215f);

      glVertex2f( 0.9f,  -0.15f);
      glVertex2f(0.885f,  -0.165f);

      glVertex2f( 1.0f,  -0.1f);
      glVertex2f(0.985f,  -0.115f);

      glVertex2f( 0.5f,  -0.9f);
      glVertex2f(0.485f,  -0.915f);

      glVertex2f( 0.1f,  -0.7f);
      glVertex2f(0.085f,  -0.715f);

      glVertex2f( 0.1f,  -0.640f);
      glVertex2f(0.085f,  -0.655f);

      glVertex2f( 0.2f,  -0.9f);
      glVertex2f(0.185f,  -0.915f);

      glVertex2f( 0.75f,  -0.8f);
      glVertex2f(0.735f,  -0.815f);

      glVertex2f( 0.87f,  -0.4f);
      glVertex2f(0.855f,  -0.415f);

      glVertex2f( 0.9f,  -0.9f);
      glVertex2f(0.885f,  -0.915f);

      glVertex2f( 0.8f,  -0.8f);
      glVertex2f(0.785f,  -0.815f);

      glVertex2f( 1.0f,  -0.4f);
      glVertex2f(0.985f,  -0.415f);

      glVertex2f( 1.0f,  -0.7f);
      glVertex2f(0.985f,  -0.715f);

      glVertex2f( 0.9f,  -0.4f);
      glVertex2f(0.885f,  -0.415f);

      glVertex2f( 0.7f,  -0.6f);
      glVertex2f(0.685f,  -0.615f);

      glVertex2f( 0.3f,  -0.1f);
      glVertex2f(0.285f,  -0.115f);

      glVertex2f( 0.1f,  -0.1f);
      glVertex2f(0.085f,  -0.115f);

      glVertex2f( 0.2f,  -0.2f);
      glVertex2f(0.185f,  -0.215f);

      glVertex2f( 0.3f,  -0.3f);
      glVertex2f(0.285f,  -0.315f);

      glVertex2f( 0.4f,  -0.4f);
      glVertex2f(0.385f,  -0.415f);

      glVertex2f( 0.5f,  -0.5f);
      glVertex2f(0.485f,  -0.515f);

      glVertex2f( 0.6f,  -0.6f);
      glVertex2f(0.585f,  -0.615f);

      glVertex2f( 0.7f,  -0.7f);
      glVertex2f(0.685f,  -0.715f);

      glVertex2f( 0.8f,  -0.8f);
      glVertex2f(0.785f,  -0.815f);

      glVertex2f( 0.9f,  -0.9f);
      glVertex2f(0.885f,  -0.915f);

      glVertex2f( 0.4f,  -0.7f);
      glVertex2f(0.385f,  -0.715f);

      glVertex2f( 0.5f,  -0.7f);
      glVertex2f(0.485f,  -0.715f);

      glVertex2f( 0.65f,  -0.9f);
      glVertex2f(0.635f,  -0.915f);

      glVertex2f( 0.75f,  -0.7f);
      glVertex2f(0.735f,  -0.715f);

      glVertex2f( 0.5f,  -0.1f);
      glVertex2f(0.485f,  -0.115f);

      glVertex2f( 1.2f,  -0.1f);
      glVertex2f(1.185f,  -0.115f);

      glVertex2f( 0.5f,  -0.6f);
      glVertex2f(0.485f,  -0.615f);

      glVertex2f( 0.3f,  -0.1f);
      glVertex2f(0.285f,  -0.115f);

      glVertex2f( 0.3f,  -0.5f);
      glVertex2f(0.285f,  -0.515f);

      glVertex2f( 0.3f,  -0.8f);
      glVertex2f(0.285f,  -0.815f);

      glVertex2f( 0.4f,  -0.15f);
      glVertex2f(0.385f,  -0.165f);

      glVertex2f( 0.4f,  -0.35f);
      glVertex2f(0.385f,  -0.365f);

      glVertex2f( 0.4f,  -0.55f);
      glVertex2f(0.385f,  -0.565f);

      glVertex2f( 0.5f,  -0.1f);
      glVertex2f(0.485f,  -0.115f);

      glVertex2f( 0.6f,  -0.4f);
      glVertex2f(0.585f,  -0.415f);

      glVertex2f( 0.7f,  -0.4f);
      glVertex2f(0.685f,  -0.415f);

      glVertex2f( 0.2f,  -0.3f);
      glVertex2f(0.185f,  -0.315f);

      glVertex2f( 0.2f,  -0.35f);
      glVertex2f(0.185f,  -0.365f);

      glVertex2f( 0.2f,  -0.4f);
      glVertex2f(0.185f,  -0.415f);

      glVertex2f( 0.2f,  -0.5f);
      glVertex2f(0.185f,  -0.515f);

      glVertex2f( 0.2f,  -0.6f);
      glVertex2f(0.185f,  -0.615f);

      glVertex2f( 0.2f,  -0.7f);
      glVertex2f(0.185f,  -0.715f);

      glVertex2f( 0.2f,  -0.8f);
      glVertex2f(0.185f,  -0.815f);

      glVertex2f( 0.2f,  -1.0f);
      glVertex2f(0.185f,  -1.015f);

      glVertex2f( 0.3f,  -0.7f);
      glVertex2f(0.285f,  -0.715f);

      glVertex2f( 0.3f,  -0.8f);
      glVertex2f(0.285f,  -0.815f);

      glVertex2f( 0.3f,  -1.0f);
      glVertex2f(0.285f,  -1.015f);

      glVertex2f( 0.3f,  -0.6f);
      glVertex2f(0.285f,  -0.615f);

      glVertex2f( 0.5f,  -0.7f);
      glVertex2f(0.485f,  -0.715f);

      glVertex2f( 0.4f,  -0.8f);
      glVertex2f(0.385f,  -0.815f);

      glVertex2f( 0.6f,  -0.1f);
      glVertex2f(0.585f,  -0.115f);

      glVertex2f( 0.7f,  -0.1f);
      glVertex2f(0.685f,  -0.115f);

      glVertex2f( 0.7f,  -0.2f);
      glVertex2f(0.685f,  -0.215f);

      glVertex2f( 0.8f,  -0.5f);
      glVertex2f(0.785f,  -0.515f);

      glVertex2f( 0.1f,  -0.2f);
      glVertex2f(0.085f,  -0.215f);

      glVertex2f( 0.1f,  -0.3f);
      glVertex2f(0.085f,  -0.315f);

      glVertex2f( 0.1f,  -0.5f);
      glVertex2f(0.085f,  -0.515f);

      glVertex2f( 0.1f,  -0.8f);
      glVertex2f(0.085f,  -0.815f);

      glVertex2f( 0.1f,  -0.9f);
      glVertex2f(0.085f,  -0.915f);

      glVertex2f( 0.3f,  -0.2f);
      glVertex2f(0.285f,  -0.215f);

      glVertex2f( 0.3f,  -0.9f);
      glVertex2f(0.285f,  -0.915f);

      glVertex2f( 0.4f,  -0.3f);
      glVertex2f(0.385f,  -0.315f);

      glVertex2f( 0.5f,  -0.2f);
      glVertex2f(0.485f,  -0.215f);

      glVertex2f( 0.5f,  -0.3f);
      glVertex2f(0.485f,  -0.315f);

      glVertex2f( 0.5f,  -0.4f);
      glVertex2f(0.485f,  -0.415f);

      glVertex2f( 0.6f,  -0.2f);
      glVertex2f(0.585f,  -0.215f);

      glVertex2f( 0.6f,  -0.3f);
      glVertex2f(0.585f,  -0.315f);

      glVertex2f( 0.6f,  -0.5f);
      glVertex2f(0.585f,  -0.515f);

      glVertex2f( 0.6f,  -0.7f);
      glVertex2f(0.585f,  -0.715f);

      glVertex2f( 0.6f,  -0.8f);
      glVertex2f(0.585f,  -0.815f);

      glVertex2f( 0.75f,  -0.45f);
      glVertex2f(0.735f,  -0.465f);

      glVertex2f( 0.15f,  -0.1f);
      glVertex2f(0.135f,  -0.115f);

      glVertex2f( 0.15f,  -0.5f);
      glVertex2f(0.135f,  -0.515f);

      glVertex2f( 0.55f,  -0.7f);
      glVertex2f(0.535f,  -0.715f);

      glVertex2f( 0.55f,  -0.9f);
      glVertex2f(0.535f,  -0.915f);

      glVertex2f( 0.25f,  -0.15f);
      glVertex2f(0.235f,  -0.165f);

      glVertex2f( 0.25f,  -0.65f);
      glVertex2f(0.235f,  -0.665f);

      glVertex2f( 0.95f,  -0.55f);
      glVertex2f(0.935f,  -0.565f);

      glVertex2f( 0.75f,  -0.35f);
      glVertex2f(0.735f,  -0.365f);

      glVertex2f( 0.83f,  -0.1f);
      glVertex2f(0.815f,  -0.115f);

      glVertex2f( 0.75f,  -0.95f);
      glVertex2f(0.735f,  -0.965f);

      glVertex2f( 0.55f,  -0.1f);
      glVertex2f(0.535f,  -0.115f);

      glVertex2f( 0.95f,  -0.5f);
      glVertex2f(0.935f,  -0.515f);

      glVertex2f( 0.815f,  -0.7f);
      glVertex2f(0.8f,  -0.715f);

      glVertex2f( 0.915f,  -0.7f);
      glVertex2f(0.9f,  -0.715f);

      glVertex2f( 0.8f,  -0.7f);
      glVertex2f(0.785f,  -0.715f);

      glVertex2f( 0.85f,  -0.95f);
      glVertex2f(0.835f,  -0.965f);



      //1st;

       glVertex2f( 0.1f,  0.4f);
      glVertex2f(0.085f,  0.385f);

       glVertex2f( 0.2f,  0.4f);
      glVertex2f(0.215f,  0.415f);

       glVertex2f( 0.3f,  0.4f);
      glVertex2f(0.285f,  0.385f);

       glVertex2f( 0.4f,  0.4f);
      glVertex2f(0.415f,  0.415f);

       glVertex2f( 0.5f,  0.4f);
      glVertex2f(0.485f,  0.385f);

       glVertex2f( 0.6f,  0.4f);
      glVertex2f(0.585f,  0.385f);

       glVertex2f( 0.7f,  0.4f);
      glVertex2f(0.715f,  0.415f);

      glVertex2f( 0.7f,  0.5f);
      glVertex2f(0.685f,  0.485f);

      glVertex2f( 0.8f,  0.2f);
      glVertex2f(0.785f,  0.185f);

      glVertex2f( 0.9f,  0.15f);
      glVertex2f(0.915f,  0.165f);

      glVertex2f( 1.0f,  0.1f);
      glVertex2f(0.985f,  0.085f);

      glVertex2f( 0.5f,  0.9f);
      glVertex2f(0.515f,  0.915f);

      glVertex2f( 0.1f,  0.7f);
      glVertex2f(0.115f,  0.715f);

      glVertex2f( 0.115f,  0.640f);
      glVertex2f(0.1f,  0.625f);

      glVertex2f( 0.2f,  0.9f);
      glVertex2f(0.215f, 0.915f);

      glVertex2f( 0.75f,  0.8f);
      glVertex2f(0.735f,  0.785f);

      glVertex2f( 0.87f,  0.4f);
      glVertex2f(0.885f,  0.415f);

      glVertex2f( 0.9f,  0.9f);
      glVertex2f(0.915f,  0.915f);

      glVertex2f( 0.8f,  0.8f);
      glVertex2f(0.815f,  0.815f);

      glVertex2f( 1.0f,  0.4f);
      glVertex2f(0.985f,  0.385f);

      glVertex2f( 1.0f,  0.7f);
      glVertex2f(0.985f,  0.685f);

      glVertex2f( 0.9f,  0.4f);
      glVertex2f(0.885f,  0.385f);

      glVertex2f( 0.7f,  0.6f);
      glVertex2f(0.715f,  0.615f);

      glVertex2f( 0.35f,  0.1f);
      glVertex2f(0.365f,  0.115f);

      glVertex2f( 0.15f,  0.15f);
      glVertex2f(0.115f,  0.115f);

      glVertex2f( 0.2f,  0.2f);
      glVertex2f(0.215f,  0.215f);

      glVertex2f( 0.3f,  0.3f);
      glVertex2f(0.285f,  0.285f);

      glVertex2f( 0.4f,  0.4f);
      glVertex2f(0.385f,  0.385f);

      glVertex2f( 0.5f,  0.5f);
      glVertex2f(0.485f,  0.485f);

      glVertex2f( 0.6f,  0.6f);
      glVertex2f(0.615f, 0.615f);

      glVertex2f( 0.7f,  0.7f);
      glVertex2f(0.685f,  0.685f);

      glVertex2f( 0.8f,  0.8f);
      glVertex2f(0.815f,  0.815f);

      glVertex2f( 0.9f,  0.95f);
      glVertex2f(0.885f,  0.935f);

      glVertex2f( 0.45f,  0.7f);
      glVertex2f(0.465f,  0.715f);

      glVertex2f( 0.5f,  0.7f);
      glVertex2f(0.515f,  0.715f);

      glVertex2f( 0.65f,  0.9f);
      glVertex2f(0.665f,  0.915f);

      glVertex2f( 0.75f,  0.7f);
      glVertex2f(0.765f,  0.715f);

      glVertex2f( 0.5f,  0.1f);
      glVertex2f(0.515f,  0.115f);

      glVertex2f( 1.1f,  0.1f);
      glVertex2f(1.085f,  0.085f);

      glVertex2f( 0.5f,  0.6f);
      glVertex2f(0.515f,  0.615f);

      glVertex2f( 0.3f,  0.1f);
      glVertex2f(0.315f,  0.115f);

      glVertex2f( 0.35f,  0.5f);
      glVertex2f(0.365f,  0.515f);

      glVertex2f( 0.3f,  0.8f);
      glVertex2f(0.315f,  0.815f);

      glVertex2f( 0.45f,  0.15f);
      glVertex2f(0.465f,  0.165f);

      glVertex2f( 0.4f,  0.35f);
      glVertex2f(0.415f,  0.365f);

      glVertex2f( 0.4f,  0.55f);
      glVertex2f(0.385f,  0.535f);

      glVertex2f( 0.5f,  0.1f);
      glVertex2f(0.485f,  0.085f);

      glVertex2f( 0.6f,  0.4f);
      glVertex2f(0.585f,  0.415f);

      glVertex2f( 0.7f,  0.4f);
      glVertex2f(0.715f,  0.415f);

      glVertex2f( 0.2f,  0.3f);
      glVertex2f(0.215f,  0.315f);

      glVertex2f( 0.2f,  0.35f);
      glVertex2f(0.215f,  0.365f);

      glVertex2f( 0.2f,  0.4f);
      glVertex2f(0.185f,  0.385f);

      glVertex2f( 0.2f,  0.5f);
      glVertex2f(0.215f,  0.515f);

      glVertex2f( 0.25f,  0.6f);
      glVertex2f(0.265f,  0.615f);

      glVertex2f( 0.25f,  0.7f);
      glVertex2f(0.265f,  0.715f);

      glVertex2f( 0.2f,  0.8f);
      glVertex2f(0.215f,  0.815f);

      glVertex2f( 0.2f,  1.0f);
      glVertex2f(0.215f,  1.015f);

      glVertex2f( 0.3f,  0.7f);
      glVertex2f(0.315f,  0.715f);

      glVertex2f( 0.35f,  0.8f);
      glVertex2f(0.365f,  0.815f);

      glVertex2f( 0.3f,  1.0f);
      glVertex2f(0.315f,  1.015f);

      glVertex2f( 0.33f,  0.6f);
      glVertex2f(0.355f,  0.615f);

      glVertex2f( 0.5f,  0.7f);
      glVertex2f(0.485f,  0.685f);

      glVertex2f( 0.4f,  0.8f);
      glVertex2f(0.385f,  0.785f);

      glVertex2f( 0.6f,  0.1f);
      glVertex2f(0.585f,  0.085f);

      glVertex2f( 0.7f,  0.1f);
      glVertex2f(0.685f,  0.085f);

      glVertex2f( 0.7f,  0.2f);
      glVertex2f(0.685f,  0.215f);

      glVertex2f( 0.8f,  0.5f);
      glVertex2f(0.815f,  0.515f);

      glVertex2f( 0.1f,  0.2f);
      glVertex2f(0.085f,  0.185f);

      glVertex2f( 0.1f,  0.3f);
      glVertex2f(0.115f,  0.315f);

      glVertex2f( 0.1f,  0.5f);
      glVertex2f(0.085f,  0.485f);

      glVertex2f( 0.1f,  0.8f);
      glVertex2f(0.115f,  0.815f);

      glVertex2f( 0.1f,  0.9f);
      glVertex2f(0.085f,  0.885f);

      glVertex2f( 0.3f,  0.2f);
      glVertex2f(0.315f,  0.215f);

      glVertex2f( 0.3f,  0.9f);
      glVertex2f(0.285f,  0.885f);

      glVertex2f( 0.4f,  0.35f);
      glVertex2f(0.385f,  0.335f);

      glVertex2f( 0.5f,  0.2f);
      glVertex2f(0.515f,  0.215f);

      glVertex2f( 0.5f,  0.3f);
      glVertex2f(0.485f,  0.285f);

      glVertex2f( 0.5f,  0.43f);
      glVertex2f(0.485f,  0.415f);

      glVertex2f( 0.6f,  0.23f);
      glVertex2f(0.585f,  0.215f);

      glVertex2f( 0.6f,  0.3f);
      glVertex2f(0.615f,  0.315f);

      glVertex2f( 0.6f,  0.53f);
      glVertex2f(0.585f,  0.515f);

      glVertex2f( 0.6f,  0.7f);
      glVertex2f(0.585f,  0.685f);

      glVertex2f( 0.6f,  0.8f);
      glVertex2f(0.615f,  0.815f);

      glVertex2f( 0.75f,  0.45f);
      glVertex2f(0.765f,  0.465f);

      glVertex2f( 0.15f,  0.15f);
      glVertex2f(0.135f,  0.135f);

      glVertex2f( 0.15f,  0.53f);
      glVertex2f(0.135f,  0.515f);

      glVertex2f( 0.55f,  0.7f);
      glVertex2f(0.565f,  0.715f);

      glVertex2f( 0.52f,  0.9f);
      glVertex2f(0.535f,  0.915f);

      glVertex2f( 0.25f,  0.15f);
      glVertex2f(0.235f,  0.135f);

      glVertex2f( 0.25f,  0.65f);
      glVertex2f(0.265f,  0.665f);

      glVertex2f( 0.95f,  0.55f);
      glVertex2f(0.965f,  0.565f);

      glVertex2f( 0.75f,  0.35f);
      glVertex2f(0.735f,  0.335f);

      glVertex2f( 0.83f,  0.1f);
      glVertex2f(0.855f,  0.115f);

      glVertex2f( 0.75f,  0.95f);
      glVertex2f(0.735f,  0.935f);

      glVertex2f( 0.55f,  0.1f);
      glVertex2f(0.565f,  0.115f);

      glVertex2f( 0.95f,  0.53f);
      glVertex2f(0.935f,  0.515f);

      glVertex2f( 0.815f,  0.7f);
      glVertex2f(0.8f,  0.685f);

      glVertex2f( 0.915f,  0.73f);
      glVertex2f(0.9f,  0.715f);

      glVertex2f( 0.82f,  0.7f);
      glVertex2f(0.835f,  0.715f);

      glVertex2f( 0.85f,  0.95f);
      glVertex2f(0.865f,  0.965f);

        glVertex2f( 0.85f,  1.0f);
      glVertex2f(0.865f,  1.015f);

        glVertex2f( 0.75f,  0.95f);
      glVertex2f(0.765f,  0.965f);

        glVertex2f( 1.0f,  0.95f);
      glVertex2f(1.015f,  0.965f);

        glVertex2f( 1.0f,  1.0f);
      glVertex2f(1.015f,  1.015f);

        glVertex2f( 0.85f,  0.0f);
      glVertex2f(0.865f,  0.015f);

        glVertex2f( 0.1f,  0.0f);
      glVertex2f(0.115f,  0.015f);

        glVertex2f( 0.25f,  0.0f);
      glVertex2f(0.265f,  0.015f);

        glVertex2f( 0.4f,  0.0f);
      glVertex2f(0.415f,  0.015f);

        glVertex2f( 0.55f,  0.0f);
      glVertex2f(0.565f,  0.015f);



      //3rd;

      glVertex2f( -0.1f,  -0.4f);
      glVertex2f(-0.085f,  -0.385f);

       glVertex2f( -0.2f,  -0.4f);
      glVertex2f(-0.215f,  -0.415f);

       glVertex2f( -0.3f,  -0.4f);
      glVertex2f(-0.285f,  -0.385f);

       glVertex2f( -0.4f,  -0.4f);
      glVertex2f(-0.415f,  -0.415f);

       glVertex2f( -0.5f,  -0.4f);
      glVertex2f(-0.485f,  -0.385f);

       glVertex2f( -0.6f,  -0.4f);
      glVertex2f(-0.585f,  -0.385f);

       glVertex2f( -0.7f,  -0.4f);
      glVertex2f(-0.715f,  -0.415f);

      glVertex2f( -0.7f,  -0.5f);
      glVertex2f(-0.685f,  -0.485f);

      glVertex2f( -0.8f,  -0.2f);
      glVertex2f(-0.785f,  -0.185f);

      glVertex2f( -0.9f,  -0.15f);
      glVertex2f(-0.915f,  -0.165f);

      glVertex2f( -1.0f,  -0.1f);
      glVertex2f(-0.985f,  -0.085f);

      glVertex2f( -0.5f,  -0.9f);
      glVertex2f(-0.515f,  -0.915f);

      glVertex2f( -0.1f,  -0.7f);
      glVertex2f(-0.115f,  -0.715f);

      glVertex2f( -0.115f,  -0.640f);
      glVertex2f(-0.1f,  -0.625f);

      glVertex2f( -0.2f,  -0.9f);
      glVertex2f(-0.215f, -0.915f);

      glVertex2f( -0.75f,  -0.8f);
      glVertex2f(-0.735f,  -0.785f);

      glVertex2f( -0.87f,  -0.4f);
      glVertex2f(-0.885f,  -0.415f);

      glVertex2f( -0.9f,  -0.9f);
      glVertex2f(-0.915f,  -0.915f);

      glVertex2f( -0.8f,  -0.8f);
      glVertex2f(-0.815f,  -0.815f);

      glVertex2f( -1.0f,  -0.4f);
      glVertex2f(-0.985f,  -0.385f);

      glVertex2f( -1.0f,  -0.7f);
      glVertex2f(-0.985f,  -0.685f);

      glVertex2f( -0.9f,  -0.4f);
      glVertex2f(-0.885f,  -0.385f);

      glVertex2f( -0.7f,  -0.6f);
      glVertex2f(-0.715f,  -0.615f);

      glVertex2f( -0.35f,  -0.1f);
      glVertex2f(-0.365f,  -0.115f);

      glVertex2f( -0.15f,  -0.15f);
      glVertex2f(-0.115f,  -0.115f);

      glVertex2f( -0.2f,  -0.2f);
      glVertex2f(-0.215f,  -0.215f);

      glVertex2f( -0.3f,  -0.3f);
      glVertex2f(-0.285f,  -0.285f);

      glVertex2f( -0.4f,  -0.4f);
      glVertex2f(-0.385f,  -0.385f);

      glVertex2f( -0.5f,  -0.5f);
      glVertex2f(-0.485f,  -0.485f);

      glVertex2f( -0.6f,  -0.6f);
      glVertex2f(-0.615f, -0.615f);

      glVertex2f( -0.7f,  -0.7f);
      glVertex2f(-0.685f,  -0.685f);

      glVertex2f( -0.8f,  -0.8f);
      glVertex2f(-0.815f,  -0.815f);

      glVertex2f( -0.9f,  -0.95f);
      glVertex2f(-0.885f,  -0.935f);

      glVertex2f( -0.45f,  -0.7f);
      glVertex2f(-0.465f,  -0.715f);

      glVertex2f( -0.5f,  -0.7f);
      glVertex2f(-0.515f,  -0.715f);

      glVertex2f( -0.65f,  -0.9f);
      glVertex2f(-0.665f,  -0.915f);

      glVertex2f( -0.75f,  -0.7f);
      glVertex2f(-0.765f,  -0.715f);

      glVertex2f( -0.5f,  -0.1f);
      glVertex2f(-0.515f,  -0.115f);

      glVertex2f( -1.1f,  -0.1f);
      glVertex2f(-1.085f,  -0.085f);

      glVertex2f( -0.5f,  -0.6f);
      glVertex2f(-0.515f,  -0.615f);

      glVertex2f( -0.3f,  -0.1f);
      glVertex2f(-0.315f,  -0.115f);

      glVertex2f( -0.35f,  -0.5f);
      glVertex2f(-0.365f,  -0.515f);

      glVertex2f( -0.3f,  -0.8f);
      glVertex2f(-0.315f,  -0.815f);

      glVertex2f( -0.45f,  -0.15f);
      glVertex2f(-0.465f,  -0.165f);

      glVertex2f( -0.4f,  -0.35f);
      glVertex2f(-0.415f,  -0.365f);

      glVertex2f( -0.4f,  -0.55f);
      glVertex2f(-0.385f,  -0.535f);

      glVertex2f( -0.5f,  -0.1f);
      glVertex2f(-0.485f,  -0.085f);

      glVertex2f( -0.6f,  -0.4f);
      glVertex2f(-0.585f,  -0.415f);

      glVertex2f( -0.7f,  -0.4f);
      glVertex2f(-0.715f,  -0.415f);

      glVertex2f( -0.2f,  -0.3f);
      glVertex2f(-0.215f,  -0.315f);

      glVertex2f( -0.2f,  -0.35f);
      glVertex2f(-0.215f,  -0.365f);

      glVertex2f( -0.2f,  -0.4f);
      glVertex2f(-0.185f,  -0.385f);

      glVertex2f( -0.2f,  -0.5f);
      glVertex2f(-0.215f,  -0.515f);

      glVertex2f( -0.25f,  -0.6f);
      glVertex2f(-0.265f,  -0.615f);

      glVertex2f(- 0.25f,  -0.7f);
      glVertex2f(-0.265f,  -0.715f);

      glVertex2f( -0.2f,  -0.8f);
      glVertex2f(-0.215f,  -0.815f);

      glVertex2f(- 0.2f,  -1.0f);
      glVertex2f(-0.215f,  -1.015f);

      glVertex2f( -0.3f,  -0.7f);
      glVertex2f(-0.315f,  -0.715f);

      glVertex2f(- 0.35f,  -0.8f);
      glVertex2f(-0.365f,  -0.815f);

      glVertex2f( -0.3f,  -1.0f);
      glVertex2f(-0.315f,  -1.015f);

      glVertex2f( -0.33f,  -0.6f);
      glVertex2f(-0.355f,  -0.615f);

      glVertex2f( -0.5f,  -0.7f);
      glVertex2f(-0.485f,  -0.685f);

      glVertex2f( -0.4f,  -0.8f);
      glVertex2f(-0.385f,  -0.785f);

      glVertex2f( -0.6f,  -0.1f);
      glVertex2f(-0.585f,  -0.085f);

      glVertex2f(- 0.7f,  -0.1f);
      glVertex2f(-0.685f,  -0.085f);

      glVertex2f( -0.7f, - 0.2f);
      glVertex2f(-0.685f,  -0.215f);

      glVertex2f( -0.8f,  -0.5f);
      glVertex2f(-0.815f,  -0.515f);

      glVertex2f( -0.1f, - 0.2f);
      glVertex2f(-0.085f,  -0.185f);

      glVertex2f( -0.1f,  -0.3f);
      glVertex2f(-0.115f,  -0.315f);

      glVertex2f( -0.1f,  -0.5f);
      glVertex2f(-0.085f,  -0.485f);

      glVertex2f( -0.1f,  -0.8f);
      glVertex2f(-0.115f,  -0.815f);

      glVertex2f( -0.1f,  -0.9f);
      glVertex2f(-0.085f,  -0.885f);

      glVertex2f( -0.3f,  -0.2f);
      glVertex2f(-0.315f,  -0.215f);

      glVertex2f( -0.3f,  -0.9f);
      glVertex2f(-0.285f,  -0.885f);

      glVertex2f( -0.4f,  -0.35f);
      glVertex2f(-0.385f,  -0.335f);

      glVertex2f( -0.5f,  -0.2f);
      glVertex2f(-0.515f,  -0.215f);

      glVertex2f( -0.5f,  -0.3f);
      glVertex2f(-0.485f, - 0.285f);

      glVertex2f( -0.5f,  -0.43f);
      glVertex2f(-0.485f,  -0.415f);

      glVertex2f( -0.6f,  -0.23f);
      glVertex2f(-0.585f,  -0.215f);

      glVertex2f( -0.6f,  -0.3f);
      glVertex2f(-0.615f,  -0.315f);

      glVertex2f( -0.6f,-0.53f);
      glVertex2f(-0.585f,  -0.515f);

      glVertex2f( -0.6f,  -0.7f);
      glVertex2f(-0.585f,  -0.685f);

      glVertex2f(- 0.6f,  -0.8f);
      glVertex2f(-0.615f,  -0.815f);

      glVertex2f( -0.75f,  -0.45f);
      glVertex2f(-0.765f,  -0.465f);

      glVertex2f( -0.15f,  -0.15f);
      glVertex2f(-0.135f, - 0.135f);

      glVertex2f( -0.15f,  -0.53f);
      glVertex2f(-0.135f,  -0.515f);

      glVertex2f( -0.55f,  -0.7f);
      glVertex2f(-0.565f,  -0.715f);

      glVertex2f( -0.52f,  -0.9f);
      glVertex2f(-0.535f,  -0.915f);

      glVertex2f( -0.25f,  -0.15f);
      glVertex2f(-0.235f,  -0.135f);

      glVertex2f( -0.25f,  -0.65f);
      glVertex2f(-0.265f,  -0.665f);

      glVertex2f( -0.95f,  -0.55f);
      glVertex2f(-0.965f,  -0.565f);

      glVertex2f( -0.75f,  -0.35f);
      glVertex2f(-0.735f,  -0.335f);

      glVertex2f( -0.83f,  -0.1f);
      glVertex2f(-0.855f,  -0.115f);

      glVertex2f( -0.75f,  -0.95f);
      glVertex2f(-0.735f,  -0.935f);

      glVertex2f( -0.55f,  -0.1f);
      glVertex2f(-0.565f,  -0.115f);

      glVertex2f( -0.95f, - 0.53f);
      glVertex2f(-0.935f,  -0.515f);

      glVertex2f( -0.815f,  -0.7f);
      glVertex2f(-0.8f,  -0.685f);

      glVertex2f( -0.915f,  -0.73f);
      glVertex2f(-0.9f,  -0.715f);

      glVertex2f( -0.82f,  -0.7f);
      glVertex2f(-0.835f,  -0.715f);

      glVertex2f( -0.85f,  -0.95f);
      glVertex2f(-0.865f,  -0.965f);

        glVertex2f( -0.85f,  -1.0f);
      glVertex2f(-0.865f,  -1.015f);

        glVertex2f( -0.75f,  -0.95f);
      glVertex2f(-0.765f,  -0.965f);

        glVertex2f( -1.0f,  -0.95f);
      glVertex2f(-1.015f,  -0.965f);

        glVertex2f( -1.0f,  -1.0f);
      glVertex2f(-1.015f,  -1.015f);

        glVertex2f( -0.85f,  0.0f);
      glVertex2f(-0.865f,  -0.015f);

        glVertex2f( -0.1f,  0.0f);
      glVertex2f(-0.115f,  -0.015f);

        glVertex2f( -0.25f,  0.0f);
      glVertex2f(-0.265f,  -0.015f);

        glVertex2f( -0.4f,  0.0f);
      glVertex2f(-0.415f,  -0.015f);

        glVertex2f( -0.55f,  0.0f);
      glVertex2f(-0.565f,  -0.015f);



   glEnd();

   glPopMatrix();


    glFlush(); // Render now

}








//-----------------------------------------------------------------------------------------------






//---------------------------------FINALLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL------------------------


void updateFinalheli(int n)
{
    if (heli >= 10.0){

        heli = -9.7;
    //nightView();
    }
        heli += 0.05;

    glutPostRedisplay();
    glutTimerFunc(20, updateFinalheli, 0);
}
float positionFinal = -1.5;
void updateFinal(int n)
{
    if (positionFinal >= 2.5){

        positionFinal = -1.5;
    }

    positionFinal += 0.01;
    glutPostRedisplay();
    glutTimerFunc(100, updateFinal, 0);
}

void boat(){

glPushMatrix();
glScaled(0.6, 0.6, 0.0);
glTranslatef(positionFinal,0.7, 0.0f);
   glBegin(GL_QUADS);
      glColor3ub(110, 38, 4);
      glVertex2f(-0.7f, -0.8f);
      glVertex2f( -0.3f, -0.8f);
      glVertex2f( -0.2f,  -0.7f);
      glVertex2f(-0.8f,  -0.7f);
   glEnd();

   glBegin(GL_QUADS);
      glColor3ub(245, 225, 137);
      glVertex2f(-0.55f, -0.7f);
      glVertex2f( -0.3f, -0.7f);
      glVertex2f( -0.3f,  -0.6f);
      glVertex2f(-0.55f,  -0.6f);
   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(-0.48f,-0.6f);
   glVertex2f(-0.38f, -0.63f);
   glVertex2f(-0.48f, -0.3f);
   glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, .0f); // Red
	glVertex2f(-0.48f, -0.6f);    // x, y
	glVertex2f(-0.48f, -0.7f);    // x, y
	glEnd();

    glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(-0.61f,-0.62f);
   glVertex2f(-0.5f, -0.6f);
   glVertex2f(-0.5f, -0.3f);
   glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.6f);    // x, y
	glVertex2f(-0.5f, -0.7f);    // x, y
	glEnd();

	glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(-0.7f,-0.62f);
   glVertex2f(-0.6f, -0.62f);
   glVertex2f(-0.6f, -0.38f);
   glEnd();

    glLineWidth(1.5);
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.6f, -0.6f);    // x, y
	glVertex2f(-0.6f, -0.7f);    // x, y
	glEnd();
glPopMatrix();

    glFlush();  // Render now

}

void setSpin(float x, float y, float z)
{
    spin_x = x;
    spin_y = y;
    spin_z = z;
}


void reset()
{
    spin_x = 0;
    spin_y = 1;
    spin_z = 0;
    translate_x = 0.0;
    translate_y = 0.0;
    translate_z = -30.0;
}
//------- custom functions ends   -------

void reshape(int w,int h)
{
    glViewport(0,0, (GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100.0f, (GLfloat)w/(GLfloat)h, 1.0f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


void spinDisplay(void)
{
    spin=spin+spin_speed;
    if(spin>360.0)
    {
        spin=spin-360.0;
    }
    glutPostRedisplay();
}


void spinDisplayReverse(void)
{
    spin=spin-spin_speed;
    if(spin<360.0)
    {
        spin=spin+360.0;
    }
    glutPostRedisplay();
}


void mouse(int button,int state,int x,int y)
{
    switch(button)
    {
        case GLUT_LEFT_BUTTON:
            if(state==GLUT_DOWN)
                glutIdleFunc(spinDisplay);
            break;



        case GLUT_MIDDLE_BUTTON:
            if(state==GLUT_DOWN)
            {
                glutIdleFunc(NULL);
            }
            break;



        case GLUT_RIGHT_BUTTON:
            if(state==GLUT_DOWN)
                glutIdleFunc(NULL);
            break;



        default:
            break;

    }
}



void kharFinal1 (float translateX, float translateY, float scaleX, float scaleY) {

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);

     glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(154,129,35); // Yellow (Khar)

    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.28f, -0.62f);
    glVertex2f(-0.283f, -0.68f);
    glVertex2f(-0.32f, -0.76f);
    glVertex2f(-0.324f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.27f, -0.6f);

    glEnd();



    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(134,111,28); // Yellow (khar shade)

    glVertex2f(-0.255f, -0.57f);
    glVertex2f(-0.27f, -0.6f);
    glVertex2f(-0.26f, -0.625f);
    glVertex2f(-0.273f, -0.7f);
    glVertex2f(-0.265f, -0.74f);
    glVertex2f(-0.271f, -0.8f);
    glVertex2f(-0.3f, -0.82f);
    glVertex2f(-0.24f, -0.834f);
    glVertex2f(-0.19f, -0.82f);
    glVertex2f(-0.2f, -0.77f);
    glVertex2f(-0.22f, -0.7f);

    glVertex2f(-0.23f, -0.65f);
    glVertex2f(-0.232f, -0.6f);
    glVertex2f(-0.25f, -0.588f);
    glEnd();

    glPopMatrix();
}

void poleFinal(float translateX, float translateY, float scaleX, float scaleY)
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.29);
    glVertex2f(0.89, 0.38);
    glVertex2f(0.885, 0.38);
    glVertex2f(0.885, 0.29);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.885, 0.333);
    glVertex2f(0.88, 0.35);
    glVertex2f(0.879, 0.34);
    glVertex2f(0.885, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.89, 0.333);
    glVertex2f(0.895, 0.35);
    glVertex2f(0.896, 0.34);
    glVertex2f(0.89, 0.322);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.88, 0.36);
    glVertex2f(0.873, 0.36);
    glVertex2f(0.873, 0.35);
    glVertex2f(0.88, 0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25, 28, 38);
    glVertex2f(0.895, 0.36);
    glVertex2f(0.902, 0.36);
    glVertex2f(0.902, 0.35);
    glVertex2f(0.895, 0.35);
    glEnd();
    glPopMatrix();
}

void helicopter(float translateX, float translateY, float scaleX, float scaleY){

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(heli, 4.0, 0.0f);

    glLineWidth(4.0);   //main rod
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.0f, 0.35f);
    glEnd();
        glBegin(GL_LINES); //upper rod
    glColor3ub(1,1,1);
    glVertex2f(-0.04f, 0.35f);
    glVertex2f(0.04f, 0.35f);
    glEnd();

    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2f(-0.09f, 0.275f);
    glVertex2f(0.09f, 0.275f);
    glEnd();

    glLineWidth(4.0);   //down rod left
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(-0.1f, -0.15f);
    glVertex2f(-0.1f, -0.3f);
    glEnd();

    glLineWidth(4.0);   //down rod right
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(0.1f, -0.15f);
    glVertex2f(0.1f, -0.3f);
    glEnd();

        glLineWidth(4.0);   //down rod right
    glBegin(GL_LINES);
    glColor3ub(1, 1, 1);
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(30, 76, 31); // Saddle Brown (House er niche stick 3rd)
    glVertex2f(-0.4f, -0.15f); // x, y
    glVertex2f(0.4f, -0.15f);
    glVertex2f(0.4f, 0.15f);
    glVertex2f(-0.4f, 0.15f);
    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(30, 76, 31); // Saddle Brown (House er niche stick 3rd)
    glVertex2f(0.4f, -0.15f); // x, y
    glVertex2f(0.6f, -0.15f);
    glVertex2f(0.6f, 0.1f);
    glVertex2f(0.4f, 0.15f);
    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(30, 76, 31); // Saddle Brown (House er niche stick 3rd)
    glVertex2f(0.6f, -0.15f); // x, y
    glVertex2f(0.8f, -0.15f);
    glVertex2f(0.8f, 0.07f);
    glVertex2f(0.4f, 0.11f);
    glEnd();


    glColor3ub(30, 76, 31); // Saddle Brown (House er niche stick 3rd)
    circleFinal(0.77, -0.04, 0.11, 2.5);

    glColor3ub(255, 76, 31); // Saddle Brown (House er niche stick 3rd)
    circleFinal(0.01, 0.01, 0.11, 2.5);

    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(30, 76, 31); // Yellow (Upper Land EverBrown) -- land code big gray
    glVertex2f(-0.4f, 0.15f);
    glVertex2f(0.4f, 0.15f);
    glVertex2f(0.2f, 0.23f);
    glVertex2f(-0.2f, 0.23f);
    glVertex2f(-0.4f, 0.15f);
    glEnd();


    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(30, 76, 31); // Yellow (Upper Land EverBrown) -- land code big gray
    glVertex2f(-0.4f, -0.15f);
    glVertex2f(0.4f, -0.15f);
    glVertex2f(0.2f, -0.18f);
    glVertex2f(-0.2f, -0.18f);
    glVertex2f(-0.4f, -0.15f);
    glEnd();

        glBegin(GL_QUADS);       // Each set of 4 vertices form a quad -- home code stick
    glColor3ub(30, 76, 31); // Saddle Brown (House er niche stick 3rd)
    glVertex2f(-0.98f, 0.0f); // x, y
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.4f, 0.15f);
    glVertex2f(-0.98f, 0.15f);
    glEnd();


        glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad  -- land code the smallest
    glColor3ub(30, 76, 31); // Saddle Brown (Middle Triangle Field 1st)
    glVertex2f(-0.4, -0.15); // x, y
    glVertex2f(-0.4, 0.0);
    glVertex2f(-0.6, 0.0);
    glEnd();


    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad  -- land code the smallest
    glColor3ub(30, 76, 31); // Saddle Brown (Middle Triangle Field 1st)
    glVertex2f(-0.98, 0.0); // x, y
    glVertex2f(-0.8, 0.15);
    glVertex2f(-0.98, 0.35);
    glEnd();

    glRotatef(spin,spin_x,spin_y,spin_z);
        glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2f(-0.6f, 0.275f);
    glVertex2f(0.6f, 0.275f);
    glEnd();
    glutIdleFunc(spinDisplay);
    glPopMatrix();
}

void birdFinal(float translateX, float translateY, float scaleX, float scaleY)
{

    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_POLYGON); // (bird body)
    glColor3ub(0, 0, 0);
    glVertex2f(-0.5, 0.75);
    glVertex2f(-0.47, 0.72);
    glVertex2f(-0.5, 0.718);
    glVertex2f(-0.42, 0.7);
    glVertex2f(-0.365, 0.7172);
    glVertex2f(-0.34, 0.75);
    glVertex2f(-0.31, 0.73);
    glVertex2f(-0.328, 0.76);
    glVertex2f(-0.338, 0.765);

    glVertex2f(-0.48, 0.74);
    glVertex2f(-0.5, 0.75);
    glEnd();

/*    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird Hand)

    glVertex2f(-0.42f, 0.75f); // x, y
    glVertex2f(-0.38f, 0.74f);
    glVertex2f(-0.40f, birdWing);

    glEnd();
*/
    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird tail)

    glVertex2f(-0.5, 0.718); // x, y
    glVertex2f(-0.53f, 0.71f);
    glVertex2f(-0.5f, 0.75f);

    glEnd();

    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3ub(0, 0, 0);   // Saddle Brown ( Bird Tail 2nd)

    glVertex2f(-0.5, 0.718); // x, y
    glVertex2f(-0.53f, 0.76f);
    glVertex2f(-0.5f, 0.75f);

    glEnd();
    glPopMatrix();
}

//GLfloat positionFinal = 0.0f;
//GLfloat speed = 6.0f;

void grassFinal2(float translateX, float translateY, float scaleX, float scaleY)
{
    glPushMatrix();
    glScaled(scaleX, scaleY, 0.0);
    glTranslatef(translateX, translateY, 0.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(50, 75, 29);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);
    glEnd();
    glPopMatrix();
}

void circleFinal(GLfloat p1, GLfloat q1, GLfloat r1, GLfloat tp2)
{
    int i;

    // GLfloat p1=0.8f; GLfloat q1= 0.9f; GLfloat r1 = 0.07f;  //(First cloudFinal)
    int tringle2 = 40;

    tp2 = tp2 * PI;

    glBegin(GL_TRIANGLE_FAN);
    // glColor3ub ( 229,227,246);

    glVertex2f(p1, q1);
    for (i = 0; i <= tringle2; i++)
    {
        glVertex2f(
            p1 + (r1 * cos(i * tp2 / tringle2)),
            q1 + (r1 * sin(i * tp2 / tringle2)));
    }

    glEnd();
}
void clouldFinal2()
{
    glColor3ub(229, 227, 246); //(Mid cloudFinal )
    circleFinal(0.3, 0.9, 0.05, 2);
    circleFinal(0.21, 0.87, 0.04, 2);
    circleFinal(0.36, 0.87, 0.04, 2);
    circleFinal(0.28, 0.86, 0.046, 2);
    circleFinal(0.23, 0.9, 0.025, 2);
    circleFinal(0.35, 0.9, 0.025, 2);
    circleFinal(0.4, 0.87, 0.025, 2);
    circleFinal(0.33, 0.86, 0.025, 2);

    glColor3ub(204, 225, 245); //(Mid cloudFinal shade)
    circleFinal(0.3, 0.9, 0.043, 2);
    circleFinal(0.21, 0.87, 0.033, 2);
    circleFinal(0.36, 0.87, 0.033, 2);
    circleFinal(0.28, 0.86, 0.04, 2);
    circleFinal(0.23, 0.9, 0.02, 2);
    circleFinal(0.35, 0.9, 0.01, 2);
    circleFinal(0.4, 0.87, 0.01, 2);
    circleFinal(0.33, 0.86, 0.01, 2);
}

void bushFinal()
{
    glColor3ub(96, 138, 58); //( Bush )
    circleFinal(0.3, 0.9, 0.05, 2);
    circleFinal(0.21, 0.87, 0.04, 2);
    circleFinal(0.36, 0.87, 0.04, 2);
    circleFinal(0.28, 0.86, 0.046, 2);
    circleFinal(0.23, 0.9, 0.025, 2);
    circleFinal(0.35, 0.9, 0.025, 2);
    circleFinal(0.4, 0.87, 0.025, 2);
    circleFinal(0.33, 0.86, 0.025, 2);

    glColor3ub(46, 90, 14); //(Bush shade)
    circleFinal(0.3, 0.9, 0.043, 2);
    circleFinal(0.21, 0.87, 0.033, 2);
    circleFinal(0.36, 0.87, 0.033, 2);
    circleFinal(0.28, 0.86, 0.04, 2);
    circleFinal(0.23, 0.9, 0.02, 2);
    circleFinal(0.35, 0.9, 0.01, 2);
    circleFinal(0.4, 0.87, 0.01, 2);
    circleFinal(0.33, 0.86, 0.01, 2);
}

void grassFinal1()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(99, 149, 57);
    glVertex2f(0.4505, 0.0308);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.2938, 1.0395);
    glVertex2f(0.4008, 0.7051);
    glVertex2f(0.3621, 0.7028);
    glVertex2f(0.3834, 0.5412);
    glVertex2f(0.0242, 1.0358);
    glVertex2f(0.3665, 0.6698);
    glVertex2f(0.4135, 0.6698);
    glVertex2f(0.4578, 1.1724);
    glVertex2f(0.4623, 0.6721);
    glVertex2f(0.4653, 0.0314);
    glVertex2f(0.4134, 0.6709);
    glVertex2f(0.4623, 0.6709);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.6564, 1.1433);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.4761, 0.0326);
    glVertex2f(0.5071, 0.6858);
    glVertex2f(0.5525, 0.6767);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.9407, 1.1068);
    glVertex2f(0.6672, 0.6801);
    glVertex2f(0.5198, 0.0399);
    glVertex2f(0.6252, 0.6915);
    glVertex2f(0.6672, 0.6801);

    glEnd();
}



void finalView(){

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(.5);
    // Draw a Red 1x1 Square centered at origin

    glBegin(GL_QUADS);         // Each set of 4 vertices form a quad
    glColor3ub(63, 91, 128); // Saddle Brown (Sky colour)

    glVertex2f(-1.0f, 0.3f); // x, y
    glVertex2f(1.0f, 0.3f);
    glColor3ub(122, 178, 255);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);

    glEnd();

    glColor3ub(229, 227, 246); //(1st cloudFinal)
    circleFinal(0.8, 0.75, 0.052, 2);
    circleFinal(0.74, 0.721, 0.03, 2);
    circleFinal(0.85, 0.72, 0.03, 2);
    glColor3ub(204, 225, 245); //(1st cloudFinal shade)
    circleFinal(0.8, 0.75, 0.042, 2);
    circleFinal(0.74, 0.721, 0.025, 2);
    circleFinal(0.85, 0.72, 0.025, 2);

    glColor3ub(229, 227, 246); // 2nd cloudFinal
    circleFinal(-0.9, 0.82, 0.03, 2);
    circleFinal(-0.83, 0.84, 0.05, 2);
    circleFinal(-0.765, 0.823, 0.03, 2);
    glColor3ub(204, 225, 245); //(2nd cloudFinal shade)
    circleFinal(-0.88, 0.82, 0.02, 2);
    circleFinal(-0.83, 0.84, 0.04, 2);
    circleFinal(-0.784, 0.823, 0.02, 2);

    /*glColor3ub ( 229,227,246); //(Mid cloudFinal )
    circleFinal(0.3,0.9,0.05,2);
    circleFinal(0.21,0.87,0.04,2);
    circleFinal(0.36,0.87,0.04,2);
    circleFinal(0.28,0.86,0.046,2);
    circleFinal(0.23,0.9,0.025,2);
    circleFinal(0.35,0.9,0.025,2);
    circleFinal(0.4,0.87,0.025,2);
    circleFinal(0.33,0.86,0.025,2);

    glColor3ub ( 204,225,245); //(Mid cloudFinal shade)
    circleFinal(0.3,0.9,0.043,2);
    circleFinal(0.21,0.87,0.033,2);
    circleFinal(0.36,0.87,0.033,2);
    circleFinal(0.28,0.86,0.04,2);
    circleFinal(0.23,0.9,0.02,2);
    circleFinal(0.35,0.9,0.01,2);
    circleFinal(0.4,0.87,0.01,2);
    circleFinal(0.33,0.86,0.01,2);
    */
    glPushMatrix();
    glScaled(1.5, 1.5, 0.0);
    glTranslatef(0.0, -0.5, 0.0);

    clouldFinal2();
    glPopMatrix(); // clouldFinal2

    glPushMatrix();
    glScaled(1.52, 1.52, 0.0);
    glTranslatef(-0.4, -0.3, 0.0);

    clouldFinal2();
    glPopMatrix(); // cloudFinal2

    glPushMatrix();
    glScaled(1.1, 1.5, 0.0);
    glTranslatef(cloudFinal, -0.45, 0.0);

    clouldFinal2();
    glPopMatrix(); // cloudFinal3

    glPushMatrix();
    glScaled(1.17, 1.17, 0.0);
    glTranslatef(cloudFinal2, -0.1, 0.0);

    clouldFinal2();
    glPopMatrix(); // clouldFinal2-2

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad
    glColor3ub(231, 230, 244); // Saddle Brown (Sky Triangle 1st)

    glVertex2f(-1.0, 0.82); // x, y
    glVertex2f(-0.6, 0.8);
    glVertex2f(-1.0, 0.78);

    glEnd();

    glBegin(GL_TRIANGLES);     // Each set of 4 vertices form a quad
    glColor3ub(231, 230, 244); // Saddle Brown (Sky triangle 2nd )

    glVertex2f(1.0, 0.72); // x, y
    glVertex2f(0.6, 0.7);
    glVertex2f(1.0, 0.68);

    glEnd();

    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(1, 120, 124); // Yellow (Mountain)

    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);

    glVertex2f(0.95f, 0.35f);
    glVertex2f(0.9f, 0.357f);
    glVertex2f(0.869f, 0.381f);
    glVertex2f(0.8f, 0.35f);
    glVertex2f(0.771f, 0.348f);
    glVertex2f(0.7f, 0.355f);
    glVertex2f(0.671f, 0.358f);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.55f, 0.39f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.4f, 0.39f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.2f, 0.413f);
    glVertex2f(0.1f, 0.389f);
    glVertex2f(0.0f, 0.42f);
    glVertex2f(-0.1f, 0.44f);
    glVertex2f(-0.124f, 0.428f);
    glVertex2f(-0.161f, 0.38f);
    glVertex2f(-0.2f, 0.36f);
    glVertex2f(-0.223f, 0.361f);
    glVertex2f(-0.25f, 0.4f);
    glVertex2f(-0.254f, 0.45f);
    glVertex2f(-0.28f, 0.493f);
    glVertex2f(-0.32f, 0.518f);
    glVertex2f(-0.361f, 0.48f);
    glVertex2f(-0.368f, 0.45f);

    glVertex2f(-0.4f, 0.44f);
    glVertex2f(-0.5f, 0.455f);
    glVertex2f(-0.534f, 0.444f);
    glVertex2f(-0.6f, 0.49f);
    glVertex2f(-0.65f, 0.5f);
    glVertex2f(-0.7f, 0.48f);
    glVertex2f(-0.74f, 0.43f);
    glVertex2f(-0.8f, 0.42f);
    glVertex2f(-0.818f, 0.422f);
    glVertex2f(-0.9f, 0.45f);

    glVertex2f(-0.95f, 0.418f);
    glVertex2f(-1.0f, 0.4f);

    glEnd();

    glBegin(GL_POLYGON);       // These vertices form a closed polygon
    glColor3ub(151, 190, 190); // Yellow (Mountain)

    glVertex2f(-1.00f, 0.28f);
    glVertex2f(1.00f, 0.28f);
    glColor3ub(0, 104, 105); // Yellow (Mountain)
    glVertex2f(0.95f, 0.33f);
    glVertex2f(0.90f, 0.337f);
    glVertex2f(0.869f, 0.361f);
    glVertex2f(0.80f, 0.33f);
    glVertex2f(0.771f, 0.328f);
    glVertex2f(0.70f, 0.335f);
    glVertex2f(0.671f, 0.338f);
    glVertex2f(0.60f, 0.33f);
    glVertex2f(0.55f, 0.37f);
    glVertex2f(0.50f, 0.38f);
    glVertex2f(0.40f, 0.37f);
    glVertex2f(0.30f, 0.38f);
    glVertex2f(0.20f, 0.393f);
    glVertex2f(0.10f, 0.369f);
    glVertex2f(0.00f, 0.40);
    glVertex2f(-0.10f, 0.42f);
    glVertex2f(-0.124f, 0.408f);
    glVertex2f(-0.161f, 0.36f);
    glVertex2f(-0.20f, 0.34f);
    glVertex2f(-0.223f, 0.341f);
    glVertex2f(-0.25f, 0.38f);
    glVertex2f(-0.254f, 0.43f);
    glVertex2f(-0.28f, 0.473f);
    glVertex2f(-0.32f, 0.498f);
    glVertex2f(-0.361f, 0.46f);
    glVertex2f(-0.368f, 0.43f);
    glVertex2f(-0.40f, 0.42f);
    glVertex2f(-0.50f, 0.435f);
    glVertex2f(-0.534f, 0.424f);
    glVertex2f(-0.60f, 0.47f);
    glVertex2f(-0.65f, 0.48f);
    glVertex2f(-0.70f, 0.46f);
    glVertex2f(-0.74f, 0.41f);
    glVertex2f(-0.80f, 0.40);
    glVertex2f(-0.818f, 0.402f);
    glVertex2f(-0.90f, 0.43f);
    glVertex2f(-0.95f, 0.398f);
    glVertex2f(-1.00f, 0.38f);

    glEnd();

    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(66, 142, 163); // Yellow (Upper Land EverBrown)
    glVertex2f(-1.0f, -0.7f);
    glVertex2f(1.0f, -0.7f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glEnd();

    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(76, 152, 173); // Yellow (upper land Green up shade)

    glVertex2f(1.0f, 0.3f);
    glVertex2f(0.6f, 0.32f);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(-0.6f, 0.32f);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, 0.29f);
    glVertex2f(-0.6f, 0.3f);
    glVertex2f(0.0f, 0.29f);

    glVertex2f(0.6f, 0.3f);
    glVertex2f(1.0f, 0.29f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 152, 173);
    glVertex2f(0.82, 0.284); // (Middle Land halka green Right 5th)
    glVertex2f(0.615, 0.0);
    glVertex2f(1.0, -0.11);
    glVertex2f(1.0, 0.282);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 152, 173);
    glVertex2f(0.31, 0.284); // (Middle Land halka green 4th)
    glVertex2f(0.09, 0.11);
    glVertex2f(0.6, 0.0);
    glVertex2f(0.8, 0.282);
    glEnd();

    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad
    glColor3ub(76, 152, 173); // Saddle Brown (Middle Triangle Field 1st)

    glVertex2f(-0.77, 0.282); // x, y
    glVertex2f(-0.516, 0.21);
    glVertex2f(-0.35, 0.283);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 152, 173);
    glVertex2f(-0.48, 0.22); // (Middle Land halka green 3rd)
    glVertex2f(0.07, 0.12);
    glVertex2f(0.3, 0.293);
    glVertex2f(-0.3, 0.294);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(76, 152, 173);
    glVertex2f(-1.0, 0.01); // (Middle Land Halka green 2nd))
    glVertex2f(-0.52, 0.202);
    glVertex2f(-0.8, 0.28);
    glVertex2f(-1.0, 0.28);
    glEnd();

    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(76, 152, 173); // Yellow (Middle Land yellow green Main 1st)

    glVertex2f(-1.0f, -0.49f);
    glVertex2f(-0.9f, -0.48f);

    glVertex2f(0.05f, 0.1f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();

    // grassFinal2(-11.1,-6.9,0.09,0.09);
    grassFinal2(-11.10, -6.90, 0.09, 0.09);
    grassFinal2(-11.10, -6.00, 0.09, 0.09);

    grassFinal2(-10.40, -6.90, 0.09, 0.09);
    grassFinal2(-10.40, -6.00, 0.09, 0.09);

    grassFinal2(-9.70, -6.90, 0.09, 0.09);
    grassFinal2(-9.70, -6.00, 0.09, 0.09);

    grassFinal2(-9.00, -6.90, 0.09, 0.09);
    grassFinal2(-9.00, -6.00, 0.09, 0.09);
    grassFinal2(-9.00, -5.10, 0.09, 0.09);

    grassFinal2(-8.30, -6.90, 0.09, 0.09);
    grassFinal2(-8.30, -6.00, 0.09, 0.09);
    grassFinal2(-8.30, -5.10, 0.09, 0.09);

    grassFinal2(-7.60, -6.90, 0.09, 0.09);
    grassFinal2(-7.60, -6.00, 0.09, 0.09);
    grassFinal2(-7.60, -5.10, 0.09, 0.09);

    grassFinal2(-6.90, -6.90, 0.09, 0.09);
    grassFinal2(-6.90, -6.00, 0.09, 0.09);
    grassFinal2(-6.90, -5.10, 0.09, 0.09);
    grassFinal2(-6.90, -4.20, 0.09, 0.09);

    grassFinal2(-6.20, -6.90, 0.09, 0.09);
    grassFinal2(-6.20, -6.00, 0.09, 0.09);
    grassFinal2(-6.20, -5.10, 0.09, 0.09);
    grassFinal2(-6.20, -4.20, 0.09, 0.09);

    grassFinal2(-5.50, -6.90, 0.09, 0.09);
    grassFinal2(-5.50, -6.00, 0.09, 0.09);
    grassFinal2(-5.50, -5.10, 0.09, 0.09);
    grassFinal2(-5.50, -4.20, 0.09, 0.09);
    grassFinal2(-5.50, -3.30, 0.09, 0.09);

    grassFinal2(-4.80, -6.90, 0.09, 0.09);
    grassFinal2(-4.80, -6.00, 0.09, 0.09);
    grassFinal2(-4.80, -5.10, 0.09, 0.09);
    grassFinal2(-4.80, -4.20, 0.09, 0.09);
    grassFinal2(-4.80, -3.30, 0.09, 0.09);
    grassFinal2(-4.80, -2.40, 0.09, 0.09);

    grassFinal2(-4.10, -6.90, 0.09, 0.09);
    grassFinal2(-4.10, -6.00, 0.09, 0.09);
    grassFinal2(-4.10, -5.10, 0.09, 0.09);
    grassFinal2(-4.10, -4.20, 0.09, 0.09);
    grassFinal2(-4.10, -3.30, 0.09, 0.09);
    grassFinal2(-4.10, -2.40, 0.09, 0.09);

    grassFinal2(-3.40, -6.90, 0.09, 0.09);
    grassFinal2(-3.40, -6.00, 0.09, 0.09);
    grassFinal2(-3.40, -5.10, 0.09, 0.09);
    grassFinal2(-3.40, -4.20, 0.09, 0.09);
    grassFinal2(-3.40, -3.30, 0.09, 0.09);
    grassFinal2(-3.40, -2.40, 0.09, 0.09);
    grassFinal2(-3.40, -1.50, 0.09, 0.09);

    grassFinal2(-2.70, -6.90, 0.09, 0.09);
    grassFinal2(-2.70, -6.00, 0.09, 0.09);
    grassFinal2(-2.70, -5.10, 0.09, 0.09);
    grassFinal2(-2.70, -4.20, 0.09, 0.09);
    grassFinal2(-2.70, -3.30, 0.09, 0.09);
    grassFinal2(-2.70, -2.40, 0.09, 0.09);
    grassFinal2(-2.70, -1.50, 0.09, 0.09);

    grassFinal2(-2.00, -6.90, 0.09, 0.09);
    grassFinal2(-2.00, -6.00, 0.09, 0.09);
    grassFinal2(-2.00, -5.10, 0.09, 0.09);
    grassFinal2(-2.00, -4.20, 0.09, 0.09);
    grassFinal2(-2.00, -3.30, 0.09, 0.09);
    grassFinal2(-2.00, -2.40, 0.09, 0.09);
    grassFinal2(-2.00, -1.50, 0.09, 0.09);
    grassFinal2(-2.00, -0.60, 0.09, 0.09);

    grassFinal2(-1.30, -6.90, 0.09, 0.09);
    grassFinal2(-1.30, -6.00, 0.09, 0.09);
    grassFinal2(-1.30, -5.10, 0.09, 0.09);
    grassFinal2(-1.30, -4.20, 0.09, 0.09);
    grassFinal2(-1.30, -3.30, 0.09, 0.09);
    grassFinal2(-1.30, -2.40, 0.09, 0.09);
    grassFinal2(-1.30, -1.50, 0.09, 0.09);
    grassFinal2(-1.30, -0.60, 0.09, 0.09);

    grassFinal2(-0.60, -6.90, 0.09, 0.09);
    grassFinal2(-0.60, -6.00, 0.09, 0.09);
    grassFinal2(-0.60, -5.10, 0.09, 0.09);
    grassFinal2(-0.60, -4.20, 0.09, 0.09);
    grassFinal2(-0.60, -3.30, 0.09, 0.09);
    grassFinal2(-0.60, -2.40, 0.09, 0.09);
    grassFinal2(-0.60, -1.50, 0.09, 0.09);
    grassFinal2(-0.60, -0.60, 0.09, 0.09);

    grassFinal2(0.10, -6.90, 0.09, 0.09);
    grassFinal2(0.10, -6.00, 0.09, 0.09);
    grassFinal2(0.10, -5.10, 0.09, 0.09);
    grassFinal2(0.10, -4.20, 0.09, 0.09);
    grassFinal2(0.10, -3.30, 0.09, 0.09);
    grassFinal2(0.10, -2.40, 0.09, 0.09);
    grassFinal2(0.10, -1.50, 0.09, 0.09);
    grassFinal2(0.10, -0.60, 0.09, 0.09);
    grassFinal2(0.10, 0.30, 0.09, 0.09);

    grassFinal2(0.80, -6.90, 0.09, 0.09);
    grassFinal2(0.80, -6.00, 0.09, 0.09);
    grassFinal2(0.80, -5.10, 0.09, 0.09);
    grassFinal2(0.80, -4.20, 0.09, 0.09);
    grassFinal2(0.80, -3.30, 0.09, 0.09);
    grassFinal2(0.80, -2.40, 0.09, 0.09);
    grassFinal2(0.80, -1.50, 0.09, 0.09);
    grassFinal2(0.80, -0.60, 0.09, 0.09);
    grassFinal2(0.80, 0.30, 0.09, 0.09);

    grassFinal2(1.50, 0.30, 0.09, 0.09);
    grassFinal2(1.50, -6.90, 0.09, 0.09);
    grassFinal2(1.50, -6.00, 0.09, 0.09);
    grassFinal2(1.50, -5.10, 0.09, 0.09);
    grassFinal2(1.50, -4.20, 0.09, 0.09);
    grassFinal2(1.50, -3.30, 0.09, 0.09);
    grassFinal2(1.50, -2.40, 0.09, 0.09);
    grassFinal2(1.50, -1.50, 0.09, 0.09);
    grassFinal2(1.50, -0.60, 0.09, 0.09);

    grassFinal2(2.20, -6.90, 0.09, 0.09);
    grassFinal2(2.20, -6.00, 0.09, 0.09);
    grassFinal2(2.20, -5.10, 0.09, 0.09);
    grassFinal2(2.20, -4.20, 0.09, 0.09);
    grassFinal2(2.20, -3.30, 0.09, 0.09);
    grassFinal2(2.20, -2.40, 0.09, 0.09);
    grassFinal2(2.20, -1.50, 0.09, 0.09);
    grassFinal2(2.20, -0.60, 0.09, 0.09);
    grassFinal2(2.90, -6.90, 0.09, 0.09);
    grassFinal2(2.90, -6.00, 0.09, 0.09);
    grassFinal2(2.90, -5.10, 0.09, 0.09);
    grassFinal2(2.90, -4.20, 0.09, 0.09);
    grassFinal2(2.90, -3.30, 0.09, 0.09);
    grassFinal2(2.90, -2.40, 0.09, 0.09);
    grassFinal2(2.90, -1.50, 0.09, 0.09);
    grassFinal2(2.90, -0.60, 0.09, 0.09);
    grassFinal2(3.60, -6.90, 0.09, 0.09);
    grassFinal2(3.60, -6.00, 0.09, 0.09);
    grassFinal2(3.60, -5.10, 0.09, 0.09);
    grassFinal2(3.60, -4.20, 0.09, 0.09);
    grassFinal2(3.60, -3.30, 0.09, 0.09);
    grassFinal2(3.60, -2.40, 0.09, 0.09);
    grassFinal2(3.60, -1.50, 0.09, 0.09);
    grassFinal2(3.60, -0.60, 0.09, 0.09);
    grassFinal2(4.30, -6.90, 0.09, 0.09);
    grassFinal2(4.30, -6.00, 0.09, 0.09);
    grassFinal2(4.30, -5.10, 0.09, 0.09);
    grassFinal2(4.30, -4.20, 0.09, 0.09);
    grassFinal2(4.30, -3.30, 0.09, 0.09);
    grassFinal2(4.30, -2.40, 0.09, 0.09);
    grassFinal2(4.30, -1.50, 0.09, 0.09);
    grassFinal2(4.30, -0.60, 0.09, 0.09);
    grassFinal2(5.00, -6.90, 0.09, 0.09);
    grassFinal2(5.00, -6.00, 0.09, 0.09);
    grassFinal2(5.00, -5.10, 0.09, 0.09);
    grassFinal2(5.00, -4.20, 0.09, 0.09);
    grassFinal2(5.00, -3.30, 0.09, 0.09);
    grassFinal2(5.00, -2.40, 0.09, 0.09);
    grassFinal2(5.00, -1.50, 0.09, 0.09);
    grassFinal2(5.00, -0.60, 0.09, 0.09);
    grassFinal2(5.70, -6.90, 0.09, 0.09);
    grassFinal2(5.70, -6.00, 0.09, 0.09);
    grassFinal2(5.70, -5.10, 0.09, 0.09);
    grassFinal2(5.70, -4.20, 0.09, 0.09);
    grassFinal2(5.70, -3.30, 0.09, 0.09);
    grassFinal2(5.70, -2.40, 0.09, 0.09);
    grassFinal2(5.70, -1.50, 0.09, 0.09);
    grassFinal2(5.70, -0.60, 0.09, 0.09);
    grassFinal2(6.40, -6.90, 0.09, 0.09);
    grassFinal2(6.40, -6.00, 0.09, 0.09);
    grassFinal2(6.40, -5.10, 0.09, 0.09);
    grassFinal2(6.40, -4.20, 0.09, 0.09);
    grassFinal2(6.40, -3.30, 0.09, 0.09);
    grassFinal2(6.40, -2.40, 0.09, 0.09);
    grassFinal2(6.40, -1.50, 0.09, 0.09);
    grassFinal2(6.40, -0.60, 0.09, 0.09);
    grassFinal2(7.10, -6.90, 0.09, 0.09);
    grassFinal2(7.10, -6.00, 0.09, 0.09);
    grassFinal2(7.10, -5.10, 0.09, 0.09);
    grassFinal2(7.10, -4.20, 0.09, 0.09);
    grassFinal2(7.10, -3.30, 0.09, 0.09);
    grassFinal2(7.10, -2.40, 0.09, 0.09);
    grassFinal2(7.10, -1.50, 0.09, 0.09);
    grassFinal2(7.10, -0.60, 0.09, 0.09);
    grassFinal2(7.80, -6.90, 0.09, 0.09);
    grassFinal2(7.80, -6.00, 0.09, 0.09);
    grassFinal2(7.80, -5.10, 0.09, 0.09);
    grassFinal2(7.80, -4.20, 0.09, 0.09);
    grassFinal2(7.80, -3.30, 0.09, 0.09);
    grassFinal2(7.80, -2.40, 0.09, 0.09);
    grassFinal2(7.80, -1.50, 0.09, 0.09);

    grassFinal2(8.50, -6.90, 0.09, 0.09);
    grassFinal2(8.50, -6.00, 0.09, 0.09);
    grassFinal2(8.50, -5.10, 0.09, 0.09);
    grassFinal2(8.50, -4.20, 0.09, 0.09);
    grassFinal2(8.50, -3.30, 0.09, 0.09);
    grassFinal2(8.50, -2.40, 0.09, 0.09);
    grassFinal2(8.50, -1.50, 0.09, 0.09);

    grassFinal2(9.20, -6.90, 0.09, 0.09);
    grassFinal2(9.20, -6.00, 0.09, 0.09);
    grassFinal2(9.20, -5.10, 0.09, 0.09);
    grassFinal2(9.20, -4.20, 0.09, 0.09);
    grassFinal2(9.20, -3.30, 0.09, 0.09);
    grassFinal2(9.20, -2.40, 0.09, 0.09);
    grassFinal2(9.20, -1.50, 0.09, 0.09);

    grassFinal2(9.90, -6.90, 0.09, 0.09);
    grassFinal2(9.90, -6.00, 0.09, 0.09);
    grassFinal2(9.90, -5.10, 0.09, 0.09);
    grassFinal2(9.90, -4.20, 0.09, 0.09);
    grassFinal2(9.90, -3.30, 0.09, 0.09);
    grassFinal2(9.90, -2.40, 0.09, 0.09);
    grassFinal2(9.90, -1.50, 0.09, 0.09);

    grassFinal2(10.60, -6.90, 0.09, 0.09);
    grassFinal2(10.60, -6.00, 0.09, 0.09);
    grassFinal2(10.60, -5.10, 0.09, 0.09);
    grassFinal2(10.60, -4.20, 0.09, 0.09);
    grassFinal2(10.60, -3.30, 0.09, 0.09);
    grassFinal2(10.60, -2.40, 0.09, 0.09);

    glBegin(GL_POLYGON);    // These vertices form a closed polygon
    glColor3ub(76, 152, 173); // Yellow (Land Brown  polygon 1st)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.62f);
    glVertex2f(0.95f, -0.63f);
    glVertex2f(0.9f, -0.65f);
    glVertex2f(0.8f, -0.62f);
    glVertex2f(0.7f, -0.61f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.5f, -0.61f);
    glVertex2f(0.45f, -0.58f);
    glVertex2f(0.4f, -0.65f);
    glVertex2f(0.3f, -0.68f);
    glVertex2f(0.2f, -0.65f);
    glVertex2f(0.1f, -0.65f);
    glVertex2f(0.0f, -0.62f);
    glVertex2f(-0.1f, -0.64f);
    glVertex2f(-0.2f, -0.59f);
    glVertex2f(-0.25f, -0.598f);
    glVertex2f(-0.3f, -0.58f);
    glVertex2f(-0.4f, -0.57f);
    glVertex2f(-0.5f, -0.585f);
    glVertex2f(-0.55f, -0.58f);
    glVertex2f(-0.6f, -0.59f);
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.8f, -0.59f);
    glVertex2f(-0.85f, -0.61f);
    glVertex2f(-0.9f, -0.62f);
    glVertex2f(-0.95f, -0.61f);
    glVertex2f(-1.0f, -0.57f);

    glEnd();

    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(66, 142, 163); // Yellow (Water-land polygon )
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.67f);
    glVertex2f(0.95f, -0.65f);
    glVertex2f(0.9f, -0.67f);
    glVertex2f(0.8f, -0.64f);
    glVertex2f(0.7f, -0.65f);
    glVertex2f(0.6f, -0.62f);
    glVertex2f(0.5f, -0.65f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.4f, -0.67f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.2f, -0.67f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.0f, -0.67f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.64f);
    glVertex2f(-0.25f, -0.62f);
    glVertex2f(-0.3f, -0.64f);
    glVertex2f(-0.4f, -0.63f);
    glVertex2f(-0.5f, -0.61f);
    glVertex2f(-0.55f, -0.63f);
    glVertex2f(-0.6f, -0.63f);
    glVertex2f(-0.7f, -0.65f);
    glVertex2f(-0.8f, -0.66f);
    glVertex2f(-0.85f, -0.67f);
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.95f, -0.638f);
    glVertex2f(-1.0f, -0.6f);

    glEnd();

    glBegin(GL_POLYGON);     // These vertices form a closed polygon
    glColor3ub(76, 152, 173); // Yellow (Land Green polygon 2nd)
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.72f);
    glVertex2f(0.95f, -0.7f);
    glVertex2f(0.9f, -0.72f);
    glVertex2f(0.8f, -0.69f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.6f, -0.68f);
    glVertex2f(0.5f, -0.7f);
    glVertex2f(0.45f, -0.68f);
    glVertex2f(0.4f, -0.72f);
    glVertex2f(0.3f, -0.75f);
    glVertex2f(0.2f, -0.72f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.0f, -0.72f);
    glVertex2f(-0.1f, -0.75f);
    glVertex2f(-0.2f, -0.69f);
    glVertex2f(-0.25f, -0.67f);
    glVertex2f(-0.3f, -0.69f);
    glVertex2f(-0.4f, -0.68f);
    glVertex2f(-0.5f, -0.66f);
    glVertex2f(-0.55f, -0.665f);
    glVertex2f(-0.6f, -0.689f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.8f, -0.71f);
    glVertex2f(-0.85f, -0.72f);
    glVertex2f(-0.9f, -0.7f);
    glVertex2f(-0.95f, -0.688f);
    glVertex2f(-1.0f, -0.65f);

    glEnd();

    glBegin(GL_TRIANGLES);  // Each set of 4 vertices form a quad
    glColor3ub(86, 62, 27); // Saddle Brown (Chader oikhnaei Triangle ta)

    glVertex2f(0.37, -0.6); // x, y
    glVertex2f(0.13, -0.6);
    glVertex2f(0.3, -0.41);

    glEnd();

    glBegin(GL_QUADS);      // Each set of 4 vertices form a quad
    glColor3ub(86, 62, 27); // Saddle Brown (House er Ekdom Middle Quad)

    glVertex2f(0.34f, -0.5f); // x, y
    glVertex2f(0.34f, -0.714f);
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.45f, -0.5f);

    glEnd();
    glBegin(GL_POLYGON);      // These vertices form a closed polygon
    glColor3ub(166, 121, 47); // Yellow (Bashar majhe ekta polygon draw)
    glVertex2f(0.2f, -0.53f);
    glVertex2f(0.2f, -0.713f);
    glVertex2f(0.34f, -0.711f);
    glVertex2f(0.34f, -0.53f);
    glVertex2f(0.30f, -0.52f);
    glVertex2f(0.22f, -0.53f);
    glEnd();


/*
    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 1st)

    glVertex2f(0.16f, -0.7f); // x, y
    glVertex2f(0.16f, -0.77f);
    glVertex2f(0.166f, -0.77f);
    glVertex2f(0.166f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche Stick 2nd)

    glVertex2f(0.18f, -0.7f); // x, y
    glVertex2f(0.18f, -0.75f);
    glVertex2f(0.186f, -0.75f);
    glVertex2f(0.186f, -0.7f);
glEnd();
*/
    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(187, 136, 55); // Saddle Brown (House er Left Side er Quad)

    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.16f, -0.7f);
    glVertex2f(0.2f, -0.71f);
    glVertex2f(0.2f, -0.53f);

    glEnd();

    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(146, 101, 47); // Saddle Brown (House er Door er Right er Quad)
    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.66f, -0.69f);
    glVertex2f(0.66f, -0.5f);
    glEnd();

    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad)
    glVertex2f(0.24f, -0.41f); // x, y
    glVertex2f(0.12f, -0.56f);
    glVertex2f(0.16f, -0.59f);
    glVertex2f(0.3f, -0.41f);
glEnd();
        //bulb code
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2f(0.32f, -0.5f);
    glVertex2f(0.32f, -0.55f);
    glEnd();
    glColor3ub(0, 0, 0);
    circleFinal(0.32, -0.55, 0.01, 2.5);
    glEnd();


    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Ektu Kom Brown (house chad er ta)
    glVertex2f(0.25f, -0.3f);  // x, y
    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.69f, -0.51f); // x, y
    glVertex2f(0.58f, -0.3f);  // x, y
    glEnd();
/*
    glBegin(GL_QUADS);        // Each set of 4 vertices form a quad
    glColor3ub(76, 0, 0); // Ektu Kom Brown (house chad er ta)
    glVertex2f(0.8f, -0.6f);  // x, y
    glVertex2f(0.8f, -1.0f); // x, y
    glVertex2f(0.1f, -1.0f); // x, y
    glVertex2f(0.1f, -0.6f);  // x, y
    glEnd();

*/
    glBegin(GL_TRIANGLES);   // Each set of 4 vertices form a quad
    glColor3ub(121, 88, 38); // Saddle Brown (Chader oikhnaei Triangle ta)

    glVertex2f(0.25f, -0.3f); // x, y
    glVertex2f(0.24f, -0.41f);
    glVertex2f(0.29f, -0.41f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 1st)

    glVertex2f(0.13f, -0.55f); // x, y
    glVertex2f(0.11f, -0.57f);
    glVertex2f(0.15f, -0.57f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 2nd)

    glVertex2f(0.15f, -0.57f); // x, y
    glVertex2f(0.12f, -0.58f);
    glVertex2f(0.16f, -0.59f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown (Chader Left side er Quad E Triangle 3rd)

    glVertex2f(0.16f, -0.55f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.18f, -0.566f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(218, 165, 32); // Saddle Brown ((Chader Left side er Quad E Triangle 4th)

    glVertex2f(0.16f, -0.59f); // x, y
    glVertex2f(0.14f, -0.6f);
    glVertex2f(0.16f, -0.55f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 1st)

    glVertex2f(0.32f, -0.51f); // x, y
    glVertex2f(0.33f, -0.53f);
    glVertex2f(0.35f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 2nd)

    glVertex2f(0.35f, -0.5f); // x, y
    glVertex2f(0.4f, -0.53f);
    glVertex2f(0.45f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 3rd)

    glVertex2f(0.45f, -0.5f); // x, y
    glVertex2f(0.43f, -0.53f);
    glVertex2f(0.5f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 4th)

    glVertex2f(0.5f, -0.5f); // x, y
    glVertex2f(0.55, -0.53f);
    glVertex2f(0.6f, -0.5f);

    glEnd();

    glBegin(GL_TRIANGLES);    // Each set of 4 vertices form a quad
    glColor3ub(176, 136, 74); // Saddle Brown ( Main Chad er Quad E Triangle 5th)

    glVertex2f(0.6f, -0.5f); // x, y
    glVertex2f(0.65, -0.54f);
    glVertex2f(0.68f, -0.5f);

    glEnd();


/*
    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 3rd)
    glVertex2f(0.2f, -0.71f); // x, y
    glVertex2f(0.2f, -0.77f);
    glVertex2f(0.205f, -0.77f);
    glVertex2f(0.205f, -0.71f);
    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 9th)

    glVertex2f(0.62f, -0.69f); // x, y
    glVertex2f(0.62f, -0.75f);
    glVertex2f(0.627f, -0.75f);
    glVertex2f(0.627f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 8th)

    glVertex2f(0.58f, -0.69f); // x, y
    glVertex2f(0.58f, -0.75f);
    glVertex2f(0.587f, -0.75f);
    glVertex2f(0.587f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 7th)

    glVertex2f(0.54f, -0.69f); // x, y
    glVertex2f(0.54f, -0.75f);
    glVertex2f(0.547f, -0.75f);
    glVertex2f(0.547f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 6th)

    glVertex2f(0.50f, -0.69f); // x, y
    glVertex2f(0.50f, -0.75f);
    glVertex2f(0.507f, -0.75f);
    glVertex2f(0.507f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 5th)

    glVertex2f(0.47f, -0.69f); // x, y
    glVertex2f(0.47f, -0.75f);
    glVertex2f(0.477f, -0.75f);
    glVertex2f(0.477f, -0.69f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House er niche stick 10th)

    glVertex2f(0.64f, -0.69f); // x, y
    glVertex2f(0.64f, -0.77f);
    glVertex2f(0.647f, -0.77f);
    glVertex2f(0.647f, -0.69f);
    glEnd();


        glBegin(GL_QUADS);        //
    glColor3ub(76, 152, 173); //
    glVertex2f(0.8f, -0.6f);  // x, y
    glVertex2f(0.8f, -1.0f); // x, y
    glVertex2f(0.1f, -1.0f); // x, y
    glVertex2f(0.1f, -0.6f);  // x, y
    glEnd();



    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House Ladder 1st)

    glVertex2f(0.36f, -0.7f); // x, y
    glVertex2f(0.37f, -0.8f);
    glVertex2f(0.380f, -0.8f);
    glVertex2f(0.370f, -0.7f);

    glEnd();

    glBegin(GL_QUADS);       // Each set of 4 vertices form a quad
    glColor3ub(139, 69, 19); // Saddle Brown (House Ladder 2nd)

    glVertex2f(0.43f, -0.7f); // x, y
    glVertex2f(0.44f, -0.8f);
    glVertex2f(0.450f, -0.8f);
    glVertex2f(0.440f, -0.7f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.365, -0.72); // (house ladder mid stick 1st)
    glVertex2f(0.365, -0.73);
    glVertex2f(0.44, -0.72);
    glVertex2f(0.44, -0.71);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.365, -0.75); // (house ladder mid stick 2nd)
    glVertex2f(0.365, -0.76);
    glVertex2f(0.44, -0.75);
    glVertex2f(0.44, -0.74);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139, 69, 19);
    glVertex2f(0.368, -0.78); // (house ladder mid stick 3rd)
    glVertex2f(0.369, -0.79);
    glVertex2f(0.44, -0.78);
    glVertex2f(0.44, -0.77);
    glEnd();
*/
/*            glBegin(GL_QUADS);        //
    glColor3ub(76, 0, 0); //
    glVertex2f(0.6f, -0.7f);  // x, y
    glVertex2f(0.8f, -1.0f); // x, y
    glVertex2f(0.8f, -1.0f); // x, y
    glVertex2f(0.6f, -0.7f);  // x, y
    glEnd();
*/

    glColor3ub(38, 80, 0); //(Main Tree Darkleaf 1st )

    circleFinal(0.8, -0.44, 0.055, 2);
    circleFinal(0.85, -0.52, 0.05, 2);
    circleFinal(0.75, -0.52, 0.05, 2);

    glColor3ub(55, 119, 0); //(Leaf Dark Green 3th)
    circleFinal(0.74, -0.26, 0.055, 2);
    circleFinal(0.78, -0.2, 0.06, 2);
    circleFinal(0.83, -0.25, 0.06, 2);
    circleFinal(0.8, -0.34, 0.06, 2);

    glColor3ub(48, 98, 0); //(Leaf Dark Green Shade 3th)
    circleFinal(0.73, -0.27, 0.055, 2);
    circleFinal(0.77, -0.21, 0.06, 2);
    circleFinal(0.82, -0.26, 0.06, 2);
    circleFinal(0.79, -0.35, 0.06, 2);

    glColor3ub(103, 159, 26); //(Leaf  Green 2nd)
    circleFinal(0.71, -0.44, 0.055, 2);
    circleFinal(0.7, -0.38, 0.055, 2);
    circleFinal(0.72, -0.34, 0.055, 2);
    circleFinal(0.75, -0.4, 0.045, 2);

    glColor3ub(94, 144, 29); //(Lead Shade green 2nd)
    circleFinal(0.7, -0.45, 0.055, 2);
    circleFinal(0.69, -0.39, 0.055, 2);
    circleFinal(0.71, -0.35, 0.055, 2);
    circleFinal(0.74, -0.41, 0.045, 2);

    glColor3ub(77, 131, 11); //(Leaf Dark Green 4th)
    circleFinal(0.9, -0.32, 0.055, 2);
    circleFinal(0.915, -0.38, 0.06, 2);
    circleFinal(0.91, -0.42, 0.05, 2);
    circleFinal(0.88, -0.44, 0.055, 2);
    circleFinal(0.86, -0.4, 0.055, 2);

    glColor3ub(89, 150, 17); //(Leaf Dark Green Shade 4th)
    circleFinal(0.89, -0.33, 0.055, 2);
    circleFinal(0.905, -0.39, 0.06, 2);
    circleFinal(0.9, -0.43, 0.05, 2);
    circleFinal(0.87, -0.45, 0.055, 2);
    circleFinal(0.85, -0.41, 0.055, 2);

    glColor3ub(139, 95, 60); // Yellow (Main tree)
    glBegin(GL_POLYGON);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);
    glVertex2f(0.808, -0.84);
    glVertex2f(0.8, -0.84);
    glVertex2f(0.79, -0.85);
    glVertex2f(0.778, -0.8525);
    glVertex2f(0.775, -0.85);
    glVertex2f(0.775, -0.8275);
    glVertex2f(0.779, -0.8);
    glVertex2f(0.784, -0.7625);
    glVertex2f(0.79, -0.7175);
    glVertex2f(0.792, -0.685);
    glVertex2f(0.793, -0.66);
    glVertex2f(0.793, -0.635);
    glVertex2f(0.79, -0.605);
    glVertex2f(0.788, -0.58);
    glVertex2f(0.783, -0.5675);
    glVertex2f(0.779, -0.5375);
    glVertex2f(0.774, -0.5125);
    glVertex2f(0.765, -0.48);
    glVertex2f(0.762, -0.47);
    glVertex2f(0.77, -0.455);
    glVertex2f(0.785, -0.4975);
    glVertex2f(0.791, -0.5);
    glVertex2f(0.798, -0.495);
    glVertex2f(0.804, -0.485);
    glVertex2f(0.805, -0.47);
    glVertex2f(0.808, -0.4375);
    glVertex2f(0.808, -0.43);
    glVertex2f(0.821, -0.44);
    glVertex2f(0.819, -0.465);
    glVertex2f(0.818, -0.485);
    glVertex2f(0.818, -0.52);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.819, -0.5475);
    glVertex2f(0.823, -0.5475);
    glVertex2f(0.827, -0.5325);
    glVertex2f(0.829, -0.5125);
    glVertex2f(0.835, -0.48);
    glVertex2f(0.836, -0.4725);
    glVertex2f(0.846, -0.4875);
    glVertex2f(0.842, -0.5425);
    glVertex2f(0.835, -0.5725);
    glVertex2f(0.833, -0.6025);
    glVertex2f(0.832, -0.6475);
    glVertex2f(0.832, -0.665);
    glVertex2f(0.833, -0.695);
    glVertex2f(0.837, -0.7225);
    glVertex2f(0.841, -0.755);
    glVertex2f(0.85, -0.795);
    glVertex2f(0.858, -0.8325);
    glVertex2f(0.86, -0.845);
    glVertex2f(0.853, -0.8475);
    glVertex2f(0.843, -0.84);
    glVertex2f(0.84, -0.835);
    glVertex2f(0.836, -0.84);
    glVertex2f(0.833, -0.855);
    glVertex2f(0.829, -0.865);
    glVertex2f(0.82, -0.86);
    glVertex2f(0.814, -0.85);
    glVertex2f(0.809, -0.8525);

    glEnd();



    glBegin(GL_QUADS);        //
    glColor3ub(76, 152, 173); //
    glVertex2f(0.7f, -0.9f);  // x, y
    glVertex2f(0.9f, -0.9f); // x, y
    glVertex2f(0.9f, -0.72f); // x, y
    glVertex2f(0.7f, -0.72f);  // x, y
    glEnd();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-1.004, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.9, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.65, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.55, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.35, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.25, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(-0.15, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.0, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.2, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.4, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

    glPushMatrix();
    glScaled(1.2, 1.2, 0.0);
    glTranslatef(0.7, -1.7, 0.0);

    bushFinal();
    glPopMatrix();

//    birdFinal(bird, 2.2, 0.25, 0.25);
//    birdFinal(bird2, 2.0, 0.25, 0.25);

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.34f); // x, y
    glVertex2f(0.6f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.33f);  // x, y
    glVertex2f(0.379, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.34f); // x, y
    glVertex2f(0.1f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.33f);    // x, y
    glVertex2f(-0.179f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.34f); // x, y
    glVertex2f(-0.4f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.33f);   // x, y
    glVertex2f(-0.679f, 0.34f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.34f); // x, y
    glVertex2f(-1.3f, 0.33f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.34f); // x, y
    glVertex2f(1.2f, 0.32f);   // x, y

    glEnd();

    //2nd wire

    glBegin(GL_LINES);         // (Pole Wire 1st)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.879f, 0.35f); // x, y
    glVertex2f(0.6f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);        // (Pole Wire 2nd)
    glColor3ub(25, 28, 38);   // Red
    glVertex2f(0.6f, 0.34f);  // x, y
    glVertex2f(0.379, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 3rd)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.379f, 0.35f); // x, y
    glVertex2f(0.1f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 4th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(0.1f, 0.34f);    // x, y
    glVertex2f(-0.179f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 5th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.179f, 0.35f); // x, y
    glVertex2f(-0.4f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 6th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.4f, 0.34f);   // x, y
    glVertex2f(-0.679f, 0.35f); // x, y

    glEnd();

    glBegin(GL_LINES);          // (Pole Wire 7th)
    glColor3ub(25, 28, 38);     // Red
    glVertex2f(-0.679f, 0.35f); // x, y
    glVertex2f(-1.3f, 0.34f);   // x, y

    glEnd();

    glBegin(GL_LINES);         // (Pole Wire 8th)
    glColor3ub(25, 28, 38);    // Red
    glVertex2f(0.895f, 0.35f); // x, y
    glVertex2f(1.2f, 0.33f);   // x, y

    glEnd();


    poleFinal(0.0, 0.0, 1.0, 1.0);
    poleFinal(-0.52, 0.0, 1.0, 1.0);
    poleFinal(-1.08, 0.0, 1.0, 1.0);
    poleFinal(-1.57, 0.0, 1.0, 1.0);


    kharFinal1(0.3, 0.0, 1.0, 1.0);

    //flood code
    glBegin(GL_QUADS);        //
    glColor3ub(76, 152, 173); //
    glVertex2f(0.0f, -0.8f);  // x, y
    glVertex2f(0.0f, -0.85f); // x, y
    glVertex2f(0.5f, -0.85f); // x, y
    glVertex2f(0.5f, -0.8f);  // x, y
    glEnd();

    helicopter(-0.4, 0.7, 0.1, 0.2);

    boat();

    glFlush(); // Render now

}
