#ifndef BYTERCONVERTER_H
#define BYTERCONVERTER_H

#include <QDialog>
class QLineEdit;

class ByterConverter : public QDialog
{
    Q_OBJECT

public:
    ByterConverter(QWidget *parent = nullptr);
    ~ByterConverter();

private:
    QLineEdit* decEdit;
    QLineEdit* hexEdit;
    QLineEdit* binEdit;

private slots:
    void decChanged(const QString&); // 十进制文本框内容变化的槽函数
    void hexChanged(const QString&); // 十六进制文本框内容变化的槽函数
    void binChanged(const QString&); // 二进制文本框内容变化的槽函数
};

#endif // BYTERCONVERTER_H
