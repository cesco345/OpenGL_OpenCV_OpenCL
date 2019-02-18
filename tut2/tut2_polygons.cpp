#include <GL/freeglut.h>

void display(void)
{
        //Clear all pixels
        glClear(GL_COLOR_BUFFER_BIT);

        //draw white polygon (rectangle) with corners at
        // (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
        glColor3f(0.0,0.0,1.0);
        /*glBegin(GL_POLYGON);
                glVertex3f(0.05, 0.05, 0.0);
                glVertex3f(0.75, 0.05, 0.0);
                glVertex3f(0.40, 0.40, 0.0);
                glVertex3f(0.05, 0.40, 0.0);*/

        glBegin(GL_POLYGON);
                glVertex3f(0.10, 0.10, 0.0);
                glVertex3f(0.10, 0.70, 0.0);
                glVertex3f(0.70, 0.40, 0.0);
                glVertex3f(0.10, 0.40, 0.0);

        /*glBegin(GL_POLYGON);
                glVertex3f(0.10, 0.10, 0.0);
                glVertex3f(0.70, 0.10, 0.0);
                glVertex3f(0.70, 0.40, 0.0);
                glVertex3f(0.10, 0.40, 0.0);*/


        glEnd();


        // Don't wait start processing buffered OpenGL routines)
        glFlush();
}

void init(void)
{
        //select clearing (background) color
        glClearColor(0.1, 0.1, 0.1, 0.0);

        //initialize viewing values 
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

}



int main(int argc, char** argv)
{
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize(500,500);

        glutInitWindowPosition(600,600);
        glutCreateWindow("Hello YouTube!!");
        init();
        glutDisplayFunc(display);
        glutMainLoop();

        return 0;
}
