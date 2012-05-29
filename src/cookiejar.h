#ifndef COOKIEJAR_H
#define COOKIEJAR_H

#include <QNetworkCookieJar>

class CookieJar: public QNetworkCookieJar
{
public:
    CookieJar();
    
    QString getCookies();
    void setCookies(const QString &str);
};

#endif
