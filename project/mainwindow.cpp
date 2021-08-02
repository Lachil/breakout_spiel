#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include"game.h"
#include<QPushButton>
Game* game=NULL;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    //Foto im Background liegen
    QPixmap bkgnd(":/Fotos/Fotos/Background.jpg");
       bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
       QPalette palette;
       palette.setBrush(QPalette::Background, bkgnd);
       this->setPalette(palette);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{   //Game Start
    game = new Game();
        game->show();
        game->start();

        ui->pushButton->setText("Replay");
        //ui->label->setText("Breakout-Spiel Level 2");

}



void MainWindow::on_pushButton_2_clicked()
{
     game->close();
}
