#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QDialog>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class Inscription;
}

class Inscription : public QDialog
{
    Q_OBJECT

public:
    explicit Inscription(QWidget *parent = nullptr);
    ~Inscription();

private slots:

    void on_Sinscrire_clicked();

private:
    Ui::Inscription *ui;
    QSqlDatabase database ;
};

#endif // INSCRIPTION_H
