#include "rtspserver.h"

RtspServer::RtspServer()
{

}

void RtspServer::initServer()
{
    QString serverIp;
    int serverPort;
    avcodec_register_all();
    avformat_network_init();
    AVFrame *pFrame=av_frame_alloc();
    AVFormatContext *fmtctx=avformat_alloc_context();
    fmtctx->oformat = av_guess_format("rtp",NULL,NULL);
    sprintf(fmtctx->filename,"rtp://%s:%d",serverIp,serverPort);
    avio_open(&fmtctx->pb,fmtctx->filename,AVIO_FLAG_WRITE);
    AVCodec *codec =avcodec_find_encoder(AV_CODEC_ID_H264);
    AVStream *st = avformat_new_stream(fmtctx,codec);

}
