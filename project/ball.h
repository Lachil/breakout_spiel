#ifndef BALL_H
#define BALL_H

#include <QGraphicsRectItem>
/**
* @brief Die Ball class
* @details Die Ball  class ist  für Ball ,zu erstellen
* @author Lhabib Lachil
* @version 1.0
* @date 26.01.2019
*/

class Ball: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    /**
    * @brief Constructor
    * @param parent - null für standardmäßig
    */
    Ball(QGraphicsItem* parent=0);

    // public methods
    double getCenterX();

public slots:
    // public slots
    void move();

private:
    /**
    * @brief Hält den aktuellen Position für Ball
    *
    */
    // private attributes
    double xVelocity;
    double yVelocity;
    /**
    * @brief diese Methods halten den aktuellen Position für Ball
    *@details Die ausgewählte methods, aktuellen Position werden in diesem Objekt gespeichert
    */
    // private methods
    void reverseVelocityIfOutOfBounds();
    void handlePaddleCollision();
    void handleBlockCollision();
};

#endif // BALL_H
