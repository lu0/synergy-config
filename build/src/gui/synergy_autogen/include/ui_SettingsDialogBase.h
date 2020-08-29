/********************************************************************************
** Form generated from reading UI file 'SettingsDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOGBASE_H
#define UI_SETTINGSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialogBase
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *m_pGroupScope;
    QGridLayout *gridLayout_4;
    QRadioButton *m_pRadioSystemScope;
    QRadioButton *m_pRadioUserScope;
    QGroupBox *m_pGroupAdvanced;
    QGridLayout *gridLayout_3;
    QLabel *m_pLabel_19;
    QLineEdit *m_pLineEditScreenName;
    QLabel *m_pLabel_20;
    QSpinBox *m_pSpinBoxPort;
    QLabel *m_pLabel_21;
    QLineEdit *m_pLineEditInterface;
    QLabel *m_pLabel_27;
    QComboBox *m_pComboLanguage;
    QComboBox *m_pComboElevate;
    QLabel *m_pLabelElevate;
    QCheckBox *m_pCheckBoxAutoHide;
    QCheckBox *m_pCheckBoxMinimizeToTray;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *m_pGroupNetwork;
    QGridLayout *gridLayout_6;
    QGridLayout *m_pGridLayoutNetwork;
    QLabel *m_pLabelProUpgrade;
    QLabel *m_pLabelInstallBonjour;
    QCheckBox *m_pCheckBoxAutoConfig;
    QCheckBox *m_pCheckBoxEnableCrypto;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *m_pGroupBoxTLS;
    QGridLayout *gridLayout;
    QLineEdit *m_pLineEditCertificatePath;
    QLabel *m_pLabel_29;
    QLabel *m_pLabel_30;
    QPushButton *m_pPushButtonBrowseCert;
    QComboBox *m_pComboBoxKeyLength;
    QPushButton *m_pPushButtonRegenCert;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *m_pGroupLog;
    QGridLayout *gridLayout_2;
    QLabel *m_pLabel_3;
    QComboBox *m_pComboLogLevel;
    QCheckBox *m_pCheckBoxLogToFile;
    QLineEdit *m_pLineEditLogFilename;
    QPushButton *m_pButtonBrowseLog;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialogBase)
    {
        if (SettingsDialogBase->objectName().isEmpty())
            SettingsDialogBase->setObjectName(QString::fromUtf8("SettingsDialogBase"));
        SettingsDialogBase->resize(378, 756);
        gridLayout_5 = new QGridLayout(SettingsDialogBase);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        m_pGroupScope = new QGroupBox(SettingsDialogBase);
        m_pGroupScope->setObjectName(QString::fromUtf8("m_pGroupScope"));
        gridLayout_4 = new QGridLayout(m_pGroupScope);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        m_pRadioSystemScope = new QRadioButton(m_pGroupScope);
        m_pRadioSystemScope->setObjectName(QString::fromUtf8("m_pRadioSystemScope"));
        m_pRadioSystemScope->setChecked(true);

        gridLayout_4->addWidget(m_pRadioSystemScope, 1, 0, 1, 1);

        m_pRadioUserScope = new QRadioButton(m_pGroupScope);
        m_pRadioUserScope->setObjectName(QString::fromUtf8("m_pRadioUserScope"));

        gridLayout_4->addWidget(m_pRadioUserScope, 1, 1, 1, 1);


        gridLayout_5->addWidget(m_pGroupScope, 0, 0, 1, 1);

        m_pGroupAdvanced = new QGroupBox(SettingsDialogBase);
        m_pGroupAdvanced->setObjectName(QString::fromUtf8("m_pGroupAdvanced"));
        gridLayout_3 = new QGridLayout(m_pGroupAdvanced);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        m_pLabel_19 = new QLabel(m_pGroupAdvanced);
        m_pLabel_19->setObjectName(QString::fromUtf8("m_pLabel_19"));
        m_pLabel_19->setMinimumSize(QSize(75, 0));

        gridLayout_3->addWidget(m_pLabel_19, 1, 0, 1, 1);

        m_pLineEditScreenName = new QLineEdit(m_pGroupAdvanced);
        m_pLineEditScreenName->setObjectName(QString::fromUtf8("m_pLineEditScreenName"));
        m_pLineEditScreenName->setEnabled(true);

        gridLayout_3->addWidget(m_pLineEditScreenName, 1, 1, 1, 1);

        m_pLabel_20 = new QLabel(m_pGroupAdvanced);
        m_pLabel_20->setObjectName(QString::fromUtf8("m_pLabel_20"));

        gridLayout_3->addWidget(m_pLabel_20, 2, 0, 1, 1);

        m_pSpinBoxPort = new QSpinBox(m_pGroupAdvanced);
        m_pSpinBoxPort->setObjectName(QString::fromUtf8("m_pSpinBoxPort"));
        m_pSpinBoxPort->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_pSpinBoxPort->sizePolicy().hasHeightForWidth());
        m_pSpinBoxPort->setSizePolicy(sizePolicy);
        m_pSpinBoxPort->setMaximum(65535);
        m_pSpinBoxPort->setValue(24800);

        gridLayout_3->addWidget(m_pSpinBoxPort, 2, 1, 1, 1);

        m_pLabel_21 = new QLabel(m_pGroupAdvanced);
        m_pLabel_21->setObjectName(QString::fromUtf8("m_pLabel_21"));

        gridLayout_3->addWidget(m_pLabel_21, 3, 0, 1, 1);

        m_pLineEditInterface = new QLineEdit(m_pGroupAdvanced);
        m_pLineEditInterface->setObjectName(QString::fromUtf8("m_pLineEditInterface"));
        m_pLineEditInterface->setEnabled(true);

        gridLayout_3->addWidget(m_pLineEditInterface, 3, 1, 1, 1);

        m_pLabel_27 = new QLabel(m_pGroupAdvanced);
        m_pLabel_27->setObjectName(QString::fromUtf8("m_pLabel_27"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pLabel_27->sizePolicy().hasHeightForWidth());
        m_pLabel_27->setSizePolicy(sizePolicy1);
        m_pLabel_27->setMinimumSize(QSize(75, 0));

        gridLayout_3->addWidget(m_pLabel_27, 0, 0, 1, 1);

        m_pComboLanguage = new QComboBox(m_pGroupAdvanced);
        m_pComboLanguage->setObjectName(QString::fromUtf8("m_pComboLanguage"));

        gridLayout_3->addWidget(m_pComboLanguage, 0, 1, 1, 1);

        m_pComboElevate = new QComboBox(m_pGroupAdvanced);
        m_pComboElevate->addItem(QString());
        m_pComboElevate->addItem(QString());
        m_pComboElevate->addItem(QString());
        m_pComboElevate->setObjectName(QString::fromUtf8("m_pComboElevate"));

        gridLayout_3->addWidget(m_pComboElevate, 4, 1, 1, 1);

        m_pLabelElevate = new QLabel(m_pGroupAdvanced);
        m_pLabelElevate->setObjectName(QString::fromUtf8("m_pLabelElevate"));

        gridLayout_3->addWidget(m_pLabelElevate, 4, 0, 1, 1);

        m_pCheckBoxAutoHide = new QCheckBox(m_pGroupAdvanced);
        m_pCheckBoxAutoHide->setObjectName(QString::fromUtf8("m_pCheckBoxAutoHide"));

        gridLayout_3->addWidget(m_pCheckBoxAutoHide, 6, 0, 1, 1);

        m_pCheckBoxMinimizeToTray = new QCheckBox(m_pGroupAdvanced);
        m_pCheckBoxMinimizeToTray->setObjectName(QString::fromUtf8("m_pCheckBoxMinimizeToTray"));

        gridLayout_3->addWidget(m_pCheckBoxMinimizeToTray, 7, 0, 1, 1);


        gridLayout_5->addWidget(m_pGroupAdvanced, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_2, 2, 0, 1, 1);

        m_pGroupNetwork = new QGroupBox(SettingsDialogBase);
        m_pGroupNetwork->setObjectName(QString::fromUtf8("m_pGroupNetwork"));
        m_pGroupNetwork->setEnabled(true);
        sizePolicy1.setHeightForWidth(m_pGroupNetwork->sizePolicy().hasHeightForWidth());
        m_pGroupNetwork->setSizePolicy(sizePolicy1);
        gridLayout_6 = new QGridLayout(m_pGroupNetwork);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(2, 12, 2, 12);
        m_pGridLayoutNetwork = new QGridLayout();
        m_pGridLayoutNetwork->setObjectName(QString::fromUtf8("m_pGridLayoutNetwork"));
        m_pGridLayoutNetwork->setVerticalSpacing(12);
        m_pGridLayoutNetwork->setContentsMargins(0, -1, -1, -1);
        m_pLabelProUpgrade = new QLabel(m_pGroupNetwork);
        m_pLabelProUpgrade->setObjectName(QString::fromUtf8("m_pLabelProUpgrade"));
        m_pLabelProUpgrade->setTextFormat(Qt::RichText);
        m_pLabelProUpgrade->setOpenExternalLinks(true);

        m_pGridLayoutNetwork->addWidget(m_pLabelProUpgrade, 1, 1, 1, 1);

        m_pLabelInstallBonjour = new QLabel(m_pGroupNetwork);
        m_pLabelInstallBonjour->setObjectName(QString::fromUtf8("m_pLabelInstallBonjour"));
        m_pLabelInstallBonjour->setTextFormat(Qt::RichText);

        m_pGridLayoutNetwork->addWidget(m_pLabelInstallBonjour, 0, 1, 1, 1);

        m_pCheckBoxAutoConfig = new QCheckBox(m_pGroupNetwork);
        m_pCheckBoxAutoConfig->setObjectName(QString::fromUtf8("m_pCheckBoxAutoConfig"));
        m_pCheckBoxAutoConfig->setEnabled(false);

        m_pGridLayoutNetwork->addWidget(m_pCheckBoxAutoConfig, 0, 0, 1, 1);

        m_pCheckBoxEnableCrypto = new QCheckBox(m_pGroupNetwork);
        m_pCheckBoxEnableCrypto->setObjectName(QString::fromUtf8("m_pCheckBoxEnableCrypto"));
        m_pCheckBoxEnableCrypto->setEnabled(false);

        m_pGridLayoutNetwork->addWidget(m_pCheckBoxEnableCrypto, 1, 0, 1, 1);


        gridLayout_6->addLayout(m_pGridLayoutNetwork, 0, 0, 1, 1);


        gridLayout_5->addWidget(m_pGroupNetwork, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_3, 4, 0, 1, 1);

        m_pGroupBoxTLS = new QGroupBox(SettingsDialogBase);
        m_pGroupBoxTLS->setObjectName(QString::fromUtf8("m_pGroupBoxTLS"));
        gridLayout = new QGridLayout(m_pGroupBoxTLS);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pLineEditCertificatePath = new QLineEdit(m_pGroupBoxTLS);
        m_pLineEditCertificatePath->setObjectName(QString::fromUtf8("m_pLineEditCertificatePath"));

        gridLayout->addWidget(m_pLineEditCertificatePath, 1, 1, 1, 1);

        m_pLabel_29 = new QLabel(m_pGroupBoxTLS);
        m_pLabel_29->setObjectName(QString::fromUtf8("m_pLabel_29"));

        gridLayout->addWidget(m_pLabel_29, 0, 0, 1, 1);

        m_pLabel_30 = new QLabel(m_pGroupBoxTLS);
        m_pLabel_30->setObjectName(QString::fromUtf8("m_pLabel_30"));

        gridLayout->addWidget(m_pLabel_30, 1, 0, 1, 1);

        m_pPushButtonBrowseCert = new QPushButton(m_pGroupBoxTLS);
        m_pPushButtonBrowseCert->setObjectName(QString::fromUtf8("m_pPushButtonBrowseCert"));

        gridLayout->addWidget(m_pPushButtonBrowseCert, 1, 2, 1, 1);

        m_pComboBoxKeyLength = new QComboBox(m_pGroupBoxTLS);
        m_pComboBoxKeyLength->addItem(QString());
        m_pComboBoxKeyLength->addItem(QString());
        m_pComboBoxKeyLength->addItem(QString());
        m_pComboBoxKeyLength->setObjectName(QString::fromUtf8("m_pComboBoxKeyLength"));

        gridLayout->addWidget(m_pComboBoxKeyLength, 0, 1, 1, 2);

        m_pPushButtonRegenCert = new QPushButton(m_pGroupBoxTLS);
        m_pPushButtonRegenCert->setObjectName(QString::fromUtf8("m_pPushButtonRegenCert"));

        gridLayout->addWidget(m_pPushButtonRegenCert, 2, 1, 1, 1);


        gridLayout_5->addWidget(m_pGroupBoxTLS, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_4, 6, 0, 1, 1);

        m_pGroupLog = new QGroupBox(SettingsDialogBase);
        m_pGroupLog->setObjectName(QString::fromUtf8("m_pGroupLog"));
        sizePolicy1.setHeightForWidth(m_pGroupLog->sizePolicy().hasHeightForWidth());
        m_pGroupLog->setSizePolicy(sizePolicy1);
        m_pGroupLog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_pGroupLog->setFlat(false);
        gridLayout_2 = new QGridLayout(m_pGroupLog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_pLabel_3 = new QLabel(m_pGroupLog);
        m_pLabel_3->setObjectName(QString::fromUtf8("m_pLabel_3"));
        m_pLabel_3->setMinimumSize(QSize(75, 0));

        gridLayout_2->addWidget(m_pLabel_3, 0, 0, 1, 1);

        m_pComboLogLevel = new QComboBox(m_pGroupLog);
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->addItem(QString());
        m_pComboLogLevel->setObjectName(QString::fromUtf8("m_pComboLogLevel"));

        gridLayout_2->addWidget(m_pComboLogLevel, 0, 1, 1, 2);

        m_pCheckBoxLogToFile = new QCheckBox(m_pGroupLog);
        m_pCheckBoxLogToFile->setObjectName(QString::fromUtf8("m_pCheckBoxLogToFile"));

        gridLayout_2->addWidget(m_pCheckBoxLogToFile, 1, 0, 1, 1);

        m_pLineEditLogFilename = new QLineEdit(m_pGroupLog);
        m_pLineEditLogFilename->setObjectName(QString::fromUtf8("m_pLineEditLogFilename"));
        m_pLineEditLogFilename->setEnabled(false);

        gridLayout_2->addWidget(m_pLineEditLogFilename, 1, 1, 1, 1);

        m_pButtonBrowseLog = new QPushButton(m_pGroupLog);
        m_pButtonBrowseLog->setObjectName(QString::fromUtf8("m_pButtonBrowseLog"));
        m_pButtonBrowseLog->setEnabled(false);

        gridLayout_2->addWidget(m_pButtonBrowseLog, 1, 2, 1, 1);


        gridLayout_5->addWidget(m_pGroupLog, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_5->addItem(verticalSpacer, 8, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SettingsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_5->addWidget(buttonBox, 9, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        m_pLabel_19->setBuddy(m_pLineEditScreenName);
        m_pLabel_20->setBuddy(m_pSpinBoxPort);
        m_pLabel_21->setBuddy(m_pLineEditInterface);
        m_pLabel_27->setBuddy(m_pComboLanguage);
        m_pLabel_3->setBuddy(m_pComboLogLevel);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_pRadioSystemScope, m_pRadioUserScope);
        QWidget::setTabOrder(m_pRadioUserScope, m_pComboLanguage);
        QWidget::setTabOrder(m_pComboLanguage, m_pLineEditScreenName);
        QWidget::setTabOrder(m_pLineEditScreenName, m_pSpinBoxPort);
        QWidget::setTabOrder(m_pSpinBoxPort, m_pLineEditInterface);
        QWidget::setTabOrder(m_pLineEditInterface, m_pComboElevate);
        QWidget::setTabOrder(m_pComboElevate, m_pCheckBoxAutoHide);
        QWidget::setTabOrder(m_pCheckBoxAutoHide, m_pCheckBoxMinimizeToTray);
        QWidget::setTabOrder(m_pCheckBoxMinimizeToTray, m_pCheckBoxAutoConfig);
        QWidget::setTabOrder(m_pCheckBoxAutoConfig, m_pCheckBoxEnableCrypto);
        QWidget::setTabOrder(m_pCheckBoxEnableCrypto, m_pComboBoxKeyLength);
        QWidget::setTabOrder(m_pComboBoxKeyLength, m_pLineEditCertificatePath);
        QWidget::setTabOrder(m_pLineEditCertificatePath, m_pPushButtonBrowseCert);
        QWidget::setTabOrder(m_pPushButtonBrowseCert, m_pPushButtonRegenCert);
        QWidget::setTabOrder(m_pPushButtonRegenCert, m_pComboLogLevel);
        QWidget::setTabOrder(m_pComboLogLevel, m_pCheckBoxLogToFile);
        QWidget::setTabOrder(m_pCheckBoxLogToFile, m_pLineEditLogFilename);
        QWidget::setTabOrder(m_pLineEditLogFilename, m_pButtonBrowseLog);

        retranslateUi(SettingsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialogBase, SLOT(reject()));
        QObject::connect(m_pCheckBoxEnableCrypto, SIGNAL(toggled(bool)), m_pGroupBoxTLS, SLOT(setVisible(bool)));

        m_pComboElevate->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialogBase)
    {
        SettingsDialogBase->setWindowTitle(QApplication::translate("SettingsDialogBase", "Settings", nullptr));
        m_pGroupScope->setTitle(QApplication::translate("SettingsDialogBase", "&Settings Scope", nullptr));
        m_pRadioSystemScope->setText(QApplication::translate("SettingsDialogBase", "System", nullptr));
        m_pRadioUserScope->setText(QApplication::translate("SettingsDialogBase", "User", nullptr));
        m_pGroupAdvanced->setTitle(QApplication::translate("SettingsDialogBase", "&Miscellaneous", nullptr));
        m_pLabel_19->setText(QApplication::translate("SettingsDialogBase", "Sc&reen name:", nullptr));
        m_pLabel_20->setText(QApplication::translate("SettingsDialogBase", "P&ort:", nullptr));
        m_pLabel_21->setText(QApplication::translate("SettingsDialogBase", "&Interface:", nullptr));
        m_pLabel_27->setText(QApplication::translate("SettingsDialogBase", "&Language:", nullptr));
        m_pComboElevate->setItemText(0, QApplication::translate("SettingsDialogBase", "As Needed", nullptr));
        m_pComboElevate->setItemText(1, QApplication::translate("SettingsDialogBase", "Always", nullptr));
        m_pComboElevate->setItemText(2, QApplication::translate("SettingsDialogBase", "Never", nullptr));

#ifndef QT_NO_TOOLTIP
        m_pComboElevate->setToolTip(QApplication::translate("SettingsDialogBase", "Specify when the Synergy service should run at an elevated privilege level", nullptr));
#endif // QT_NO_TOOLTIP
        m_pLabelElevate->setText(QApplication::translate("SettingsDialogBase", "Elevate", nullptr));
        m_pCheckBoxAutoHide->setText(QApplication::translate("SettingsDialogBase", "&Hide on startup", nullptr));
        m_pCheckBoxMinimizeToTray->setText(QApplication::translate("SettingsDialogBase", "Minimize to System &Tray", nullptr));
        m_pGroupNetwork->setTitle(QApplication::translate("SettingsDialogBase", "&Network", nullptr));
        m_pLabelProUpgrade->setText(QApplication::translate("SettingsDialogBase", "<html><head/><body><p><a href=\"https://symless.com/account?source=gui&amp;intent=upgrade\"><span style=\" text-decoration: underline; color:#007af4;\">Upgrade to Pro</span></a></p></body></html>", nullptr));
        m_pLabelInstallBonjour->setText(QApplication::translate("SettingsDialogBase", "<html><head/><body><p><a href=\"#\"><span style=\" text-decoration: underline; color:#007af4;\">Install Bonjour</span></a></p></body></html>", nullptr));
        m_pCheckBoxAutoConfig->setText(QApplication::translate("SettingsDialogBase", "Enable Auto Config", nullptr));
        m_pCheckBoxEnableCrypto->setText(QApplication::translate("SettingsDialogBase", "Enable &TLS Encryption", nullptr));
        m_pGroupBoxTLS->setTitle(QApplication::translate("SettingsDialogBase", "TLS/SSL Settings", nullptr));
        m_pLabel_29->setText(QApplication::translate("SettingsDialogBase", "Key length", nullptr));
        m_pLabel_30->setText(QApplication::translate("SettingsDialogBase", "Certificate Path", nullptr));
        m_pPushButtonBrowseCert->setText(QApplication::translate("SettingsDialogBase", "Browse", nullptr));
        m_pComboBoxKeyLength->setItemText(0, QApplication::translate("SettingsDialogBase", "1024", nullptr));
        m_pComboBoxKeyLength->setItemText(1, QApplication::translate("SettingsDialogBase", "2048", nullptr));
        m_pComboBoxKeyLength->setItemText(2, QApplication::translate("SettingsDialogBase", "4096", nullptr));

        m_pComboBoxKeyLength->setCurrentText(QApplication::translate("SettingsDialogBase", "2048", nullptr));
        m_pPushButtonRegenCert->setText(QApplication::translate("SettingsDialogBase", "Regenerate Cert", nullptr));
        m_pGroupLog->setTitle(QApplication::translate("SettingsDialogBase", "Logging", nullptr));
        m_pLabel_3->setText(QApplication::translate("SettingsDialogBase", "&Logging level:", nullptr));
        m_pComboLogLevel->setItemText(0, QApplication::translate("SettingsDialogBase", "Info", nullptr));
        m_pComboLogLevel->setItemText(1, QApplication::translate("SettingsDialogBase", "Debug", nullptr));
        m_pComboLogLevel->setItemText(2, QApplication::translate("SettingsDialogBase", "Debug1", nullptr));
        m_pComboLogLevel->setItemText(3, QApplication::translate("SettingsDialogBase", "Debug2", nullptr));

        m_pCheckBoxLogToFile->setText(QApplication::translate("SettingsDialogBase", "Log to file:", nullptr));
        m_pButtonBrowseLog->setText(QApplication::translate("SettingsDialogBase", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialogBase: public Ui_SettingsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOGBASE_H
