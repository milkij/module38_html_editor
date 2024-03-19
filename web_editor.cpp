//
// Created by Александр Широков on 19.03.2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_web_editor.h" resolved

#include "web_editor.h"
#include "ui_web_editor.h"


web_editor::web_editor(QWidget *parent) :
        QWidget(parent), ui(new Ui::web_editor) {
    ui->setupUi(this);
    setWindowTitle("HTML Editor");
    QObject::connect(ui->plainTextEdit, &QPlainTextEdit::textChanged, [this](){
        ui->webEngineView->setHtml(ui->plainTextEdit->toPlainText());
    });
}

web_editor::~web_editor() {
    delete ui;
}
