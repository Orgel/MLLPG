#include "mllpg.h"
#include "ui_mllpg.h"

MLLPG::MLLPG(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MLLPG)
{
    ui->setupUi(this);
}

MLLPG::~MLLPG()
{
    delete ui;
}

