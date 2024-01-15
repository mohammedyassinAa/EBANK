#ifndef BANKMANGEMENT_H
#define BANKMANGEMENT_H

#include <QDialog>

namespace Ui {
class bankMangement;
}

class bankMangement : public QDialog
{
    Q_OBJECT

public:
    explicit bankMangement(QWidget *parent = nullptr);
    ~bankMangement();

private:
    Ui::bankMangement *ui;
};

#endif // BANKMANGEMENT_H
