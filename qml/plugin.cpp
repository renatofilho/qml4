#include "plugin.h"
#include "small_object.h"

#include <QtDeclarative>

void SmallQmlPlugin::registerTypes(const char *uri)
{
    qmlRegisterType<SmallObject>(uri, 1, 0, "SmallObject");
}

Q_EXPORT_PLUGIN2(small_qml, SmallQmlPlugin)
