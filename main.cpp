#include <windows.h>  // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void display()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(2);

    // sky portion

    glBegin(GL_QUADS);
    glColor3ub(248, 248, 248);
    glVertex2f(-100,-70);
    glVertex2f(100,-70);
    glVertex2f(100,30);
    glVertex2f(-100,30);
    glEnd();

    //building code
    glBegin(GL_QUADS);           //left portion
    glColor3ub(255, 255, 179);
    glVertex2f(-40,-70);
    glVertex2f(-20,-70);
    glVertex2f(-20,70);
    glVertex2f(-40,70);
    glEnd();

    glBegin(GL_QUADS);           //right portion
    glColor3ub(255, 255, 179);
    glVertex2f(10,-70);
    glVertex2f(30,-70);
    glVertex2f(30,70);
    glVertex2f(10,70);
    glEnd();

    glBegin(GL_QUADS);              //main portion
    glColor3ub(255, 204, 204);
    glVertex2f(-20,-70);
    glVertex2f(10,-70);
    glVertex2f(10,75);
    glVertex2f(-20,75);
    glEnd();

    glBegin(GL_QUADS);              //left roof
    glColor3ub(255, 255, 153);
    glVertex2f(-41,74);
    glVertex2f(-41,70);
    glVertex2f(-20,70);
    glVertex2f(-20,74);
    glEnd();


    glBegin(GL_QUADS);      //door in
    glColor3ub(58, 159, 214);
    glVertex2f(-9,-70);
    glVertex2f(-1,-70);
    glVertex2f(-1,-53);
    glVertex2f(-9,-53);

    glEnd();

    glBegin(GL_QUADS);      //door out
    glColor3ub(255, 255, 204);
    glVertex2f(-8,-70);
    glVertex2f(-2,-70);
    glVertex2f(-2,-55);
    glVertex2f(-8,-55);
    glEnd();

    glBegin(GL_QUADS);      //middle teris
    glColor3ub(255, 153, 153);
    glVertex2f(-22,79);
    glVertex2f(12,79);
    glVertex2f(12,75);
    glVertex2f(-22,75);
    glEnd();

    glBegin(GL_TRIANGLES);      //roof design
    glColor3ub(102, 204, 255);
    glVertex2f(-18,79);
    glVertex2f(-5,90);
    glVertex2f(8,79);
    glEnd();

    glBegin(GL_QUADS);              //right roof
    glColor3ub(255, 255, 153);
    glVertex2f(10,70);
    glVertex2f(31,70);
    glVertex2f(31,74);
    glVertex2f(10,74);
    glEnd();

    glBegin(GL_QUADS);          //left window

    glColor3ub(58,159,214);
    int z1=85,z2= 65;
    for(int i=0;i<5;i++)
    {
        glVertex2f(-35,z1-25);
        glVertex2f(-25,z1-25);
        glVertex2f(-25,z2-25);
        glVertex2f(-35,z2-25);

        z1 -=25;
        z2 -=25;

    }
    glEnd();

    glBegin(GL_QUADS);          //right window
    glColor3ub(58,159,214);
    z1=85,z2= 65;
    for(int i=0; i<5; i++)
    {
        glVertex2f(15,z1-25);
        glVertex2f(25,z1-25);
        glVertex2f(25,z2-25);
        glVertex2f(15,z2-25);

        z1 -=25;
        z2 -=25;


    }
    glEnd();


    glBegin(GL_LINES);              //left frame
    glColor3ub(0,0,0);
    z1=85,z2 =65;
    for(int i=0; i<5; i++)
    {
        glVertex2f(-30,z1-25);
        glVertex2f(-30,z2-25);

        z1 -=25;
        z2 -=25;
    }
    glEnd();

    glBegin(GL_LINES);              //right frame
    glColor3ub(0,0,0);
    z1=85,z2 =65;
    for(int i=0; i<5; i++)
    {
        glVertex2f(20,z1-25);
        glVertex2f(20,z2-25);

        z1 -=25;
        z2 -=25;
    }
    glEnd();

     glBegin(GL_QUADS);          //middle window
    glColor3ub(58,159,214);
    z1=95,z2= 75;
    for(int i=0; i<4; i++)
    {
        glVertex2f(-12,z1-30);
        glVertex2f(3,z1-30);
        glVertex2f(3,z2-30);
        glVertex2f(-12,z2-30);

        z1 -=30;
        z2 -=30;


    }
    glEnd();

    glBegin(GL_LINES);              //middle frame
    glColor3ub(0,0,0);
    z1=95,z2 =75;
    for(int i=0; i<4; i++)
    {
        glVertex2f(-4.5,z1-30);
        glVertex2f(-4.5,z2-30);

        z1 -=30;
        z2 -=30;
    }
    glEnd();

    glBegin(GL_QUADS);              //middle under window set
    glColor3ub(150, 132, 126);
   z1=75,z2= 71;
    for(int i=0; i<4; i++)
    {
        glVertex2f(-15,z1-30);
        glVertex2f(6,z1-30);
        glVertex2f(6,z2-30);
        glVertex2f(-15,z2-30);

        z1 -=30;
        z2 -=30;


    }
    glEnd();

    // this part contains source code of Lamppost

    glBegin(GL_QUADS);
    glColor3ub(15, 15, 57);
    glVertex2i(70,-70);
    glVertex2i(73, -70);
    glVertex2i(73, -61);
    glVertex2i(70, -61);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(15, 15, 57);
    glVertex2f(70.0, -61.0);
    glVertex2f(70.5, -58.0);
    glVertex2f(72.5, -58.0);
    glVertex2f(73.0, -61.0);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(15, 15, 57);
    glVertex2f(70.5, -58.0);
    glVertex2f(72.5, -58.0);
    glVertex2f(72.0, 8.0);
    glVertex2f(71.0, 8.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(69.0, 8.0);
    glVertex2f(74.0, 8.0);
    glVertex2f(76.5, 20.0);
    glVertex2f(73.0, 22.0);
    glVertex2f(66.5, 20.0);
    glVertex2f(73.0, 22.0);
    glVertex2f(71.5, 8.0);
    glVertex2f(71.8, 8.0);
    glVertex2f(73.3, 22.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(69.5, 8.5);
    glVertex2f(73.7, 8.5);
    glVertex2f(76.2, 19.2);
    glVertex2f(72.7, 21.2);
    glVertex2f(67.0, 19.2);

    glEnd();

    glBegin(GL_LINES);
    glColor3ub(15,15,57);
    glVertex2f(72.5f,22.0f);
    glVertex2f(71.5f,8.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(15,15,57);
    glVertex2f(71.8f,21.8f);
    glVertex2f(71.8f,25.0f);
    glEnd();

    //the part contains source code of bench

    float y1=45.5;
    float y2=47.5;
    //colors

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f(46,-70);
    glVertex2f(48,-70);
    glVertex2f(48,-60);
    glVertex2f(46,-60);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f(60,-70);
    glVertex2f(62,-70);
    glVertex2f(62,-60);
    glVertex2f(60,-60);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,102, 0);
    glVertex2f(44,-60);
    glVertex2f(64,-60);
    glVertex2f(64,-58);
    glVertex2f(44,-58);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 102,0);
    glVertex2f(45,-58);
    glVertex2f(63,-58);
    glVertex2f(63,-57);
    glVertex2f(45,-57);


    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51,0);
    glVertex2f(46.5,-57);
    glVertex2f(48,-57);
    glVertex2f(48,-45);
    glVertex2f(46.5,-45);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f(60,-57);
    glVertex2f(61.5,-57);
    glVertex2f(61.5,-45);
    glVertex2f(60,-45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204,102,0);
    for(int i =0; i<3; i++)
    {
        glVertex2f(45.5,-y1);
        glVertex2f(45.5,-y2);
        glVertex2f(62.5,-y2);
        glVertex2f(62.5,-y1);

        y1 += 3;
        y2 += 3;
    }

    glEnd();

    //this part contains source code of tree

      glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-60,-70);
    glVertex2f(-55,-70);
    glVertex2f(-55,-50);
    glVertex2f(-60,-50);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-67,-50);
    glVertex2f(-48,-50);
    glVertex2f(-57.5,-35);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-65,-41);
    glVertex2f(-50,-41);
    glVertex2f(-57.5,-26);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-63,-33);
    glVertex2f(-52,-33);
    glVertex2f(-57.5,-22);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-62,-27);
    glVertex2f(-53,-27);
    glVertex2f(-57.5,-20);
    glEnd();

    // this part contains other obj code
    //grass field
    glBegin(GL_QUADS);
    glColor3ub(0, 255,0);
    glVertex2f(-100,-70);
    glVertex2f(100,-70);
    glVertex2f(100,-100);
    glVertex2f(-100,-100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 26);
    glVertex2f(-100,-80);
    glVertex2f(100,-80);
    glVertex2f(100,-90);
    glVertex2f(-100,-90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 153,0);
    glVertex2f(-100,-90);
    glVertex2f(100,-90);
    glVertex2f(100,-100);
    glVertex2f(-100,-100);
    glEnd();

    glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitWindowSize(1080, 600);    // Set the window's initial width & height
    glutCreateWindow("Five Storey Building"); // Create a window with the given title
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
