#include "block.h"
#include <QBrush>
int i=1;

Block::Block(QGraphicsItem *parent): QGraphicsRectItem(parent){


    if(i<=5 || i==6 || i==10 || i==11 || i==15 || i==16 || i==20|| i==21 || i==25
            || i==26 || i==30|| i==31 || i>=32)
    {
        if(i%2==0){
        setRect(0,0,50,50);
    QBrush brush;
    // zeichne Square
    brush.setTexture((QPixmap(":/Fotos/Fotos/Square.png"))
    .scaled(50,50,Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    setBrush(brush);
    i++;
        }else{
            setRect(0,0,50,50);
        QBrush brush;
        // zeichne Circle
        brush.setTexture((QPixmap(":/Fotos/Fotos/Kreis.png"))
        .scaled(50,50,Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
        setBrush(brush);
        i++;

        }
    }
    else if( i==9 || i==13 || i==14 || i==17 || i==19 || i==23|| i==24 || i==29
            || i==26 || i==30|| i==31 || i>=32)
    {
    setRect(0,0,50,50);
    QBrush brush;
    // zeichne triangle
    brush.setTexture((QPixmap(":/Fotos/Fotos/Dreieck.png"))
    .scaled(50,50,Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    setBrush(brush);
    i++;
    }
    else if(i==18) {
         setRect(0,0,50,50);
          // zeichne crown
         QBrush brush;
         brush.setTexture((QPixmap(":/Fotos/Fotos/crown.png"))
         .scaled(50,50,Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
        setBrush(brush);
        i++;
    }
    else if(i>37){
    i=0;
    }else {i++;}

}
