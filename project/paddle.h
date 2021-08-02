#ifndef PADDLE_H
#define PADDLE_H
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
/**
* @brief Die Ball class
* @details Die Ball  class ist  für Paddle ,zu erstellen
* @author Lhabib Lachil
* @version 1.0
* @date 26.01.2019
*/
class Paddle: public QGraphicsRectItem{
public:
    /**
    * @brief Constructor
    * @param parent - null für standardmäßig
    * @details Diese methode ist für  Paddle zu erstellen
    */
    Paddle(QGraphicsItem* parent=0);
    /**
    * @brief  public methods für getCenterX
    **/

    double getCenterX();


    /**
    * @brief  public methods für events von mouse
    **/

    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
};

#endif // PADDLE_H
