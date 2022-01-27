#ifndef WEBCLIENT_H
#define WEBCLIENT_H

#include <QTcpSocket>
#include <QAbstractSocket>
#include "ui_webclient.h"

class Webclient : public QWidget, private Ui::Webclient
{
    Q_OBJECT

public:
    explicit Webclient(QWidget *parent = nullptr);
private slots:

    void on_startButton_clicked();

private:
    QString m_hostname;
    QTcpSocket* m_socket;
    unsigned short m_port = 80;

    void connected();
    void readyRead();
};

#endif // WEBCLIENT_H
