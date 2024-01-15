#include "bankmangement.h"
#include "ui_bankmangement.h"

bankMangement::bankMangement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bankMangement)
{
    ui->setupUi(this);
}

bankMangement::~bankMangement()
{
    delete ui;
}
