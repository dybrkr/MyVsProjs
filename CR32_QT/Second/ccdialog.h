#ifndef CCDIALOG_H
#define CCDIALOG_H

#include <QDialog>

namespace Ui {
class CCDialog;
}

class CCDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CCDialog(QWidget *parent = 0);
    ~CCDialog();

private:
    Ui::CCDialog *ui;
};

#endif // CCDIALOG_H
