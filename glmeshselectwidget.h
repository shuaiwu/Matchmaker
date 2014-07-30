#ifndef GLMESHSELECTWIDGET_H
#define GLMESHSELECTWIDGET_H

#include <QGLWidget>

class glMeshSelectWidget: public QGLWidget

{
    struct vertex
    {
        float x;
        float y;
        float z;
    };

    struct triangle
    {
        vertex vertexA;
        vertex vertexB;
        vertex vertexC;
    };

public:
    glMeshSelectWidget();
    ~glMeshSelectWidget();

protected:
    void initializeGL(); //called once before drawing happens
    void paintGL(); //called during draw call back
    void resizeGL(int width, int height); //called when widget size changes
    void mousePressEvent(QMouseEvent *event); //when mouse is pressed inside the area

    triangle testShape;
};

#endif // GLMESHSELECTWIDGET_H
