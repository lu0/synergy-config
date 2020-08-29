/********************************************************************************
** Form generated from reading UI file 'FailedLoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAILEDLOGINDIALOG_H
#define UI_FAILEDLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FailedLoginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *messageLabel;

    void setupUi(QDialog *FailedLoginDialog)
    {
        if (FailedLoginDialog->objectName().isEmpty())
            FailedLoginDialog->setObjectName(QString::fromUtf8("FailedLoginDialog"));
        FailedLoginDialog->resize(400, 165);
        buttonBox = new QDialogButtonBox(FailedLoginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 120, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        label_2 = new QLabel(FailedLoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 382, 30));
        label_2->setOpenExternalLinks(true);
        messageLabel = new QLabel(FailedLoginDialog);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setGeometry(QRect(10, 10, 382, 72));
        messageLabel->setWordWrap(true);
        messageLabel->setOpenExternalLinks(true);
        label_2->raise();
        messageLabel->raise();
        buttonBox->raise();

        retranslateUi(FailedLoginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FailedLoginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FailedLoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FailedLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *FailedLoginDialog)
    {
        FailedLoginDialog->setWindowTitle(QApplication::translate("FailedLoginDialog", "Activation Error", nullptr));
        label_2->setText(QApplication::translate("FailedLoginDialog", "<html><head/><body><p><a href=\"https://symless.com/account/reset/?source=gui\"><span style=\" text-decoration: underline; color:#0000ff;\">Forgotten your password?</span></a></p></body></html>", nullptr));
        messageLabel->setText(QApplication::translate("FailedLoginDialog", "An error occurred while trying to activate Synergy. The Symless server returned the following error:\n"
"\n"
"%1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FailedLoginDialog: public Ui_FailedLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAILEDLOGINDIALOG_H
