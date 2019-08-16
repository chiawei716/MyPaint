#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include <QMainWindow>
#include <QDebug>
#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>
#include "canvasScene.h"
#include "canvasView.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    // Change the type of the cursor
    void on_MS_eraser_clicked();
    void on_MS_painter_clicked();
    void on_MS_mouse_clicked();

private:
    Ui::MainWindow *ui;
    CanvasView *canvasView;





    // QWidget interface
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *);
//    void mouseReleaseEvent(QGraphicsSceneMouseEvent *);
};

#endif // MAINWINDOW_H
