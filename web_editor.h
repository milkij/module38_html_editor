//
// Created by Александр Широков on 19.03.2024.
//

#ifndef INC_2_WEB_EDITOR_H
#define INC_2_WEB_EDITOR_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class web_editor; }
QT_END_NAMESPACE

class web_editor : public QWidget {
Q_OBJECT

public:
    explicit web_editor(QWidget *parent = nullptr);

    ~web_editor() override;



private:
    Ui::web_editor *ui;
};


#endif //INC_2_WEB_EDITOR_H
