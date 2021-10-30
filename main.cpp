#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    gluOrtho2D(0.0,500.0,0.0,350.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5f,1.0f,1.0f);
    glPointSize(4.0);
    glColor3f(1,1,1);
    glRectf(1,11,30,22);

    glColor3f(255,0,0);
    glRectf(1,1,30,8);

    glColor3f(0,0,1);
    glRectf(1,8,30,15);

    //glEnd();
    glFlush();
    glutSwapBuffers();
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(1000,600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Drawing flag(182-15-2225)");

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-5,35,-5,30);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
