#include "qmlpath.h"
#include<QPainter>

QmlPath::QmlPath()
{
    m_path = QPainterPath();
}

QmlPath::~QmlPath()
{

}

void QmlPath::pressEvent(const QPointF &p)
{
    m_path.moveTo(p);
    update();
}

void QmlPath::moveEvent(const QPointF &p)
{
    m_path.lineTo(p);
    update();
}

void QmlPath::releaseEvent(const QPointF &p)
{
    m_path.lineTo(p);
    m_path.closeSubpath();
    update();
}

void QmlPath::paint(QPainter *painter)
{
    QPen pen;
    pen.setWidth(2);
    pen.setColor("red");
    painter->setPen(pen);
    painter->setRenderHint(QPainter::Antialiasing,true);
    painter->drawPath(m_path);
}
