#ifndef RTSPSERVER_H
#define RTSPSERVER_H
#include <QObject>
#include "libavutil/adler32.h"
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavutil/frame.h"
#include "libavutil/imgutils.h"

class RtspServer
{
public:
    RtspServer();

    void initServer();
signals:

public slots:
};

#endif // RTSPSERVER_H
