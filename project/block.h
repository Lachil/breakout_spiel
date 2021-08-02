#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsRectItem>
/**
* @brief Die Block class
* @details Die Ball  class ist  für Block ,zu erstellen
* @author Lhabib Lachil
* @version 1.0
* @date 26.01.2019
*/

class Block: public QGraphicsRectItem{
public:
    /**
    * @brief Constructor
    * @param parent - null für standardmäßig
    * @details Diese methode ist für  Block "Circle oder  Triangle oder Circle zu erstellen"
    */
    // constructors
    Block(QGraphicsItem* parent=0);

};

#endif // BLOCK_H
