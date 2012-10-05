#include <QtDeclarative>

class SmallQmlPlugin : public QDeclarativeExtensionPlugin {
  Q_OBJECT
public:
  void registerTypes(const char *uri);
};
