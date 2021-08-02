#include "paddle.h"
#include <QBrush>

Paddle::Paddle(QGraphicsItem *parent){
    // draw rect
    setRect(0,0,100,15);
    QBrush brush;
    brush.setTexture((QPixmap(":/Fotos/Fotos/Padlle.png"))
    .scaled(100,15,Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    setBrush(brush);
}

double Paddle::getCenterX(){
    return x()+rect().width()/2;
}

void Paddle::mouseMoveEvent(QGraphicsSceneMouseEvent *event){
    // follow mouse's x pos
    double mouseX = mapToScene(event->pos()).x();
    setPos(mouseX,y());
}
