/********************************************************************************
** Form generated from reading UI file 'MainWindowBase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWBASE_H
#define UI_MAINWINDOWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowBase
{
public:
    QAction *m_pActionAbout;
    QAction *m_pActionHelp;
    QAction *m_pActionQuit;
    QAction *m_pActionStartSynergy;
    QAction *m_pActionStopSynergy;
    QAction *actionShowStatus;
    QAction *m_pActionMinimize;
    QAction *m_pActionRestore;
    QAction *m_pActionSave;
    QAction *m_pActionSettings;
    QAction *m_pActivate;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *m_trialWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *m_trialLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *m_pWidgetUpdate;
    QHBoxLayout *horizontalLayout_2;
    QLabel *m_pIconUpdate;
    QLabel *m_pLabelUpdate;
    QSpacerItem *m_pSpacerUpdate;
    QWidget *m_pWidgetAutoConfig;
    QHBoxLayout *horizontalLayout_6;
    QLabel *m_pIconAutoConfig;
    QLabel *m_pLabelAutoConfig;
    QSpacerItem *m_pSpacerAutoConfig;
    QGroupBox *m_pGroupServer;
    QVBoxLayout *vboxLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *m_pLabelIpAddresses;
    QHBoxLayout *horizontalLayout_3;
    QLabel *m_pLabelFingerprint;
    QLabel *m_pLabelLocalFingerprint;
    QRadioButton *m_pRadioInternalConfig;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *m_pButtonConfigureServer;
    QSpacerItem *spacerItem;
    QRadioButton *m_pRadioExternalConfig;
    QHBoxLayout *hboxLayout;
    QLabel *m_pLabelConfigurationFile;
    QLineEdit *m_pLineEditConfigFile;
    QPushButton *m_pButtonBrowseConfigFile;
    QGroupBox *m_pGroupClient;
    QFormLayout *formLayout_3;
    QLabel *m_pLabelComputerName;
    QLabel *m_pLabelScreenName;
    QLabel *m_pLabelServerName;
    QLineEdit *m_pLineEditHostname;
    QComboBox *m_pComboServerList;
    QLabel *m_pLabelAutoDetected;
    QGroupBox *m_pGroupLog;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *m_pLogOutput;
    QHBoxLayout *horizontalLayout;
    QLabel *m_pLabelPadlock;
    QLabel *m_pStatusLabel;
    QSpacerItem *spacer;
    QPushButton *m_pButtonApply;
    QPushButton *m_pButtonToggleStart;

    void setupUi(QMainWindow *MainWindowBase)
    {
        if (MainWindowBase->objectName().isEmpty())
            MainWindowBase->setObjectName(QString::fromUtf8("MainWindowBase"));
        MainWindowBase->resize(600, 550);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowBase->sizePolicy().hasHeightForWidth());
        MainWindowBase->setSizePolicy(sizePolicy);
        MainWindowBase->setMinimumSize(QSize(600, 0));
        m_pActionAbout = new QAction(MainWindowBase);
        m_pActionAbout->setObjectName(QString::fromUtf8("m_pActionAbout"));
#ifndef QT_NO_SHORTCUT
        m_pActionAbout->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        m_pActionHelp = new QAction(MainWindowBase);
        m_pActionHelp->setObjectName(QString::fromUtf8("m_pActionHelp"));
#ifndef QT_NO_SHORTCUT
        m_pActionHelp->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        m_pActionQuit = new QAction(MainWindowBase);
        m_pActionQuit->setObjectName(QString::fromUtf8("m_pActionQuit"));
#ifndef QT_NO_SHORTCUT
        m_pActionQuit->setShortcut(QString::fromUtf8("Ctrl+Q"));
#endif // QT_NO_SHORTCUT
        m_pActionStartSynergy = new QAction(MainWindowBase);
        m_pActionStartSynergy->setObjectName(QString::fromUtf8("m_pActionStartSynergy"));
#ifndef QT_NO_SHORTCUT
        m_pActionStartSynergy->setShortcut(QString::fromUtf8("Ctrl+S"));
#endif // QT_NO_SHORTCUT
        m_pActionStopSynergy = new QAction(MainWindowBase);
        m_pActionStopSynergy->setObjectName(QString::fromUtf8("m_pActionStopSynergy"));
        m_pActionStopSynergy->setEnabled(false);
#ifndef QT_NO_SHORTCUT
        m_pActionStopSynergy->setShortcut(QString::fromUtf8("Ctrl+T"));
#endif // QT_NO_SHORTCUT
        actionShowStatus = new QAction(MainWindowBase);
        actionShowStatus->setObjectName(QString::fromUtf8("actionShowStatus"));
#ifndef QT_NO_SHORTCUT
        actionShowStatus->setShortcut(QString::fromUtf8("Ctrl+H"));
#endif // QT_NO_SHORTCUT
        m_pActionMinimize = new QAction(MainWindowBase);
        m_pActionMinimize->setObjectName(QString::fromUtf8("m_pActionMinimize"));
#ifndef QT_NO_SHORTCUT
        m_pActionMinimize->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        m_pActionRestore = new QAction(MainWindowBase);
        m_pActionRestore->setObjectName(QString::fromUtf8("m_pActionRestore"));
#ifndef QT_NO_SHORTCUT
        m_pActionRestore->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        m_pActionSave = new QAction(MainWindowBase);
        m_pActionSave->setObjectName(QString::fromUtf8("m_pActionSave"));
#ifndef QT_NO_SHORTCUT
        m_pActionSave->setShortcut(QString::fromUtf8("Ctrl+Alt+S"));
#endif // QT_NO_SHORTCUT
        m_pActionSettings = new QAction(MainWindowBase);
        m_pActionSettings->setObjectName(QString::fromUtf8("m_pActionSettings"));
#ifndef QT_NO_SHORTCUT
        m_pActionSettings->setShortcut(QString::fromUtf8(""));
#endif // QT_NO_SHORTCUT
        m_pActivate = new QAction(MainWindowBase);
        m_pActivate->setObjectName(QString::fromUtf8("m_pActivate"));
        centralwidget = new QWidget(MainWindowBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_trialWidget = new QWidget(centralwidget);
        m_trialWidget->setObjectName(QString::fromUtf8("m_trialWidget"));
        horizontalLayout_5 = new QHBoxLayout(m_trialWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 0, 0, 8);
        label_3 = new QLabel(m_trialWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/16x16/warning.png")));

        horizontalLayout_5->addWidget(label_3);

        m_trialLabel = new QLabel(m_trialWidget);
        m_trialLabel->setObjectName(QString::fromUtf8("m_trialLabel"));
        m_trialLabel->setOpenExternalLinks(true);

        horizontalLayout_5->addWidget(m_trialLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(m_trialWidget);

        m_pWidgetUpdate = new QWidget(centralwidget);
        m_pWidgetUpdate->setObjectName(QString::fromUtf8("m_pWidgetUpdate"));
        horizontalLayout_2 = new QHBoxLayout(m_pWidgetUpdate);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 0, 0, 8);
        m_pIconUpdate = new QLabel(m_pWidgetUpdate);
        m_pIconUpdate->setObjectName(QString::fromUtf8("m_pIconUpdate"));
        m_pIconUpdate->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/16x16/warning.png")));

        horizontalLayout_2->addWidget(m_pIconUpdate);

        m_pLabelUpdate = new QLabel(m_pWidgetUpdate);
        m_pLabelUpdate->setObjectName(QString::fromUtf8("m_pLabelUpdate"));
        m_pLabelUpdate->setText(QString::fromUtf8("m_pLabelUpdate"));
        m_pLabelUpdate->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(m_pLabelUpdate);

        m_pSpacerUpdate = new QSpacerItem(469, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(m_pSpacerUpdate);


        verticalLayout_2->addWidget(m_pWidgetUpdate);

        m_pWidgetAutoConfig = new QWidget(centralwidget);
        m_pWidgetAutoConfig->setObjectName(QString::fromUtf8("m_pWidgetAutoConfig"));
        m_pWidgetAutoConfig->setMinimumSize(QSize(0, 28));
        horizontalLayout_6 = new QHBoxLayout(m_pWidgetAutoConfig);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(2, 0, 0, 8);
        m_pIconAutoConfig = new QLabel(m_pWidgetAutoConfig);
        m_pIconAutoConfig->setObjectName(QString::fromUtf8("m_pIconAutoConfig"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pIconAutoConfig->sizePolicy().hasHeightForWidth());
        m_pIconAutoConfig->setSizePolicy(sizePolicy1);
        m_pIconAutoConfig->setMinimumSize(QSize(16, 20));
        m_pIconAutoConfig->setMaximumSize(QSize(244, 16777215));
        m_pIconAutoConfig->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/16x16/auto-config.png")));

        horizontalLayout_6->addWidget(m_pIconAutoConfig);

        m_pLabelAutoConfig = new QLabel(m_pWidgetAutoConfig);
        m_pLabelAutoConfig->setObjectName(QString::fromUtf8("m_pLabelAutoConfig"));
        m_pLabelAutoConfig->setTextFormat(Qt::RichText);

        horizontalLayout_6->addWidget(m_pLabelAutoConfig);

        m_pSpacerAutoConfig = new QSpacerItem(200, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(m_pSpacerAutoConfig);


        verticalLayout_2->addWidget(m_pWidgetAutoConfig);

        m_pGroupServer = new QGroupBox(centralwidget);
        m_pGroupServer->setObjectName(QString::fromUtf8("m_pGroupServer"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pGroupServer->sizePolicy().hasHeightForWidth());
        m_pGroupServer->setSizePolicy(sizePolicy2);
        m_pGroupServer->setCheckable(true);
        m_pGroupServer->setChecked(true);
        vboxLayout = new QVBoxLayout(m_pGroupServer);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(m_pGroupServer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        m_pLabelIpAddresses = new QLabel(m_pGroupServer);
        m_pLabelIpAddresses->setObjectName(QString::fromUtf8("m_pLabelIpAddresses"));
        m_pLabelIpAddresses->setText(QString::fromUtf8(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_pLabelIpAddresses);


        vboxLayout->addLayout(formLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_pLabelFingerprint = new QLabel(m_pGroupServer);
        m_pLabelFingerprint->setObjectName(QString::fromUtf8("m_pLabelFingerprint"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_pLabelFingerprint->sizePolicy().hasHeightForWidth());
        m_pLabelFingerprint->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(m_pLabelFingerprint);

        m_pLabelLocalFingerprint = new QLabel(m_pGroupServer);
        m_pLabelLocalFingerprint->setObjectName(QString::fromUtf8("m_pLabelLocalFingerprint"));

        horizontalLayout_3->addWidget(m_pLabelLocalFingerprint);


        vboxLayout->addLayout(horizontalLayout_3);

        m_pRadioInternalConfig = new QRadioButton(m_pGroupServer);
        m_pRadioInternalConfig->setObjectName(QString::fromUtf8("m_pRadioInternalConfig"));
        m_pRadioInternalConfig->setChecked(true);

        vboxLayout->addWidget(m_pRadioInternalConfig);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        m_pButtonConfigureServer = new QPushButton(m_pGroupServer);
        m_pButtonConfigureServer->setObjectName(QString::fromUtf8("m_pButtonConfigureServer"));

        horizontalLayout_4->addWidget(m_pButtonConfigureServer);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(spacerItem);


        vboxLayout->addLayout(horizontalLayout_4);

        m_pRadioExternalConfig = new QRadioButton(m_pGroupServer);
        m_pRadioExternalConfig->setObjectName(QString::fromUtf8("m_pRadioExternalConfig"));

        vboxLayout->addWidget(m_pRadioExternalConfig);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_pLabelConfigurationFile = new QLabel(m_pGroupServer);
        m_pLabelConfigurationFile->setObjectName(QString::fromUtf8("m_pLabelConfigurationFile"));

        hboxLayout->addWidget(m_pLabelConfigurationFile);

        m_pLineEditConfigFile = new QLineEdit(m_pGroupServer);
        m_pLineEditConfigFile->setObjectName(QString::fromUtf8("m_pLineEditConfigFile"));
        m_pLineEditConfigFile->setEnabled(false);

        hboxLayout->addWidget(m_pLineEditConfigFile);

        m_pButtonBrowseConfigFile = new QPushButton(m_pGroupServer);
        m_pButtonBrowseConfigFile->setObjectName(QString::fromUtf8("m_pButtonBrowseConfigFile"));
        m_pButtonBrowseConfigFile->setEnabled(false);

        hboxLayout->addWidget(m_pButtonBrowseConfigFile);


        vboxLayout->addLayout(hboxLayout);


        verticalLayout_2->addWidget(m_pGroupServer);

        m_pGroupClient = new QGroupBox(centralwidget);
        m_pGroupClient->setObjectName(QString::fromUtf8("m_pGroupClient"));
        sizePolicy2.setHeightForWidth(m_pGroupClient->sizePolicy().hasHeightForWidth());
        m_pGroupClient->setSizePolicy(sizePolicy2);
        m_pGroupClient->setCheckable(true);
        m_pGroupClient->setChecked(true);
        formLayout_3 = new QFormLayout(m_pGroupClient);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        m_pLabelComputerName = new QLabel(m_pGroupClient);
        m_pLabelComputerName->setObjectName(QString::fromUtf8("m_pLabelComputerName"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, m_pLabelComputerName);

        m_pLabelScreenName = new QLabel(m_pGroupClient);
        m_pLabelScreenName->setObjectName(QString::fromUtf8("m_pLabelScreenName"));
        m_pLabelScreenName->setText(QString::fromUtf8(""));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, m_pLabelScreenName);

        m_pLabelServerName = new QLabel(m_pGroupClient);
        m_pLabelServerName->setObjectName(QString::fromUtf8("m_pLabelServerName"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, m_pLabelServerName);

        m_pLineEditHostname = new QLineEdit(m_pGroupClient);
        m_pLineEditHostname->setObjectName(QString::fromUtf8("m_pLineEditHostname"));
        sizePolicy3.setHeightForWidth(m_pLineEditHostname->sizePolicy().hasHeightForWidth());
        m_pLineEditHostname->setSizePolicy(sizePolicy3);
        m_pLineEditHostname->setMinimumSize(QSize(200, 0));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, m_pLineEditHostname);

        m_pComboServerList = new QComboBox(m_pGroupClient);
        m_pComboServerList->setObjectName(QString::fromUtf8("m_pComboServerList"));
        sizePolicy3.setHeightForWidth(m_pComboServerList->sizePolicy().hasHeightForWidth());
        m_pComboServerList->setSizePolicy(sizePolicy3);
        m_pComboServerList->setMinimumSize(QSize(200, 0));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, m_pComboServerList);

        m_pLabelAutoDetected = new QLabel(m_pGroupClient);
        m_pLabelAutoDetected->setObjectName(QString::fromUtf8("m_pLabelAutoDetected"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, m_pLabelAutoDetected);


        verticalLayout_2->addWidget(m_pGroupClient);

        m_pGroupLog = new QGroupBox(centralwidget);
        m_pGroupLog->setObjectName(QString::fromUtf8("m_pGroupLog"));
        verticalLayout = new QVBoxLayout(m_pGroupLog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_pLogOutput = new QPlainTextEdit(m_pGroupLog);
        m_pLogOutput->setObjectName(QString::fromUtf8("m_pLogOutput"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_pLogOutput->sizePolicy().hasHeightForWidth());
        m_pLogOutput->setSizePolicy(sizePolicy4);
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        m_pLogOutput->setFont(font);
        m_pLogOutput->setAutoFillBackground(false);
        m_pLogOutput->setUndoRedoEnabled(false);
        m_pLogOutput->setLineWrapMode(QPlainTextEdit::NoWrap);
        m_pLogOutput->setReadOnly(true);
        m_pLogOutput->setMaximumBlockCount(10000);

        verticalLayout->addWidget(m_pLogOutput);


        verticalLayout_2->addWidget(m_pGroupLog);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        m_pLabelPadlock = new QLabel(centralwidget);
        m_pLabelPadlock->setObjectName(QString::fromUtf8("m_pLabelPadlock"));
        m_pLabelPadlock->setEnabled(true);
        m_pLabelPadlock->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/16x16/padlock.png")));

        horizontalLayout->addWidget(m_pLabelPadlock);

        m_pStatusLabel = new QLabel(centralwidget);
        m_pStatusLabel->setObjectName(QString::fromUtf8("m_pStatusLabel"));

        horizontalLayout->addWidget(m_pStatusLabel);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer);

        m_pButtonApply = new QPushButton(centralwidget);
        m_pButtonApply->setObjectName(QString::fromUtf8("m_pButtonApply"));
        m_pButtonApply->setEnabled(false);

        horizontalLayout->addWidget(m_pButtonApply);

        m_pButtonToggleStart = new QPushButton(centralwidget);
        m_pButtonToggleStart->setObjectName(QString::fromUtf8("m_pButtonToggleStart"));

        horizontalLayout->addWidget(m_pButtonToggleStart);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindowBase->setCentralWidget(centralwidget);
#ifndef QT_NO_SHORTCUT
        m_pLabelConfigurationFile->setBuddy(m_pLineEditConfigFile);
        m_pLabelServerName->setBuddy(m_pLineEditHostname);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindowBase);
        QObject::connect(m_pRadioExternalConfig, SIGNAL(toggled(bool)), m_pLineEditConfigFile, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioExternalConfig, SIGNAL(toggled(bool)), m_pButtonBrowseConfigFile, SLOT(setEnabled(bool)));
        QObject::connect(m_pRadioInternalConfig, SIGNAL(toggled(bool)), m_pButtonConfigureServer, SLOT(setEnabled(bool)));
        QObject::connect(m_pButtonToggleStart, SIGNAL(clicked()), m_pActionStartSynergy, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindowBase);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowBase)
    {
        MainWindowBase->setWindowTitle(QApplication::translate("MainWindowBase", "Synergy", nullptr));
        m_pActionAbout->setText(QApplication::translate("MainWindowBase", "&About Synergy...", nullptr));
        m_pActionHelp->setText(QApplication::translate("MainWindowBase", "Visit &help site", nullptr));
        m_pActionQuit->setText(QApplication::translate("MainWindowBase", "&Quit", nullptr));
#ifndef QT_NO_STATUSTIP
        m_pActionQuit->setStatusTip(QApplication::translate("MainWindowBase", "Quit", nullptr));
#endif // QT_NO_STATUSTIP
        m_pActionStartSynergy->setText(QApplication::translate("MainWindowBase", "&Start", nullptr));
#ifndef QT_NO_STATUSTIP
        m_pActionStartSynergy->setStatusTip(QApplication::translate("MainWindowBase", "Run", nullptr));
#endif // QT_NO_STATUSTIP
        m_pActionStopSynergy->setText(QApplication::translate("MainWindowBase", "S&top", nullptr));
#ifndef QT_NO_STATUSTIP
        m_pActionStopSynergy->setStatusTip(QApplication::translate("MainWindowBase", "Stop", nullptr));
#endif // QT_NO_STATUSTIP
        actionShowStatus->setText(QApplication::translate("MainWindowBase", "S&how Status", nullptr));
        m_pActionMinimize->setText(QApplication::translate("MainWindowBase", "&Hide", nullptr));
#ifndef QT_NO_TOOLTIP
        m_pActionMinimize->setToolTip(QApplication::translate("MainWindowBase", "Hide", nullptr));
#endif // QT_NO_TOOLTIP
        m_pActionRestore->setText(QApplication::translate("MainWindowBase", "&Show", nullptr));
#ifndef QT_NO_TOOLTIP
        m_pActionRestore->setToolTip(QApplication::translate("MainWindowBase", "Show", nullptr));
#endif // QT_NO_TOOLTIP
        m_pActionSave->setText(QApplication::translate("MainWindowBase", "Save configuration &as...", nullptr));
#ifndef QT_NO_STATUSTIP
        m_pActionSave->setStatusTip(QApplication::translate("MainWindowBase", "Save the interactively generated server configuration to a file.", nullptr));
#endif // QT_NO_STATUSTIP
        m_pActionSettings->setText(QApplication::translate("MainWindowBase", "Settings", nullptr));
#ifndef QT_NO_STATUSTIP
        m_pActionSettings->setStatusTip(QApplication::translate("MainWindowBase", "Edit settings", nullptr));
#endif // QT_NO_STATUSTIP
        m_pActivate->setText(QApplication::translate("MainWindowBase", "Activate", nullptr));
#ifndef QT_NO_TOOLTIP
        m_pActivate->setToolTip(QApplication::translate("MainWindowBase", "Activate", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QString());
        m_trialLabel->setText(QApplication::translate("MainWindowBase", "<html><head/><body><p><span style=\" font-weight:600;\">%1</span> days of your Synergy Pro trial remain. <a href=\"http://symless.com/pricing?src=gui\"><span style=\" text-decoration: underline; color:#0000ff;\">Buy now!</span></a></p></body></html>", nullptr));
        m_pIconUpdate->setText(QString());
        m_pIconAutoConfig->setText(QString());
        m_pLabelAutoConfig->setText(QApplication::translate("MainWindowBase", "<html><head/><body><p>Manual Config mode active, consider using Auto Config instead (<a href=\"#\"><span style=\" text-decoration: underline; color:#007af4;\">Settings</span></a>)</p></body></html>", nullptr));
        m_pGroupServer->setTitle(QApplication::translate("MainWindowBase", "Ser&ver (share this computer's mouse and keyboard):", nullptr));
        label_2->setText(QApplication::translate("MainWindowBase", "IP addresses:", nullptr));
        m_pLabelFingerprint->setText(QApplication::translate("MainWindowBase", "SSL Fingerprint:", nullptr));
        m_pLabelLocalFingerprint->setText(QString());
        m_pRadioInternalConfig->setText(QApplication::translate("MainWindowBase", "Configure interactively:", nullptr));
        m_pButtonConfigureServer->setText(QApplication::translate("MainWindowBase", "&Configure Server...", nullptr));
        m_pRadioExternalConfig->setText(QApplication::translate("MainWindowBase", "Use existing configuration:", nullptr));
        m_pLabelConfigurationFile->setText(QApplication::translate("MainWindowBase", "&Configuration file:", nullptr));
        m_pButtonBrowseConfigFile->setText(QApplication::translate("MainWindowBase", "&Browse...", nullptr));
        m_pGroupClient->setTitle(QApplication::translate("MainWindowBase", "&Client (use another computer's mouse and keyboard):", nullptr));
        m_pLabelComputerName->setText(QApplication::translate("MainWindowBase", "Client name:", nullptr));
        m_pLabelServerName->setText(QApplication::translate("MainWindowBase", "&Server:", nullptr));
#ifndef QT_NO_TOOLTIP
        m_pLineEditHostname->setToolTip(QApplication::translate("MainWindowBase", "Hostname or IP address of the server computer.", nullptr));
#endif // QT_NO_TOOLTIP
        m_pLabelAutoDetected->setText(QApplication::translate("MainWindowBase", "Server:", nullptr));
        m_pGroupLog->setTitle(QApplication::translate("MainWindowBase", "Log", nullptr));
        m_pLabelPadlock->setText(QString());
        m_pStatusLabel->setText(QApplication::translate("MainWindowBase", "Ready", nullptr));
        m_pButtonApply->setText(QApplication::translate("MainWindowBase", "&Apply", nullptr));
        m_pButtonToggleStart->setText(QApplication::translate("MainWindowBase", "&Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowBase: public Ui_MainWindowBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWBASE_H
