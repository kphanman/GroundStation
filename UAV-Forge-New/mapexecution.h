#ifndef MAPEXECUTION_H
#define MAPEXECUTION_H

#include <QWidget>

namespace Ui {
class mapexecution;
}

class mapexecution : public QWidget
{
    Q_OBJECT

public:
    explicit mapexecution(QWidget *parent = 0);
    ~mapexecution();

private:
    Ui::mapexecution *ui;
};

#endif // MAPEXECUTION_H