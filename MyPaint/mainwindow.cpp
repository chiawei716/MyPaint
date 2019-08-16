#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    canvasView = new CanvasView();
    ui->Canvas->addWidget(canvasView);

    canvasView->setInteractive(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


// *** Mouse Status ***

// Change the mouse status to ERASER
void MainWindow::on_MS_eraser_clicked()
{
    canvasView->setEraser();
    ui->MStatus->setText("Eraser");
}

// Change the mouse status to PAINTER
void MainWindow::on_MS_painter_clicked()
{
    canvasView->setPainter();
    ui->MStatus->setText("Painter");
}

// Change the mouse status to MOUSEㄋ
void MainWindow::on_MS_mouse_clicked()
{
    canvasView->setMouse();
    ui->MStatus->setText("Mouse");
}

