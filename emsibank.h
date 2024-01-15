#ifndef EMSIBANK_H
#define EMSIBANK_H

#include <QMainWindow>
#include "inscription.h"
#include "bankmangement.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class EMSIBank;
}
QT_END_NAMESPACE

class EMSIBank : public QMainWindow
{
    Q_OBJECT

public:
    EMSIBank(QWidget *parent = nullptr);
    ~EMSIBank();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

private:
    Ui::EMSIBank *ui;
    Inscription *ptrInscription;
    bankMangement *ptrBankmangement;

};
#endif // EMSIBANK_H
