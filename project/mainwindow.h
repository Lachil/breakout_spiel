#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsView>
/**
* @brief Die MainWindow Klass
* @details Die MainWindow-Klasse ist der Stamm / Container für alle Widgets. <br>
* Es enthält die Benutzeroberfläche. <br>
* Darüber hinaus bietet es sofort einsatzbereite Fensterverhalten und -design.
* @author Lhabib Lachil
* @version 1.0
* @date 2019.01.2019 */

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    /**
    * @brief Constructor
    * @param parent - null by default, could be another (window-)widget*/

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();





private slots: /**
    * @brief Diese Methode für Button Play*/
    void on_pushButton_clicked();
    /**
        * @brief Diese Methode für Button Exit*/

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
