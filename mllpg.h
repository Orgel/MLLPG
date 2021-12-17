#ifndef MLLPG_H
#define MLLPG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MLLPG; }
QT_END_NAMESPACE

class MLLPG : public QMainWindow
{
    Q_OBJECT

public:
    MLLPG(QWidget *parent = nullptr);
    ~MLLPG();

private:
    Ui::MLLPG *ui;
};
#endif // MLLPG_H
