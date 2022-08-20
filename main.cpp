#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>



const double PI = 3.141592654;

int frameNumber = 0;


//windmill

void drawWindmill()
{
    int i;
    glColor3ub(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(50, 250);
    glVertex2d(40, 250);
    glVertex2d(40, 500);
    glVertex2d(50, 500);
    glEnd();
    glTranslatef(50, 500, 0);
    glRotated(frameNumber * (180/46), 0, 0, -1);
    glColor3ub(84, 25, 168);
    for (i = 0; i < 3; i++)
    {
        glRotated(120, 0, 0, 1);  // blade distance
        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(40, 90);
        glVertex2d(40,0);
        glVertex2d(40, 90);
        glEnd();
    }
}


//boat

void drawCart()
{

    glBegin(GL_POLYGON);
    glColor3ub(1, 0, 0);
    glVertex2d(20,20);
    glVertex2d(70,20);
    glVertex2d(90,50);
    glVertex2d(0,50);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2d(30,50);
    glVertex2d(50,50);
    glVertex2d(50,120);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,139,0);
    glVertex2d(52,50);
    glVertex2d(62,50);
    glVertex2d(52,110);
    glEnd();



}

//another boat
void drawBoat()
{

    glBegin(GL_POLYGON);
    glColor3ub(1, 0, 0);
    glVertex2d(580,60);
    glVertex2d(530,60);
    glVertex2d(510,90);
    glVertex2d(600,90);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2d(540,90);
    glVertex2d(580,90);
    glVertex2d(580,160);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(178, 34, 34);
    glVertex2d(580,160);
    glVertex2d(590,160);
    glVertex2d(580,150);
    glEnd();
}


void drawCloud()
{


    float t;
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (0+15*cos(t),470+15*sin(t));
    }

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (28+15*cos(t),470+15*sin(t));
    }

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (10+15*cos(t),480+15*sin(t));
    }

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (13+15*cos(t),460+15*sin(t));
    }

    glEnd();


    //another


    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (150+15*cos(t),500+15*sin(t));
    }

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (175+15*cos(t),500+15*sin(t));
    }

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (160+15*cos(t),510+15*sin(t));
    }

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (160+15*cos(t),490+15*sin(t));
    }

    glEnd();



}
//// NIGHT MODE ///


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void drawStar()
{

    float t;

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (160+2*cos(t),490+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (160+2*cos(t),590+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (260+2*cos(t),540+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (400+2*cos(t),490+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (30+2*cos(t),510+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (580+2*cos(t),510+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (570+2*cos(t),570+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (60+2*cos(t),480+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (100+2*cos(t),550+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (460+2*cos(t),510+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (365+2*cos(t),530+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (295+2*cos(t),495+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (455+2*cos(t),520+2*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (260+2*cos(t),490+2*sin(t));
    }

    glEnd();

}



void night(void)
{
    /* clear all pixels */
    float t;
    glClear (GL_COLOR_BUFFER_BIT);


    glColor3ub (84, 25, 168);


// sky

    glBegin(GL_POLYGON);
    glColor3ub (25, 25, 112);
    glVertex2d (0, 600);
    glVertex2d (0, 400);
    glVertex2d (600, 400);
    glVertex2d (600, 600);

    glEnd();

//moon

    glBegin(GL_POLYGON);
    glColor3ub (245, 245, 220);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (490+18*cos(t),530+18*sin(t));
    }

    glEnd();

    //cloud moving

    glPushMatrix();
    glTranslated(-3 + 500*(frameNumber % 1000) / 800.0, 0, 0);
    glScaled(1.1,1.1,1);
    drawCloud();
    glPopMatrix();


//hill

    glBegin(GL_LINES);
    glColor3ub (139, 90, 43);
    glVertex2d (0, 400);
    glVertex2d (600, 400);


    glEnd();

    glFlush();


    glBegin(GL_POLYGON);
    glColor3ub (160, 82, 45);
    glVertex2d (0, 440);
    glVertex2d (20, 470);
    glVertex2d (70, 400);
    glVertex2d (0, 400);

    glEnd();

//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (20, 470);
    glVertex2d (25, 460);
    glVertex2d (20, 450);
    glVertex2d (6.5, 450);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 69, 19);
    glVertex2d (30, 400);
    glVertex2d (60, 460);
    glVertex2d (100, 490);
    glVertex2d (140, 400);
    glVertex2d (30, 400);

    glEnd();

//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (100, 490);
    glVertex2d (108, 470);
    glVertex2d (90, 478);
    glVertex2d (69, 467);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);
    glVertex2d (100, 400);
    glVertex2d (160, 460);
    glVertex2d (220, 510);
    glVertex2d (250, 470);
    glVertex2d (290, 400);
    glVertex2d (100, 400);

    glEnd();


//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (220, 510);
    glVertex2d (228, 500);
    glVertex2d (220, 505);
    glVertex2d (210, 500);
    glVertex2d (200, 467);
    glVertex2d (201, 495);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub (139,90,43);
    glVertex2d (270, 400);
    glVertex2d (340, 470);
    glVertex2d (400, 400);


    glEnd();

//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (340, 470);
    glVertex2d (348, 457);
    glVertex2d (340, 463);
    glVertex2d (325, 453);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 69, 19);
    glVertex2d (370, 400);
    glVertex2d (440, 480);
    glVertex2d (480, 420);
    glVertex2d (510, 400);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);
    glVertex2d (350, 400);
    glVertex2d (540, 480);
    glVertex2d (580, 420);
    glVertex2d (600, 400);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (160, 82, 45);
    glVertex2d (580, 400);
    glVertex2d (600, 450);
    glVertex2d (600, 400);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub (139, 69, 19);
    glVertex2d (540, 480);
    glVertex2d (582, 430);
    glVertex2d (580, 400);
    glVertex2d (600, 400);




    glEnd();

//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (540, 480);
    glVertex2d (550, 470);
    glVertex2d (545, 472);
    glVertex2d (540, 465);
    glVertex2d (535, 472);
    glVertex2d (524, 472);


    glEnd();


// river

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 139);
    glVertex2d (0, 400);
    glVertex2d (0, 0);
    glVertex2d (600, 0);
    glVertex2d (600, 400);


    glEnd();

// land

    glBegin(GL_POLYGON);
    glColor3ub (107, 142, 35);
    glVertex2d (0, 400);
    glVertex2d (0, 220);
    glVertex2d (150, 130);
    glVertex2d (300, 100);
    glVertex2d (450, 130);
    glVertex2d (600, 220);
    glVertex2d (600, 400);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2d (0, 400);
    glVertex2d (0, 220);

    glVertex2d (0, 220);
    glVertex2d (150, 130);

    glVertex2d (150, 130);
    glVertex2d (300, 100);

    glVertex2d (300, 100);
    glVertex2d (450, 130);

    glVertex2d (450, 130);
    glVertex2d (600, 220);

    glVertex2d (600, 220);
    glVertex2d (600, 400);


    glEnd();

    glFlush();



//castle

//vertex


    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (270, 350);
    glVertex2d (290, 350);
    glVertex2d (290, 500);
    glVertex2d (270, 500);


    glEnd();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (270, 350);
    glVertex2d (290, 350);

    glVertex2d (290, 350);
    glVertex2d (290, 500);

    glVertex2d (290, 500);
    glVertex2d (270, 500);

    glVertex2d (270, 500);
    glVertex2d (270, 350);



    glEnd();

    glFlush();


    glBegin(GL_TRIANGLES);
    glColor3ub (139, 10, 80);
    glVertex2d (265, 500);
    glVertex2d (295, 500);
    glVertex2d (280, 520);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (282, 350);
    glVertex2d (318, 350);
    glVertex2d (318, 460);
    glVertex2d (282, 460);


    glEnd();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (282, 350);
    glVertex2d (318, 350);

    glVertex2d (318, 350);
    glVertex2d (318, 460);

    glVertex2d (318, 460);
    glVertex2d (282, 460);

    glVertex2d (282, 460);
    glVertex2d (282, 350);



    glEnd();

    glFlush();


    glBegin(GL_TRIANGLES);
    glColor3ub (139, 10, 80);
    glVertex2d (275, 460);
    glVertex2d (325, 460);
    glVertex2d (300, 490);



    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (275, 460);
    glVertex2d (325, 460);
    glVertex2d (325, 460);
    glVertex2d (300, 490);
    glVertex2d (300, 490);
    glVertex2d (275, 460);


    glEnd();

    glFlush();




    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (300+60*cos(t),380+60*sin(t));
    }

    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (300+60*cos(t),380+60*sin(t));
    }

    glEnd();





//front structure

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (225, 200);
    glVertex2d (382.5, 200);
    glVertex2d (382.5, 350);
    glVertex2d (225, 350);


    glEnd();

// inner bricks

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (225, 230);
    glVertex2d (382.5, 230);

    glVertex2d (225, 260);
    glVertex2d (382.5, 260);

    glVertex2d (225, 290);
    glVertex2d (382.5, 290);

    glVertex2d (225, 320);
    glVertex2d (382.5, 320);

    glVertex2d (245, 290);
    glVertex2d (245, 320);

    glVertex2d (245, 230);
    glVertex2d (245, 260);

    glVertex2d (362.5, 290);
    glVertex2d (362.5, 320);

    glVertex2d (362.5, 230);
    glVertex2d (362.5, 260);

    glEnd();

    glFlush();


    glBegin(GL_POLYGON);
    glColor3ub (139, 58, 98);
    glVertex2d (225, 340);
    glVertex2d (382.5, 340);
    glVertex2d (382.5, 405);
    glVertex2d (225, 405);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (225, 405);
    glVertex2d (382.5, 405);

    glVertex2d (251, 415);
    glVertex2d (348.5, 415);

    glVertex2d (260, 425);
    glVertex2d (340.5, 425);

    glVertex2d (270, 415);
    glVertex2d (270, 425);

    glVertex2d (300, 415);
    glVertex2d (300, 425);


    glVertex2d (285, 405);
    glVertex2d (285, 415);

    glVertex2d (315, 405);
    glVertex2d (315, 415);

    glVertex2d (255, 405);
    glVertex2d (255, 415);

    glVertex2d (345, 405);
    glVertex2d (345, 415);



    glVertex2d (330, 415);
    glVertex2d (330, 425);

    glVertex2d (285, 425);
    glVertex2d (285, 438);

    glVertex2d (315, 425);
    glVertex2d (315, 438);




    glEnd();

    glFlush();

    glBegin(GL_POLYGON);

    glColor3ub (105, 105, 105);
    glVertex2d (262.5, 200);
    glVertex2d (262.5, 365);
    glVertex2d (270, 365);
    glVertex2d (270, 350);
    glVertex2d (277.5, 350);
    glVertex2d (277.5, 365);
    glVertex2d (285, 365);
    glVertex2d (285, 350);
    glVertex2d (292.5, 350);
    glVertex2d (292.5, 365);
    glVertex2d (300, 365);
    glVertex2d (300, 350);
    glVertex2d (307.5, 350);
    glVertex2d (307.5, 365);
    glVertex2d (315, 365);
    glVertex2d (315, 350);
    glVertex2d (322.5, 350);
    glVertex2d (322.5, 365);
    glVertex2d (330, 365);
    glVertex2d (330, 350);
    glVertex2d (337.5, 350);
    glVertex2d (337.5, 365);
    glVertex2d (345, 365);
    glVertex2d (345, 200);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (262.5, 200);
    glVertex2d (262.5, 365);


    glVertex2d (262.5, 365);
    glVertex2d (270, 365);

    glVertex2d (270, 365);
    glVertex2d (270, 350);

    glVertex2d (270, 350);
    glVertex2d (277.5, 350);

    glVertex2d (277.5, 350);
    glVertex2d (277.5, 365);

    glVertex2d (277.5, 365);
    glVertex2d (285, 365);

    glVertex2d (285, 365);
    glVertex2d (285, 350);

    glVertex2d (285, 350);
    glVertex2d (292.5, 350);

    glVertex2d (292.5, 350);
    glVertex2d (292.5, 365);

    glVertex2d (292.5, 365);
    glVertex2d (300, 365);

    glVertex2d (300, 365);
    glVertex2d (300, 350);

    glVertex2d (300, 350);
    glVertex2d (307.5, 350);

    glVertex2d (307.5, 350);
    glVertex2d (307.5, 365);

    glVertex2d (307.5, 365);
    glVertex2d (315, 365);

    glVertex2d (315, 365);
    glVertex2d (315, 350);

    glVertex2d (315, 350);
    glVertex2d (322.5, 350);

    glVertex2d (322.5, 350);
    glVertex2d (322.5, 365);

    glVertex2d (322.5, 365);
    glVertex2d (330, 365);

    glVertex2d (330, 365);
    glVertex2d (330, 350);

    glVertex2d (330, 350);
    glVertex2d (337.5, 350);

    glVertex2d (337.5, 350);
    glVertex2d (337.5, 365);

    glVertex2d (337.5, 365);
    glVertex2d (345, 365);

    glVertex2d (345, 200);
    glVertex2d (345, 365);




    glEnd();

    glFlush();

// right wall upper layer
    glBegin(GL_POLYGON);
    glColor3ub (139, 58, 98);
    glVertex2d (427.5, 365);
    glVertex2d (475, 380);
    glVertex2d (475, 370);
    glVertex2d (427.5, 355);


    glEnd();


// left wall upper layer
    glBegin(GL_POLYGON);
    glColor3ub (139, 58, 98);
    glVertex2d (180, 365);
    glVertex2d (132.5, 380);
    glVertex2d (132.5, 370);
    glVertex2d (180, 355);



    glEnd();


//piller

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (225, 190);
    glVertex2d (225, 400);
    glVertex2d (180, 400);
    glVertex2d (180, 190);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (225, 190);
    glVertex2d (225, 400);

    glVertex2d (225, 400);
    glVertex2d (180, 400);

    glVertex2d (180, 400);
    glVertex2d (180, 190);

    glVertex2d (180, 190);
    glVertex2d (225, 190);



    glEnd();

    glFlush();

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (382.5, 190);
    glVertex2d (382.5, 400);
    glVertex2d (427.5, 400);
    glVertex2d (427.5, 190);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (382.5, 190);
    glVertex2d (382.5, 400);

    glVertex2d (382.5, 400);
    glVertex2d (427.5, 400);

    glVertex2d (427.5, 400);
    glVertex2d (427.5, 190);

    glVertex2d (427.5, 190);
    glVertex2d (382.5, 190);



    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (382.5, 400);
    glVertex2d (375, 410);
    glVertex2d (435, 410);
    glVertex2d (427.5, 400);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (382.5, 400);
    glVertex2d (375, 410);

    glVertex2d (375, 410);
    glVertex2d (435, 410);

    glVertex2d (435, 410);
    glVertex2d (427.5, 400);

    glVertex2d (427.5, 400);
    glVertex2d (382.5, 400);



    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (225, 400);
    glVertex2d (232.5, 410);
    glVertex2d (172.5, 410);
    glVertex2d (180, 400);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (225, 400);
    glVertex2d (232.5, 410);

    glVertex2d (232.5, 410);
    glVertex2d (172.5, 410);

    glVertex2d (172.5, 410);
    glVertex2d (180, 400);

    glVertex2d (180, 400);
    glVertex2d (225, 400);



    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (172.5, 410);
    glVertex2d (172.5, 430);
    glVertex2d (184.5, 430);
    glVertex2d (184.5, 420);
    glVertex2d (196.5, 420);
    glVertex2d (196.5, 430);
    glVertex2d (208.5, 430);
    glVertex2d (208.5, 420);
    glVertex2d (220.5, 420);
    glVertex2d (220.5, 430);
    glVertex2d (232.5, 430);
    glVertex2d (232.5, 410);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (172.5, 410);
    glVertex2d (172.5, 430);

    glVertex2d (172.5, 430);
    glVertex2d (184.5, 430);

    glVertex2d (184.5, 430);
    glVertex2d (184.5, 420);

    glVertex2d (184.5, 420);
    glVertex2d (196.5, 420);

    glVertex2d (196.5, 420);
    glVertex2d (196.5, 430);

    glVertex2d (196.5, 430);
    glVertex2d (208.5, 430);

    glVertex2d (208.5, 430);
    glVertex2d (208.5, 420);

    glVertex2d (208.5, 420);
    glVertex2d (220.5, 420);

    glVertex2d (220.5, 420);
    glVertex2d (220.5, 430);

    glVertex2d (220.5, 430);
    glVertex2d (232.5, 430);

    glVertex2d (232.5, 430);
    glVertex2d (232.5, 410);

    glVertex2d (232.5, 410);
    glVertex2d (172.5, 410);




    glEnd();
    glFlush();


    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (375, 410);
    glVertex2d (375, 430);
    glVertex2d (387, 430);
    glVertex2d (387, 420);
    glVertex2d (399, 420);
    glVertex2d (399, 430);
    glVertex2d (411, 430);
    glVertex2d (411, 420);
    glVertex2d (423, 420);
    glVertex2d (423, 430);
    glVertex2d (435, 430);
    glVertex2d (435, 410);


    glEnd();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (375, 410);
    glVertex2d (375, 430);

    glVertex2d (375, 430);
    glVertex2d (387, 430);

    glVertex2d (387, 430);
    glVertex2d (387, 420);

    glVertex2d (387, 420);
    glVertex2d (399, 420);

    glVertex2d (399, 420);
    glVertex2d (399, 430);

    glVertex2d (399, 430);
    glVertex2d (411, 430);

    glVertex2d (411, 430);
    glVertex2d (411, 420);

    glVertex2d (411, 420);
    glVertex2d (423, 420);

    glVertex2d (423, 420);
    glVertex2d (423, 430);

    glVertex2d (423, 430);
    glVertex2d (435, 430);

    glVertex2d (435, 430);
    glVertex2d (435, 410);

    glVertex2d (435, 410);
    glVertex2d (375, 410);




    glEnd();
    glFlush();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (180, 370);
    glVertex2d (225, 370);

    glVertex2d (180, 340);
    glVertex2d (225, 340);

    glVertex2d (180, 310);
    glVertex2d (225, 310);

    glVertex2d (180, 280);
    glVertex2d (225, 280);

    glVertex2d (180, 250);
    glVertex2d (225, 250);

    glVertex2d (180, 220);
    glVertex2d (225, 220);





    glEnd();
    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (382.5, 370);
    glVertex2d (427.5, 370);

    glVertex2d (382.5, 340);
    glVertex2d (427.5, 340);

    glVertex2d (382.5, 310);
    glVertex2d (427.5, 310);

    glVertex2d (382.5, 280);
    glVertex2d (427.5, 280);

    glVertex2d (382.5, 250);
    glVertex2d (427.5, 250);

    glVertex2d (382.5, 220);
    glVertex2d (427.5, 220);





    glEnd();
    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (195, 370);
    glVertex2d (195, 400);

    glVertex2d (210, 370);
    glVertex2d (210, 400);


    glVertex2d (202.5, 370);
    glVertex2d (202.5, 340);

    glVertex2d (195, 340);
    glVertex2d (195, 310);

    glVertex2d (210, 340);
    glVertex2d (210, 310);

    glVertex2d (202.5, 310);
    glVertex2d (202.5, 280);

    glVertex2d (195, 280);
    glVertex2d (195, 250);

    glVertex2d (210, 280);
    glVertex2d (210, 250);

    glVertex2d (202.5, 250);
    glVertex2d (202.5, 220);

    glVertex2d (195, 220);
    glVertex2d (195, 190);

    glVertex2d (210, 220);
    glVertex2d (210, 190);


    glEnd();
    glFlush();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (397.5, 370);
    glVertex2d (397.5, 400);

    glVertex2d (412.5, 370);
    glVertex2d (412.5, 400);


    glVertex2d (405, 370);
    glVertex2d (405, 340);

    glVertex2d (397.5, 340);
    glVertex2d (397.5, 310);

    glVertex2d (412.5, 340);
    glVertex2d (412.5, 310);

    glVertex2d (405.5, 310);
    glVertex2d (405.5, 280);

    glVertex2d (397.5, 280);
    glVertex2d (397.5, 250);

    glVertex2d (412.5, 280);
    glVertex2d (412.5, 250);

    glVertex2d (405, 250);
    glVertex2d (405, 220);

    glVertex2d (397.5, 220);
    glVertex2d (397.5, 190);

    glVertex2d (412.5, 220);
    glVertex2d (412.5, 190);


    glEnd();
    glFlush();

//right wall

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (427.5, 355);
    glVertex2d (475, 370);
    glVertex2d (475, 230);
    glVertex2d (427.5, 200);


    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (180, 355);
    glVertex2d (132.5, 370);
    glVertex2d (132.5, 230);
    glVertex2d (180, 200);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (475, 225);
    glVertex2d (500, 225);
    glVertex2d (500, 390);
    glVertex2d (475, 390);


    glEnd();




    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (427.5, 355);
    glVertex2d (475, 370);

    glVertex2d (475, 370);
    glVertex2d (475, 230);


    glVertex2d (475, 230);
    glVertex2d (427.5, 200);

    glVertex2d (427.5, 200);
    glVertex2d (427.5, 355);



    glEnd();
    glFlush();


// bricks
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (427.5, 335);
    glVertex2d (475, 350);

    glVertex2d (427.5, 310);
    glVertex2d (475, 330);


    glVertex2d (427.5, 285);
    glVertex2d (475, 310);

    glVertex2d (427.5, 260);
    glVertex2d (475, 285);

    glVertex2d (427.5, 240);
    glVertex2d (475, 267.5);

    glVertex2d (427.5, 220);
    glVertex2d (475, 250);



    glEnd();
    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (443.33, 340);
    glVertex2d (443.33, 360);

    glVertex2d (459.16, 345);
    glVertex2d (459.16, 365);


    glVertex2d (443.33, 295);
    glVertex2d (443.33, 318);



    glVertex2d (459.16, 301);
    glVertex2d (459.16, 324);


    glVertex2d (443.33, 250);
    glVertex2d (443.33, 270);

    glVertex2d (459.16, 258);
    glVertex2d (459.16, 277);

    glVertex2d (443.33, 210);
    glVertex2d (443.33, 230);

    glVertex2d (459.16, 220);
    glVertex2d (459.16, 240);

    glVertex2d (451.25, 320);
    glVertex2d (451.25, 343);

    glVertex2d (451.25, 273);
    glVertex2d (451.25, 297);

    glVertex2d (451.25, 235);
    glVertex2d (451.25, 255);



    glEnd();
    glFlush();




    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (475, 225);
    glVertex2d (500, 225);

    glVertex2d (500, 225);
    glVertex2d (500, 390);

    glVertex2d (500, 390);
    glVertex2d (475, 390);

    glVertex2d (475, 390);
    glVertex2d (475, 225);


    glEnd();
    glFlush();


    glBegin(GL_TRIANGLES);
    glColor3ub (139, 10, 80);

    glVertex2d (470, 390);
    glVertex2d (505, 390);

    glVertex2d (487.5, 450);



    glEnd();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (470, 390);
    glVertex2d (505, 390);

    glVertex2d (505, 390);
    glVertex2d (487.5, 450);

    glVertex2d (487.5, 450);
    glVertex2d (470, 390);


    glEnd();
    glFlush();


//left wall

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);




    glVertex2d (180, 355);
    glVertex2d (132.5, 370);
    glVertex2d (132.5, 370);
    glVertex2d (132.5, 230);
    glVertex2d (132.5, 230);
    glVertex2d (180, 200);
    glVertex2d (180, 200);
    glVertex2d (180, 355);

    glEnd();
    glFlush();

// bricks
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (180, 335);
    glVertex2d (132.5, 350);

    glVertex2d (180, 310);
    glVertex2d (132.5, 330);


    glVertex2d (180, 285);
    glVertex2d (132.5, 310);

    glVertex2d (180, 260);
    glVertex2d (132.5, 285);

    glVertex2d (180, 240);
    glVertex2d (132.5, 267.5);

    glVertex2d (180, 220);
    glVertex2d (132.5, 250);



    glEnd();
    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (164.17, 340);
    glVertex2d (164.17, 360);

    glVertex2d (148.34, 345);
    glVertex2d (148.34, 365);


    glVertex2d (164.17, 295);
    glVertex2d (164.17, 318);

    glVertex2d (148.34, 301);
    glVertex2d (148.34, 324);


    glVertex2d (164.17, 250);
    glVertex2d (164.17, 270);

    glVertex2d (148.34, 258);
    glVertex2d (148.34, 277);

    glVertex2d (164.17, 210);
    glVertex2d (164.17, 230);

    glVertex2d (148.34, 220);
    glVertex2d (148.34, 240);

    glVertex2d (156.25, 320);
    glVertex2d (156.25, 343);

    glVertex2d (156.25, 273);
    glVertex2d (156.25, 297);

    glVertex2d (156.25, 235);
    glVertex2d (156.25, 255);



    glEnd();
    glFlush();


//second piller

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (132.5, 225);
    glVertex2d (107.5, 225);
    glVertex2d (107.5, 390);
    glVertex2d (132.5, 390);


    glEnd();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (132.5, 225);
    glVertex2d (107.5, 225);

    glVertex2d (107.5, 225);
    glVertex2d (107.5, 390);

    glVertex2d (107.5, 390);
    glVertex2d (132.5, 390);

    glVertex2d (132.5, 390);
    glVertex2d (132.5, 225);


    glEnd();
    glFlush();


    glBegin(GL_TRIANGLES);
    glColor3ub (139, 10, 80);

    glVertex2d (102.5, 390);
    glVertex2d (137.5, 390);

    glVertex2d (120.5, 450);



    glEnd();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (102.5, 390);
    glVertex2d (137.5, 390);

    glVertex2d (137.5, 390);
    glVertex2d (120.5, 450);

    glVertex2d (120.5, 450);
    glVertex2d (102.5, 390);


    glEnd();
    glFlush();


//gate

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (304+25*cos(t),270+25*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (279, 200);
    glVertex2d (329, 200);
    glVertex2d (329, 270);
    glVertex2d (279, 270);

    glEnd();


//window


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (270, 330);
    glVertex2d (275, 330);
    glVertex2d (275, 310);
    glVertex2d (270, 310);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (290, 330);
    glVertex2d (295, 330);
    glVertex2d (295, 310);
    glVertex2d (290, 310);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (310, 330);
    glVertex2d (315, 330);
    glVertex2d (315, 310);
    glVertex2d (310, 310);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (330, 330);
    glVertex2d (335, 330);
    glVertex2d (335, 310);
    glVertex2d (330, 310);

    glEnd();

//secondary piller

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (115, 370);
    glVertex2d (125, 370);
    glVertex2d (125, 350);
    glVertex2d (115, 350);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (482, 370);
    glVertex2d (492, 370);
    glVertex2d (492, 350);
    glVertex2d (482, 350);

    glEnd();

//primary piller

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (203+10*cos(t),350+10*sin(t));
    }

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (193, 350);
    glVertex2d (213, 350);
    glVertex2d (213, 320);
    glVertex2d (193, 320);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (404+10*cos(t),350+10*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (394, 350);
    glVertex2d (414, 350);
    glVertex2d (414, 320);
    glVertex2d (394, 320);

    glEnd();

//road

    glBegin(GL_POLYGON);
    glColor3ub (119, 136, 153);
    glVertex2d (279, 200);
    glVertex2d (329, 200);
    glVertex2d (380, 117);
    glVertex2d (300, 100);
    glVertex2d (227, 116);

    glEnd();


//bound


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (0, 225);
    glVertex2d (150, 135);

    glVertex2d (150, 135);
    glVertex2d (300, 105);

    glVertex2d (300, 105);
    glVertex2d (450, 135);

    glVertex2d (450, 135);
    glVertex2d (600, 225);



    glEnd();

    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (0, 230);
    glVertex2d (150, 140);

    glVertex2d (150, 140);
    glVertex2d (300, 110);

    glVertex2d (300, 110);
    glVertex2d (450, 140);

    glVertex2d (450, 140);
    glVertex2d (600, 230);



    glEnd();

    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (0, 235);
    glVertex2d (150, 145);

    glVertex2d (150, 145);
    glVertex2d (300, 115);

    glVertex2d (300, 115);
    glVertex2d (450, 145);

    glVertex2d (450, 145);
    glVertex2d (600, 235);



    glEnd();

    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (75, 175);
    glVertex2d (75, 195);

    glVertex2d (150, 130);
    glVertex2d (150, 150);

    glVertex2d (225, 115);
    glVertex2d (225, 135);


    glVertex2d (300, 100);
    glVertex2d (300, 120);

    glVertex2d (375, 115);
    glVertex2d (375, 135);

    glVertex2d (450, 130);
    glVertex2d (450, 150);

    glVertex2d (525, 175);
    glVertex2d (525, 195);



    glEnd();

    glFlush();


//tree


    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (132+10*cos(t),225+10*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (124+10*cos(t),225+10*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (128+10*cos(t),235+10*sin(t));
    }

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (200+15*cos(t),200+15*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (220+15*cos(t),200+15*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (210+15*cos(t),215+15*sin(t));
    }

    glEnd();

//flower

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (200+3*cos(t),210+3*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (213+4*cos(t),200+4*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (215+4*cos(t),215+4*sin(t));
    }

    glEnd();


//right side tree


    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (430+15*cos(t),200+15*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (450+15*cos(t),200+15*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (440+15*cos(t),215+15*sin(t));
    }

    glEnd();

//flower

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (430+3*cos(t),210+3*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (443+4*cos(t),200+4*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (445+4*cos(t),215+4*sin(t));
    }

    glEnd();

//main tree

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);
    glVertex2d (530, 200);
    glVertex2d (530, 370);
    glVertex2d (540, 370);
    glVertex2d (540, 200);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);

    glVertex2d (540, 330);
    glVertex2d (550, 350);
    glVertex2d (560, 350);
    glVertex2d (540, 310);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);

    glVertex2d (530, 330);
    glVertex2d (520, 350);
    glVertex2d (510, 350);
    glVertex2d (530, 310);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (78, 238, 148);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (535+28*cos(t),385+28*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (78, 238, 148);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (517+25*cos(t),360+25*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (78, 238, 148);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (555+25*cos(t),360+25*sin(t));
    }

    glEnd();

//windmill

    glPushMatrix();
    glTranslated(10,240,0);
    glScaled(0.4,0.4,1);
    drawWindmill();
    glPopMatrix();

    glPushMatrix();
    glTranslated(40,80,0);
    glScaled(0.6,0.6,1);
    drawWindmill();
    glPopMatrix();

    glPushMatrix();
    glTranslated(140,310,0);
    glScaled(0.3,0.3,1);
    drawWindmill();
    glPopMatrix();


//boat moving


    glPushMatrix();
    glTranslated(3 - 500*(frameNumber % 510) / 400.0, 0, 0);
    glScaled(1,1,1);
    drawBoat();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3 + 500*(frameNumber % 500) / 400.0, 0, 0);
    glScaled(1.2,1.2,1);
    drawCart();
    glPopMatrix();



    //showing star
    drawStar();




    glutSwapBuffers ();
}




///////////////////

void display(void)
{
    /* clear all pixels */
    float t;
    glClear (GL_COLOR_BUFFER_BIT);


    glColor3ub (84, 25, 168);


// sky

    glBegin(GL_POLYGON);
    glColor3ub (30, 144, 255);
    glVertex2d (0, 600);
    glVertex2d (0, 400);
    glVertex2d (600, 400);
    glVertex2d (600, 600);

    glEnd();

//sun

    glBegin(GL_POLYGON);
    glColor3ub (255, 193, 37);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (490+18*cos(t),530+18*sin(t));
    }

    glEnd();


//cloud moving

    glPushMatrix();
    glTranslated(-3 + 500*(frameNumber % 1000) / 800.0, 0, 0);
    glScaled(1.1,1.1,1);
    drawCloud();
    glPopMatrix();



//hill

    glBegin(GL_LINES);
    glColor3ub (139, 90, 43);
    glVertex2d (0, 400);
    glVertex2d (600, 400);


    glEnd();

    glFlush();


    glBegin(GL_POLYGON);
    glColor3ub (160, 82, 45);
    glVertex2d (0, 440);
    glVertex2d (20, 470);
    glVertex2d (70, 400);
    glVertex2d (0, 400);

    glEnd();

//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (20, 470);
    glVertex2d (25, 460);
    glVertex2d (20, 450);
    glVertex2d (6.5, 450);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 69, 19);
    glVertex2d (30, 400);
    glVertex2d (60, 460);
    glVertex2d (100, 490);
    glVertex2d (140, 400);
    glVertex2d (30, 400);

    glEnd();

//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (100, 490);
    glVertex2d (108, 470);
    glVertex2d (90, 478);
    glVertex2d (69, 467);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);
    glVertex2d (100, 400);
    glVertex2d (160, 460);
    glVertex2d (220, 510);
    glVertex2d (250, 470);
    glVertex2d (290, 400);
    glVertex2d (100, 400);

    glEnd();


//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (220, 510);
    glVertex2d (228, 500);
    glVertex2d (220, 505);
    glVertex2d (210, 500);
    glVertex2d (200, 467);
    glVertex2d (201, 495);


    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub (139,90,43);
    glVertex2d (270, 400);
    glVertex2d (340, 470);
    glVertex2d (400, 400);


    glEnd();

//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (340, 470);
    glVertex2d (348, 457);
    glVertex2d (340, 463);
    glVertex2d (325, 453);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 69, 19);
    glVertex2d (370, 400);
    glVertex2d (440, 480);
    glVertex2d (480, 420);
    glVertex2d (510, 400);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);
    glVertex2d (350, 400);
    glVertex2d (540, 480);
    glVertex2d (580, 420);
    glVertex2d (600, 400);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (160, 82, 45);
    glVertex2d (580, 400);
    glVertex2d (600, 450);
    glVertex2d (600, 400);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub (139, 69, 19);
    glVertex2d (540, 480);
    glVertex2d (582, 430);
    glVertex2d (580, 400);
    glVertex2d (600, 400);




    glEnd();

//hill top
    glBegin(GL_POLYGON);
    glColor3ub (255, 255, 255);
    glVertex2d (540, 480);
    glVertex2d (550, 470);
    glVertex2d (545, 472);
    glVertex2d (540, 465);
    glVertex2d (535, 472);
    glVertex2d (524, 472);


    glEnd();


// river

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 139);
    glVertex2d (0, 400);
    glVertex2d (0, 0);
    glVertex2d (600, 0);
    glVertex2d (600, 400);


    glEnd();

// land

    glBegin(GL_POLYGON);
    glColor3ub (107, 142, 35);
    glVertex2d (0, 400);
    glVertex2d (0, 220);
    glVertex2d (150, 130);
    glVertex2d (300, 100);
    glVertex2d (450, 130);
    glVertex2d (600, 220);
    glVertex2d (600, 400);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);
    glVertex2d (0, 400);
    glVertex2d (0, 220);

    glVertex2d (0, 220);
    glVertex2d (150, 130);

    glVertex2d (150, 130);
    glVertex2d (300, 100);

    glVertex2d (300, 100);
    glVertex2d (450, 130);

    glVertex2d (450, 130);
    glVertex2d (600, 220);

    glVertex2d (600, 220);
    glVertex2d (600, 400);


    glEnd();

    glFlush();



//castle

//vertex


    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (270, 350);
    glVertex2d (290, 350);
    glVertex2d (290, 500);
    glVertex2d (270, 500);


    glEnd();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (270, 350);
    glVertex2d (290, 350);

    glVertex2d (290, 350);
    glVertex2d (290, 500);

    glVertex2d (290, 500);
    glVertex2d (270, 500);

    glVertex2d (270, 500);
    glVertex2d (270, 350);



    glEnd();

    glFlush();


    glBegin(GL_TRIANGLES);
    glColor3ub (139, 10, 80);
    glVertex2d (265, 500);
    glVertex2d (295, 500);
    glVertex2d (280, 520);



    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (282, 350);
    glVertex2d (318, 350);
    glVertex2d (318, 460);
    glVertex2d (282, 460);


    glEnd();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (282, 350);
    glVertex2d (318, 350);

    glVertex2d (318, 350);
    glVertex2d (318, 460);

    glVertex2d (318, 460);
    glVertex2d (282, 460);

    glVertex2d (282, 460);
    glVertex2d (282, 350);



    glEnd();

    glFlush();


    glBegin(GL_TRIANGLES);
    glColor3ub (139, 10, 80);
    glVertex2d (275, 460);
    glVertex2d (325, 460);
    glVertex2d (300, 490);



    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (275, 460);
    glVertex2d (325, 460);
    glVertex2d (325, 460);
    glVertex2d (300, 490);
    glVertex2d (300, 490);
    glVertex2d (275, 460);


    glEnd();

    glFlush();




    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (300+60*cos(t),380+60*sin(t));
    }

    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (300+60*cos(t),380+60*sin(t));
    }

    glEnd();





//front structure

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (225, 200);
    glVertex2d (382.5, 200);
    glVertex2d (382.5, 350);
    glVertex2d (225, 350);


    glEnd();

// inner bricks

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (225, 230);
    glVertex2d (382.5, 230);

    glVertex2d (225, 260);
    glVertex2d (382.5, 260);

    glVertex2d (225, 290);
    glVertex2d (382.5, 290);

    glVertex2d (225, 320);
    glVertex2d (382.5, 320);

    glVertex2d (245, 290);
    glVertex2d (245, 320);

    glVertex2d (245, 230);
    glVertex2d (245, 260);

    glVertex2d (362.5, 290);
    glVertex2d (362.5, 320);

    glVertex2d (362.5, 230);
    glVertex2d (362.5, 260);

    glEnd();

    glFlush();


    glBegin(GL_POLYGON);
    glColor3ub (139, 58, 98);
    glVertex2d (225, 340);
    glVertex2d (382.5, 340);
    glVertex2d (382.5, 405);
    glVertex2d (225, 405);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (225, 405);
    glVertex2d (382.5, 405);

    glVertex2d (251, 415);
    glVertex2d (348.5, 415);

    glVertex2d (260, 425);
    glVertex2d (340.5, 425);

    glVertex2d (270, 415);
    glVertex2d (270, 425);

    glVertex2d (300, 415);
    glVertex2d (300, 425);


    glVertex2d (285, 405);
    glVertex2d (285, 415);

    glVertex2d (315, 405);
    glVertex2d (315, 415);

    glVertex2d (255, 405);
    glVertex2d (255, 415);

    glVertex2d (345, 405);
    glVertex2d (345, 415);



    glVertex2d (330, 415);
    glVertex2d (330, 425);

    glVertex2d (285, 425);
    glVertex2d (285, 438);

    glVertex2d (315, 425);
    glVertex2d (315, 438);




    glEnd();

    glFlush();

    glBegin(GL_POLYGON);

    glColor3ub (105, 105, 105);
    glVertex2d (262.5, 200);
    glVertex2d (262.5, 365);
    glVertex2d (270, 365);
    glVertex2d (270, 350);
    glVertex2d (277.5, 350);
    glVertex2d (277.5, 365);
    glVertex2d (285, 365);
    glVertex2d (285, 350);
    glVertex2d (292.5, 350);
    glVertex2d (292.5, 365);
    glVertex2d (300, 365);
    glVertex2d (300, 350);
    glVertex2d (307.5, 350);
    glVertex2d (307.5, 365);
    glVertex2d (315, 365);
    glVertex2d (315, 350);
    glVertex2d (322.5, 350);
    glVertex2d (322.5, 365);
    glVertex2d (330, 365);
    glVertex2d (330, 350);
    glVertex2d (337.5, 350);
    glVertex2d (337.5, 365);
    glVertex2d (345, 365);
    glVertex2d (345, 200);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (262.5, 200);
    glVertex2d (262.5, 365);


    glVertex2d (262.5, 365);
    glVertex2d (270, 365);

    glVertex2d (270, 365);
    glVertex2d (270, 350);

    glVertex2d (270, 350);
    glVertex2d (277.5, 350);

    glVertex2d (277.5, 350);
    glVertex2d (277.5, 365);

    glVertex2d (277.5, 365);
    glVertex2d (285, 365);

    glVertex2d (285, 365);
    glVertex2d (285, 350);

    glVertex2d (285, 350);
    glVertex2d (292.5, 350);

    glVertex2d (292.5, 350);
    glVertex2d (292.5, 365);

    glVertex2d (292.5, 365);
    glVertex2d (300, 365);

    glVertex2d (300, 365);
    glVertex2d (300, 350);

    glVertex2d (300, 350);
    glVertex2d (307.5, 350);

    glVertex2d (307.5, 350);
    glVertex2d (307.5, 365);

    glVertex2d (307.5, 365);
    glVertex2d (315, 365);

    glVertex2d (315, 365);
    glVertex2d (315, 350);

    glVertex2d (315, 350);
    glVertex2d (322.5, 350);

    glVertex2d (322.5, 350);
    glVertex2d (322.5, 365);

    glVertex2d (322.5, 365);
    glVertex2d (330, 365);

    glVertex2d (330, 365);
    glVertex2d (330, 350);

    glVertex2d (330, 350);
    glVertex2d (337.5, 350);

    glVertex2d (337.5, 350);
    glVertex2d (337.5, 365);

    glVertex2d (337.5, 365);
    glVertex2d (345, 365);

    glVertex2d (345, 200);
    glVertex2d (345, 365);




    glEnd();

    glFlush();

// right wall upper layer
    glBegin(GL_POLYGON);
    glColor3ub (139, 58, 98);
    glVertex2d (427.5, 365);
    glVertex2d (475, 380);
    glVertex2d (475, 370);
    glVertex2d (427.5, 355);


    glEnd();


// left wall upper layer
    glBegin(GL_POLYGON);
    glColor3ub (139, 58, 98);
    glVertex2d (180, 365);
    glVertex2d (132.5, 380);
    glVertex2d (132.5, 370);
    glVertex2d (180, 355);



    glEnd();


//piller

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (225, 190);
    glVertex2d (225, 400);
    glVertex2d (180, 400);
    glVertex2d (180, 190);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (225, 190);
    glVertex2d (225, 400);

    glVertex2d (225, 400);
    glVertex2d (180, 400);

    glVertex2d (180, 400);
    glVertex2d (180, 190);

    glVertex2d (180, 190);
    glVertex2d (225, 190);



    glEnd();

    glFlush();

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (382.5, 190);
    glVertex2d (382.5, 400);
    glVertex2d (427.5, 400);
    glVertex2d (427.5, 190);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (382.5, 190);
    glVertex2d (382.5, 400);

    glVertex2d (382.5, 400);
    glVertex2d (427.5, 400);

    glVertex2d (427.5, 400);
    glVertex2d (427.5, 190);

    glVertex2d (427.5, 190);
    glVertex2d (382.5, 190);



    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (382.5, 400);
    glVertex2d (375, 410);
    glVertex2d (435, 410);
    glVertex2d (427.5, 400);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (382.5, 400);
    glVertex2d (375, 410);

    glVertex2d (375, 410);
    glVertex2d (435, 410);

    glVertex2d (435, 410);
    glVertex2d (427.5, 400);

    glVertex2d (427.5, 400);
    glVertex2d (382.5, 400);



    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (225, 400);
    glVertex2d (232.5, 410);
    glVertex2d (172.5, 410);
    glVertex2d (180, 400);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (225, 400);
    glVertex2d (232.5, 410);

    glVertex2d (232.5, 410);
    glVertex2d (172.5, 410);

    glVertex2d (172.5, 410);
    glVertex2d (180, 400);

    glVertex2d (180, 400);
    glVertex2d (225, 400);



    glEnd();
    glFlush();

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (172.5, 410);
    glVertex2d (172.5, 430);
    glVertex2d (184.5, 430);
    glVertex2d (184.5, 420);
    glVertex2d (196.5, 420);
    glVertex2d (196.5, 430);
    glVertex2d (208.5, 430);
    glVertex2d (208.5, 420);
    glVertex2d (220.5, 420);
    glVertex2d (220.5, 430);
    glVertex2d (232.5, 430);
    glVertex2d (232.5, 410);


    glEnd();

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (172.5, 410);
    glVertex2d (172.5, 430);

    glVertex2d (172.5, 430);
    glVertex2d (184.5, 430);

    glVertex2d (184.5, 430);
    glVertex2d (184.5, 420);

    glVertex2d (184.5, 420);
    glVertex2d (196.5, 420);

    glVertex2d (196.5, 420);
    glVertex2d (196.5, 430);

    glVertex2d (196.5, 430);
    glVertex2d (208.5, 430);

    glVertex2d (208.5, 430);
    glVertex2d (208.5, 420);

    glVertex2d (208.5, 420);
    glVertex2d (220.5, 420);

    glVertex2d (220.5, 420);
    glVertex2d (220.5, 430);

    glVertex2d (220.5, 430);
    glVertex2d (232.5, 430);

    glVertex2d (232.5, 430);
    glVertex2d (232.5, 410);

    glVertex2d (232.5, 410);
    glVertex2d (172.5, 410);




    glEnd();
    glFlush();


    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (375, 410);
    glVertex2d (375, 430);
    glVertex2d (387, 430);
    glVertex2d (387, 420);
    glVertex2d (399, 420);
    glVertex2d (399, 430);
    glVertex2d (411, 430);
    glVertex2d (411, 420);
    glVertex2d (423, 420);
    glVertex2d (423, 430);
    glVertex2d (435, 430);
    glVertex2d (435, 410);


    glEnd();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (375, 410);
    glVertex2d (375, 430);

    glVertex2d (375, 430);
    glVertex2d (387, 430);

    glVertex2d (387, 430);
    glVertex2d (387, 420);

    glVertex2d (387, 420);
    glVertex2d (399, 420);

    glVertex2d (399, 420);
    glVertex2d (399, 430);

    glVertex2d (399, 430);
    glVertex2d (411, 430);

    glVertex2d (411, 430);
    glVertex2d (411, 420);

    glVertex2d (411, 420);
    glVertex2d (423, 420);

    glVertex2d (423, 420);
    glVertex2d (423, 430);

    glVertex2d (423, 430);
    glVertex2d (435, 430);

    glVertex2d (435, 430);
    glVertex2d (435, 410);

    glVertex2d (435, 410);
    glVertex2d (375, 410);




    glEnd();
    glFlush();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (180, 370);
    glVertex2d (225, 370);

    glVertex2d (180, 340);
    glVertex2d (225, 340);

    glVertex2d (180, 310);
    glVertex2d (225, 310);

    glVertex2d (180, 280);
    glVertex2d (225, 280);

    glVertex2d (180, 250);
    glVertex2d (225, 250);

    glVertex2d (180, 220);
    glVertex2d (225, 220);





    glEnd();
    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (382.5, 370);
    glVertex2d (427.5, 370);

    glVertex2d (382.5, 340);
    glVertex2d (427.5, 340);

    glVertex2d (382.5, 310);
    glVertex2d (427.5, 310);

    glVertex2d (382.5, 280);
    glVertex2d (427.5, 280);

    glVertex2d (382.5, 250);
    glVertex2d (427.5, 250);

    glVertex2d (382.5, 220);
    glVertex2d (427.5, 220);





    glEnd();
    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (195, 370);
    glVertex2d (195, 400);

    glVertex2d (210, 370);
    glVertex2d (210, 400);


    glVertex2d (202.5, 370);
    glVertex2d (202.5, 340);

    glVertex2d (195, 340);
    glVertex2d (195, 310);

    glVertex2d (210, 340);
    glVertex2d (210, 310);

    glVertex2d (202.5, 310);
    glVertex2d (202.5, 280);

    glVertex2d (195, 280);
    glVertex2d (195, 250);

    glVertex2d (210, 280);
    glVertex2d (210, 250);

    glVertex2d (202.5, 250);
    glVertex2d (202.5, 220);

    glVertex2d (195, 220);
    glVertex2d (195, 190);

    glVertex2d (210, 220);
    glVertex2d (210, 190);


    glEnd();
    glFlush();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (397.5, 370);
    glVertex2d (397.5, 400);

    glVertex2d (412.5, 370);
    glVertex2d (412.5, 400);


    glVertex2d (405, 370);
    glVertex2d (405, 340);

    glVertex2d (397.5, 340);
    glVertex2d (397.5, 310);

    glVertex2d (412.5, 340);
    glVertex2d (412.5, 310);

    glVertex2d (405.5, 310);
    glVertex2d (405.5, 280);

    glVertex2d (397.5, 280);
    glVertex2d (397.5, 250);

    glVertex2d (412.5, 280);
    glVertex2d (412.5, 250);

    glVertex2d (405, 250);
    glVertex2d (405, 220);

    glVertex2d (397.5, 220);
    glVertex2d (397.5, 190);

    glVertex2d (412.5, 220);
    glVertex2d (412.5, 190);


    glEnd();
    glFlush();

//right wall

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (427.5, 355);
    glVertex2d (475, 370);
    glVertex2d (475, 230);
    glVertex2d (427.5, 200);


    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (180, 355);
    glVertex2d (132.5, 370);
    glVertex2d (132.5, 230);
    glVertex2d (180, 200);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (475, 225);
    glVertex2d (500, 225);
    glVertex2d (500, 390);
    glVertex2d (475, 390);


    glEnd();




    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (427.5, 355);
    glVertex2d (475, 370);

    glVertex2d (475, 370);
    glVertex2d (475, 230);


    glVertex2d (475, 230);
    glVertex2d (427.5, 200);

    glVertex2d (427.5, 200);
    glVertex2d (427.5, 355);



    glEnd();
    glFlush();


// bricks
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (427.5, 335);
    glVertex2d (475, 350);

    glVertex2d (427.5, 310);
    glVertex2d (475, 330);


    glVertex2d (427.5, 285);
    glVertex2d (475, 310);

    glVertex2d (427.5, 260);
    glVertex2d (475, 285);

    glVertex2d (427.5, 240);
    glVertex2d (475, 267.5);

    glVertex2d (427.5, 220);
    glVertex2d (475, 250);



    glEnd();
    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (443.33, 340);
    glVertex2d (443.33, 360);

    glVertex2d (459.16, 345);
    glVertex2d (459.16, 365);


    glVertex2d (443.33, 295);
    glVertex2d (443.33, 318);



    glVertex2d (459.16, 301);
    glVertex2d (459.16, 324);


    glVertex2d (443.33, 250);
    glVertex2d (443.33, 270);

    glVertex2d (459.16, 258);
    glVertex2d (459.16, 277);

    glVertex2d (443.33, 210);
    glVertex2d (443.33, 230);

    glVertex2d (459.16, 220);
    glVertex2d (459.16, 240);

    glVertex2d (451.25, 320);
    glVertex2d (451.25, 343);

    glVertex2d (451.25, 273);
    glVertex2d (451.25, 297);

    glVertex2d (451.25, 235);
    glVertex2d (451.25, 255);



    glEnd();
    glFlush();




    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (475, 225);
    glVertex2d (500, 225);

    glVertex2d (500, 225);
    glVertex2d (500, 390);

    glVertex2d (500, 390);
    glVertex2d (475, 390);

    glVertex2d (475, 390);
    glVertex2d (475, 225);


    glEnd();
    glFlush();


    glBegin(GL_TRIANGLES);
    glColor3ub (139, 10, 80);

    glVertex2d (470, 390);
    glVertex2d (505, 390);

    glVertex2d (487.5, 450);



    glEnd();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (470, 390);
    glVertex2d (505, 390);

    glVertex2d (505, 390);
    glVertex2d (487.5, 450);

    glVertex2d (487.5, 450);
    glVertex2d (470, 390);


    glEnd();
    glFlush();


//left wall

    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);




    glVertex2d (180, 355);
    glVertex2d (132.5, 370);
    glVertex2d (132.5, 370);
    glVertex2d (132.5, 230);
    glVertex2d (132.5, 230);
    glVertex2d (180, 200);
    glVertex2d (180, 200);
    glVertex2d (180, 355);

    glEnd();
    glFlush();

// bricks
    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (180, 335);
    glVertex2d (132.5, 350);

    glVertex2d (180, 310);
    glVertex2d (132.5, 330);


    glVertex2d (180, 285);
    glVertex2d (132.5, 310);

    glVertex2d (180, 260);
    glVertex2d (132.5, 285);

    glVertex2d (180, 240);
    glVertex2d (132.5, 267.5);

    glVertex2d (180, 220);
    glVertex2d (132.5, 250);



    glEnd();
    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (164.17, 340);
    glVertex2d (164.17, 360);

    glVertex2d (148.34, 345);
    glVertex2d (148.34, 365);


    glVertex2d (164.17, 295);
    glVertex2d (164.17, 318);

    glVertex2d (148.34, 301);
    glVertex2d (148.34, 324);


    glVertex2d (164.17, 250);
    glVertex2d (164.17, 270);

    glVertex2d (148.34, 258);
    glVertex2d (148.34, 277);

    glVertex2d (164.17, 210);
    glVertex2d (164.17, 230);

    glVertex2d (148.34, 220);
    glVertex2d (148.34, 240);

    glVertex2d (156.25, 320);
    glVertex2d (156.25, 343);

    glVertex2d (156.25, 273);
    glVertex2d (156.25, 297);

    glVertex2d (156.25, 235);
    glVertex2d (156.25, 255);



    glEnd();
    glFlush();


//second piller

    glBegin(GL_POLYGON);
    glColor3ub (105, 105, 105);
    glVertex2d (132.5, 225);
    glVertex2d (107.5, 225);
    glVertex2d (107.5, 390);
    glVertex2d (132.5, 390);


    glEnd();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (132.5, 225);
    glVertex2d (107.5, 225);

    glVertex2d (107.5, 225);
    glVertex2d (107.5, 390);

    glVertex2d (107.5, 390);
    glVertex2d (132.5, 390);

    glVertex2d (132.5, 390);
    glVertex2d (132.5, 225);


    glEnd();
    glFlush();


    glBegin(GL_TRIANGLES);
    glColor3ub (139, 10, 80);

    glVertex2d (102.5, 390);
    glVertex2d (137.5, 390);

    glVertex2d (120.5, 450);



    glEnd();



    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);


    glVertex2d (102.5, 390);
    glVertex2d (137.5, 390);

    glVertex2d (137.5, 390);
    glVertex2d (120.5, 450);

    glVertex2d (120.5, 450);
    glVertex2d (102.5, 390);


    glEnd();
    glFlush();


//gate

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (304+25*cos(t),270+25*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (279, 200);
    glVertex2d (329, 200);
    glVertex2d (329, 270);
    glVertex2d (279, 270);

    glEnd();


//window


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (270, 330);
    glVertex2d (275, 330);
    glVertex2d (275, 310);
    glVertex2d (270, 310);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (290, 330);
    glVertex2d (295, 330);
    glVertex2d (295, 310);
    glVertex2d (290, 310);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (310, 330);
    glVertex2d (315, 330);
    glVertex2d (315, 310);
    glVertex2d (310, 310);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (330, 330);
    glVertex2d (335, 330);
    glVertex2d (335, 310);
    glVertex2d (330, 310);

    glEnd();

//secondary piller

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (115, 370);
    glVertex2d (125, 370);
    glVertex2d (125, 350);
    glVertex2d (115, 350);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (482, 370);
    glVertex2d (492, 370);
    glVertex2d (492, 350);
    glVertex2d (482, 350);

    glEnd();

//primary piller

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (203+10*cos(t),350+10*sin(t));
    }

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (193, 350);
    glVertex2d (213, 350);
    glVertex2d (213, 320);
    glVertex2d (193, 320);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (404+10*cos(t),350+10*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (0, 0, 0);
    glVertex2d (394, 350);
    glVertex2d (414, 350);
    glVertex2d (414, 320);
    glVertex2d (394, 320);

    glEnd();

//road

    glBegin(GL_POLYGON);
    glColor3ub (119, 136, 153);
    glVertex2d (279, 200);
    glVertex2d (329, 200);
    glVertex2d (380, 117);
    glVertex2d (300, 100);
    glVertex2d (227, 116);

    glEnd();


//bound


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (0, 225);
    glVertex2d (150, 135);

    glVertex2d (150, 135);
    glVertex2d (300, 105);

    glVertex2d (300, 105);
    glVertex2d (450, 135);

    glVertex2d (450, 135);
    glVertex2d (600, 225);



    glEnd();

    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (0, 230);
    glVertex2d (150, 140);

    glVertex2d (150, 140);
    glVertex2d (300, 110);

    glVertex2d (300, 110);
    glVertex2d (450, 140);

    glVertex2d (450, 140);
    glVertex2d (600, 230);



    glEnd();

    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (0, 235);
    glVertex2d (150, 145);

    glVertex2d (150, 145);
    glVertex2d (300, 115);

    glVertex2d (300, 115);
    glVertex2d (450, 145);

    glVertex2d (450, 145);
    glVertex2d (600, 235);



    glEnd();

    glFlush();


    glBegin(GL_LINES);
    glColor3ub (0, 0, 0);

    glVertex2d (75, 175);
    glVertex2d (75, 195);

    glVertex2d (150, 130);
    glVertex2d (150, 150);

    glVertex2d (225, 115);
    glVertex2d (225, 135);


    glVertex2d (300, 100);
    glVertex2d (300, 120);

    glVertex2d (375, 115);
    glVertex2d (375, 135);

    glVertex2d (450, 130);
    glVertex2d (450, 150);

    glVertex2d (525, 175);
    glVertex2d (525, 195);



    glEnd();

    glFlush();


//tree


    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (132+10*cos(t),225+10*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (124+10*cos(t),225+10*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (128+10*cos(t),235+10*sin(t));
    }

    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (200+15*cos(t),200+15*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (220+15*cos(t),200+15*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (210+15*cos(t),215+15*sin(t));
    }

    glEnd();

//flower

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (200+3*cos(t),210+3*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (213+4*cos(t),200+4*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (215+4*cos(t),215+4*sin(t));
    }

    glEnd();


//right side tree


    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (430+15*cos(t),200+15*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (450+15*cos(t),200+15*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (102, 205, 0);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (440+15*cos(t),215+15*sin(t));
    }

    glEnd();

//flower

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (430+3*cos(t),210+3*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);

    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (443+4*cos(t),200+4*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (205, 38, 38);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (445+4*cos(t),215+4*sin(t));
    }

    glEnd();

//main tree

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);
    glVertex2d (530, 200);
    glVertex2d (530, 370);
    glVertex2d (540, 370);
    glVertex2d (540, 200);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);

    glVertex2d (540, 330);
    glVertex2d (550, 350);
    glVertex2d (560, 350);
    glVertex2d (540, 310);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (139, 90, 43);

    glVertex2d (530, 330);
    glVertex2d (520, 350);
    glVertex2d (510, 350);
    glVertex2d (530, 310);


    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub (78, 238, 148);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (535+28*cos(t),385+28*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (78, 238, 148);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (517+25*cos(t),360+25*sin(t));
    }

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (78, 238, 148);
    for(int i=0; i<360; i++)
    {
        t=i*3.1416/180;
        glVertex2d (555+25*cos(t),360+25*sin(t));
    }

    glEnd();

//windmill spining

    glPushMatrix();
    glTranslated(10,240,0);
    glScaled(0.4,0.4,1);
    drawWindmill();
    glPopMatrix();

    glPushMatrix();
    glTranslated(40,80,0);
    glScaled(0.6,0.6,1);
    drawWindmill();
    glPopMatrix();

    glPushMatrix();
    glTranslated(140,310,0);
    glScaled(0.3,0.3,1);
    drawWindmill();
    glPopMatrix();


//boat moving


    glPushMatrix();
    glTranslated(3 - 500*(frameNumber % 510) / 400.0, 0, 0);
    glScaled(1,1,1);
    drawBoat();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3 + 500*(frameNumber % 500) / 400.0, 0, 0);
    glScaled(1.2,1.2,1);
    drawCart();
    glPopMatrix();


    glutSwapBuffers ();
}


void doFrame(int v)
{
    frameNumber++;
    glutPostRedisplay();
    glutTimerFunc(25,doFrame,0);
}
///////////////// Theme change ///////


void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'd':
        glutDisplayFunc(display);
        glutPostRedisplay();
        break;

    case 'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;
        glutPostRedisplay();


    }
}



///////////////////////////


void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0); /* select clearing (background) color and initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 600, 0, 600);
}


int main(int argc, char** argv)

{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1200, 900);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("THE CASTLE (191-15-2537)");

    glutIdleFunc(Idle);
    init ();
    glutDisplayFunc(display);
    glutTimerFunc(100,doFrame,0);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();

    return 0;

}

// Completed by Sayed Farhan Labib Karib //


