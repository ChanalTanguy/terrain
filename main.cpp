#include "mainwindow.h"
#include <QApplication>
#include "gldisplay.h"
#include "mesh.h"
#include "terrain.h"
#include "turbulence.h"

int main(int argc, char *argv[])
{
    // Pour les TP de maillage et modé
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();

    // Pour les TP de modélisation avancé.

    Turbulence T = Turbulence();
    Mesh m = Terrain(Point(-2000.0f,-2000.0f,0.0f),Point(2000.0f,2000.0f,0.0f),T,100,100).toMesh();
    m.toOBJ("C:/Users/toshiba/Desktop/test.obj");

    return 0;
}
