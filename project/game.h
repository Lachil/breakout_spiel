#ifndef GAME_H
#define GAME_H
#include "ball.h"
#include "paddle.h"
#include "block.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include<QPixmap>
#include<QPushButton>
/**
* @brief Die Game class
* @details Die Game  class ist  für Game"Block und Ball Paddle im Scene zu leigen ",zu erstellen
* @author Lhabib Lachil
* @version 1.0
* @date 26.01.2019
*/


class Game: public QGraphicsView{
public:
    // constructors
    /**
    * @brief Constructor
    * @param parent - null für standardmäßig
    * @details Diese methode ist für  Game zu erstellen
    */
    Game(QWidget* parent=NULL):QGraphicsView(parent){
        // initialize scene
        scene = new QGraphicsScene(0,0,300,600);
        //Foto im Background zuliegen
        QPixmap pim1(":/Fotos/Fotos/Background.jpg");
        scene->setBackgroundBrush(pim1.scaled(300,600,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
        setScene(scene);
        // Mausverfolgung einzustellen
        setMouseTracking(true);
    }

    /**
    *
    * @brief Diese methode ist für  " ball und paddle und blocks zu erstellen
    */
    void start(){
        // Ball Erstellen
        Ball* ball = new Ball();
        ball->setPos(200,500);
        scene->addItem(ball);

        // paddle Erstellen
        Paddle* paddle = new Paddle();
        paddle->setPos(150,575);
        scene->addItem(paddle);
        paddle->grabMouse();

        creatBlockGrid();}
    void createBlockCol(double x){{
            for (size_t i = 0, n = 5; i < n; ++i){
                Block* block = new Block();
                block->setPos(x,i*52); // 2 space b/w blocks (50 height of block)
                scene->addItem(block);
            }
        }};
    void creatBlockGrid(){for (size_t i = 0, n = 7; i < n; ++i){
            createBlockCol(i*52);
        }};

    // public attributes
    QGraphicsScene* scene;

};

#endif // GAME_H
