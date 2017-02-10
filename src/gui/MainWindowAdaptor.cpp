/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c MainWindowAdaptor -a MainWindowAdaptor.h:MainWindowAdaptor.cpp org.keepassxc.MainWindow.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "MainWindowAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class MainWindowAdaptor
 */

MainWindowAdaptor::MainWindowAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

MainWindowAdaptor::~MainWindowAdaptor()
{
    // destructor
}

void MainWindowAdaptor::appExit()
{
    // handle method call org.keepassxc.MainWindow.appExit
    QMetaObject::invokeMethod(parent(), "appExit");
}

void MainWindowAdaptor::closeAllDatabases()
{
    // handle method call org.keepassxc.MainWindow.closeAllDatabases
    QMetaObject::invokeMethod(parent(), "closeAllDatabases");
}

void MainWindowAdaptor::openDatabase(const QString &fileName)
{
    // handle method call org.keepassxc.MainWindow.openDatabase
    QMetaObject::invokeMethod(parent(), "openDatabase", Q_ARG(QString, fileName));
}

void MainWindowAdaptor::openDatabase(const QString &fileName, const QString &pw)
{
    // handle method call org.keepassxc.MainWindow.openDatabase
    QMetaObject::invokeMethod(parent(), "openDatabase", Q_ARG(QString, fileName), Q_ARG(QString, pw));
}

void MainWindowAdaptor::openDatabase(const QString &fileName, const QString &pw, const QString &keyFile)
{
    // handle method call org.keepassxc.MainWindow.openDatabase
    QMetaObject::invokeMethod(parent(), "openDatabase", Q_ARG(QString, fileName), Q_ARG(QString, pw), Q_ARG(QString, keyFile));
}

